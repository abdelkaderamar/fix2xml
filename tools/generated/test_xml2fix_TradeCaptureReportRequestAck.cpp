#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradeCaptureReportRequestAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportRequestAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRptReqAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequestAck_message_t_0;
  elt.add_attribute("ReqID", "TradeRequestID_t_1659074149");
  elt.add_attribute("TrdID", "TradeID_t_411946776");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_343062674");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_1774765246");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_1111444817");
  elt.add_attribute("ReqTyp", "3");
  elt.add_attribute("SubReqTyp", "0");
  elt.add_attribute("TotNumTrdRpts", "682862606");
  elt.add_attribute("ReqRslt", "0");
  elt.add_attribute("ReqStat", "2");
  elt.add_attribute("MLegRptTyp", "3");
  elt.add_attribute("RspTransportTyp", "1");
  elt.add_attribute("RspDest", "ResponseDestination_t_1025603482");
  elt.add_attribute("Txt", "Text_t_2040098831");
  elt.add_attribute("EncTxtLen", "939361475");
  elt.add_attribute("EncTxt", "EncodedText_t_1861438323");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_240092026");
  all_values.push_back(TradeCaptureReportRequestAck_message_t_0);
  all_compo_names.insert("TradeCaptureReportRequestAck_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
