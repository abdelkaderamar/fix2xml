#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationReportAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationReportAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocRptAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReportAck_message_t_0;
  elt.add_attribute("RptID", "AllocReportID_t_2054699735");
  elt.add_attribute("ID", "AllocID_t_139137387");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_859141339");
  elt.add_attribute("AvgPxInd", "0");
  elt.add_attribute("Qty", "2210618.930000");
  elt.add_attribute("TransTyp", "1");
  elt.add_attribute("ID2", "SecondaryAllocID_t_1098002181");
  elt.add_attribute("TrdDt", "TradeDate_t_605808837");
  elt.add_attribute("TxnTm", "TransactTime_t_1288544430");
  elt.add_attribute("Stat", "4");
  elt.add_attribute("RejCode", "6");
  elt.add_attribute("RptTyp", "14");
  elt.add_attribute("ImReqTyp", "5");
  elt.add_attribute("MtchStat", "1");
  elt.add_attribute("Prod", "6");
  elt.add_attribute("SecTyp", "REV");
  elt.add_attribute("Txt", "Text_t_266107184");
  elt.add_attribute("EncTxtLen", "1250899927");
  elt.add_attribute("EncTxt", "EncodedText_t_1437958421");
  all_values.push_back(AllocationReportAck_message_t_0);
  all_compo_names.insert("AllocationReportAck_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
