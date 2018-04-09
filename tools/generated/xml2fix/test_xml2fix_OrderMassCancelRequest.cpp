#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassCancelRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelRequest_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_49542577"); // 0
  OrderMassCancelRequest_message_t_0.insert("ClOrdID_t_49542577");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_2109664813"); // 0
  OrderMassCancelRequest_message_t_0.insert("SecondaryClOrdID_t_2109664813");
  elt.add_attribute("ReqTyp", "B"); // 0
  OrderMassCancelRequest_message_t_0.insert("B");
  elt.add_attribute("SesID", "1"); // 0
  OrderMassCancelRequest_message_t_0.insert("1");
  elt.add_attribute("SesSub", "6"); // 0
  OrderMassCancelRequest_message_t_0.insert("6");
  elt.add_attribute("MktID", "MarketID_t_774540110"); // 0
  OrderMassCancelRequest_message_t_0.insert("MarketID_t_774540110");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1134110006"); // 0
  OrderMassCancelRequest_message_t_0.insert("MarketSegmentID_t_1134110006");
  elt.add_attribute("Side", "8"); // 0
  OrderMassCancelRequest_message_t_0.insert("8");
  elt.add_attribute("TxnTm", "TransactTime_t_769163649"); // 0
  OrderMassCancelRequest_message_t_0.insert("TransactTime_t_769163649");
  elt.add_attribute("Txt", "Text_t_2127290358"); // 0
  OrderMassCancelRequest_message_t_0.insert("Text_t_2127290358");
  elt.add_attribute("EncTxtLen", "605617132"); // 0
  OrderMassCancelRequest_message_t_0.insert("605617132");
  elt.add_attribute("EncTxt", "EncodedText_t_1430493393"); // 0
  OrderMassCancelRequest_message_t_0.insert("EncodedText_t_1430493393");
  all_values.push_back(OrderMassCancelRequest_message_t_0);
  all_compo_names.insert("OrderMassCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_62{"Hdr"};
    multiset<string> Hdr_62_set;
    Hdr_62.add_attribute("SeqNum", "1486316960"); // 1
    Hdr_62_set.insert("1486316960");
    Hdr_62.add_attribute("SID", "SenderCompID_t_851051489"); // 1
    Hdr_62_set.insert("SenderCompID_t_851051489");
    Hdr_62.add_attribute("TID", "TargetCompID_t_217938166"); // 1
    Hdr_62_set.insert("TargetCompID_t_217938166");
    Hdr_62.add_attribute("OBID", "OnBehalfOfCompID_t_1049208438"); // 1
    Hdr_62_set.insert("OnBehalfOfCompID_t_1049208438");
    Hdr_62.add_attribute("D2ID", "DeliverToCompID_t_1381934152"); // 1
    Hdr_62_set.insert("DeliverToCompID_t_1381934152");
    Hdr_62.add_attribute("SSub", "SenderSubID_t_508681357"); // 1
    Hdr_62_set.insert("SenderSubID_t_508681357");
    Hdr_62.add_attribute("SLoc", "SenderLocationID_t_784160409"); // 1
    Hdr_62_set.insert("SenderLocationID_t_784160409");
    Hdr_62.add_attribute("TSub", "TargetSubID_t_330071843"); // 1
    Hdr_62_set.insert("TargetSubID_t_330071843");
    Hdr_62.add_attribute("TLoc", "TargetLocationID_t_1412673589"); // 1
    Hdr_62_set.insert("TargetLocationID_t_1412673589");
    Hdr_62.add_attribute("OBSub", "OnBehalfOfSubID_t_514066159"); // 1
    Hdr_62_set.insert("OnBehalfOfSubID_t_514066159");
    Hdr_62.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1570095602"); // 1
    Hdr_62_set.insert("OnBehalfOfLocationID_t_1570095602");
    Hdr_62.add_attribute("D2Sub", "DeliverToSubID_t_252874527"); // 1
    Hdr_62_set.insert("DeliverToSubID_t_252874527");
    Hdr_62.add_attribute("D2Loc", "DeliverToLocationID_t_1110250223"); // 1
    Hdr_62_set.insert("DeliverToLocationID_t_1110250223");
    Hdr_62.add_attribute("PosDup", "Y"); // 1
    Hdr_62_set.insert("Y");
    Hdr_62.add_attribute("PosRsnd", "Y"); // 1
    Hdr_62_set.insert("Y");
    Hdr_62.add_attribute("Snt", "SendingTime_t_1879699428"); // 1
    Hdr_62_set.insert("SendingTime_t_1879699428");
    Hdr_62.add_attribute("OrigSnt", "OrigSendingTime_t_727156757"); // 1
    Hdr_62_set.insert("OrigSendingTime_t_727156757");
    Hdr_62.add_attribute("MsgEncd", "MessageEncoding_t_1921794675"); // 1
    Hdr_62_set.insert("MessageEncoding_t_1921794675");
    all_values.push_back(Hdr_62_set);
    all_compo_names.insert("Hdr_62_set");

    {
      xml_element Hop_62{"Hop"};
      multiset<string> Hop_62_set;
      Hop_62.add_attribute("ID", "HopCompID_t_164274694"); // 2
      Hop_62_set.insert("HopCompID_t_164274694");
      Hop_62.add_attribute("Ref", "776699334"); // 2
      Hop_62_set.insert("776699334");
      Hop_62.add_attribute("Snt", "HopSendingTime_t_1883975840"); // 2
      Hop_62_set.insert("HopSendingTime_t_1883975840");
      all_values.push_back(Hop_62_set);
      all_compo_names.insert("Hop_62_set");

      Hdr_62.add_element(Hop_62);
    }
    elt.add_element(Hdr_62);
  } // end Hdr
  { // Pty
    xml_element Pty_260{"Pty"};
    multiset<string> Pty_260_set;
    Pty_260.add_attribute("ID", "PartyID_t_626017654"); // 1
    Pty_260_set.insert("PartyID_t_626017654");
    Pty_260.add_attribute("Src", "2"); // 1
    Pty_260_set.insert("2");
    Pty_260.add_attribute("R", "34"); // 1
    Pty_260_set.insert("34");
    all_values.push_back(Pty_260_set);
    all_compo_names.insert("Pty_260_set");

    {
      xml_element Sub_260{"Sub"};
      multiset<string> Sub_260_set;
      Sub_260.add_attribute("ID", "PartySubID_t_1760127661"); // 2
      Sub_260_set.insert("PartySubID_t_1760127661");
      Sub_260.add_attribute("Typ", "8"); // 2
      Sub_260_set.insert("8");
      all_values.push_back(Sub_260_set);
      all_compo_names.insert("Sub_260_set");

      Pty_260.add_element(Sub_260);
    }
    elt.add_element(Pty_260);
  } // end Pty
  { // Pty
    xml_element Pty_261{"Pty"};
    multiset<string> Pty_261_set;
    Pty_261.add_attribute("ID", "PartyID_t_1038645923"); // 1
    Pty_261_set.insert("PartyID_t_1038645923");
    Pty_261.add_attribute("Src", "C"); // 1
    Pty_261_set.insert("C");
    Pty_261.add_attribute("R", "5"); // 1
    Pty_261_set.insert("5");
    all_values.push_back(Pty_261_set);
    all_compo_names.insert("Pty_261_set");

    {
      xml_element Sub_261{"Sub"};
      multiset<string> Sub_261_set;
      Sub_261.add_attribute("ID", "PartySubID_t_321655668"); // 2
      Sub_261_set.insert("PartySubID_t_321655668");
      Sub_261.add_attribute("Typ", "27"); // 2
      Sub_261_set.insert("27");
      all_values.push_back(Sub_261_set);
      all_compo_names.insert("Sub_261_set");

      Pty_261.add_element(Sub_261);
    }
    elt.add_element(Pty_261);
  } // end Pty
  { // Pty
    xml_element Pty_262{"Pty"};
    multiset<string> Pty_262_set;
    Pty_262.add_attribute("ID", "PartyID_t_1114434026"); // 1
    Pty_262_set.insert("PartyID_t_1114434026");
    Pty_262.add_attribute("Src", "5"); // 1
    Pty_262_set.insert("5");
    Pty_262.add_attribute("R", "15"); // 1
    Pty_262_set.insert("15");
    all_values.push_back(Pty_262_set);
    all_compo_names.insert("Pty_262_set");

    {
      xml_element Sub_262{"Sub"};
      multiset<string> Sub_262_set;
      Sub_262.add_attribute("ID", "PartySubID_t_348884530"); // 2
      Sub_262_set.insert("PartySubID_t_348884530");
      Sub_262.add_attribute("Typ", "31"); // 2
      Sub_262_set.insert("31");
      all_values.push_back(Sub_262_set);
      all_compo_names.insert("Sub_262_set");

      Pty_262.add_element(Sub_262);
    }
    elt.add_element(Pty_262);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_8{"TgtPty"};
    multiset<string> TgtPty_8_set;
    TgtPty_8.add_attribute("ID", "TargetPartyID_t_678956373"); // 1
    TgtPty_8_set.insert("TargetPartyID_t_678956373");
    TgtPty_8.add_attribute("Src", "C"); // 1
    TgtPty_8_set.insert("C");
    TgtPty_8.add_attribute("R", "64"); // 1
    TgtPty_8_set.insert("64");
    all_values.push_back(TgtPty_8_set);
    all_compo_names.insert("TgtPty_8_set");

    elt.add_element(TgtPty_8);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_9{"TgtPty"};
    multiset<string> TgtPty_9_set;
    TgtPty_9.add_attribute("ID", "TargetPartyID_t_101568327"); // 1
    TgtPty_9_set.insert("TargetPartyID_t_101568327");
    TgtPty_9.add_attribute("Src", "A"); // 1
    TgtPty_9_set.insert("A");
    TgtPty_9.add_attribute("R", "68"); // 1
    TgtPty_9_set.insert("68");
    all_values.push_back(TgtPty_9_set);
    all_compo_names.insert("TgtPty_9_set");

    elt.add_element(TgtPty_9);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_50{"Instrmt"};
    multiset<string> Instrmt_50_set;
    Instrmt_50.add_attribute("Sym", "Symbol_t_861903952"); // 1
    Instrmt_50_set.insert("Symbol_t_861903952");
    Instrmt_50.add_attribute("Sfx", "CD"); // 1
    Instrmt_50_set.insert("CD");
    Instrmt_50.add_attribute("ID", "SecurityID_t_2121185046"); // 1
    Instrmt_50_set.insert("SecurityID_t_2121185046");
    Instrmt_50.add_attribute("Src", "7"); // 1
    Instrmt_50_set.insert("7");
    Instrmt_50.add_attribute("Prod", "6"); // 1
    Instrmt_50_set.insert("6");
    Instrmt_50.add_attribute("ProdCmplx", "ProductComplex_t_137976092"); // 1
    Instrmt_50_set.insert("ProductComplex_t_137976092");
    Instrmt_50.add_attribute("SecGrp", "SecurityGroup_t_218276396"); // 1
    Instrmt_50_set.insert("SecurityGroup_t_218276396");
    Instrmt_50.add_attribute("CFI", "CFICode_t_1038136858"); // 1
    Instrmt_50_set.insert("CFICode_t_1038136858");
    Instrmt_50.add_attribute("SecTyp", "USTB"); // 1
    Instrmt_50_set.insert("USTB");
    Instrmt_50.add_attribute("SubTyp", "SecuritySubType_t_844294051"); // 1
    Instrmt_50_set.insert("SecuritySubType_t_844294051");
    Instrmt_50.add_attribute("MMY", "2076423263"); // 1
    Instrmt_50_set.insert("2076423263");
    Instrmt_50.add_attribute("MatDt", "MaturityDate_t_2049884179"); // 1
    Instrmt_50_set.insert("MaturityDate_t_2049884179");
    Instrmt_50.add_attribute("MatTm", "456938064"); // 1
    Instrmt_50_set.insert("456938064");
    Instrmt_50.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1734188667"); // 1
    Instrmt_50_set.insert("SettleOnOpenFlag_t_1734188667");
    Instrmt_50.add_attribute("AsgnMeth", "941046455"); // 1
    Instrmt_50_set.insert("941046455");
    Instrmt_50.add_attribute("Status", "2"); // 1
    Instrmt_50_set.insert("2");
    Instrmt_50.add_attribute("CpnPmt", "CouponPaymentDate_t_1997571203"); // 1
    Instrmt_50_set.insert("CouponPaymentDate_t_1997571203");
    Instrmt_50.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_50_set.insert("XR");
    Instrmt_50.add_attribute("Snrty", "SD"); // 1
    Instrmt_50_set.insert("SD");
    Instrmt_50.add_attribute("NotlPctOut", "9645215.810000"); // 1
    Instrmt_50_set.insert("9645215.810000");
    Instrmt_50.add_attribute("OrigNotlPctOut", "18022959.580000"); // 1
    Instrmt_50_set.insert("18022959.580000");
    Instrmt_50.add_attribute("AttchPnt", "11086489.450000"); // 1
    Instrmt_50_set.insert("11086489.450000");
    Instrmt_50.add_attribute("DetchPnt", "13134061.110000"); // 1
    Instrmt_50_set.insert("13134061.110000");
    Instrmt_50.add_attribute("Issued", "IssueDate_t_703087502"); // 1
    Instrmt_50_set.insert("IssueDate_t_703087502");
    Instrmt_50.add_attribute("RepoCollSecTyp", "1873301828"); // 1
    Instrmt_50_set.insert("1873301828");
    Instrmt_50.add_attribute("RepoTrm", "1992362485"); // 1
    Instrmt_50_set.insert("1992362485");
    Instrmt_50.add_attribute("RepoRt", "10165526.350000"); // 1
    Instrmt_50_set.insert("10165526.350000");
    Instrmt_50.add_attribute("Fctr", "10045372.230000"); // 1
    Instrmt_50_set.insert("10045372.230000");
    Instrmt_50.add_attribute("CrdRtg", "CreditRating_t_2093930812"); // 1
    Instrmt_50_set.insert("CreditRating_t_2093930812");
    Instrmt_50.add_attribute("Rgstry", "InstrRegistry_t_1582892296"); // 1
    Instrmt_50_set.insert("InstrRegistry_t_1582892296");
    Instrmt_50.add_attribute("IssuCtry", "1246022841"); // 1
    Instrmt_50_set.insert("1246022841");
    Instrmt_50.add_attribute("StPrv", "StateOrProvinceOfIssue_t_808351117"); // 1
    Instrmt_50_set.insert("StateOrProvinceOfIssue_t_808351117");
    Instrmt_50.add_attribute("Lcl", "LocaleOfIssue_t_962742287"); // 1
    Instrmt_50_set.insert("LocaleOfIssue_t_962742287");
    Instrmt_50.add_attribute("Redeem", "RedemptionDate_t_1219724239"); // 1
    Instrmt_50_set.insert("RedemptionDate_t_1219724239");
    Instrmt_50.add_attribute("StrkPx", "2499281.790000"); // 1
    Instrmt_50_set.insert("2499281.790000");
    Instrmt_50.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_50_set.insert("CHF");
    Instrmt_50.add_attribute("StrkMult", "4682045.750000"); // 1
    Instrmt_50_set.insert("4682045.750000");
    Instrmt_50.add_attribute("StrkValu", "11550401.620000"); // 1
    Instrmt_50_set.insert("11550401.620000");
    Instrmt_50.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_50_set.insert("2");
    Instrmt_50.add_attribute("StrkPxBndryPrcsn", "10839797.770000"); // 1
    Instrmt_50_set.insert("10839797.770000");
    Instrmt_50.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("OptAt", "1769436690"); // 1
    Instrmt_50_set.insert("1769436690");
    Instrmt_50.add_attribute("Mult", "6706847.960000"); // 1
    Instrmt_50_set.insert("6706847.960000");
    Instrmt_50.add_attribute("MultTyp", "2"); // 1
    Instrmt_50_set.insert("2");
    Instrmt_50.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_50_set.insert("3");
    Instrmt_50.add_attribute("MinPxIncr", "5207723.520000"); // 1
    Instrmt_50_set.insert("5207723.520000");
    Instrmt_50.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_949284050"); // 1
    Instrmt_50_set.insert("MinPriceIncrementAmount_t_949284050");
    Instrmt_50.add_attribute("UOM", "t"); // 1
    Instrmt_50_set.insert("t");
    Instrmt_50.add_attribute("UOMQty", "14852939.330000"); // 1
    Instrmt_50_set.insert("14852939.330000");
    Instrmt_50.add_attribute("PxUOM", "Bcf"); // 1
    Instrmt_50_set.insert("Bcf");
    Instrmt_50.add_attribute("PxUOMQty", "19081472.460000"); // 1
    Instrmt_50_set.insert("19081472.460000");
    Instrmt_50.add_attribute("SettlMeth", "P"); // 1
    Instrmt_50_set.insert("P");
    Instrmt_50.add_attribute("ExerStyle", "0"); // 1
    Instrmt_50_set.insert("0");
    Instrmt_50.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("OptPayAmt", "OptPayoutAmount_t_496095234"); // 1
    Instrmt_50_set.insert("OptPayoutAmount_t_496095234");
    Instrmt_50.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_50_set.insert("INT");
    Instrmt_50.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_50_set.insert("FUT");
    Instrmt_50.add_attribute("ListMeth", "0"); // 1
    Instrmt_50_set.insert("0");
    Instrmt_50.add_attribute("CapPx", "17591451.460000"); // 1
    Instrmt_50_set.insert("17591451.460000");
    Instrmt_50.add_attribute("FlrPx", "17370418.420000"); // 1
    Instrmt_50_set.insert("17370418.420000");
    Instrmt_50.add_attribute("PutCall", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("FlexInd", "false"); // 1
    Instrmt_50_set.insert("false");
    Instrmt_50.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_50_set.insert("false");
    Instrmt_50.add_attribute("TmUnit", "Min"); // 1
    Instrmt_50_set.insert("Min");
    Instrmt_50.add_attribute("CpnRt", "6913070.900000"); // 1
    Instrmt_50_set.insert("6913070.900000");
    Instrmt_50.add_attribute("Exch", "SecurityExchange_t_19499117"); // 1
    Instrmt_50_set.insert("SecurityExchange_t_19499117");
    Instrmt_50.add_attribute("PosLmt", "1969026270"); // 1
    Instrmt_50_set.insert("1969026270");
    Instrmt_50.add_attribute("NTPosLmt", "1846347252"); // 1
    Instrmt_50_set.insert("1846347252");
    Instrmt_50.add_attribute("Issr", "Issuer_t_1010117705"); // 1
    Instrmt_50_set.insert("Issuer_t_1010117705");
    Instrmt_50.add_attribute("EncIssrLen", "1134041248"); // 1
    Instrmt_50_set.insert("1134041248");
    Instrmt_50.add_attribute("EncIssr", "EncodedIssuer_t_782843382"); // 1
    Instrmt_50_set.insert("EncodedIssuer_t_782843382");
    Instrmt_50.add_attribute("Desc", "SecurityDesc_t_1903136825"); // 1
    Instrmt_50_set.insert("SecurityDesc_t_1903136825");
    Instrmt_50.add_attribute("EncSecDescLen", "755994291"); // 1
    Instrmt_50_set.insert("755994291");
    Instrmt_50.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1453528178"); // 1
    Instrmt_50_set.insert("EncodedSecurityDesc_t_1453528178");
    Instrmt_50.add_attribute("Pool", "Pool_t_1589718752"); // 1
    Instrmt_50_set.insert("Pool_t_1589718752");
    Instrmt_50.add_attribute("CSetMo", "427336121"); // 1
    Instrmt_50_set.insert("427336121");
    Instrmt_50.add_attribute("CPPgm", "99"); // 1
    Instrmt_50_set.insert("99");
    Instrmt_50.add_attribute("CPRegT", "CPRegType_t_391519155"); // 1
    Instrmt_50_set.insert("CPRegType_t_391519155");
    Instrmt_50.add_attribute("Dated", "DatedDate_t_1226834422"); // 1
    Instrmt_50_set.insert("DatedDate_t_1226834422");
    Instrmt_50.add_attribute("IntAcrl", "InterestAccrualDate_t_1312110816"); // 1
    Instrmt_50_set.insert("InterestAccrualDate_t_1312110816");
    all_values.push_back(Instrmt_50_set);
    all_compo_names.insert("Instrmt_50_set");

    {
      xml_element AID_53{"AID"};
      multiset<string> AID_53_set;
      AID_53.add_attribute("AltID", "SecurityAltID_t_995615515"); // 2
      AID_53_set.insert("SecurityAltID_t_995615515");
      AID_53.add_attribute("AltIDSrc", "F"); // 2
      AID_53_set.insert("F");
      all_values.push_back(AID_53_set);
      all_compo_names.insert("AID_53_set");

      Instrmt_50.add_element(AID_53);
    }
    {
      xml_element SecXML_53{"SecXML"};
      multiset<string> SecXML_53_set;
      SecXML_53.add_attribute("Schema", "SecurityXMLSchema_t_1963327213"); // 2
      SecXML_53_set.insert("SecurityXMLSchema_t_1963327213");
      all_values.push_back(SecXML_53_set);
      all_compo_names.insert("SecXML_53_set");

      Instrmt_50.add_element(SecXML_53);
    }
    {
      xml_element Evnt_53{"Evnt"};
      multiset<string> Evnt_53_set;
      Evnt_53.add_attribute("EventTyp", "11"); // 2
      Evnt_53_set.insert("11");
      Evnt_53.add_attribute("Dt", "EventDate_t_473979798"); // 2
      Evnt_53_set.insert("EventDate_t_473979798");
      Evnt_53.add_attribute("Tm", "EventTime_t_311938799"); // 2
      Evnt_53_set.insert("EventTime_t_311938799");
      Evnt_53.add_attribute("Px", "3315685.800000"); // 2
      Evnt_53_set.insert("3315685.800000");
      Evnt_53.add_attribute("Txt", "EventText_t_964998800"); // 2
      Evnt_53_set.insert("EventText_t_964998800");
      all_values.push_back(Evnt_53_set);
      all_compo_names.insert("Evnt_53_set");

      Instrmt_50.add_element(Evnt_53);
    }
    {
      xml_element Pty_263{"Pty"};
      multiset<string> Pty_263_set;
      Pty_263.add_attribute("ID", "InstrumentPartyID_t_754481197"); // 2
      Pty_263_set.insert("InstrumentPartyID_t_754481197");
      Pty_263.add_attribute("Src", "B"); // 2
      Pty_263_set.insert("B");
      Pty_263.add_attribute("R", "84"); // 2
      Pty_263_set.insert("84");
      all_values.push_back(Pty_263_set);
      all_compo_names.insert("Pty_263_set");

      {
        xml_element Sub_263{"Sub"};
        multiset<string> Sub_263_set;
        Sub_263.add_attribute("ID", "InstrumentPartySubID_t_2005374713"); // 3
        Sub_263_set.insert("InstrumentPartySubID_t_2005374713");
        Sub_263.add_attribute("Typ", "6"); // 3
        Sub_263_set.insert("6");
        all_values.push_back(Sub_263_set);
        all_compo_names.insert("Sub_263_set");

        Pty_263.add_element(Sub_263);
      }
      Instrmt_50.add_element(Pty_263);
    }
    {
      xml_element CmplxEvnt_50{"CmplxEvnt"};
      multiset<string> CmplxEvnt_50_set;
      CmplxEvnt_50.add_attribute("Typ", "3"); // 2
      CmplxEvnt_50_set.insert("3");
      CmplxEvnt_50.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1358712759"); // 2
      CmplxEvnt_50_set.insert("ComplexOptPayoutAmount_t_1358712759");
      CmplxEvnt_50.add_attribute("Px", "12089409.540000"); // 2
      CmplxEvnt_50_set.insert("12089409.540000");
      CmplxEvnt_50.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_50_set.insert("1");
      CmplxEvnt_50.add_attribute("PxBndryPrcsn", "11802553.810000"); // 2
      CmplxEvnt_50_set.insert("11802553.810000");
      CmplxEvnt_50.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_50_set.insert("2");
      CmplxEvnt_50.add_attribute("Cond", "1"); // 2
      CmplxEvnt_50_set.insert("1");
      all_values.push_back(CmplxEvnt_50_set);
      all_compo_names.insert("CmplxEvnt_50_set");

      {
        xml_element EvntDts_50{"EvntDts"};
        multiset<string> EvntDts_50_set;
        EvntDts_50.add_attribute("StartDt", "ComplexEventStartDate_t_166812982"); // 3
        EvntDts_50_set.insert("ComplexEventStartDate_t_166812982");
        EvntDts_50.add_attribute("EndDt", "ComplexEventEndDate_t_1690647940"); // 3
        EvntDts_50_set.insert("ComplexEventEndDate_t_1690647940");
        all_values.push_back(EvntDts_50_set);
        all_compo_names.insert("EvntDts_50_set");

        {
          xml_element EvntTms_50{"EvntTms"};
          multiset<string> EvntTms_50_set;
          EvntTms_50.add_attribute("StartTm", "1625780"); // 4
          EvntTms_50_set.insert("1625780");
          EvntTms_50.add_attribute("EndTm", "922807273"); // 4
          EvntTms_50_set.insert("922807273");
          all_values.push_back(EvntTms_50_set);
          all_compo_names.insert("EvntTms_50_set");

          EvntDts_50.add_element(EvntTms_50);
        }
        CmplxEvnt_50.add_element(EvntDts_50);
      }
      Instrmt_50.add_element(CmplxEvnt_50);
    }
    elt.add_element(Instrmt_50);
  } // end Instrmt
  { // Undly
    xml_element Undly_67{"Undly"};
    multiset<string> Undly_67_set;
    Undly_67.add_attribute("Sym", "UnderlyingSymbol_t_996692471"); // 1
    Undly_67_set.insert("UnderlyingSymbol_t_996692471");
    Undly_67.add_attribute("Sfx", "CD"); // 1
    Undly_67_set.insert("CD");
    Undly_67.add_attribute("ID", "UnderlyingSecurityID_t_1350143394"); // 1
    Undly_67_set.insert("UnderlyingSecurityID_t_1350143394");
    Undly_67.add_attribute("Src", "8"); // 1
    Undly_67_set.insert("8");
    Undly_67.add_attribute("Prod", "9"); // 1
    Undly_67_set.insert("9");
    Undly_67.add_attribute("CFI", "UnderlyingCFICode_t_429494168"); // 1
    Undly_67_set.insert("UnderlyingCFICode_t_429494168");
    Undly_67.add_attribute("SecTyp", "AMENDED"); // 1
    Undly_67_set.insert("AMENDED");
    Undly_67.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_830995555"); // 1
    Undly_67_set.insert("UnderlyingSecuritySubType_t_830995555");
    Undly_67.add_attribute("MMY", "1416992188"); // 1
    Undly_67_set.insert("1416992188");
    Undly_67.add_attribute("Mat", "UnderlyingMaturityDate_t_1951463734"); // 1
    Undly_67_set.insert("UnderlyingMaturityDate_t_1951463734");
    Undly_67.add_attribute("MatTm", "986311285"); // 1
    Undly_67_set.insert("986311285");
    Undly_67.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1890971986"); // 1
    Undly_67_set.insert("UnderlyingCouponPaymentDate_t_1890971986");
    Undly_67.add_attribute("RestrctTyp", "MR"); // 1
    Undly_67_set.insert("MR");
    Undly_67.add_attribute("Snrty", "SR"); // 1
    Undly_67_set.insert("SR");
    Undly_67.add_attribute("NotlPctOut", "7084871.380000"); // 1
    Undly_67_set.insert("7084871.380000");
    Undly_67.add_attribute("OrigNotlPctOut", "8704000.830000"); // 1
    Undly_67_set.insert("8704000.830000");
    Undly_67.add_attribute("AttchPnt", "12611099.430000"); // 1
    Undly_67_set.insert("12611099.430000");
    Undly_67.add_attribute("DetchPnt", "12630441.330000"); // 1
    Undly_67_set.insert("12630441.330000");
    Undly_67.add_attribute("Issued", "UnderlyingIssueDate_t_728291148"); // 1
    Undly_67_set.insert("UnderlyingIssueDate_t_728291148");
    Undly_67.add_attribute("RepoCollSecTyp", "1778743807"); // 1
    Undly_67_set.insert("1778743807");
    Undly_67.add_attribute("RepoTrm", "479399913"); // 1
    Undly_67_set.insert("479399913");
    Undly_67.add_attribute("RepoRt", "20870039.070000"); // 1
    Undly_67_set.insert("20870039.070000");
    Undly_67.add_attribute("Fctr", "8402011.130000"); // 1
    Undly_67_set.insert("8402011.130000");
    Undly_67.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1862738458"); // 1
    Undly_67_set.insert("UnderlyingCreditRating_t_1862738458");
    Undly_67.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1119775641"); // 1
    Undly_67_set.insert("UnderlyingInstrRegistry_t_1119775641");
    Undly_67.add_attribute("Ctry", "1748005672"); // 1
    Undly_67_set.insert("1748005672");
    Undly_67.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2108711060"); // 1
    Undly_67_set.insert("UnderlyingStateOrProvinceOfIssue_t_2108711060");
    Undly_67.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1286588623"); // 1
    Undly_67_set.insert("UnderlyingLocaleOfIssue_t_1286588623");
    Undly_67.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1291169964"); // 1
    Undly_67_set.insert("UnderlyingRedemptionDate_t_1291169964");
    Undly_67.add_attribute("StrkPx", "21103368.400000"); // 1
    Undly_67_set.insert("21103368.400000");
    Undly_67.add_attribute("StrkCcy", "CHF"); // 1
    Undly_67_set.insert("CHF");
    Undly_67.add_attribute("OptA", "1554197725"); // 1
    Undly_67_set.insert("1554197725");
    Undly_67.add_attribute("Mult", "14120556.420000"); // 1
    Undly_67_set.insert("14120556.420000");
    Undly_67.add_attribute("MultTyp", "0"); // 1
    Undly_67_set.insert("0");
    Undly_67.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_67_set.insert("4");
    Undly_67.add_attribute("UOM", "USD"); // 1
    Undly_67_set.insert("USD");
    Undly_67.add_attribute("UOMQty", "9520246.620000"); // 1
    Undly_67_set.insert("9520246.620000");
    Undly_67.add_attribute("PxUOM", "tn"); // 1
    Undly_67_set.insert("tn");
    Undly_67.add_attribute("PxUOMQty", "11110583.500000"); // 1
    Undly_67_set.insert("11110583.500000");
    Undly_67.add_attribute("TmUnit", "D"); // 1
    Undly_67_set.insert("D");
    Undly_67.add_attribute("ExerStyle", "0"); // 1
    Undly_67_set.insert("0");
    Undly_67.add_attribute("CpnRt", "8545466.880000"); // 1
    Undly_67_set.insert("8545466.880000");
    Undly_67.add_attribute("Exch", "UnderlyingSecurityExchange_t_871923634"); // 1
    Undly_67_set.insert("UnderlyingSecurityExchange_t_871923634");
    Undly_67.add_attribute("Issr", "UnderlyingIssuer_t_229797173"); // 1
    Undly_67_set.insert("UnderlyingIssuer_t_229797173");
    Undly_67.add_attribute("EncUndIssrLen", "1563033827"); // 1
    Undly_67_set.insert("1563033827");
    Undly_67.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1742323717"); // 1
    Undly_67_set.insert("EncodedUnderlyingIssuer_t_1742323717");
    Undly_67.add_attribute("Desc", "UnderlyingSecurityDesc_t_1490907117"); // 1
    Undly_67_set.insert("UnderlyingSecurityDesc_t_1490907117");
    Undly_67.add_attribute("EncUndSecDescLen", "678594312"); // 1
    Undly_67_set.insert("678594312");
    Undly_67.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_323131217"); // 1
    Undly_67_set.insert("EncodedUnderlyingSecurityDesc_t_323131217");
    Undly_67.add_attribute("CPPgm", "UnderlyingCPProgram_t_1122167276"); // 1
    Undly_67_set.insert("UnderlyingCPProgram_t_1122167276");
    Undly_67.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1157994225"); // 1
    Undly_67_set.insert("UnderlyingCPRegType_t_1157994225");
    Undly_67.add_attribute("AllocPct", "2626514.770000"); // 1
    Undly_67_set.insert("2626514.770000");
    Undly_67.add_attribute("Ccy", "CAN"); // 1
    Undly_67_set.insert("CAN");
    Undly_67.add_attribute("Qty", "13824271.180000"); // 1
    Undly_67_set.insert("13824271.180000");
    Undly_67.add_attribute("SettlTyp", "4"); // 1
    Undly_67_set.insert("4");
    Undly_67.add_attribute("CashAmt", "UnderlyingCashAmount_t_834476447"); // 1
    Undly_67_set.insert("UnderlyingCashAmount_t_834476447");
    Undly_67.add_attribute("CashTyp", "DIFF"); // 1
    Undly_67_set.insert("DIFF");
    Undly_67.add_attribute("Px", "7065767.300000"); // 1
    Undly_67_set.insert("7065767.300000");
    Undly_67.add_attribute("DirtPx", "7973296.400000"); // 1
    Undly_67_set.insert("7973296.400000");
    Undly_67.add_attribute("EndPx", "5834443.410000"); // 1
    Undly_67_set.insert("5834443.410000");
    Undly_67.add_attribute("StartVal", "UnderlyingStartValue_t_846955518"); // 1
    Undly_67_set.insert("UnderlyingStartValue_t_846955518");
    Undly_67.add_attribute("CurVal", "UnderlyingCurrentValue_t_204043717"); // 1
    Undly_67_set.insert("UnderlyingCurrentValue_t_204043717");
    Undly_67.add_attribute("EndVal", "UnderlyingEndValue_t_1995499983"); // 1
    Undly_67_set.insert("UnderlyingEndValue_t_1995499983");
    Undly_67.add_attribute("AdjQty", "18108436.590000"); // 1
    Undly_67_set.insert("18108436.590000");
    Undly_67.add_attribute("FxRate", "15936214.810000"); // 1
    Undly_67_set.insert("15936214.810000");
    Undly_67.add_attribute("FxRateCalc", "D"); // 1
    Undly_67_set.insert("D");
    Undly_67.add_attribute("CapValu", "UnderlyingCapValue_t_615384673"); // 1
    Undly_67_set.insert("UnderlyingCapValue_t_615384673");
    Undly_67.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1666711153"); // 1
    Undly_67_set.insert("UnderlyingSettlMethod_t_1666711153");
    Undly_67.add_attribute("PutCall", "653140847"); // 1
    Undly_67_set.insert("653140847");
    all_values.push_back(Undly_67_set);
    all_compo_names.insert("Undly_67_set");

    {
      xml_element UndAID_67{"UndAID"};
      multiset<string> UndAID_67_set;
      UndAID_67.add_attribute("AltID", "UnderlyingSecurityAltID_t_1371389422"); // 2
      UndAID_67_set.insert("UnderlyingSecurityAltID_t_1371389422");
      UndAID_67.add_attribute("AltIDSrc", "G"); // 2
      UndAID_67_set.insert("G");
      all_values.push_back(UndAID_67_set);
      all_compo_names.insert("UndAID_67_set");

      Undly_67.add_element(UndAID_67);
    }
    {
      xml_element Stip_104{"Stip"};
      multiset<string> Stip_104_set;
      Stip_104.add_attribute("Typ", "ISSUE"); // 2
      Stip_104_set.insert("ISSUE");
      Stip_104.add_attribute("Val", "UnderlyingStipValue_t_95829409"); // 2
      Stip_104_set.insert("UnderlyingStipValue_t_95829409");
      all_values.push_back(Stip_104_set);
      all_compo_names.insert("Stip_104_set");

      Undly_67.add_element(Stip_104);
    }
    {
      xml_element Pty_264{"Pty"};
      multiset<string> Pty_264_set;
      Pty_264.add_attribute("ID", "UnderlyingInstrumentPartyID_t_808425635"); // 2
      Pty_264_set.insert("UnderlyingInstrumentPartyID_t_808425635");
      Pty_264.add_attribute("Src", "3"); // 2
      Pty_264_set.insert("3");
      Pty_264.add_attribute("R", "34"); // 2
      Pty_264_set.insert("34");
      all_values.push_back(Pty_264_set);
      all_compo_names.insert("Pty_264_set");

      {
        xml_element Sub_264{"Sub"};
        multiset<string> Sub_264_set;
        Sub_264.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_151849104"); // 3
        Sub_264_set.insert("UnderlyingInstrumentPartySubID_t_151849104");
        Sub_264.add_attribute("Typ", "22"); // 3
        Sub_264_set.insert("22");
        all_values.push_back(Sub_264_set);
        all_compo_names.insert("Sub_264_set");

        Pty_264.add_element(Sub_264);
      }
      Undly_67.add_element(Pty_264);
    }
    elt.add_element(Undly_67);
  } // end Undly
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  FIX::Message fix_msg;
  ASSERT_TRUE(converter.fixml2fix(elt, fix_msg));

  cout << endl << "////////////////////////////////////////////" << endl;
  cout << fix_msg.toXML() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  cout << endl << "////////////////////////////////////////////" << endl;
  multiset<string> fix_s;
  list<multiset<string>> fix_ls;
  to_list(fix_msg, quickfix_dico, fix_s, fix_ls);
  fix_ls.push_back(fix_s);

  BOOST_LOG_TRIVIAL(debug) << "All FIX components (" << fix_ls.size() << ")";
  for (const auto &l : fix_ls) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }

  cout << endl << "////////////////////////////////////////////" << endl;
  multiset<string> xml_s;
  list<multiset<string>> xml_ls;
  elt_to_list(elt, fixml_dict, xml_s, xml_ls);
  xml_ls.push_back(xml_s);
  BOOST_LOG_TRIVIAL(debug) << "All XML components (" << xml_ls.size() << ")";
  for (const auto &l : xml_ls) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }

  for (const auto &fix_l : fix_ls) {
    bool found = false;
    for (const auto &xml_l : xml_ls) {
      if (includes(xml_l.begin(), xml_l.end(), fix_l.begin(), fix_l.end())) {
        found = true;
        break;
      } // end if includes
    }   // end for all_values
    EXPECT_TRUE(found);
    if (!found) {
      BOOST_LOG_TRIVIAL(debug)
        << "[TO CHECK] This FIX component was not found in XML message";
      cout << "	 ---> [";
      copy(fix_l.begin(), fix_l.end(), ostream_iterator<string>(cout, " "));
      cout << "]" << endl << endl;
    } // end if ! found
  }   // end for elt_lists
}
