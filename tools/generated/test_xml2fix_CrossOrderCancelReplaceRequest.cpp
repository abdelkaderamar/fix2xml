#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CrossOrderCancelReplaceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CrossOrderCancelReplaceRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CrssOrdCxlRplcReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelReplaceRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1083056344");
  elt.add_attribute("ID", "CrossID_t_1420458848");
  elt.add_attribute("OrigID", "OrigCrossID_t_1310622575");
  elt.add_attribute("HstCxID", "HostCrossID_t_265060218");
  elt.add_attribute("Typ", "3");
  elt.add_attribute("Priorty", "0");
  elt.add_attribute("SettlTyp", "0");
  elt.add_attribute("SettlDt", "SettlDate_t_314180788");
  elt.add_attribute("HandlInst", "3");
  elt.add_attribute("ExecInst", "p");
  elt.add_attribute("MinQty", "11094618.510000");
  elt.add_attribute("MtchInc", "16630071.680000");
  elt.add_attribute("MxPxLvls", "1406708733");
  elt.add_attribute("MaxFloor", "2393144.720000");
  elt.add_attribute("ExDest", "ExDestination_t_738147475");
  elt.add_attribute("ExDestIDSrc", "B");
  elt.add_attribute("ProcCode", "5");
  elt.add_attribute("PrevClsPx", "861838.270000");
  elt.add_attribute("LocReqd", "N");
  elt.add_attribute("TxnTm", "TransactTime_t_1986738789");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_1003612687");
  elt.add_attribute("OrdTyp", "6");
  elt.add_attribute("PxTyp", "5");
  elt.add_attribute("Px", "19574903.670000");
  elt.add_attribute("PxPrtScp", "1");
  elt.add_attribute("StopPx", "4924629.990000");
  elt.add_attribute("Ccy", "CHF");
  elt.add_attribute("ComplianceID", "ComplianceID_t_55096037");
  elt.add_attribute("IOIID", "IOIID_t_1283935057");
  elt.add_attribute("QID", "QuoteID_t_21963137");
  elt.add_attribute("TmInForce", "1");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_556910257");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1332585712");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1403212599");
  elt.add_attribute("GTBkngInst", "0");
  elt.add_attribute("MaxShow", "4805058.170000");
  elt.add_attribute("TgtStrategy", "2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1379219");
  elt.add_attribute("ParticipationRt", "10266807.490000");
  elt.add_attribute("CxllationRights", "Y");
  elt.add_attribute("MnyLaunderingStat", "1");
  elt.add_attribute("RegistID", "RegistID_t_542204270");
  elt.add_attribute("Designation", "Designation_t_1562053009");
  all_values.push_back(CrossOrderCancelReplaceRequest_message_t_0);
  all_compo_names.insert("CrossOrderCancelReplaceRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
