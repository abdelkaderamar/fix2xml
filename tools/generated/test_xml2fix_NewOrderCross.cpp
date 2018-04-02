#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderCross.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderCross_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NewOrdCrss" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderCross_message_t_0;
  elt.add_attribute("ID", "CrossID_t_942606443");
  elt.add_attribute("Typ", "4");
  elt.add_attribute("Priorty", "0");
  elt.add_attribute("SettlTyp", "5");
  elt.add_attribute("SettlDt", "SettlDate_t_1625851369");
  elt.add_attribute("HandlInst", "2");
  elt.add_attribute("ExecInst", "p");
  elt.add_attribute("MinQty", "8131827.240000");
  elt.add_attribute("MtchInc", "11379756.660000");
  elt.add_attribute("MxPxLvls", "82863618");
  elt.add_attribute("MaxFloor", "11857196.400000");
  elt.add_attribute("ExDest", "ExDestination_t_480933036");
  elt.add_attribute("ExDestIDSrc", "E");
  elt.add_attribute("ProcCode", "6");
  elt.add_attribute("PrevClsPx", "16826305.190000");
  elt.add_attribute("LocReqd", "Y");
  elt.add_attribute("TxnTm", "TransactTime_t_882148431");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_2112256581");
  elt.add_attribute("OrdTyp", "C");
  elt.add_attribute("PxTyp", "14");
  elt.add_attribute("Px", "7538168.410000");
  elt.add_attribute("PxPrtScp", "2");
  elt.add_attribute("StopPx", "3535398.990000");
  elt.add_attribute("Ccy", "CHF");
  elt.add_attribute("ComplianceID", "ComplianceID_t_895772324");
  elt.add_attribute("IOIID", "IOIID_t_149180847");
  elt.add_attribute("QID", "QuoteID_t_413854169");
  elt.add_attribute("TmInForce", "8");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1045807191");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1424315938");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1721361961");
  elt.add_attribute("GTBkngInst", "2");
  elt.add_attribute("MaxShow", "6409314.000000");
  elt.add_attribute("TgtStrategy", "2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_490558988");
  elt.add_attribute("ParticipationRt", "18347128.810000");
  elt.add_attribute("CxllationRights", "O");
  elt.add_attribute("MnyLaunderingStat", "3");
  elt.add_attribute("RegistID", "RegistID_t_825204899");
  elt.add_attribute("Designation", "Designation_t_1446602344");
  all_values.push_back(NewOrderCross_message_t_0);
  all_compo_names.insert("NewOrderCross_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
