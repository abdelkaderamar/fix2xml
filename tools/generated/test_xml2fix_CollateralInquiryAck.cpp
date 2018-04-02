#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralInquiryAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralInquiryAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollInqAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiryAck_message_t_0;
  elt.add_attribute("ID", "CollInquiryID_t_956229020");
  elt.add_attribute("Stat", "2");
  elt.add_attribute("Rslt", "4");
  elt.add_attribute("TotNumRpts", "661169");
  elt.add_attribute("Acct", "Account_t_80073051");
  elt.add_attribute("AcctTyp", "7");
  elt.add_attribute("ClOrdID", "ClOrdID_t_2008008003");
  elt.add_attribute("OrdID", "OrderID_t_1690692378");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_721544653");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_198734824");
  elt.add_attribute("SettlDt", "SettlDate_t_257048239");
  elt.add_attribute("Qty", "8374936.040000");
  elt.add_attribute("QtyTyp", "0");
  elt.add_attribute("Ccy", "CAN");
  elt.add_attribute("SesID", "4");
  elt.add_attribute("SesSub", "7");
  elt.add_attribute("SetSesID", "RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_23311877");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1662788613");
  elt.add_attribute("RspTransportTyp", "1");
  elt.add_attribute("RspDest", "ResponseDestination_t_789258409");
  elt.add_attribute("Txt", "Text_t_2139979259");
  elt.add_attribute("EncTxtLen", "358789519");
  elt.add_attribute("EncTxt", "EncodedText_t_158796208");
  all_values.push_back(CollateralInquiryAck_message_t_0);
  all_compo_names.insert("CollateralInquiryAck_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
