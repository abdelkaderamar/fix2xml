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

#include "field_helper.hxx"
#include "fix/fix_parser.hxx"
#include "fixml/fixml_xsd_parser.hxx"
#include "generation_util.hxx"
#include "test_generator_fix2xml.hxx"
#include "test_generator_xml2fix.hxx"
#include "util/fix_env.hxx"

#include <boost/algorithm/string.hpp>
#include <boost/log/trivial.hpp>

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace fix2xml;
using namespace std;

//-----------------------------------------------------------------------------
int usage(const int ret) {
  static string text =
      "Usage: test_generator <mode> <fix dictionary> <fixt dictionary>"
      " <FIX version> <XSD schema>\n\n"
      "Where mode is : FIX2XML or XML2FIX";
  if (ret == 0)
    BOOST_LOG_TRIVIAL(info) << text;
  else
    BOOST_LOG_TRIVIAL(error) << text;
  return ret;
}

//-----------------------------------------------------------------------------
template <typename GENERATOR>
void do_generate(char *argv[], const string &prefix) {
  unique_ptr<GENERATOR> generator{new GENERATOR};
  BOOST_LOG_TRIVIAL(debug) << "Generator created";
  if (!generator->init(argv[2], argv[3], argv[4], argv[5]))
    return;
  BOOST_LOG_TRIVIAL(debug) << "Generator initialized";
  BOOST_LOG_TRIVIAL(debug) << "Test generation starts";
  generator->generate(prefix);
  BOOST_LOG_TRIVIAL(debug) << "Test generation done";
}

int main(int argc, char *argv[]) {
  if (argc < 6)
    return usage(1);

  if (!fix_env::init_xerces()) {
    BOOST_LOG_TRIVIAL(error) << "Failed to initialize xerces environment";
    return 1;
  }

  static const string FIX2XML = "FIX2XML";
  static const string XML2FIX = "XML2FIX";

  const string mode{argv[1]};
  if (mode != FIX2XML && mode != XML2FIX)
    return usage(1);

  if (mode == FIX2XML) {
    do_generate<test_generator_fix2xml>(argv, "test_fix2xml_");
  } else if (mode == XML2FIX) {
    do_generate<test_generator_xml2fix>(argv, "test_xml2fix_");
  }

  fix_env::terminate_xerces();
  BOOST_LOG_TRIVIAL(info) << "xerces environment terminated";

  return 0;
}
