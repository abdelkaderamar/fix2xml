#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralInquiry.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralInquiry_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollInq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiry_message_t_0;
  elt.add_attribute("ID", "CollInquiryID_t_1930911224");
  elt.add_attribute("SubReqTyp", "0");
  elt.add_attribute("RspTransportTyp", "0");
  elt.add_attribute("RspDest", "ResponseDestination_t_2020376831");
  elt.add_attribute("Acct", "Account_t_47868413");
  elt.add_attribute("AcctTyp", "3");
  elt.add_attribute("ClOrdID", "ClOrdID_t_733776582");
  elt.add_attribute("OrdID", "OrderID_t_1187710931");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_2007346833");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1610619326");
  elt.add_attribute("SettlDt", "SettlDate_t_1268315700");
  elt.add_attribute("Qty", "3382104.690000");
  elt.add_attribute("QtyTyp", "0");
  elt.add_attribute("Ccy", "GBP");
  elt.add_attribute("MgnExcess", "MarginExcess_t_1206404918");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_506279931");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_770244237");
  elt.add_attribute("Side", "B");
  elt.add_attribute("Px", "4335876.580000");
  elt.add_attribute("PxTyp", "3");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1741266918");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1102468075");
  elt.add_attribute("StartCsh", "StartCash_t_765946531");
  elt.add_attribute("EndCsh", "EndCash_t_477190645");
  elt.add_attribute("SesID", "1");
  elt.add_attribute("SesSub", "5");
  elt.add_attribute("SetSesID", "RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1837459357");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_358750763");
  elt.add_attribute("Txt", "Text_t_1132577200");
  elt.add_attribute("EncTxtLen", "1620886933");
  elt.add_attribute("EncTxt", "EncodedText_t_365133257");
  all_values.push_back(CollateralInquiry_message_t_0);
  all_compo_names.insert("CollateralInquiry_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
