// MIT License
// 
// Copyright 2018 Abdelkader Amar
// 
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
// 
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#include "util/fix_env.hxx"
#include "converter/fixml2fix_converter.hxx"

#include <quickfix/fix50sp2/NewOrderSingle.h>

#include <boost/log/trivial.hpp>

using namespace fix2xml;
using namespace std;
using namespace FIX;
using namespace FIX50SP2;

int usage(const int ret) {
  static string text = "Usage: fixml2fix_sample <fix dictionary> {xsd_files}";
  if (ret == 0) BOOST_LOG_TRIVIAL(info) << text;
  else BOOST_LOG_TRIVIAL(error) << text;
  return ret;
}
int main(int argc, char *argv[])
{
  if (argc < 3) return usage(1);

  if ( ! fix_env::init_xerces()) {
    BOOST_LOG_TRIVIAL(error) << "Failed to initialize xerces environment";
    return 1;
  }
  BOOST_LOG_TRIVIAL(info) << "xerces environment initialized";

  {
    const string fix_filename{argv[1]};
    const string xsd_schema{argv[2]};
    fixml2fix_converter converter {fix_filename, xsd_schema};
    if (converter.init()) BOOST_LOG_TRIVIAL(info) << "FIXML2FIX converter initialized";
    else {
      BOOST_LOG_TRIVIAL(error) << "Failed to initialize FIXML2FIX converter";
      fix_env::terminate_xerces();
      return 1;
    }
    list<string> filenames;
    for (size_t i=2; i<argc; ++i) {
      filenames.push_back(argv[i]);
    }

    NewOrderSingle order;
    order.set(ClOrdID("ClOrdID_123"));
    order.set(Symbol("Symbol_234"));
    NewOrderSingle::NoPartyIDs noPartyIDs;
    noPartyIDs.set(PartyID("partyid_111"));
    order.addGroup(noPartyIDs);
    BOOST_LOG_TRIVIAL(debug) << order.toXML();

    string str;
    converter.fix2fixml(order, str);
    BOOST_LOG_TRIVIAL(debug) << str;
  }

  fix_env::terminate_xerces();
  BOOST_LOG_TRIVIAL(info) << "xerces environment terminated";

  return 0;
}
