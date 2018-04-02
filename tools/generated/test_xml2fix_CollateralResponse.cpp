#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralResponse_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralResponse_message_t_0;
  elt.add_attribute("RespID", "CollRespID_t_2035487090");
  elt.add_attribute("ID", "CollAsgnID_t_1995363668");
  elt.add_attribute("ReqID", "CollReqID_t_185955446");
  elt.add_attribute("AsgnRsn", "2");
  elt.add_attribute("TransTyp", "2");
  elt.add_attribute("RespTyp", "2");
  elt.add_attribute("RejRsn", "0");
  elt.add_attribute("TxnTm", "TransactTime_t_1421033963");
  elt.add_attribute("ApplTyp", "0");
  elt.add_attribute("FinclStat", "1");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1027177672");
  elt.add_attribute("Acct", "Account_t_800533818");
  elt.add_attribute("AcctTyp", "6");
  elt.add_attribute("ClOrdID", "ClOrdID_t_873928033");
  elt.add_attribute("OrdID", "OrderID_t_147765690");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1465527145");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_984596923");
  elt.add_attribute("SettlDt", "SettlDate_t_1291556031");
  elt.add_attribute("Qty", "15206406.710000");
  elt.add_attribute("QtyTyp", "1");
  elt.add_attribute("Ccy", "JPY");
  elt.add_attribute("MgnExcess", "MarginExcess_t_229294432");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_1586990620");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_1912937055");
  elt.add_attribute("Side", "6");
  elt.add_attribute("Px", "374972.850000");
  elt.add_attribute("PxTyp", "7");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_314754723");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_747869276");
  elt.add_attribute("StartCsh", "StartCash_t_246337011");
  elt.add_attribute("EndCsh", "EndCash_t_202758166");
  elt.add_attribute("Txt", "Text_t_595749296");
  elt.add_attribute("EncTxtLen", "432292457");
  elt.add_attribute("EncTxt", "EncodedText_t_452587408");
  all_values.push_back(CollateralResponse_message_t_0);
  all_compo_names.insert("CollateralResponse_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
