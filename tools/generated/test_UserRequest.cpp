#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/UserRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( UserRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::UserRequest msg;

  list<multiset<string>> all_values;
  multiset<string> UserRequest_0;
  FIX::EncryptedNewPassword EncryptedNewPassword_0("DATA_1593288394");
  msg.set(EncryptedNewPassword_0);
  UserRequest_0.insert(EncryptedNewPassword_0.getString());
  FIX::EncryptedNewPasswordLen EncryptedNewPasswordLen_0(2097018103);
  msg.set(EncryptedNewPasswordLen_0);
  FIX::EncryptedPassword EncryptedPassword_0("DATA_670307723");
  msg.set(EncryptedPassword_0);
  UserRequest_0.insert(EncryptedPassword_0.getString());
  FIX::EncryptedPasswordLen EncryptedPasswordLen_0(966358930);
  msg.set(EncryptedPasswordLen_0);
  FIX::EncryptedPasswordMethod EncryptedPasswordMethod_0(1120033580);
  msg.set(EncryptedPasswordMethod_0);
  UserRequest_0.insert(EncryptedPasswordMethod_0.getString());
  FIX::NewPassword NewPassword_0("STRING_1915878740");
  msg.set(NewPassword_0);
  UserRequest_0.insert(NewPassword_0.getString());
  FIX::Password Password_0("STRING_655590829");
  msg.set(Password_0);
  UserRequest_0.insert(Password_0.getString());
  FIX::RawData RawData_2("DATA_1327364629");
  msg.set(RawData_2);
  UserRequest_0.insert(RawData_2.getString());
  FIX::RawDataLength RawDataLength_2(1024585803);
  msg.set(RawDataLength_2);
  UserRequest_0.insert(RawDataLength_2.getString());
  FIX::UserRequestID UserRequestID_0("STRING_1042438283");
  msg.set(UserRequestID_0);
  UserRequest_0.insert(UserRequestID_0.getString());
  FIX::UserRequestType UserRequestType_0(2);
  msg.set(UserRequestType_0);
  UserRequest_0.insert(UserRequestType_0.getString());
  FIX::Username Username_1("STRING_1480752048");
  msg.set(Username_1);
  UserRequest_0.insert(Username_1.getString());
  all_values.push_back(UserRequest_0);


  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }

  for (const auto& xml_l : elt_lists) {
    bool found = false;
    for (const auto& l : all_values) {
      if (includes(l.begin(), l.end(), xml_l.begin(), xml_l.end())) {
        found = true;
        break;
      } // end if includes
    } // end for all_values
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
