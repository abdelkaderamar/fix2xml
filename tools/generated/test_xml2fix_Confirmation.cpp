#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Confirmation.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Confirmation_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Cnfm" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Confirmation_message_t_0;
  elt.add_attribute("CnfmID", "ConfirmID_t_614271698");
  elt.add_attribute("CnfmRefID", "ConfirmRefID_t_870666756");
  elt.add_attribute("CnfmReqID", "ConfirmReqID_t_387214308");
  elt.add_attribute("CnfmTransTyp", "1");
  elt.add_attribute("CnfmTyp", "2");
  elt.add_attribute("CopyMsgInd", "false");
  elt.add_attribute("LegalCnfm", "Y");
  elt.add_attribute("CnfmStat", "4");
  elt.add_attribute("AllocID", "AllocID_t_1296496462");
  elt.add_attribute("AllocID2", "SecondaryAllocID_t_1788927718");
  elt.add_attribute("IndAllocID", "IndividualAllocID_t_1258554418");
  elt.add_attribute("TxnTm", "TransactTime_t_614539960");
  elt.add_attribute("TrdDt", "TradeDate_t_626040994");
  elt.add_attribute("Qty", "4026268.010000");
  elt.add_attribute("QtyTyp", "0");
  elt.add_attribute("Side", "3");
  elt.add_attribute("Ccy", "CAN");
  elt.add_attribute("LastMkt", "LastMkt_t_856294530");
  elt.add_attribute("Acct", "AllocAccount_t_1919050579");
  elt.add_attribute("ActIDSrc", "1");
  elt.add_attribute("AcctTyp", "2");
  elt.add_attribute("AvgPx", "19565478.640000");
  elt.add_attribute("AvgPxPrcsn", "1080242628");
  elt.add_attribute("PxTyp", "4");
  elt.add_attribute("AvgParPx", "5569334.920000");
  elt.add_attribute("RptedPx", "13265796.400000");
  elt.add_attribute("Txt", "Text_t_1413473649");
  elt.add_attribute("EncTxtLen", "1152682788");
  elt.add_attribute("EncTxt", "EncodedText_t_1758872097");
  elt.add_attribute("ProcCode", "0");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1766954487");
  elt.add_attribute("NumDaysInt", "482055205");
  elt.add_attribute("ExDt", "ExDate_t_105791718");
  elt.add_attribute("AcrdIntRt", "16547765.000000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_792310115");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_272896045");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_422292538");
  elt.add_attribute("StartCsh", "StartCash_t_1903098843");
  elt.add_attribute("EndCsh", "EndCash_t_1569392508");
  elt.add_attribute("Concession", "Concession_t_63736608");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_1014169613");
  elt.add_attribute("NetMny", "NetMoney_t_36448820");
  elt.add_attribute("MatNetMny", "MaturityNetMoney_t_689777602");
  elt.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1416796415");
  elt.add_attribute("SettlCcy", "EUR");
  elt.add_attribute("SettlCurrFxRt", "17488563.740000");
  elt.add_attribute("SettlCurrFxRtCalc", "D");
  elt.add_attribute("SettlTyp", "B");
  elt.add_attribute("SettlDt", "SettlDate_t_1520423305");
  elt.add_attribute("SharedComm", "SharedCommission_t_924553993");
  all_values.push_back(Confirmation_message_t_0);
  all_compo_names.insert("Confirmation_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
