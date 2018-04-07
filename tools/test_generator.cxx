#include "test_generator.hxx"

#include "util/fix_env.hxx"

#include <boost/algorithm/string.hpp>
#include <boost/log/trivial.hpp>

#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;
using namespace fix2xml;

//-----------------------------------------------------------------------------

test_generator::test_generator() {}

//-----------------------------------------------------------------------------

test_generator::~test_generator() {}

//-----------------------------------------------------------------------------

bool test_generator::init(const char *fix_filename, const char *ns,
                          const char *xsd_filename) {
  std::srand(std::time(0));
  _fix_filename = fix_filename;
  _fix_ns = ns;
  _xsd_filename = xsd_filename;
  _fix_ns = boost::algorithm::to_upper_copy(_fix_ns);
  if (!_parser.parse(_fix_filename.c_str())) {
    BOOST_LOG_TRIVIAL(error) << "Failed to parse " << _fix_filename;
    return false;
  }
  if (!_xsd_parser.parse(_xsd_filename.c_str())) {
    BOOST_LOG_TRIVIAL(error) << "Failed to parse " << _xsd_filename;
    return false;
  }
  return true;
}

//-----------------------------------------------------------------------------

void test_generator::generate(const string &filename_prefix) {
  auto dico = _parser.dico();
  auto fixml_dico = _xsd_parser.dico();
  auto messages = dico->messages();
  auto &name_index = messages.get<0>();
  for (const auto msg_type : name_index) {
    generate_message_test(filename_prefix, msg_type, dico, fixml_dico, _fix_ns,
                          _fix_filename, _xsd_filename);
  }
}

//-----------------------------------------------------------------------------

void test_generator::generate_message_test(
    const string &filename_prefix, const fix_message_type &msg_type,
    const shared_ptr<fix_dico_container> &dico,
    const shared_ptr<fixml_dico_container> &fixml_dico, const string &ns,
    const string &fix_filename, const string &xsd_schema) {
  const string filename =
      "generated/" + filename_prefix + msg_type._name + ".cpp";
  BOOST_LOG_TRIVIAL(info) << "Generating file " << filename;
  ofstream ofs(filename.c_str());
  generate_header(ofs, msg_type, dico, ns);
  generate_test(ofs, msg_type, dico, fixml_dico, ns, fix_filename, xsd_schema);
  ofs.close();
} // end generate_message_test

//-----------------------------------------------------------------------------

void test_generator::generate_header(ostream &os,
                                     const fix_message_type &msg_type,
                                     const shared_ptr<fix_dico_container> &dico,
                                     const string &ns) {
  os << "#include <gtest/gtest.h>" << endl << endl;

  os << "#include \"converter/fixml2fix_converter.hxx\"" << endl
     << "#include \"converter/xml_element_helper.hxx\"" << endl
     << "#include \"converter/fix_helper.hxx\"" << endl
     << "#include \"util/fix_env.hxx\"" << endl
     << "#include \"tools/test_util.hxx\"" << endl
     << endl;

  const std::string lower_ns = boost::algorithm::to_lower_copy(ns);

  os << "#include <boost/log/trivial.hpp>" << endl
     << endl
     << "#include <quickfix/" << lower_ns << "/" + msg_type._name + ".h>"
     << endl
     << endl
     << "#include <list>" << endl
     << "#include <set>" << endl
     << "#include <string>" << endl
     << "#include <utility>" << endl
     << endl
     << "using namespace std;" << endl
     << "using namespace fix2xml;" << endl
     << endl;
}

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
