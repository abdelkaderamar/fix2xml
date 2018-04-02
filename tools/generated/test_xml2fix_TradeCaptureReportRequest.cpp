#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradeCaptureReportRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRptReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequest_message_t_0;
  elt.add_attribute("ReqID", "TradeRequestID_t_819267052");
  elt.add_attribute("TrdID", "TradeID_t_139867273");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_1584424057");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_300317481");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_1088276764");
  elt.add_attribute("ReqTyp", "0");
  elt.add_attribute("SubReqTyp", "2");
  elt.add_attribute("RptID", "TradeReportID_t_115691097");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_699498041");
  elt.add_attribute("ExecID", "ExecID_t_216972248");
  elt.add_attribute("ExecTyp", "F");
  elt.add_attribute("OrdID", "OrderID_t_1718901437");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1081375987");
  elt.add_attribute("MtchStat", "1");
  elt.add_attribute("TrdTyp", "20");
  elt.add_attribute("TrdSubTyp", "9");
  elt.add_attribute("TrdHandlInst", "4");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_933334980");
  elt.add_attribute("TrdTyp2", "27");
  elt.add_attribute("LinkID", "TradeLinkID_t_835834841");
  elt.add_attribute("MtchID", "TrdMatchID_t_347476843");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1614604678");
  elt.add_attribute("SesID", "1");
  elt.add_attribute("SesSub", "2");
  elt.add_attribute("TmBkt", "TimeBracket_t_985252228");
  elt.add_attribute("Side", "1");
  elt.add_attribute("MLegRptTyp", "2");
  elt.add_attribute("InptSrc", "TradeInputSource_t_881813701");
  elt.add_attribute("InptDev", "TradeInputDevice_t_1691423013");
  elt.add_attribute("RspTransportTyp", "1");
  elt.add_attribute("RspDest", "ResponseDestination_t_183787207");
  elt.add_attribute("Txt", "Text_t_363206417");
  elt.add_attribute("EncTxtLen", "570797384");
  elt.add_attribute("EncTxt", "EncodedText_t_1768211264");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_663523898");
  all_values.push_back(TradeCaptureReportRequest_message_t_0);
  all_compo_names.insert("TradeCaptureReportRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
