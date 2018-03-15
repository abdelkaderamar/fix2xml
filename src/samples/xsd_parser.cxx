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
#include "fixml/fixml_xsd_parser.hxx"


#include <boost/log/trivial.hpp>

using namespace fix2xml;
using namespace std;

int usage(const int ret) {
  static string text = "Usage: xsd_parser {xsd_files}";
  if (ret == 0) BOOST_LOG_TRIVIAL(info) << text;
  else BOOST_LOG_TRIVIAL(error) << text;
  return ret;
}
int main(int argc, char *argv[])
{
  if (argc < 2) return usage(1);

  if ( ! fix_env::init_xerces()) {
    BOOST_LOG_TRIVIAL(error) << "Failed to initialize xerces environment";
    return 1;
  }
  BOOST_LOG_TRIVIAL(info) << "xerces environment initialized";

  {
    fixml_xsd_parser parser;
    BOOST_LOG_TRIVIAL(info) << "xsd parser created";
    if (parser.parse(argv[1])) BOOST_LOG_TRIVIAL(info) << "parsing " << argv[1] << " done";
    else BOOST_LOG_TRIVIAL(error) << "parsing " << argv[1] << " failed";
  }

  fix_env::terminate_xerces();

  return 0;
}
