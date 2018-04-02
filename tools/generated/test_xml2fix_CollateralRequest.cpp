#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralRequest_message_t_0;
  elt.add_attribute("ReqID", "CollReqID_t_112381678");
  elt.add_attribute("AsgnRsn", "6");
  elt.add_attribute("TxnTm", "TransactTime_t_1760398596");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1284991677");
  elt.add_attribute("Acct", "Account_t_1760672088");
  elt.add_attribute("AcctTyp", "1");
  elt.add_attribute("ClOrdID", "ClOrdID_t_170642382");
  elt.add_attribute("OrdID", "OrderID_t_252418852");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1832281305");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1402511560");
  elt.add_attribute("SettlDt", "SettlDate_t_1148697503");
  elt.add_attribute("Qty", "19927467.670000");
  elt.add_attribute("QtyTyp", "1");
  elt.add_attribute("Ccy", "GBP");
  elt.add_attribute("MgnExcess", "MarginExcess_t_1994234009");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_1494715520");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_336135010");
  elt.add_attribute("Side", "B");
  elt.add_attribute("Px", "11437903.410000");
  elt.add_attribute("PxTyp", "9");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1163845829");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_785360774");
  elt.add_attribute("StartCsh", "StartCash_t_132881560");
  elt.add_attribute("EndCsh", "EndCash_t_228335327");
  elt.add_attribute("SesID", "2");
  elt.add_attribute("SesSub", "4");
  elt.add_attribute("SetSesID", "RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_597990312");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_2055600247");
  elt.add_attribute("Txt", "Text_t_275088494");
  elt.add_attribute("EncTxtLen", "710371991");
  elt.add_attribute("EncTxt", "EncodedText_t_572767005");
  all_values.push_back(CollateralRequest_message_t_0);
  all_compo_names.insert("CollateralRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
