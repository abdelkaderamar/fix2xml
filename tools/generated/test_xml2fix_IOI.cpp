#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/IOI.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( IOI_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"IOI" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> IOI_message_t_0;
  elt.add_attribute("ID", "IOIID_t_1431829903");
  elt.add_attribute("TransTyp", "N");
  elt.add_attribute("RefID", "IOIRefID_t_2134756265");
  elt.add_attribute("Side", "7");
  elt.add_attribute("QtyTyp", "0");
  elt.add_attribute("Qty", "L");
  elt.add_attribute("Ccy", "CHF");
  elt.add_attribute("PxTyp", "5");
  elt.add_attribute("Px", "6184883.590000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_439393698");
  elt.add_attribute("QltyInd", "M");
  elt.add_attribute("NatFlag", "Y");
  elt.add_attribute("Txt", "Text_t_1838761940");
  elt.add_attribute("EncTxtLen", "1975800630");
  elt.add_attribute("EncTxt", "EncodedText_t_1244303817");
  elt.add_attribute("TxnTm", "TransactTime_t_1790009294");
  elt.add_attribute("URL", "URLLink_t_20524329");
  all_values.push_back(IOI_message_t_0);
  all_compo_names.insert("IOI_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
