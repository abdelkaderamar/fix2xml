#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/UserRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( UserRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"UserReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserRequest_message_t_0;
  elt.add_attribute("UserReqID", "UserRequestID_t_189076373");
  elt.add_attribute("UserReqTyp", "1");
  elt.add_attribute("Username", "Username_t_56557711");
  elt.add_attribute("Password", "Password_t_988012373");
  elt.add_attribute("NewPassword", "NewPassword_t_1519775899");
  elt.add_attribute("EncPwdMethod", "1510528914");
  elt.add_attribute("EncPwd", "EncryptedPassword_t_199499647");
  elt.add_attribute("EncNewPwd", "EncryptedNewPassword_t_2140782669");
  elt.add_attribute("RawDataLength", "1499879076");
  elt.add_attribute("RawData", "RawData_t_1052397832");
  all_values.push_back(UserRequest_message_t_0);
  all_compo_names.insert("UserRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
