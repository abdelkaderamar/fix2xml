#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListUpdateReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecListUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityListUpdateReport_message_t_0;
  elt.add_attribute("RptID", "357588957"); // 0
  SecurityListUpdateReport_message_t_0.insert("357588957");
  elt.add_attribute("ListID", "SecurityListID_t_2078786216"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityListID_t_2078786216");
  elt.add_attribute("ListRefID", "SecurityListRefID_t_1756457517"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityListRefID_t_1756457517");
  elt.add_attribute("ListDesc", "SecurityListDesc_t_100834263"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityListDesc_t_100834263");
  elt.add_attribute("ListTyp", "2"); // 0
  SecurityListUpdateReport_message_t_0.insert("2");
  elt.add_attribute("LstTypSrc", "3"); // 0
  SecurityListUpdateReport_message_t_0.insert("3");
  elt.add_attribute("ReqID", "SecurityReqID_t_1625062083"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityReqID_t_1625062083");
  elt.add_attribute("RspID", "SecurityResponseID_t_1983046431"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityResponseID_t_1983046431");
  elt.add_attribute("ReqRslt", "2"); // 0
  SecurityListUpdateReport_message_t_0.insert("2");
  elt.add_attribute("TotNoReltdSym", "10047220"); // 0
  SecurityListUpdateReport_message_t_0.insert("10047220");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1790268483"); // 0
  SecurityListUpdateReport_message_t_0.insert("ClearingBusinessDate_t_1790268483");
  elt.add_attribute("UpdActn", "D"); // 0
  SecurityListUpdateReport_message_t_0.insert("D");
  elt.add_attribute("CorpActn", "J"); // 0
  SecurityListUpdateReport_message_t_0.insert("J");
  elt.add_attribute("MktID", "MarketID_t_1375419042"); // 0
  SecurityListUpdateReport_message_t_0.insert("MarketID_t_1375419042");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1505163574"); // 0
  SecurityListUpdateReport_message_t_0.insert("MarketSegmentID_t_1505163574");
  elt.add_attribute("TxnTm", "TransactTime_t_1736917582"); // 0
  SecurityListUpdateReport_message_t_0.insert("TransactTime_t_1736917582");
  elt.add_attribute("LastFragment", "Y"); // 0
  SecurityListUpdateReport_message_t_0.insert("Y");
  all_values.push_back(SecurityListUpdateReport_message_t_0);
  all_compo_names.insert("SecurityListUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_85{"Hdr"};
    multiset<string> Hdr_85_set;
    Hdr_85.add_attribute("SeqNum", "2010848663"); // 1
    Hdr_85_set.insert("2010848663");
    Hdr_85.add_attribute("SID", "SenderCompID_t_836862134"); // 1
    Hdr_85_set.insert("SenderCompID_t_836862134");
    Hdr_85.add_attribute("TID", "TargetCompID_t_76518403"); // 1
    Hdr_85_set.insert("TargetCompID_t_76518403");
    Hdr_85.add_attribute("OBID", "OnBehalfOfCompID_t_962083796"); // 1
    Hdr_85_set.insert("OnBehalfOfCompID_t_962083796");
    Hdr_85.add_attribute("D2ID", "DeliverToCompID_t_2035625215"); // 1
    Hdr_85_set.insert("DeliverToCompID_t_2035625215");
    Hdr_85.add_attribute("SSub", "SenderSubID_t_2122585725"); // 1
    Hdr_85_set.insert("SenderSubID_t_2122585725");
    Hdr_85.add_attribute("SLoc", "SenderLocationID_t_26911461"); // 1
    Hdr_85_set.insert("SenderLocationID_t_26911461");
    Hdr_85.add_attribute("TSub", "TargetSubID_t_1797730764"); // 1
    Hdr_85_set.insert("TargetSubID_t_1797730764");
    Hdr_85.add_attribute("TLoc", "TargetLocationID_t_1169624780"); // 1
    Hdr_85_set.insert("TargetLocationID_t_1169624780");
    Hdr_85.add_attribute("OBSub", "OnBehalfOfSubID_t_417747808"); // 1
    Hdr_85_set.insert("OnBehalfOfSubID_t_417747808");
    Hdr_85.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2082203911"); // 1
    Hdr_85_set.insert("OnBehalfOfLocationID_t_2082203911");
    Hdr_85.add_attribute("D2Sub", "DeliverToSubID_t_1107346127"); // 1
    Hdr_85_set.insert("DeliverToSubID_t_1107346127");
    Hdr_85.add_attribute("D2Loc", "DeliverToLocationID_t_819630588"); // 1
    Hdr_85_set.insert("DeliverToLocationID_t_819630588");
    Hdr_85.add_attribute("PosDup", "Y"); // 1
    Hdr_85_set.insert("Y");
    Hdr_85.add_attribute("PosRsnd", "N"); // 1
    Hdr_85_set.insert("N");
    Hdr_85.add_attribute("Snt", "SendingTime_t_750933156"); // 1
    Hdr_85_set.insert("SendingTime_t_750933156");
    Hdr_85.add_attribute("OrigSnt", "OrigSendingTime_t_2011744974"); // 1
    Hdr_85_set.insert("OrigSendingTime_t_2011744974");
    Hdr_85.add_attribute("MsgEncd", "MessageEncoding_t_1565769347"); // 1
    Hdr_85_set.insert("MessageEncoding_t_1565769347");
    all_values.push_back(Hdr_85_set);
    all_compo_names.insert("Hdr_85_set");

    {
      xml_element Hop_85{"Hop"};
      multiset<string> Hop_85_set;
      Hop_85.add_attribute("ID", "HopCompID_t_1055366934"); // 2
      Hop_85_set.insert("HopCompID_t_1055366934");
      Hop_85.add_attribute("Ref", "1952350914"); // 2
      Hop_85_set.insert("1952350914");
      Hop_85.add_attribute("Snt", "HopSendingTime_t_1043347783"); // 2
      Hop_85_set.insert("HopSendingTime_t_1043347783");
      all_values.push_back(Hop_85_set);
      all_compo_names.insert("Hop_85_set");

      Hdr_85.add_element(Hop_85);
    }
    elt.add_element(Hdr_85);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_15{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_15_set;
    ApplSeqCtrl_15.add_attribute("ApplID", "ApplID_t_890929717"); // 1
    ApplSeqCtrl_15_set.insert("ApplID_t_890929717");
    ApplSeqCtrl_15.add_attribute("ApplSeqNum", "1186068925"); // 1
    ApplSeqCtrl_15_set.insert("1186068925");
    ApplSeqCtrl_15.add_attribute("ApplLastSeqNum", "1053395003"); // 1
    ApplSeqCtrl_15_set.insert("1053395003");
    ApplSeqCtrl_15.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_15_set.insert("false");
    all_values.push_back(ApplSeqCtrl_15_set);
    all_compo_names.insert("ApplSeqCtrl_15_set");

    elt.add_element(ApplSeqCtrl_15);
  } // end ApplSeqCtrl
  { // SecL
    xml_element SecL_2{"SecL"};
    multiset<string> SecL_2_set;
    SecL_2.add_attribute("ListUpdActn", "A"); // 1
    SecL_2_set.insert("A");
    SecL_2.add_attribute("Ccy", "CAN"); // 1
    SecL_2_set.insert("CAN");
    SecL_2.add_attribute("TxnTm", "RelSymTransactTime_t_1973485253"); // 1
    SecL_2_set.insert("RelSymTransactTime_t_1973485253");
    SecL_2.add_attribute("Txt", "Text_t_1868941136"); // 1
    SecL_2_set.insert("Text_t_1868941136");
    SecL_2.add_attribute("EncTxtLen", "943138976"); // 1
    SecL_2_set.insert("943138976");
    SecL_2.add_attribute("EncTxt", "EncodedText_t_662863739"); // 1
    SecL_2_set.insert("EncodedText_t_662863739");
    all_values.push_back(SecL_2_set);
    all_compo_names.insert("SecL_2_set");

    {
      xml_element Instrmt_73{"Instrmt"};
      multiset<string> Instrmt_73_set;
      Instrmt_73.add_attribute("Sym", "Symbol_t_1945459540"); // 2
      Instrmt_73_set.insert("Symbol_t_1945459540");
      Instrmt_73.add_attribute("Sfx", "WI"); // 2
      Instrmt_73_set.insert("WI");
      Instrmt_73.add_attribute("ID", "SecurityID_t_551005306"); // 2
      Instrmt_73_set.insert("SecurityID_t_551005306");
      Instrmt_73.add_attribute("Src", "8"); // 2
      Instrmt_73_set.insert("8");
      Instrmt_73.add_attribute("Prod", "13"); // 2
      Instrmt_73_set.insert("13");
      Instrmt_73.add_attribute("ProdCmplx", "ProductComplex_t_201252422"); // 2
      Instrmt_73_set.insert("ProductComplex_t_201252422");
      Instrmt_73.add_attribute("SecGrp", "SecurityGroup_t_942702749"); // 2
      Instrmt_73_set.insert("SecurityGroup_t_942702749");
      Instrmt_73.add_attribute("CFI", "CFICode_t_202398395"); // 2
      Instrmt_73_set.insert("CFICode_t_202398395");
      Instrmt_73.add_attribute("SecTyp", "CMB"); // 2
      Instrmt_73_set.insert("CMB");
      Instrmt_73.add_attribute("SubTyp", "SecuritySubType_t_2050048876"); // 2
      Instrmt_73_set.insert("SecuritySubType_t_2050048876");
      Instrmt_73.add_attribute("MMY", "1022028983"); // 2
      Instrmt_73_set.insert("1022028983");
      Instrmt_73.add_attribute("MatDt", "MaturityDate_t_391260143"); // 2
      Instrmt_73_set.insert("MaturityDate_t_391260143");
      Instrmt_73.add_attribute("MatTm", "1367500313"); // 2
      Instrmt_73_set.insert("1367500313");
      Instrmt_73.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1772962139"); // 2
      Instrmt_73_set.insert("SettleOnOpenFlag_t_1772962139");
      Instrmt_73.add_attribute("AsgnMeth", "255521470"); // 2
      Instrmt_73_set.insert("255521470");
      Instrmt_73.add_attribute("Status", "1"); // 2
      Instrmt_73_set.insert("1");
      Instrmt_73.add_attribute("CpnPmt", "CouponPaymentDate_t_680845425"); // 2
      Instrmt_73_set.insert("CouponPaymentDate_t_680845425");
      Instrmt_73.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_73_set.insert("FR");
      Instrmt_73.add_attribute("Snrty", "SD"); // 2
      Instrmt_73_set.insert("SD");
      Instrmt_73.add_attribute("NotlPctOut", "15717751.430000"); // 2
      Instrmt_73_set.insert("15717751.430000");
      Instrmt_73.add_attribute("OrigNotlPctOut", "12464576.610000"); // 2
      Instrmt_73_set.insert("12464576.610000");
      Instrmt_73.add_attribute("AttchPnt", "7350451.500000"); // 2
      Instrmt_73_set.insert("7350451.500000");
      Instrmt_73.add_attribute("DetchPnt", "21054896.960000"); // 2
      Instrmt_73_set.insert("21054896.960000");
      Instrmt_73.add_attribute("Issued", "IssueDate_t_821068048"); // 2
      Instrmt_73_set.insert("IssueDate_t_821068048");
      Instrmt_73.add_attribute("RepoCollSecTyp", "971612821"); // 2
      Instrmt_73_set.insert("971612821");
      Instrmt_73.add_attribute("RepoTrm", "1867139643"); // 2
      Instrmt_73_set.insert("1867139643");
      Instrmt_73.add_attribute("RepoRt", "19008420.090000"); // 2
      Instrmt_73_set.insert("19008420.090000");
      Instrmt_73.add_attribute("Fctr", "7976144.260000"); // 2
      Instrmt_73_set.insert("7976144.260000");
      Instrmt_73.add_attribute("CrdRtg", "CreditRating_t_1588597131"); // 2
      Instrmt_73_set.insert("CreditRating_t_1588597131");
      Instrmt_73.add_attribute("Rgstry", "InstrRegistry_t_696497337"); // 2
      Instrmt_73_set.insert("InstrRegistry_t_696497337");
      Instrmt_73.add_attribute("IssuCtry", "1460478165"); // 2
      Instrmt_73_set.insert("1460478165");
      Instrmt_73.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1386573023"); // 2
      Instrmt_73_set.insert("StateOrProvinceOfIssue_t_1386573023");
      Instrmt_73.add_attribute("Lcl", "LocaleOfIssue_t_454236462"); // 2
      Instrmt_73_set.insert("LocaleOfIssue_t_454236462");
      Instrmt_73.add_attribute("Redeem", "RedemptionDate_t_2011483472"); // 2
      Instrmt_73_set.insert("RedemptionDate_t_2011483472");
      Instrmt_73.add_attribute("StrkPx", "11596509.920000"); // 2
      Instrmt_73_set.insert("11596509.920000");
      Instrmt_73.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_73_set.insert("GBP");
      Instrmt_73.add_attribute("StrkMult", "21023537.420000"); // 2
      Instrmt_73_set.insert("21023537.420000");
      Instrmt_73.add_attribute("StrkValu", "4412854.440000"); // 2
      Instrmt_73_set.insert("4412854.440000");
      Instrmt_73.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_73_set.insert("1");
      Instrmt_73.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_73_set.insert("1");
      Instrmt_73.add_attribute("StrkPxBndryPrcsn", "14633144.270000"); // 2
      Instrmt_73_set.insert("14633144.270000");
      Instrmt_73.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_73_set.insert("1");
      Instrmt_73.add_attribute("OptAt", "1224935635"); // 2
      Instrmt_73_set.insert("1224935635");
      Instrmt_73.add_attribute("Mult", "10887929.180000"); // 2
      Instrmt_73_set.insert("10887929.180000");
      Instrmt_73.add_attribute("MultTyp", "2"); // 2
      Instrmt_73_set.insert("2");
      Instrmt_73.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_73_set.insert("3");
      Instrmt_73.add_attribute("MinPxIncr", "17696383.440000"); // 2
      Instrmt_73_set.insert("17696383.440000");
      Instrmt_73.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_908395282"); // 2
      Instrmt_73_set.insert("MinPriceIncrementAmount_t_908395282");
      Instrmt_73.add_attribute("UOM", "Bcf"); // 2
      Instrmt_73_set.insert("Bcf");
      Instrmt_73.add_attribute("UOMQty", "11939298.390000"); // 2
      Instrmt_73_set.insert("11939298.390000");
      Instrmt_73.add_attribute("PxUOM", "Alw"); // 2
      Instrmt_73_set.insert("Alw");
      Instrmt_73.add_attribute("PxUOMQty", "2799332.980000"); // 2
      Instrmt_73_set.insert("2799332.980000");
      Instrmt_73.add_attribute("SettlMeth", "P"); // 2
      Instrmt_73_set.insert("P");
      Instrmt_73.add_attribute("ExerStyle", "1"); // 2
      Instrmt_73_set.insert("1");
      Instrmt_73.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_73_set.insert("3");
      Instrmt_73.add_attribute("OptPayAmt", "OptPayoutAmount_t_871591882"); // 2
      Instrmt_73_set.insert("OptPayoutAmount_t_871591882");
      Instrmt_73.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_73_set.insert("INX");
      Instrmt_73.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_73_set.insert("EQTY");
      Instrmt_73.add_attribute("ListMeth", "1"); // 2
      Instrmt_73_set.insert("1");
      Instrmt_73.add_attribute("CapPx", "12782930.420000"); // 2
      Instrmt_73_set.insert("12782930.420000");
      Instrmt_73.add_attribute("FlrPx", "13621550.620000"); // 2
      Instrmt_73_set.insert("13621550.620000");
      Instrmt_73.add_attribute("PutCall", "1"); // 2
      Instrmt_73_set.insert("1");
      Instrmt_73.add_attribute("FlexInd", "false"); // 2
      Instrmt_73_set.insert("false");
      Instrmt_73.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_73_set.insert("true");
      Instrmt_73.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_73_set.insert("Mo");
      Instrmt_73.add_attribute("CpnRt", "19714165.540000"); // 2
      Instrmt_73_set.insert("19714165.540000");
      Instrmt_73.add_attribute("Exch", "SecurityExchange_t_1291407133"); // 2
      Instrmt_73_set.insert("SecurityExchange_t_1291407133");
      Instrmt_73.add_attribute("PosLmt", "666315827"); // 2
      Instrmt_73_set.insert("666315827");
      Instrmt_73.add_attribute("NTPosLmt", "265218350"); // 2
      Instrmt_73_set.insert("265218350");
      Instrmt_73.add_attribute("Issr", "Issuer_t_1492632065"); // 2
      Instrmt_73_set.insert("Issuer_t_1492632065");
      Instrmt_73.add_attribute("EncIssrLen", "523751150"); // 2
      Instrmt_73_set.insert("523751150");
      Instrmt_73.add_attribute("EncIssr", "EncodedIssuer_t_1728532777"); // 2
      Instrmt_73_set.insert("EncodedIssuer_t_1728532777");
      Instrmt_73.add_attribute("Desc", "SecurityDesc_t_2085117141"); // 2
      Instrmt_73_set.insert("SecurityDesc_t_2085117141");
      Instrmt_73.add_attribute("EncSecDescLen", "1748686785"); // 2
      Instrmt_73_set.insert("1748686785");
      Instrmt_73.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_669842047"); // 2
      Instrmt_73_set.insert("EncodedSecurityDesc_t_669842047");
      Instrmt_73.add_attribute("Pool", "Pool_t_785640039"); // 2
      Instrmt_73_set.insert("Pool_t_785640039");
      Instrmt_73.add_attribute("CSetMo", "1611924785"); // 2
      Instrmt_73_set.insert("1611924785");
      Instrmt_73.add_attribute("CPPgm", "99"); // 2
      Instrmt_73_set.insert("99");
      Instrmt_73.add_attribute("CPRegT", "CPRegType_t_1694035322"); // 2
      Instrmt_73_set.insert("CPRegType_t_1694035322");
      Instrmt_73.add_attribute("Dated", "DatedDate_t_1156812933"); // 2
      Instrmt_73_set.insert("DatedDate_t_1156812933");
      Instrmt_73.add_attribute("IntAcrl", "InterestAccrualDate_t_1485926582"); // 2
      Instrmt_73_set.insert("InterestAccrualDate_t_1485926582");
      all_values.push_back(Instrmt_73_set);
      all_compo_names.insert("Instrmt_73_set");

      {
        xml_element AID_76{"AID"};
        multiset<string> AID_76_set;
        AID_76.add_attribute("AltID", "SecurityAltID_t_1701404618"); // 3
        AID_76_set.insert("SecurityAltID_t_1701404618");
        AID_76.add_attribute("AltIDSrc", "L"); // 3
        AID_76_set.insert("L");
        all_values.push_back(AID_76_set);
        all_compo_names.insert("AID_76_set");

        Instrmt_73.add_element(AID_76);
      }
      {
        xml_element SecXML_76{"SecXML"};
        multiset<string> SecXML_76_set;
        SecXML_76.add_attribute("Schema", "SecurityXMLSchema_t_490378821"); // 3
        SecXML_76_set.insert("SecurityXMLSchema_t_490378821");
        all_values.push_back(SecXML_76_set);
        all_compo_names.insert("SecXML_76_set");

        Instrmt_73.add_element(SecXML_76);
      }
      {
        xml_element Evnt_76{"Evnt"};
        multiset<string> Evnt_76_set;
        Evnt_76.add_attribute("EventTyp", "14"); // 3
        Evnt_76_set.insert("14");
        Evnt_76.add_attribute("Dt", "EventDate_t_540808702"); // 3
        Evnt_76_set.insert("EventDate_t_540808702");
        Evnt_76.add_attribute("Tm", "EventTime_t_1361970703"); // 3
        Evnt_76_set.insert("EventTime_t_1361970703");
        Evnt_76.add_attribute("Px", "9641540.190000"); // 3
        Evnt_76_set.insert("9641540.190000");
        Evnt_76.add_attribute("Txt", "EventText_t_442485599"); // 3
        Evnt_76_set.insert("EventText_t_442485599");
        all_values.push_back(Evnt_76_set);
        all_compo_names.insert("Evnt_76_set");

        Instrmt_73.add_element(Evnt_76);
      }
      {
        xml_element Pty_382{"Pty"};
        multiset<string> Pty_382_set;
        Pty_382.add_attribute("ID", "InstrumentPartyID_t_1674676069"); // 3
        Pty_382_set.insert("InstrumentPartyID_t_1674676069");
        Pty_382.add_attribute("Src", "4"); // 3
        Pty_382_set.insert("4");
        Pty_382.add_attribute("R", "6"); // 3
        Pty_382_set.insert("6");
        all_values.push_back(Pty_382_set);
        all_compo_names.insert("Pty_382_set");

        {
          xml_element Sub_382{"Sub"};
          multiset<string> Sub_382_set;
          Sub_382.add_attribute("ID", "InstrumentPartySubID_t_1226470810"); // 4
          Sub_382_set.insert("InstrumentPartySubID_t_1226470810");
          Sub_382.add_attribute("Typ", "18"); // 4
          Sub_382_set.insert("18");
          all_values.push_back(Sub_382_set);
          all_compo_names.insert("Sub_382_set");

          Pty_382.add_element(Sub_382);
        }
        Instrmt_73.add_element(Pty_382);
      }
      {
        xml_element CmplxEvnt_73{"CmplxEvnt"};
        multiset<string> CmplxEvnt_73_set;
        CmplxEvnt_73.add_attribute("Typ", "7"); // 3
        CmplxEvnt_73_set.insert("7");
        CmplxEvnt_73.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1937916543"); // 3
        CmplxEvnt_73_set.insert("ComplexOptPayoutAmount_t_1937916543");
        CmplxEvnt_73.add_attribute("Px", "16514258.240000"); // 3
        CmplxEvnt_73_set.insert("16514258.240000");
        CmplxEvnt_73.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_73_set.insert("1");
        CmplxEvnt_73.add_attribute("PxBndryPrcsn", "4567487.230000"); // 3
        CmplxEvnt_73_set.insert("4567487.230000");
        CmplxEvnt_73.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_73_set.insert("2");
        CmplxEvnt_73.add_attribute("Cond", "1"); // 3
        CmplxEvnt_73_set.insert("1");
        all_values.push_back(CmplxEvnt_73_set);
        all_compo_names.insert("CmplxEvnt_73_set");

        {
          xml_element EvntDts_73{"EvntDts"};
          multiset<string> EvntDts_73_set;
          EvntDts_73.add_attribute("StartDt", "ComplexEventStartDate_t_980499873"); // 4
          EvntDts_73_set.insert("ComplexEventStartDate_t_980499873");
          EvntDts_73.add_attribute("EndDt", "ComplexEventEndDate_t_1497693303"); // 4
          EvntDts_73_set.insert("ComplexEventEndDate_t_1497693303");
          all_values.push_back(EvntDts_73_set);
          all_compo_names.insert("EvntDts_73_set");

          {
            xml_element EvntTms_73{"EvntTms"};
            multiset<string> EvntTms_73_set;
            EvntTms_73.add_attribute("StartTm", "1457500944"); // 5
            EvntTms_73_set.insert("1457500944");
            EvntTms_73.add_attribute("EndTm", "581703010"); // 5
            EvntTms_73_set.insert("581703010");
            all_values.push_back(EvntTms_73_set);
            all_compo_names.insert("EvntTms_73_set");

            EvntDts_73.add_element(EvntTms_73);
          }
          CmplxEvnt_73.add_element(EvntDts_73);
        }
        Instrmt_73.add_element(CmplxEvnt_73);
      }
      SecL_2.add_element(Instrmt_73);
    }
    {
      xml_element InstrmtExt_12{"InstrmtExt"};
      multiset<string> InstrmtExt_12_set;
      InstrmtExt_12.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_12_set.insert("2");
      InstrmtExt_12.add_attribute("PctAtRisk", "956573.350000"); // 2
      InstrmtExt_12_set.insert("956573.350000");
      all_values.push_back(InstrmtExt_12_set);
      all_compo_names.insert("InstrmtExt_12_set");

      {
        xml_element Attrb_22{"Attrb"};
        multiset<string> Attrb_22_set;
        Attrb_22.add_attribute("Typ", "17"); // 3
        Attrb_22_set.insert("17");
        Attrb_22.add_attribute("Val", "InstrAttribValue_t_312048446"); // 3
        Attrb_22_set.insert("InstrAttribValue_t_312048446");
        all_values.push_back(Attrb_22_set);
        all_compo_names.insert("Attrb_22_set");

        InstrmtExt_12.add_element(Attrb_22);
      }
      SecL_2.add_element(InstrmtExt_12);
    }
    {
      xml_element FinDetls_27{"FinDetls"};
      multiset<string> FinDetls_27_set;
      FinDetls_27.add_attribute("AgmtDesc", "AgreementDesc_t_1789692657"); // 2
      FinDetls_27_set.insert("AgreementDesc_t_1789692657");
      FinDetls_27.add_attribute("AgmtID", "AgreementID_t_1202957081"); // 2
      FinDetls_27_set.insert("AgreementID_t_1202957081");
      FinDetls_27.add_attribute("AgmtDt", "AgreementDate_t_1797975029"); // 2
      FinDetls_27_set.insert("AgreementDate_t_1797975029");
      FinDetls_27.add_attribute("AgmtCcy", "JPY"); // 2
      FinDetls_27_set.insert("JPY");
      FinDetls_27.add_attribute("TrmTyp", "3"); // 2
      FinDetls_27_set.insert("3");
      FinDetls_27.add_attribute("StartDt", "StartDate_t_1725971941"); // 2
      FinDetls_27_set.insert("StartDate_t_1725971941");
      FinDetls_27.add_attribute("EndDt", "EndDate_t_1033028366"); // 2
      FinDetls_27_set.insert("EndDate_t_1033028366");
      FinDetls_27.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_27_set.insert("2");
      FinDetls_27.add_attribute("MgnRatio", "5426423.120000"); // 2
      FinDetls_27_set.insert("5426423.120000");
      all_values.push_back(FinDetls_27_set);
      all_compo_names.insert("FinDetls_27_set");

      SecL_2.add_element(FinDetls_27);
    }
    {
      xml_element SecTrdgRules_8{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_10{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_10_set;
        BaseTrdgRules_10.add_attribute("ExpirationCycle", "1"); // 3
        BaseTrdgRules_10_set.insert("1");
        BaseTrdgRules_10.add_attribute("MinTrdVol", "10300333.270000"); // 3
        BaseTrdgRules_10_set.insert("10300333.270000");
        BaseTrdgRules_10.add_attribute("MaxTrdVol", "6376057.260000"); // 3
        BaseTrdgRules_10_set.insert("6376057.260000");
        BaseTrdgRules_10.add_attribute("MxPxVar", "11326709.780000"); // 3
        BaseTrdgRules_10_set.insert("11326709.780000");
        BaseTrdgRules_10.add_attribute("ImpldMktInd", "1"); // 3
        BaseTrdgRules_10_set.insert("1");
        BaseTrdgRules_10.add_attribute("TrdCcy", "GBP"); // 3
        BaseTrdgRules_10_set.insert("GBP");
        BaseTrdgRules_10.add_attribute("RndLot", "20469370.320000"); // 3
        BaseTrdgRules_10_set.insert("20469370.320000");
        BaseTrdgRules_10.add_attribute("MlegModel", "1"); // 3
        BaseTrdgRules_10_set.insert("1");
        BaseTrdgRules_10.add_attribute("MlegPxMeth", "1"); // 3
        BaseTrdgRules_10_set.insert("1");
        BaseTrdgRules_10.add_attribute("PxTyp", "19"); // 3
        BaseTrdgRules_10_set.insert("19");
        all_values.push_back(BaseTrdgRules_10_set);
        all_compo_names.insert("BaseTrdgRules_10_set");

        {
          xml_element TickRules_10{"TickRules"};
          multiset<string> TickRules_10_set;
          TickRules_10.add_attribute("StartTickPxRng", "17382013.470000"); // 4
          TickRules_10_set.insert("17382013.470000");
          TickRules_10.add_attribute("EndTickPxRng", "14156020.660000"); // 4
          TickRules_10_set.insert("14156020.660000");
          TickRules_10.add_attribute("TickIncr", "13367019.800000"); // 4
          TickRules_10_set.insert("13367019.800000");
          TickRules_10.add_attribute("TickRuleTyp", "3"); // 4
          TickRules_10_set.insert("3");
          all_values.push_back(TickRules_10_set);
          all_compo_names.insert("TickRules_10_set");

          BaseTrdgRules_10.add_element(TickRules_10);
        }
        {
          xml_element LotTypeRules_10{"LotTypeRules"};
          multiset<string> LotTypeRules_10_set;
          LotTypeRules_10.add_attribute("LotTyp", "3"); // 4
          LotTypeRules_10_set.insert("3");
          LotTypeRules_10.add_attribute("MinLotSz", "19184049.910000"); // 4
          LotTypeRules_10_set.insert("19184049.910000");
          all_values.push_back(LotTypeRules_10_set);
          all_compo_names.insert("LotTypeRules_10_set");

          BaseTrdgRules_10.add_element(LotTypeRules_10);
        }
        {
          xml_element PxLmts_10{"PxLmts"};
          multiset<string> PxLmts_10_set;
          PxLmts_10.add_attribute("PxLmtTyp", "2"); // 4
          PxLmts_10_set.insert("2");
          PxLmts_10.add_attribute("LowLmtPx", "8212766.970000"); // 4
          PxLmts_10_set.insert("8212766.970000");
          PxLmts_10.add_attribute("HiLmtPx", "19645491.390000"); // 4
          PxLmts_10_set.insert("19645491.390000");
          PxLmts_10.add_attribute("TrdgRefPx", "14205111.520000"); // 4
          PxLmts_10_set.insert("14205111.520000");
          all_values.push_back(PxLmts_10_set);
          all_compo_names.insert("PxLmts_10_set");

          BaseTrdgRules_10.add_element(PxLmts_10);
        }
        SecTrdgRules_8.add_element(BaseTrdgRules_10);
      }
      {
        xml_element TrdgSesRulesGrp_8{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_8_set;
        TrdgSesRulesGrp_8.add_attribute("SesID", "6"); // 3
        TrdgSesRulesGrp_8_set.insert("6");
        TrdgSesRulesGrp_8.add_attribute("SesSub", "3"); // 3
        TrdgSesRulesGrp_8_set.insert("3");
        all_values.push_back(TrdgSesRulesGrp_8_set);
        all_compo_names.insert("TrdgSesRulesGrp_8_set");

        {
          xml_element TrdgSesRules_8{"TrdgSesRules"};
          {
            xml_element OrdTypRules_11{"OrdTypRules"};
            multiset<string> OrdTypRules_11_set;
            OrdTypRules_11.add_attribute("OrdTyp", "E"); // 5
            OrdTypRules_11_set.insert("E");
            all_values.push_back(OrdTypRules_11_set);
            all_compo_names.insert("OrdTypRules_11_set");

            TrdgSesRules_8.add_element(OrdTypRules_11);
          }
          {
            xml_element TmInForceRules_12{"TmInForceRules"};
            multiset<string> TmInForceRules_12_set;
            TmInForceRules_12.add_attribute("TmInForce", "4"); // 5
            TmInForceRules_12_set.insert("4");
            all_values.push_back(TmInForceRules_12_set);
            all_compo_names.insert("TmInForceRules_12_set");

            TrdgSesRules_8.add_element(TmInForceRules_12);
          }
          {
            xml_element ExecInstRules_12{"ExecInstRules"};
            multiset<string> ExecInstRules_12_set;
            ExecInstRules_12.add_attribute("ExecInstValu", "W"); // 5
            ExecInstRules_12_set.insert("W");
            all_values.push_back(ExecInstRules_12_set);
            all_compo_names.insert("ExecInstRules_12_set");

            TrdgSesRules_8.add_element(ExecInstRules_12);
          }
          {
            xml_element MtchRules_8{"MtchRules"};
            multiset<string> MtchRules_8_set;
            MtchRules_8.add_attribute("MtchAlgo", "MatchAlgorithm_t_1211872736"); // 5
            MtchRules_8_set.insert("MatchAlgorithm_t_1211872736");
            MtchRules_8.add_attribute("MtchTyp", "5"); // 5
            MtchRules_8_set.insert("5");
            all_values.push_back(MtchRules_8_set);
            all_compo_names.insert("MtchRules_8_set");

            TrdgSesRules_8.add_element(MtchRules_8);
          }
          {
            xml_element MDFeedTyps_8{"MDFeedTyps"};
            multiset<string> MDFeedTyps_8_set;
            MDFeedTyps_8.add_attribute("MDFeedTyp", "MDFeedType_t_397786954"); // 5
            MDFeedTyps_8_set.insert("MDFeedType_t_397786954");
            MDFeedTyps_8.add_attribute("MktDepth", "567229994"); // 5
            MDFeedTyps_8_set.insert("567229994");
            MDFeedTyps_8.add_attribute("MDBkTyp", "2"); // 5
            MDFeedTyps_8_set.insert("2");
            all_values.push_back(MDFeedTyps_8_set);
            all_compo_names.insert("MDFeedTyps_8_set");

            TrdgSesRules_8.add_element(MDFeedTyps_8);
          }
          TrdgSesRulesGrp_8.add_element(TrdgSesRules_8);
        }
        SecTrdgRules_8.add_element(TrdgSesRulesGrp_8);
      }
      {
        xml_element Attrb_23{"Attrb"};
        multiset<string> Attrb_23_set;
        Attrb_23.add_attribute("Typ", "29"); // 3
        Attrb_23_set.insert("29");
        Attrb_23.add_attribute("Val", "NestedInstrAttribValue_t_1597263321"); // 3
        Attrb_23_set.insert("NestedInstrAttribValue_t_1597263321");
        all_values.push_back(Attrb_23_set);
        all_compo_names.insert("Attrb_23_set");

        SecTrdgRules_8.add_element(Attrb_23);
      }
      SecL_2.add_element(SecTrdgRules_8);
    }
    {
      xml_element StrkRules_8{"StrkRules"};
      multiset<string> StrkRules_8_set;
      StrkRules_8.add_attribute("StrkRule", "StrikeRuleID_t_418352018"); // 2
      StrkRules_8_set.insert("StrikeRuleID_t_418352018");
      StrkRules_8.add_attribute("StartStrkPxRng", "8584882.490000"); // 2
      StrkRules_8_set.insert("8584882.490000");
      StrkRules_8.add_attribute("EndStrkPxRng", "17062838.100000"); // 2
      StrkRules_8_set.insert("17062838.100000");
      StrkRules_8.add_attribute("StrkIncr", "7359670.150000"); // 2
      StrkRules_8_set.insert("7359670.150000");
      StrkRules_8.add_attribute("StrkExrStyle", "0"); // 2
      StrkRules_8_set.insert("0");
      all_values.push_back(StrkRules_8_set);
      all_compo_names.insert("StrkRules_8_set");

      {
        xml_element MatRules_8{"MatRules"};
        multiset<string> MatRules_8_set;
        MatRules_8.add_attribute("MatRuleID", "MaturityRuleID_t_1605737194"); // 3
        MatRules_8_set.insert("MaturityRuleID_t_1605737194");
        MatRules_8.add_attribute("MMYFmt", "0"); // 3
        MatRules_8_set.insert("0");
        MatRules_8.add_attribute("MMYIncrUnits", "3"); // 3
        MatRules_8_set.insert("3");
        MatRules_8.add_attribute("StartMMY", "1961939302"); // 3
        MatRules_8_set.insert("1961939302");
        MatRules_8.add_attribute("EndMMY", "148241887"); // 3
        MatRules_8_set.insert("148241887");
        MatRules_8.add_attribute("MMYIncr", "2038324161"); // 3
        MatRules_8_set.insert("2038324161");
        all_values.push_back(MatRules_8_set);
        all_compo_names.insert("MatRules_8_set");

        StrkRules_8.add_element(MatRules_8);
      }
      SecL_2.add_element(StrkRules_8);
    }
    {
      xml_element Undly_106{"Undly"};
      multiset<string> Undly_106_set;
      Undly_106.add_attribute("Sym", "UnderlyingSymbol_t_1151157634"); // 2
      Undly_106_set.insert("UnderlyingSymbol_t_1151157634");
      Undly_106.add_attribute("Sfx", "CD"); // 2
      Undly_106_set.insert("CD");
      Undly_106.add_attribute("ID", "UnderlyingSecurityID_t_616459875"); // 2
      Undly_106_set.insert("UnderlyingSecurityID_t_616459875");
      Undly_106.add_attribute("Src", "I"); // 2
      Undly_106_set.insert("I");
      Undly_106.add_attribute("Prod", "4"); // 2
      Undly_106_set.insert("4");
      Undly_106.add_attribute("CFI", "UnderlyingCFICode_t_1437736573"); // 2
      Undly_106_set.insert("UnderlyingCFICode_t_1437736573");
      Undly_106.add_attribute("SecTyp", "DEFLTED"); // 2
      Undly_106_set.insert("DEFLTED");
      Undly_106.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1618143101"); // 2
      Undly_106_set.insert("UnderlyingSecuritySubType_t_1618143101");
      Undly_106.add_attribute("MMY", "1901222280"); // 2
      Undly_106_set.insert("1901222280");
      Undly_106.add_attribute("Mat", "UnderlyingMaturityDate_t_1759167040"); // 2
      Undly_106_set.insert("UnderlyingMaturityDate_t_1759167040");
      Undly_106.add_attribute("MatTm", "541661986"); // 2
      Undly_106_set.insert("541661986");
      Undly_106.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1560837966"); // 2
      Undly_106_set.insert("UnderlyingCouponPaymentDate_t_1560837966");
      Undly_106.add_attribute("RestrctTyp", "FR"); // 2
      Undly_106_set.insert("FR");
      Undly_106.add_attribute("Snrty", "SD"); // 2
      Undly_106_set.insert("SD");
      Undly_106.add_attribute("NotlPctOut", "7989419.460000"); // 2
      Undly_106_set.insert("7989419.460000");
      Undly_106.add_attribute("OrigNotlPctOut", "15217125.820000"); // 2
      Undly_106_set.insert("15217125.820000");
      Undly_106.add_attribute("AttchPnt", "1732810.680000"); // 2
      Undly_106_set.insert("1732810.680000");
      Undly_106.add_attribute("DetchPnt", "5796882.390000"); // 2
      Undly_106_set.insert("5796882.390000");
      Undly_106.add_attribute("Issued", "UnderlyingIssueDate_t_1247529853"); // 2
      Undly_106_set.insert("UnderlyingIssueDate_t_1247529853");
      Undly_106.add_attribute("RepoCollSecTyp", "1770544389"); // 2
      Undly_106_set.insert("1770544389");
      Undly_106.add_attribute("RepoTrm", "998040257"); // 2
      Undly_106_set.insert("998040257");
      Undly_106.add_attribute("RepoRt", "21060181.030000"); // 2
      Undly_106_set.insert("21060181.030000");
      Undly_106.add_attribute("Fctr", "13293445.510000"); // 2
      Undly_106_set.insert("13293445.510000");
      Undly_106.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1734007272"); // 2
      Undly_106_set.insert("UnderlyingCreditRating_t_1734007272");
      Undly_106.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_685521935"); // 2
      Undly_106_set.insert("UnderlyingInstrRegistry_t_685521935");
      Undly_106.add_attribute("Ctry", "787598098"); // 2
      Undly_106_set.insert("787598098");
      Undly_106.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_144047812"); // 2
      Undly_106_set.insert("UnderlyingStateOrProvinceOfIssue_t_144047812");
      Undly_106.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1308244030"); // 2
      Undly_106_set.insert("UnderlyingLocaleOfIssue_t_1308244030");
      Undly_106.add_attribute("Redeem", "UnderlyingRedemptionDate_t_602053752"); // 2
      Undly_106_set.insert("UnderlyingRedemptionDate_t_602053752");
      Undly_106.add_attribute("StrkPx", "2922897.000000"); // 2
      Undly_106_set.insert("2922897.000000");
      Undly_106.add_attribute("StrkCcy", "JPY"); // 2
      Undly_106_set.insert("JPY");
      Undly_106.add_attribute("OptA", "1528942590"); // 2
      Undly_106_set.insert("1528942590");
      Undly_106.add_attribute("Mult", "18155444.190000"); // 2
      Undly_106_set.insert("18155444.190000");
      Undly_106.add_attribute("MultTyp", "0"); // 2
      Undly_106_set.insert("0");
      Undly_106.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_106_set.insert("4");
      Undly_106.add_attribute("UOM", "Bbl"); // 2
      Undly_106_set.insert("Bbl");
      Undly_106.add_attribute("UOMQty", "12669511.840000"); // 2
      Undly_106_set.insert("12669511.840000");
      Undly_106.add_attribute("PxUOM", "MMbbl"); // 2
      Undly_106_set.insert("MMbbl");
      Undly_106.add_attribute("PxUOMQty", "8595359.760000"); // 2
      Undly_106_set.insert("8595359.760000");
      Undly_106.add_attribute("TmUnit", "H"); // 2
      Undly_106_set.insert("H");
      Undly_106.add_attribute("ExerStyle", "2"); // 2
      Undly_106_set.insert("2");
      Undly_106.add_attribute("CpnRt", "2728902.950000"); // 2
      Undly_106_set.insert("2728902.950000");
      Undly_106.add_attribute("Exch", "UnderlyingSecurityExchange_t_2002560205"); // 2
      Undly_106_set.insert("UnderlyingSecurityExchange_t_2002560205");
      Undly_106.add_attribute("Issr", "UnderlyingIssuer_t_1344947053"); // 2
      Undly_106_set.insert("UnderlyingIssuer_t_1344947053");
      Undly_106.add_attribute("EncUndIssrLen", "1071832241"); // 2
      Undly_106_set.insert("1071832241");
      Undly_106.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1376789140"); // 2
      Undly_106_set.insert("EncodedUnderlyingIssuer_t_1376789140");
      Undly_106.add_attribute("Desc", "UnderlyingSecurityDesc_t_1518228121"); // 2
      Undly_106_set.insert("UnderlyingSecurityDesc_t_1518228121");
      Undly_106.add_attribute("EncUndSecDescLen", "1651520480"); // 2
      Undly_106_set.insert("1651520480");
      Undly_106.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_476835345"); // 2
      Undly_106_set.insert("EncodedUnderlyingSecurityDesc_t_476835345");
      Undly_106.add_attribute("CPPgm", "UnderlyingCPProgram_t_1141288863"); // 2
      Undly_106_set.insert("UnderlyingCPProgram_t_1141288863");
      Undly_106.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_502077090"); // 2
      Undly_106_set.insert("UnderlyingCPRegType_t_502077090");
      Undly_106.add_attribute("AllocPct", "4353698.000000"); // 2
      Undly_106_set.insert("4353698.000000");
      Undly_106.add_attribute("Ccy", "JPY"); // 2
      Undly_106_set.insert("JPY");
      Undly_106.add_attribute("Qty", "11208917.350000"); // 2
      Undly_106_set.insert("11208917.350000");
      Undly_106.add_attribute("SettlTyp", "2"); // 2
      Undly_106_set.insert("2");
      Undly_106.add_attribute("CashAmt", "UnderlyingCashAmount_t_232648527"); // 2
      Undly_106_set.insert("UnderlyingCashAmount_t_232648527");
      Undly_106.add_attribute("CashTyp", "FIXED"); // 2
      Undly_106_set.insert("FIXED");
      Undly_106.add_attribute("Px", "17128016.160000"); // 2
      Undly_106_set.insert("17128016.160000");
      Undly_106.add_attribute("DirtPx", "5249382.270000"); // 2
      Undly_106_set.insert("5249382.270000");
      Undly_106.add_attribute("EndPx", "14807366.620000"); // 2
      Undly_106_set.insert("14807366.620000");
      Undly_106.add_attribute("StartVal", "UnderlyingStartValue_t_1318529355"); // 2
      Undly_106_set.insert("UnderlyingStartValue_t_1318529355");
      Undly_106.add_attribute("CurVal", "UnderlyingCurrentValue_t_2053880817"); // 2
      Undly_106_set.insert("UnderlyingCurrentValue_t_2053880817");
      Undly_106.add_attribute("EndVal", "UnderlyingEndValue_t_1148797433"); // 2
      Undly_106_set.insert("UnderlyingEndValue_t_1148797433");
      Undly_106.add_attribute("AdjQty", "18463360.710000"); // 2
      Undly_106_set.insert("18463360.710000");
      Undly_106.add_attribute("FxRate", "16329717.080000"); // 2
      Undly_106_set.insert("16329717.080000");
      Undly_106.add_attribute("FxRateCalc", "M"); // 2
      Undly_106_set.insert("M");
      Undly_106.add_attribute("CapValu", "UnderlyingCapValue_t_965803607"); // 2
      Undly_106_set.insert("UnderlyingCapValue_t_965803607");
      Undly_106.add_attribute("SetMeth", "UnderlyingSettlMethod_t_682722052"); // 2
      Undly_106_set.insert("UnderlyingSettlMethod_t_682722052");
      Undly_106.add_attribute("PutCall", "966647106"); // 2
      Undly_106_set.insert("966647106");
      all_values.push_back(Undly_106_set);
      all_compo_names.insert("Undly_106_set");

      {
        xml_element UndAID_106{"UndAID"};
        multiset<string> UndAID_106_set;
        UndAID_106.add_attribute("AltID", "UnderlyingSecurityAltID_t_1844438184"); // 3
        UndAID_106_set.insert("UnderlyingSecurityAltID_t_1844438184");
        UndAID_106.add_attribute("AltIDSrc", "I"); // 3
        UndAID_106_set.insert("I");
        all_values.push_back(UndAID_106_set);
        all_compo_names.insert("UndAID_106_set");

        Undly_106.add_element(UndAID_106);
      }
      {
        xml_element Stip_167{"Stip"};
        multiset<string> Stip_167_set;
        Stip_167.add_attribute("Typ", "PURPOSE"); // 3
        Stip_167_set.insert("PURPOSE");
        Stip_167.add_attribute("Val", "UnderlyingStipValue_t_1699514742"); // 3
        Stip_167_set.insert("UnderlyingStipValue_t_1699514742");
        all_values.push_back(Stip_167_set);
        all_compo_names.insert("Stip_167_set");

        Undly_106.add_element(Stip_167);
      }
      {
        xml_element Pty_383{"Pty"};
        multiset<string> Pty_383_set;
        Pty_383.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1619081436"); // 3
        Pty_383_set.insert("UnderlyingInstrumentPartyID_t_1619081436");
        Pty_383.add_attribute("Src", "A"); // 3
        Pty_383_set.insert("A");
        Pty_383.add_attribute("R", "64"); // 3
        Pty_383_set.insert("64");
        all_values.push_back(Pty_383_set);
        all_compo_names.insert("Pty_383_set");

        {
          xml_element Sub_383{"Sub"};
          multiset<string> Sub_383_set;
          Sub_383.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_989825909"); // 4
          Sub_383_set.insert("UnderlyingInstrumentPartySubID_t_989825909");
          Sub_383.add_attribute("Typ", "22"); // 4
          Sub_383_set.insert("22");
          all_values.push_back(Sub_383_set);
          all_compo_names.insert("Sub_383_set");

          Pty_383.add_element(Sub_383);
        }
        Undly_106.add_element(Pty_383);
      }
      SecL_2.add_element(Undly_106);
    }
    {
      xml_element Stip_168{"Stip"};
      multiset<string> Stip_168_set;
      Stip_168.add_attribute("Typ", "YIELD"); // 2
      Stip_168_set.insert("YIELD");
      Stip_168.add_attribute("Val", "StipulationValue_t_2131114772"); // 2
      Stip_168_set.insert("StipulationValue_t_2131114772");
      all_values.push_back(Stip_168_set);
      all_compo_names.insert("Stip_168_set");

      SecL_2.add_element(Stip_168);
    }
    {
      xml_element SecLstUpdRelSymsLegGrp_0{"SecLstUpdRelSymsLegGrp"};
      multiset<string> SecLstUpdRelSymsLegGrp_0_set;
      SecLstUpdRelSymsLegGrp_0.add_attribute("SwapTyp", "2"); // 2
      SecLstUpdRelSymsLegGrp_0_set.insert("2");
      SecLstUpdRelSymsLegGrp_0.add_attribute("SettlTyp", "8"); // 2
      SecLstUpdRelSymsLegGrp_0_set.insert("8");
      all_values.push_back(SecLstUpdRelSymsLegGrp_0_set);
      all_compo_names.insert("SecLstUpdRelSymsLegGrp_0_set");

      {
        xml_element Leg_91{"Leg"};
        multiset<string> Leg_91_set;
        Leg_91.add_attribute("Sym", "LegSymbol_t_306780891"); // 3
        Leg_91_set.insert("LegSymbol_t_306780891");
        Leg_91.add_attribute("Sfx", "CD"); // 3
        Leg_91_set.insert("CD");
        Leg_91.add_attribute("ID", "LegSecurityID_t_814433467"); // 3
        Leg_91_set.insert("LegSecurityID_t_814433467");
        Leg_91.add_attribute("Src", "6"); // 3
        Leg_91_set.insert("6");
        Leg_91.add_attribute("Prod", "8"); // 3
        Leg_91_set.insert("8");
        Leg_91.add_attribute("CFI", "LegCFICode_t_1096085585"); // 3
        Leg_91_set.insert("LegCFICode_t_1096085585");
        Leg_91.add_attribute("SecTyp", "RVLVTRM"); // 3
        Leg_91_set.insert("RVLVTRM");
        Leg_91.add_attribute("SecSubTyp", "LegSecuritySubType_t_1016187386"); // 3
        Leg_91_set.insert("LegSecuritySubType_t_1016187386");
        Leg_91.add_attribute("MMY", "429338599"); // 3
        Leg_91_set.insert("429338599");
        Leg_91.add_attribute("Mat", "LegMaturityDate_t_153892431"); // 3
        Leg_91_set.insert("LegMaturityDate_t_153892431");
        Leg_91.add_attribute("MatTm", "922584555"); // 3
        Leg_91_set.insert("922584555");
        Leg_91.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1578136033"); // 3
        Leg_91_set.insert("LegCouponPaymentDate_t_1578136033");
        Leg_91.add_attribute("Issued", "LegIssueDate_t_2000228502"); // 3
        Leg_91_set.insert("LegIssueDate_t_2000228502");
        Leg_91.add_attribute("RepoCollSecTyp", "408072616"); // 3
        Leg_91_set.insert("408072616");
        Leg_91.add_attribute("RepoTrm", "1685247163"); // 3
        Leg_91_set.insert("1685247163");
        Leg_91.add_attribute("RepoRt", "8185484.610000"); // 3
        Leg_91_set.insert("8185484.610000");
        Leg_91.add_attribute("Fctr", "10907946.680000"); // 3
        Leg_91_set.insert("10907946.680000");
        Leg_91.add_attribute("CrdRtg", "LegCreditRating_t_504410621"); // 3
        Leg_91_set.insert("LegCreditRating_t_504410621");
        Leg_91.add_attribute("Rgstry", "LegInstrRegistry_t_515502998"); // 3
        Leg_91_set.insert("LegInstrRegistry_t_515502998");
        Leg_91.add_attribute("Ctry", "1364929051"); // 3
        Leg_91_set.insert("1364929051");
        Leg_91.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1743948023"); // 3
        Leg_91_set.insert("LegStateOrProvinceOfIssue_t_1743948023");
        Leg_91.add_attribute("Lcl", "LegLocaleOfIssue_t_67534092"); // 3
        Leg_91_set.insert("LegLocaleOfIssue_t_67534092");
        Leg_91.add_attribute("Redeem", "LegRedemptionDate_t_836526839"); // 3
        Leg_91_set.insert("LegRedemptionDate_t_836526839");
        Leg_91.add_attribute("Strk", "19078340.180000"); // 3
        Leg_91_set.insert("19078340.180000");
        Leg_91.add_attribute("StrkCcy", "CAN"); // 3
        Leg_91_set.insert("CAN");
        Leg_91.add_attribute("OptA", "1575756845"); // 3
        Leg_91_set.insert("1575756845");
        Leg_91.add_attribute("Cmult", "2545262.570000"); // 3
        Leg_91_set.insert("2545262.570000");
        Leg_91.add_attribute("MultTyp", "2"); // 3
        Leg_91_set.insert("2");
        Leg_91.add_attribute("FlowSchedTyp", "3"); // 3
        Leg_91_set.insert("3");
        Leg_91.add_attribute("UOM", "Bcf"); // 3
        Leg_91_set.insert("Bcf");
        Leg_91.add_attribute("UOMQty", "21167647.640000"); // 3
        Leg_91_set.insert("21167647.640000");
        Leg_91.add_attribute("PxUOM", "MMBtu"); // 3
        Leg_91_set.insert("MMBtu");
        Leg_91.add_attribute("PxUOMQty", "7625014.570000"); // 3
        Leg_91_set.insert("7625014.570000");
        Leg_91.add_attribute("TmUnit", "S"); // 3
        Leg_91_set.insert("S");
        Leg_91.add_attribute("ExerStyle", "2"); // 3
        Leg_91_set.insert("2");
        Leg_91.add_attribute("CpnRt", "18585870.420000"); // 3
        Leg_91_set.insert("18585870.420000");
        Leg_91.add_attribute("Exch", "LegSecurityExchange_t_222172948"); // 3
        Leg_91_set.insert("LegSecurityExchange_t_222172948");
        Leg_91.add_attribute("Issr", "LegIssuer_t_1364310292"); // 3
        Leg_91_set.insert("LegIssuer_t_1364310292");
        Leg_91.add_attribute("EncLegIssrLen", "140441994"); // 3
        Leg_91_set.insert("140441994");
        Leg_91.add_attribute("EncLegIssr", "EncodedLegIssuer_t_376065379"); // 3
        Leg_91_set.insert("EncodedLegIssuer_t_376065379");
        Leg_91.add_attribute("Desc", "LegSecurityDesc_t_139411199"); // 3
        Leg_91_set.insert("LegSecurityDesc_t_139411199");
        Leg_91.add_attribute("EncLegSecDescLen", "1718578027"); // 3
        Leg_91_set.insert("1718578027");
        Leg_91.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_228810233"); // 3
        Leg_91_set.insert("EncodedLegSecurityDesc_t_228810233");
        Leg_91.add_attribute("RatioQty", "5474838.150000"); // 3
        Leg_91_set.insert("5474838.150000");
        Leg_91.add_attribute("Side", "7"); // 3
        Leg_91_set.insert("7");
        Leg_91.add_attribute("Ccy", "USD"); // 3
        Leg_91_set.insert("USD");
        Leg_91.add_attribute("Pool", "LegPool_t_1760752163"); // 3
        Leg_91_set.insert("LegPool_t_1760752163");
        Leg_91.add_attribute("Dated", "LegDatedDate_t_1562861692"); // 3
        Leg_91_set.insert("LegDatedDate_t_1562861692");
        Leg_91.add_attribute("CSetMo", "855723887"); // 3
        Leg_91_set.insert("855723887");
        Leg_91.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1357216538"); // 3
        Leg_91_set.insert("LegInterestAccrualDate_t_1357216538");
        Leg_91.add_attribute("PutCall", "1630395784"); // 3
        Leg_91_set.insert("1630395784");
        Leg_91.add_attribute("LegOptionRatio", "16922507.270000"); // 3
        Leg_91_set.insert("16922507.270000");
        Leg_91.add_attribute("Px", "11175669.080000"); // 3
        Leg_91_set.insert("11175669.080000");
        all_values.push_back(Leg_91_set);
        all_compo_names.insert("Leg_91_set");

        {
          xml_element LegAID_88{"LegAID"};
          multiset<string> LegAID_88_set;
          LegAID_88.add_attribute("SecAltID", "LegSecurityAltID_t_479266462"); // 4
          LegAID_88_set.insert("LegSecurityAltID_t_479266462");
          LegAID_88.add_attribute("SecAltIDSrc", "D"); // 4
          LegAID_88_set.insert("D");
          all_values.push_back(LegAID_88_set);
          all_compo_names.insert("LegAID_88_set");

          Leg_91.add_element(LegAID_88);
        }
        SecLstUpdRelSymsLegGrp_0.add_element(Leg_91);
      }
      {
        xml_element Stip_169{"Stip"};
        multiset<string> Stip_169_set;
        Stip_169.add_attribute("StipTyp", "MININCR"); // 3
        Stip_169_set.insert("MININCR");
        Stip_169.add_attribute("StipVal", "LegStipulationValue_t_733792720"); // 3
        Stip_169_set.insert("LegStipulationValue_t_733792720");
        all_values.push_back(Stip_169_set);
        all_compo_names.insert("Stip_169_set");

        SecLstUpdRelSymsLegGrp_0.add_element(Stip_169);
      }
      {
        xml_element BnchmkCurve_7{"BnchmkCurve"};
        multiset<string> BnchmkCurve_7_set;
        BnchmkCurve_7.add_attribute("Ccy", "EUR"); // 3
        BnchmkCurve_7_set.insert("EUR");
        BnchmkCurve_7.add_attribute("Name", "SONIA"); // 3
        BnchmkCurve_7_set.insert("SONIA");
        BnchmkCurve_7.add_attribute("Point", "LegBenchmarkCurvePoint_t_1002901170"); // 3
        BnchmkCurve_7_set.insert("LegBenchmarkCurvePoint_t_1002901170");
        BnchmkCurve_7.add_attribute("Px", "9869.680000"); // 3
        BnchmkCurve_7_set.insert("9869.680000");
        BnchmkCurve_7.add_attribute("PxTyp", "1444362166"); // 3
        BnchmkCurve_7_set.insert("1444362166");
        all_values.push_back(BnchmkCurve_7_set);
        all_compo_names.insert("BnchmkCurve_7_set");

        SecLstUpdRelSymsLegGrp_0.add_element(BnchmkCurve_7);
      }
      SecL_2.add_element(SecLstUpdRelSymsLegGrp_0);
    }
    {
      xml_element SprdBnchmkCurve_29{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_29_set;
      SprdBnchmkCurve_29.add_attribute("Spread", "2422273.940000"); // 2
      SprdBnchmkCurve_29_set.insert("2422273.940000");
      SprdBnchmkCurve_29.add_attribute("Ccy", "CHF"); // 2
      SprdBnchmkCurve_29_set.insert("CHF");
      SprdBnchmkCurve_29.add_attribute("Name", "MuniAAA"); // 2
      SprdBnchmkCurve_29_set.insert("MuniAAA");
      SprdBnchmkCurve_29.add_attribute("Point", "BenchmarkCurvePoint_t_1713420166"); // 2
      SprdBnchmkCurve_29_set.insert("BenchmarkCurvePoint_t_1713420166");
      SprdBnchmkCurve_29.add_attribute("Px", "12959075.550000"); // 2
      SprdBnchmkCurve_29_set.insert("12959075.550000");
      SprdBnchmkCurve_29.add_attribute("PxTyp", "10"); // 2
      SprdBnchmkCurve_29_set.insert("10");
      SprdBnchmkCurve_29.add_attribute("SecID", "BenchmarkSecurityID_t_1852831365"); // 2
      SprdBnchmkCurve_29_set.insert("BenchmarkSecurityID_t_1852831365");
      SprdBnchmkCurve_29.add_attribute("SecIDSrc", "J"); // 2
      SprdBnchmkCurve_29_set.insert("J");
      all_values.push_back(SprdBnchmkCurve_29_set);
      all_compo_names.insert("SprdBnchmkCurve_29_set");

      SecL_2.add_element(SprdBnchmkCurve_29);
    }
    {
      xml_element Yield_24{"Yield"};
      multiset<string> Yield_24_set;
      Yield_24.add_attribute("Typ", "SEMIANNUAL"); // 2
      Yield_24_set.insert("SEMIANNUAL");
      Yield_24.add_attribute("Yld", "2528315.330000"); // 2
      Yield_24_set.insert("2528315.330000");
      Yield_24.add_attribute("CalcDt", "YieldCalcDate_t_2123343476"); // 2
      Yield_24_set.insert("YieldCalcDate_t_2123343476");
      Yield_24.add_attribute("RedDt", "YieldRedemptionDate_t_2116634648"); // 2
      Yield_24_set.insert("YieldRedemptionDate_t_2116634648");
      Yield_24.add_attribute("RedPx", "18911100.170000"); // 2
      Yield_24_set.insert("18911100.170000");
      Yield_24.add_attribute("RedPxTyp", "19"); // 2
      Yield_24_set.insert("19");
      all_values.push_back(Yield_24_set);
      all_compo_names.insert("Yield_24_set");

      SecL_2.add_element(Yield_24);
    }
    elt.add_element(SecL_2);
  } // end SecL
  { // SecL
    xml_element SecL_3{"SecL"};
    multiset<string> SecL_3_set;
    SecL_3.add_attribute("ListUpdActn", "M"); // 1
    SecL_3_set.insert("M");
    SecL_3.add_attribute("Ccy", "USD"); // 1
    SecL_3_set.insert("USD");
    SecL_3.add_attribute("TxnTm", "RelSymTransactTime_t_1014924829"); // 1
    SecL_3_set.insert("RelSymTransactTime_t_1014924829");
    SecL_3.add_attribute("Txt", "Text_t_144117335"); // 1
    SecL_3_set.insert("Text_t_144117335");
    SecL_3.add_attribute("EncTxtLen", "2063911790"); // 1
    SecL_3_set.insert("2063911790");
    SecL_3.add_attribute("EncTxt", "EncodedText_t_1494191292"); // 1
    SecL_3_set.insert("EncodedText_t_1494191292");
    all_values.push_back(SecL_3_set);
    all_compo_names.insert("SecL_3_set");

    {
      xml_element Instrmt_74{"Instrmt"};
      multiset<string> Instrmt_74_set;
      Instrmt_74.add_attribute("Sym", "Symbol_t_1515237163"); // 2
      Instrmt_74_set.insert("Symbol_t_1515237163");
      Instrmt_74.add_attribute("Sfx", "CD"); // 2
      Instrmt_74_set.insert("CD");
      Instrmt_74.add_attribute("ID", "SecurityID_t_80500364"); // 2
      Instrmt_74_set.insert("SecurityID_t_80500364");
      Instrmt_74.add_attribute("Src", "4"); // 2
      Instrmt_74_set.insert("4");
      Instrmt_74.add_attribute("Prod", "2"); // 2
      Instrmt_74_set.insert("2");
      Instrmt_74.add_attribute("ProdCmplx", "ProductComplex_t_762361073"); // 2
      Instrmt_74_set.insert("ProductComplex_t_762361073");
      Instrmt_74.add_attribute("SecGrp", "SecurityGroup_t_1404274739"); // 2
      Instrmt_74_set.insert("SecurityGroup_t_1404274739");
      Instrmt_74.add_attribute("CFI", "CFICode_t_607368437"); // 2
      Instrmt_74_set.insert("CFICode_t_607368437");
      Instrmt_74.add_attribute("SecTyp", "PFAND"); // 2
      Instrmt_74_set.insert("PFAND");
      Instrmt_74.add_attribute("SubTyp", "SecuritySubType_t_1646502133"); // 2
      Instrmt_74_set.insert("SecuritySubType_t_1646502133");
      Instrmt_74.add_attribute("MMY", "956478311"); // 2
      Instrmt_74_set.insert("956478311");
      Instrmt_74.add_attribute("MatDt", "MaturityDate_t_1214705153"); // 2
      Instrmt_74_set.insert("MaturityDate_t_1214705153");
      Instrmt_74.add_attribute("MatTm", "2110902475"); // 2
      Instrmt_74_set.insert("2110902475");
      Instrmt_74.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_522414829"); // 2
      Instrmt_74_set.insert("SettleOnOpenFlag_t_522414829");
      Instrmt_74.add_attribute("AsgnMeth", "363129060"); // 2
      Instrmt_74_set.insert("363129060");
      Instrmt_74.add_attribute("Status", "1"); // 2
      Instrmt_74_set.insert("1");
      Instrmt_74.add_attribute("CpnPmt", "CouponPaymentDate_t_227762547"); // 2
      Instrmt_74_set.insert("CouponPaymentDate_t_227762547");
      Instrmt_74.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_74_set.insert("MM");
      Instrmt_74.add_attribute("Snrty", "SD"); // 2
      Instrmt_74_set.insert("SD");
      Instrmt_74.add_attribute("NotlPctOut", "4805940.800000"); // 2
      Instrmt_74_set.insert("4805940.800000");
      Instrmt_74.add_attribute("OrigNotlPctOut", "12059908.220000"); // 2
      Instrmt_74_set.insert("12059908.220000");
      Instrmt_74.add_attribute("AttchPnt", "18423115.020000"); // 2
      Instrmt_74_set.insert("18423115.020000");
      Instrmt_74.add_attribute("DetchPnt", "2242204.490000"); // 2
      Instrmt_74_set.insert("2242204.490000");
      Instrmt_74.add_attribute("Issued", "IssueDate_t_795119165"); // 2
      Instrmt_74_set.insert("IssueDate_t_795119165");
      Instrmt_74.add_attribute("RepoCollSecTyp", "1226840547"); // 2
      Instrmt_74_set.insert("1226840547");
      Instrmt_74.add_attribute("RepoTrm", "823570705"); // 2
      Instrmt_74_set.insert("823570705");
      Instrmt_74.add_attribute("RepoRt", "17414640.470000"); // 2
      Instrmt_74_set.insert("17414640.470000");
      Instrmt_74.add_attribute("Fctr", "942817.290000"); // 2
      Instrmt_74_set.insert("942817.290000");
      Instrmt_74.add_attribute("CrdRtg", "CreditRating_t_967688041"); // 2
      Instrmt_74_set.insert("CreditRating_t_967688041");
      Instrmt_74.add_attribute("Rgstry", "InstrRegistry_t_1657892190"); // 2
      Instrmt_74_set.insert("InstrRegistry_t_1657892190");
      Instrmt_74.add_attribute("IssuCtry", "1588473021"); // 2
      Instrmt_74_set.insert("1588473021");
      Instrmt_74.add_attribute("StPrv", "StateOrProvinceOfIssue_t_335441556"); // 2
      Instrmt_74_set.insert("StateOrProvinceOfIssue_t_335441556");
      Instrmt_74.add_attribute("Lcl", "LocaleOfIssue_t_2120160438"); // 2
      Instrmt_74_set.insert("LocaleOfIssue_t_2120160438");
      Instrmt_74.add_attribute("Redeem", "RedemptionDate_t_1668973385"); // 2
      Instrmt_74_set.insert("RedemptionDate_t_1668973385");
      Instrmt_74.add_attribute("StrkPx", "7368151.250000"); // 2
      Instrmt_74_set.insert("7368151.250000");
      Instrmt_74.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_74_set.insert("GBP");
      Instrmt_74.add_attribute("StrkMult", "21410898.640000"); // 2
      Instrmt_74_set.insert("21410898.640000");
      Instrmt_74.add_attribute("StrkValu", "11864266.970000"); // 2
      Instrmt_74_set.insert("11864266.970000");
      Instrmt_74.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_74_set.insert("3");
      Instrmt_74.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_74_set.insert("5");
      Instrmt_74.add_attribute("StrkPxBndryPrcsn", "21429050.090000"); // 2
      Instrmt_74_set.insert("21429050.090000");
      Instrmt_74.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_74_set.insert("4");
      Instrmt_74.add_attribute("OptAt", "1603527176"); // 2
      Instrmt_74_set.insert("1603527176");
      Instrmt_74.add_attribute("Mult", "5178361.900000"); // 2
      Instrmt_74_set.insert("5178361.900000");
      Instrmt_74.add_attribute("MultTyp", "0"); // 2
      Instrmt_74_set.insert("0");
      Instrmt_74.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_74_set.insert("1");
      Instrmt_74.add_attribute("MinPxIncr", "7455987.370000"); // 2
      Instrmt_74_set.insert("7455987.370000");
      Instrmt_74.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1003571961"); // 2
      Instrmt_74_set.insert("MinPriceIncrementAmount_t_1003571961");
      Instrmt_74.add_attribute("UOM", "Bcf"); // 2
      Instrmt_74_set.insert("Bcf");
      Instrmt_74.add_attribute("UOMQty", "12261928.170000"); // 2
      Instrmt_74_set.insert("12261928.170000");
      Instrmt_74.add_attribute("PxUOM", "MMBtu"); // 2
      Instrmt_74_set.insert("MMBtu");
      Instrmt_74.add_attribute("PxUOMQty", "18279164.330000"); // 2
      Instrmt_74_set.insert("18279164.330000");
      Instrmt_74.add_attribute("SettlMeth", "C"); // 2
      Instrmt_74_set.insert("C");
      Instrmt_74.add_attribute("ExerStyle", "0"); // 2
      Instrmt_74_set.insert("0");
      Instrmt_74.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_74_set.insert("1");
      Instrmt_74.add_attribute("OptPayAmt", "OptPayoutAmount_t_126500324"); // 2
      Instrmt_74_set.insert("OptPayoutAmount_t_126500324");
      Instrmt_74.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_74_set.insert("STD");
      Instrmt_74.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_74_set.insert("FUT");
      Instrmt_74.add_attribute("ListMeth", "1"); // 2
      Instrmt_74_set.insert("1");
      Instrmt_74.add_attribute("CapPx", "21090708.900000"); // 2
      Instrmt_74_set.insert("21090708.900000");
      Instrmt_74.add_attribute("FlrPx", "4425444.340000"); // 2
      Instrmt_74_set.insert("4425444.340000");
      Instrmt_74.add_attribute("PutCall", "1"); // 2
      Instrmt_74_set.insert("1");
      Instrmt_74.add_attribute("FlexInd", "false"); // 2
      Instrmt_74_set.insert("false");
      Instrmt_74.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_74_set.insert("false");
      Instrmt_74.add_attribute("TmUnit", "H"); // 2
      Instrmt_74_set.insert("H");
      Instrmt_74.add_attribute("CpnRt", "5133222.930000"); // 2
      Instrmt_74_set.insert("5133222.930000");
      Instrmt_74.add_attribute("Exch", "SecurityExchange_t_247884982"); // 2
      Instrmt_74_set.insert("SecurityExchange_t_247884982");
      Instrmt_74.add_attribute("PosLmt", "12567615"); // 2
      Instrmt_74_set.insert("12567615");
      Instrmt_74.add_attribute("NTPosLmt", "1699748990"); // 2
      Instrmt_74_set.insert("1699748990");
      Instrmt_74.add_attribute("Issr", "Issuer_t_590975384"); // 2
      Instrmt_74_set.insert("Issuer_t_590975384");
      Instrmt_74.add_attribute("EncIssrLen", "1652675965"); // 2
      Instrmt_74_set.insert("1652675965");
      Instrmt_74.add_attribute("EncIssr", "EncodedIssuer_t_1695170351"); // 2
      Instrmt_74_set.insert("EncodedIssuer_t_1695170351");
      Instrmt_74.add_attribute("Desc", "SecurityDesc_t_1287292"); // 2
      Instrmt_74_set.insert("SecurityDesc_t_1287292");
      Instrmt_74.add_attribute("EncSecDescLen", "1108719493"); // 2
      Instrmt_74_set.insert("1108719493");
      Instrmt_74.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_65522894"); // 2
      Instrmt_74_set.insert("EncodedSecurityDesc_t_65522894");
      Instrmt_74.add_attribute("Pool", "Pool_t_1922211907"); // 2
      Instrmt_74_set.insert("Pool_t_1922211907");
      Instrmt_74.add_attribute("CSetMo", "1368647570"); // 2
      Instrmt_74_set.insert("1368647570");
      Instrmt_74.add_attribute("CPPgm", "1"); // 2
      Instrmt_74_set.insert("1");
      Instrmt_74.add_attribute("CPRegT", "CPRegType_t_778300221"); // 2
      Instrmt_74_set.insert("CPRegType_t_778300221");
      Instrmt_74.add_attribute("Dated", "DatedDate_t_1354252500"); // 2
      Instrmt_74_set.insert("DatedDate_t_1354252500");
      Instrmt_74.add_attribute("IntAcrl", "InterestAccrualDate_t_2037314449"); // 2
      Instrmt_74_set.insert("InterestAccrualDate_t_2037314449");
      all_values.push_back(Instrmt_74_set);
      all_compo_names.insert("Instrmt_74_set");

      {
        xml_element AID_77{"AID"};
        multiset<string> AID_77_set;
        AID_77.add_attribute("AltID", "SecurityAltID_t_840379356"); // 3
        AID_77_set.insert("SecurityAltID_t_840379356");
        AID_77.add_attribute("AltIDSrc", "8"); // 3
        AID_77_set.insert("8");
        all_values.push_back(AID_77_set);
        all_compo_names.insert("AID_77_set");

        Instrmt_74.add_element(AID_77);
      }
      {
        xml_element SecXML_77{"SecXML"};
        multiset<string> SecXML_77_set;
        SecXML_77.add_attribute("Schema", "SecurityXMLSchema_t_1340244067"); // 3
        SecXML_77_set.insert("SecurityXMLSchema_t_1340244067");
        all_values.push_back(SecXML_77_set);
        all_compo_names.insert("SecXML_77_set");

        Instrmt_74.add_element(SecXML_77);
      }
      {
        xml_element Evnt_77{"Evnt"};
        multiset<string> Evnt_77_set;
        Evnt_77.add_attribute("EventTyp", "17"); // 3
        Evnt_77_set.insert("17");
        Evnt_77.add_attribute("Dt", "EventDate_t_1941958618"); // 3
        Evnt_77_set.insert("EventDate_t_1941958618");
        Evnt_77.add_attribute("Tm", "EventTime_t_1466744391"); // 3
        Evnt_77_set.insert("EventTime_t_1466744391");
        Evnt_77.add_attribute("Px", "12727.100000"); // 3
        Evnt_77_set.insert("12727.100000");
        Evnt_77.add_attribute("Txt", "EventText_t_796030031"); // 3
        Evnt_77_set.insert("EventText_t_796030031");
        all_values.push_back(Evnt_77_set);
        all_compo_names.insert("Evnt_77_set");

        Instrmt_74.add_element(Evnt_77);
      }
      {
        xml_element Pty_384{"Pty"};
        multiset<string> Pty_384_set;
        Pty_384.add_attribute("ID", "InstrumentPartyID_t_413449108"); // 3
        Pty_384_set.insert("InstrumentPartyID_t_413449108");
        Pty_384.add_attribute("Src", "3"); // 3
        Pty_384_set.insert("3");
        Pty_384.add_attribute("R", "19"); // 3
        Pty_384_set.insert("19");
        all_values.push_back(Pty_384_set);
        all_compo_names.insert("Pty_384_set");

        {
          xml_element Sub_384{"Sub"};
          multiset<string> Sub_384_set;
          Sub_384.add_attribute("ID", "InstrumentPartySubID_t_1843079030"); // 4
          Sub_384_set.insert("InstrumentPartySubID_t_1843079030");
          Sub_384.add_attribute("Typ", "11"); // 4
          Sub_384_set.insert("11");
          all_values.push_back(Sub_384_set);
          all_compo_names.insert("Sub_384_set");

          Pty_384.add_element(Sub_384);
        }
        Instrmt_74.add_element(Pty_384);
      }
      {
        xml_element CmplxEvnt_74{"CmplxEvnt"};
        multiset<string> CmplxEvnt_74_set;
        CmplxEvnt_74.add_attribute("Typ", "9"); // 3
        CmplxEvnt_74_set.insert("9");
        CmplxEvnt_74.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1862040429"); // 3
        CmplxEvnt_74_set.insert("ComplexOptPayoutAmount_t_1862040429");
        CmplxEvnt_74.add_attribute("Px", "4104462.780000"); // 3
        CmplxEvnt_74_set.insert("4104462.780000");
        CmplxEvnt_74.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_74_set.insert("5");
        CmplxEvnt_74.add_attribute("PxBndryPrcsn", "18746080.440000"); // 3
        CmplxEvnt_74_set.insert("18746080.440000");
        CmplxEvnt_74.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_74_set.insert("1");
        CmplxEvnt_74.add_attribute("Cond", "1"); // 3
        CmplxEvnt_74_set.insert("1");
        all_values.push_back(CmplxEvnt_74_set);
        all_compo_names.insert("CmplxEvnt_74_set");

        {
          xml_element EvntDts_74{"EvntDts"};
          multiset<string> EvntDts_74_set;
          EvntDts_74.add_attribute("StartDt", "ComplexEventStartDate_t_1379800361"); // 4
          EvntDts_74_set.insert("ComplexEventStartDate_t_1379800361");
          EvntDts_74.add_attribute("EndDt", "ComplexEventEndDate_t_1657881972"); // 4
          EvntDts_74_set.insert("ComplexEventEndDate_t_1657881972");
          all_values.push_back(EvntDts_74_set);
          all_compo_names.insert("EvntDts_74_set");

          {
            xml_element EvntTms_74{"EvntTms"};
            multiset<string> EvntTms_74_set;
            EvntTms_74.add_attribute("StartTm", "2042756296"); // 5
            EvntTms_74_set.insert("2042756296");
            EvntTms_74.add_attribute("EndTm", "341036207"); // 5
            EvntTms_74_set.insert("341036207");
            all_values.push_back(EvntTms_74_set);
            all_compo_names.insert("EvntTms_74_set");

            EvntDts_74.add_element(EvntTms_74);
          }
          CmplxEvnt_74.add_element(EvntDts_74);
        }
        Instrmt_74.add_element(CmplxEvnt_74);
      }
      SecL_3.add_element(Instrmt_74);
    }
    {
      xml_element InstrmtExt_13{"InstrmtExt"};
      multiset<string> InstrmtExt_13_set;
      InstrmtExt_13.add_attribute("DlvryForm", "1"); // 2
      InstrmtExt_13_set.insert("1");
      InstrmtExt_13.add_attribute("PctAtRisk", "18174845.550000"); // 2
      InstrmtExt_13_set.insert("18174845.550000");
      all_values.push_back(InstrmtExt_13_set);
      all_compo_names.insert("InstrmtExt_13_set");

      {
        xml_element Attrb_24{"Attrb"};
        multiset<string> Attrb_24_set;
        Attrb_24.add_attribute("Typ", "16"); // 3
        Attrb_24_set.insert("16");
        Attrb_24.add_attribute("Val", "InstrAttribValue_t_387042850"); // 3
        Attrb_24_set.insert("InstrAttribValue_t_387042850");
        all_values.push_back(Attrb_24_set);
        all_compo_names.insert("Attrb_24_set");

        InstrmtExt_13.add_element(Attrb_24);
      }
      SecL_3.add_element(InstrmtExt_13);
    }
    {
      xml_element FinDetls_28{"FinDetls"};
      multiset<string> FinDetls_28_set;
      FinDetls_28.add_attribute("AgmtDesc", "AgreementDesc_t_448301128"); // 2
      FinDetls_28_set.insert("AgreementDesc_t_448301128");
      FinDetls_28.add_attribute("AgmtID", "AgreementID_t_916452629"); // 2
      FinDetls_28_set.insert("AgreementID_t_916452629");
      FinDetls_28.add_attribute("AgmtDt", "AgreementDate_t_276873651"); // 2
      FinDetls_28_set.insert("AgreementDate_t_276873651");
      FinDetls_28.add_attribute("AgmtCcy", "CHF"); // 2
      FinDetls_28_set.insert("CHF");
      FinDetls_28.add_attribute("TrmTyp", "3"); // 2
      FinDetls_28_set.insert("3");
      FinDetls_28.add_attribute("StartDt", "StartDate_t_838774494"); // 2
      FinDetls_28_set.insert("StartDate_t_838774494");
      FinDetls_28.add_attribute("EndDt", "EndDate_t_1745612885"); // 2
      FinDetls_28_set.insert("EndDate_t_1745612885");
      FinDetls_28.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_28_set.insert("2");
      FinDetls_28.add_attribute("MgnRatio", "8400472.040000"); // 2
      FinDetls_28_set.insert("8400472.040000");
      all_values.push_back(FinDetls_28_set);
      all_compo_names.insert("FinDetls_28_set");

      SecL_3.add_element(FinDetls_28);
    }
    {
      xml_element SecTrdgRules_9{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_11{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_11_set;
        BaseTrdgRules_11.add_attribute("ExpirationCycle", "2"); // 3
        BaseTrdgRules_11_set.insert("2");
        BaseTrdgRules_11.add_attribute("MinTrdVol", "13498275.700000"); // 3
        BaseTrdgRules_11_set.insert("13498275.700000");
        BaseTrdgRules_11.add_attribute("MaxTrdVol", "8029071.570000"); // 3
        BaseTrdgRules_11_set.insert("8029071.570000");
        BaseTrdgRules_11.add_attribute("MxPxVar", "16327337.340000"); // 3
        BaseTrdgRules_11_set.insert("16327337.340000");
        BaseTrdgRules_11.add_attribute("ImpldMktInd", "0"); // 3
        BaseTrdgRules_11_set.insert("0");
        BaseTrdgRules_11.add_attribute("TrdCcy", "JPY"); // 3
        BaseTrdgRules_11_set.insert("JPY");
        BaseTrdgRules_11.add_attribute("RndLot", "7599797.330000"); // 3
        BaseTrdgRules_11_set.insert("7599797.330000");
        BaseTrdgRules_11.add_attribute("MlegModel", "1"); // 3
        BaseTrdgRules_11_set.insert("1");
        BaseTrdgRules_11.add_attribute("MlegPxMeth", "1"); // 3
        BaseTrdgRules_11_set.insert("1");
        BaseTrdgRules_11.add_attribute("PxTyp", "9"); // 3
        BaseTrdgRules_11_set.insert("9");
        all_values.push_back(BaseTrdgRules_11_set);
        all_compo_names.insert("BaseTrdgRules_11_set");

        {
          xml_element TickRules_11{"TickRules"};
          multiset<string> TickRules_11_set;
          TickRules_11.add_attribute("StartTickPxRng", "10731890.420000"); // 4
          TickRules_11_set.insert("10731890.420000");
          TickRules_11.add_attribute("EndTickPxRng", "20323376.990000"); // 4
          TickRules_11_set.insert("20323376.990000");
          TickRules_11.add_attribute("TickIncr", "18669044.910000"); // 4
          TickRules_11_set.insert("18669044.910000");
          TickRules_11.add_attribute("TickRuleTyp", "1"); // 4
          TickRules_11_set.insert("1");
          all_values.push_back(TickRules_11_set);
          all_compo_names.insert("TickRules_11_set");

          BaseTrdgRules_11.add_element(TickRules_11);
        }
        {
          xml_element LotTypeRules_11{"LotTypeRules"};
          multiset<string> LotTypeRules_11_set;
          LotTypeRules_11.add_attribute("LotTyp", "4"); // 4
          LotTypeRules_11_set.insert("4");
          LotTypeRules_11.add_attribute("MinLotSz", "604570.500000"); // 4
          LotTypeRules_11_set.insert("604570.500000");
          all_values.push_back(LotTypeRules_11_set);
          all_compo_names.insert("LotTypeRules_11_set");

          BaseTrdgRules_11.add_element(LotTypeRules_11);
        }
        {
          xml_element PxLmts_11{"PxLmts"};
          multiset<string> PxLmts_11_set;
          PxLmts_11.add_attribute("PxLmtTyp", "1"); // 4
          PxLmts_11_set.insert("1");
          PxLmts_11.add_attribute("LowLmtPx", "15976112.550000"); // 4
          PxLmts_11_set.insert("15976112.550000");
          PxLmts_11.add_attribute("HiLmtPx", "17701408.270000"); // 4
          PxLmts_11_set.insert("17701408.270000");
          PxLmts_11.add_attribute("TrdgRefPx", "5465514.350000"); // 4
          PxLmts_11_set.insert("5465514.350000");
          all_values.push_back(PxLmts_11_set);
          all_compo_names.insert("PxLmts_11_set");

          BaseTrdgRules_11.add_element(PxLmts_11);
        }
        SecTrdgRules_9.add_element(BaseTrdgRules_11);
      }
      {
        xml_element TrdgSesRulesGrp_9{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_9_set;
        TrdgSesRulesGrp_9.add_attribute("SesID", "2"); // 3
        TrdgSesRulesGrp_9_set.insert("2");
        TrdgSesRulesGrp_9.add_attribute("SesSub", "1"); // 3
        TrdgSesRulesGrp_9_set.insert("1");
        all_values.push_back(TrdgSesRulesGrp_9_set);
        all_compo_names.insert("TrdgSesRulesGrp_9_set");

        {
          xml_element TrdgSesRules_9{"TrdgSesRules"};
          {
            xml_element OrdTypRules_12{"OrdTypRules"};
            multiset<string> OrdTypRules_12_set;
            OrdTypRules_12.add_attribute("OrdTyp", "F"); // 5
            OrdTypRules_12_set.insert("F");
            all_values.push_back(OrdTypRules_12_set);
            all_compo_names.insert("OrdTypRules_12_set");

            TrdgSesRules_9.add_element(OrdTypRules_12);
          }
          {
            xml_element TmInForceRules_13{"TmInForceRules"};
            multiset<string> TmInForceRules_13_set;
            TmInForceRules_13.add_attribute("TmInForce", "0"); // 5
            TmInForceRules_13_set.insert("0");
            all_values.push_back(TmInForceRules_13_set);
            all_compo_names.insert("TmInForceRules_13_set");

            TrdgSesRules_9.add_element(TmInForceRules_13);
          }
          {
            xml_element ExecInstRules_13{"ExecInstRules"};
            multiset<string> ExecInstRules_13_set;
            ExecInstRules_13.add_attribute("ExecInstValu", "4"); // 5
            ExecInstRules_13_set.insert("4");
            all_values.push_back(ExecInstRules_13_set);
            all_compo_names.insert("ExecInstRules_13_set");

            TrdgSesRules_9.add_element(ExecInstRules_13);
          }
          {
            xml_element MtchRules_9{"MtchRules"};
            multiset<string> MtchRules_9_set;
            MtchRules_9.add_attribute("MtchAlgo", "MatchAlgorithm_t_293059156"); // 5
            MtchRules_9_set.insert("MatchAlgorithm_t_293059156");
            MtchRules_9.add_attribute("MtchTyp", "M2"); // 5
            MtchRules_9_set.insert("M2");
            all_values.push_back(MtchRules_9_set);
            all_compo_names.insert("MtchRules_9_set");

            TrdgSesRules_9.add_element(MtchRules_9);
          }
          {
            xml_element MDFeedTyps_9{"MDFeedTyps"};
            multiset<string> MDFeedTyps_9_set;
            MDFeedTyps_9.add_attribute("MDFeedTyp", "MDFeedType_t_2088376961"); // 5
            MDFeedTyps_9_set.insert("MDFeedType_t_2088376961");
            MDFeedTyps_9.add_attribute("MktDepth", "1229437618"); // 5
            MDFeedTyps_9_set.insert("1229437618");
            MDFeedTyps_9.add_attribute("MDBkTyp", "3"); // 5
            MDFeedTyps_9_set.insert("3");
            all_values.push_back(MDFeedTyps_9_set);
            all_compo_names.insert("MDFeedTyps_9_set");

            TrdgSesRules_9.add_element(MDFeedTyps_9);
          }
          TrdgSesRulesGrp_9.add_element(TrdgSesRules_9);
        }
        SecTrdgRules_9.add_element(TrdgSesRulesGrp_9);
      }
      {
        xml_element Attrb_25{"Attrb"};
        multiset<string> Attrb_25_set;
        Attrb_25.add_attribute("Typ", "2"); // 3
        Attrb_25_set.insert("2");
        Attrb_25.add_attribute("Val", "NestedInstrAttribValue_t_431781541"); // 3
        Attrb_25_set.insert("NestedInstrAttribValue_t_431781541");
        all_values.push_back(Attrb_25_set);
        all_compo_names.insert("Attrb_25_set");

        SecTrdgRules_9.add_element(Attrb_25);
      }
      SecL_3.add_element(SecTrdgRules_9);
    }
    {
      xml_element StrkRules_9{"StrkRules"};
      multiset<string> StrkRules_9_set;
      StrkRules_9.add_attribute("StrkRule", "StrikeRuleID_t_1521354428"); // 2
      StrkRules_9_set.insert("StrikeRuleID_t_1521354428");
      StrkRules_9.add_attribute("StartStrkPxRng", "19677863.160000"); // 2
      StrkRules_9_set.insert("19677863.160000");
      StrkRules_9.add_attribute("EndStrkPxRng", "14772044.930000"); // 2
      StrkRules_9_set.insert("14772044.930000");
      StrkRules_9.add_attribute("StrkIncr", "739019.230000"); // 2
      StrkRules_9_set.insert("739019.230000");
      StrkRules_9.add_attribute("StrkExrStyle", "2"); // 2
      StrkRules_9_set.insert("2");
      all_values.push_back(StrkRules_9_set);
      all_compo_names.insert("StrkRules_9_set");

      {
        xml_element MatRules_9{"MatRules"};
        multiset<string> MatRules_9_set;
        MatRules_9.add_attribute("MatRuleID", "MaturityRuleID_t_89700579"); // 3
        MatRules_9_set.insert("MaturityRuleID_t_89700579");
        MatRules_9.add_attribute("MMYFmt", "2"); // 3
        MatRules_9_set.insert("2");
        MatRules_9.add_attribute("MMYIncrUnits", "3"); // 3
        MatRules_9_set.insert("3");
        MatRules_9.add_attribute("StartMMY", "576804709"); // 3
        MatRules_9_set.insert("576804709");
        MatRules_9.add_attribute("EndMMY", "110084738"); // 3
        MatRules_9_set.insert("110084738");
        MatRules_9.add_attribute("MMYIncr", "383884139"); // 3
        MatRules_9_set.insert("383884139");
        all_values.push_back(MatRules_9_set);
        all_compo_names.insert("MatRules_9_set");

        StrkRules_9.add_element(MatRules_9);
      }
      SecL_3.add_element(StrkRules_9);
    }
    {
      xml_element Undly_107{"Undly"};
      multiset<string> Undly_107_set;
      Undly_107.add_attribute("Sym", "UnderlyingSymbol_t_296225552"); // 2
      Undly_107_set.insert("UnderlyingSymbol_t_296225552");
      Undly_107.add_attribute("Sfx", "CD"); // 2
      Undly_107_set.insert("CD");
      Undly_107.add_attribute("ID", "UnderlyingSecurityID_t_164010838"); // 2
      Undly_107_set.insert("UnderlyingSecurityID_t_164010838");
      Undly_107.add_attribute("Src", "E"); // 2
      Undly_107_set.insert("E");
      Undly_107.add_attribute("Prod", "7"); // 2
      Undly_107_set.insert("7");
      Undly_107.add_attribute("CFI", "UnderlyingCFICode_t_1761622093"); // 2
      Undly_107_set.insert("UnderlyingCFICode_t_1761622093");
      Undly_107.add_attribute("SecTyp", "MPP"); // 2
      Undly_107_set.insert("MPP");
      Undly_107.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1399732124"); // 2
      Undly_107_set.insert("UnderlyingSecuritySubType_t_1399732124");
      Undly_107.add_attribute("MMY", "1660050829"); // 2
      Undly_107_set.insert("1660050829");
      Undly_107.add_attribute("Mat", "UnderlyingMaturityDate_t_518449591"); // 2
      Undly_107_set.insert("UnderlyingMaturityDate_t_518449591");
      Undly_107.add_attribute("MatTm", "75673562"); // 2
      Undly_107_set.insert("75673562");
      Undly_107.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_699676401"); // 2
      Undly_107_set.insert("UnderlyingCouponPaymentDate_t_699676401");
      Undly_107.add_attribute("RestrctTyp", "XR"); // 2
      Undly_107_set.insert("XR");
      Undly_107.add_attribute("Snrty", "SR"); // 2
      Undly_107_set.insert("SR");
      Undly_107.add_attribute("NotlPctOut", "5780764.680000"); // 2
      Undly_107_set.insert("5780764.680000");
      Undly_107.add_attribute("OrigNotlPctOut", "8021069.800000"); // 2
      Undly_107_set.insert("8021069.800000");
      Undly_107.add_attribute("AttchPnt", "15981703.370000"); // 2
      Undly_107_set.insert("15981703.370000");
      Undly_107.add_attribute("DetchPnt", "12965237.400000"); // 2
      Undly_107_set.insert("12965237.400000");
      Undly_107.add_attribute("Issued", "UnderlyingIssueDate_t_1137159562"); // 2
      Undly_107_set.insert("UnderlyingIssueDate_t_1137159562");
      Undly_107.add_attribute("RepoCollSecTyp", "2029951878"); // 2
      Undly_107_set.insert("2029951878");
      Undly_107.add_attribute("RepoTrm", "670394520"); // 2
      Undly_107_set.insert("670394520");
      Undly_107.add_attribute("RepoRt", "9574622.300000"); // 2
      Undly_107_set.insert("9574622.300000");
      Undly_107.add_attribute("Fctr", "13596727.240000"); // 2
      Undly_107_set.insert("13596727.240000");
      Undly_107.add_attribute("CrdRtg", "UnderlyingCreditRating_t_744296443"); // 2
      Undly_107_set.insert("UnderlyingCreditRating_t_744296443");
      Undly_107.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1465623622"); // 2
      Undly_107_set.insert("UnderlyingInstrRegistry_t_1465623622");
      Undly_107.add_attribute("Ctry", "1449373303"); // 2
      Undly_107_set.insert("1449373303");
      Undly_107.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1928675787"); // 2
      Undly_107_set.insert("UnderlyingStateOrProvinceOfIssue_t_1928675787");
      Undly_107.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1964653709"); // 2
      Undly_107_set.insert("UnderlyingLocaleOfIssue_t_1964653709");
      Undly_107.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2026178012"); // 2
      Undly_107_set.insert("UnderlyingRedemptionDate_t_2026178012");
      Undly_107.add_attribute("StrkPx", "20387605.250000"); // 2
      Undly_107_set.insert("20387605.250000");
      Undly_107.add_attribute("StrkCcy", "GBP"); // 2
      Undly_107_set.insert("GBP");
      Undly_107.add_attribute("OptA", "584948982"); // 2
      Undly_107_set.insert("584948982");
      Undly_107.add_attribute("Mult", "3650650.390000"); // 2
      Undly_107_set.insert("3650650.390000");
      Undly_107.add_attribute("MultTyp", "2"); // 2
      Undly_107_set.insert("2");
      Undly_107.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_107_set.insert("1");
      Undly_107.add_attribute("UOM", "Bu"); // 2
      Undly_107_set.insert("Bu");
      Undly_107.add_attribute("UOMQty", "5109423.020000"); // 2
      Undly_107_set.insert("5109423.020000");
      Undly_107.add_attribute("PxUOM", "tn"); // 2
      Undly_107_set.insert("tn");
      Undly_107.add_attribute("PxUOMQty", "16392543.130000"); // 2
      Undly_107_set.insert("16392543.130000");
      Undly_107.add_attribute("TmUnit", "Mo"); // 2
      Undly_107_set.insert("Mo");
      Undly_107.add_attribute("ExerStyle", "0"); // 2
      Undly_107_set.insert("0");
      Undly_107.add_attribute("CpnRt", "1914470.670000"); // 2
      Undly_107_set.insert("1914470.670000");
      Undly_107.add_attribute("Exch", "UnderlyingSecurityExchange_t_1890605561"); // 2
      Undly_107_set.insert("UnderlyingSecurityExchange_t_1890605561");
      Undly_107.add_attribute("Issr", "UnderlyingIssuer_t_1134784429"); // 2
      Undly_107_set.insert("UnderlyingIssuer_t_1134784429");
      Undly_107.add_attribute("EncUndIssrLen", "769523535"); // 2
      Undly_107_set.insert("769523535");
      Undly_107.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_545228893"); // 2
      Undly_107_set.insert("EncodedUnderlyingIssuer_t_545228893");
      Undly_107.add_attribute("Desc", "UnderlyingSecurityDesc_t_585471119"); // 2
      Undly_107_set.insert("UnderlyingSecurityDesc_t_585471119");
      Undly_107.add_attribute("EncUndSecDescLen", "2066047275"); // 2
      Undly_107_set.insert("2066047275");
      Undly_107.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1682388455"); // 2
      Undly_107_set.insert("EncodedUnderlyingSecurityDesc_t_1682388455");
      Undly_107.add_attribute("CPPgm", "UnderlyingCPProgram_t_467939349"); // 2
      Undly_107_set.insert("UnderlyingCPProgram_t_467939349");
      Undly_107.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_588958148"); // 2
      Undly_107_set.insert("UnderlyingCPRegType_t_588958148");
      Undly_107.add_attribute("AllocPct", "4923670.370000"); // 2
      Undly_107_set.insert("4923670.370000");
      Undly_107.add_attribute("Ccy", "CHF"); // 2
      Undly_107_set.insert("CHF");
      Undly_107.add_attribute("Qty", "19579906.590000"); // 2
      Undly_107_set.insert("19579906.590000");
      Undly_107.add_attribute("SettlTyp", "2"); // 2
      Undly_107_set.insert("2");
      Undly_107.add_attribute("CashAmt", "UnderlyingCashAmount_t_1114446731"); // 2
      Undly_107_set.insert("UnderlyingCashAmount_t_1114446731");
      Undly_107.add_attribute("CashTyp", "DIFF"); // 2
      Undly_107_set.insert("DIFF");
      Undly_107.add_attribute("Px", "10081960.920000"); // 2
      Undly_107_set.insert("10081960.920000");
      Undly_107.add_attribute("DirtPx", "10057236.080000"); // 2
      Undly_107_set.insert("10057236.080000");
      Undly_107.add_attribute("EndPx", "19762149.210000"); // 2
      Undly_107_set.insert("19762149.210000");
      Undly_107.add_attribute("StartVal", "UnderlyingStartValue_t_1183116009"); // 2
      Undly_107_set.insert("UnderlyingStartValue_t_1183116009");
      Undly_107.add_attribute("CurVal", "UnderlyingCurrentValue_t_1590672590"); // 2
      Undly_107_set.insert("UnderlyingCurrentValue_t_1590672590");
      Undly_107.add_attribute("EndVal", "UnderlyingEndValue_t_193796312"); // 2
      Undly_107_set.insert("UnderlyingEndValue_t_193796312");
      Undly_107.add_attribute("AdjQty", "17147185.280000"); // 2
      Undly_107_set.insert("17147185.280000");
      Undly_107.add_attribute("FxRate", "8813186.140000"); // 2
      Undly_107_set.insert("8813186.140000");
      Undly_107.add_attribute("FxRateCalc", "D"); // 2
      Undly_107_set.insert("D");
      Undly_107.add_attribute("CapValu", "UnderlyingCapValue_t_78177182"); // 2
      Undly_107_set.insert("UnderlyingCapValue_t_78177182");
      Undly_107.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1571696762"); // 2
      Undly_107_set.insert("UnderlyingSettlMethod_t_1571696762");
      Undly_107.add_attribute("PutCall", "1812254110"); // 2
      Undly_107_set.insert("1812254110");
      all_values.push_back(Undly_107_set);
      all_compo_names.insert("Undly_107_set");

      {
        xml_element UndAID_107{"UndAID"};
        multiset<string> UndAID_107_set;
        UndAID_107.add_attribute("AltID", "UnderlyingSecurityAltID_t_1107569076"); // 3
        UndAID_107_set.insert("UnderlyingSecurityAltID_t_1107569076");
        UndAID_107.add_attribute("AltIDSrc", "3"); // 3
        UndAID_107_set.insert("3");
        all_values.push_back(UndAID_107_set);
        all_compo_names.insert("UndAID_107_set");

        Undly_107.add_element(UndAID_107);
      }
      {
        xml_element Stip_170{"Stip"};
        multiset<string> Stip_170_set;
        Stip_170.add_attribute("Typ", "WAM"); // 3
        Stip_170_set.insert("WAM");
        Stip_170.add_attribute("Val", "UnderlyingStipValue_t_850690989"); // 3
        Stip_170_set.insert("UnderlyingStipValue_t_850690989");
        all_values.push_back(Stip_170_set);
        all_compo_names.insert("Stip_170_set");

        Undly_107.add_element(Stip_170);
      }
      {
        xml_element Pty_385{"Pty"};
        multiset<string> Pty_385_set;
        Pty_385.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1325049254"); // 3
        Pty_385_set.insert("UnderlyingInstrumentPartyID_t_1325049254");
        Pty_385.add_attribute("Src", "A"); // 3
        Pty_385_set.insert("A");
        Pty_385.add_attribute("R", "72"); // 3
        Pty_385_set.insert("72");
        all_values.push_back(Pty_385_set);
        all_compo_names.insert("Pty_385_set");

        {
          xml_element Sub_385{"Sub"};
          multiset<string> Sub_385_set;
          Sub_385.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1910520373"); // 4
          Sub_385_set.insert("UnderlyingInstrumentPartySubID_t_1910520373");
          Sub_385.add_attribute("Typ", "3"); // 4
          Sub_385_set.insert("3");
          all_values.push_back(Sub_385_set);
          all_compo_names.insert("Sub_385_set");

          Pty_385.add_element(Sub_385);
        }
        Undly_107.add_element(Pty_385);
      }
      SecL_3.add_element(Undly_107);
    }
    {
      xml_element Stip_171{"Stip"};
      multiset<string> Stip_171_set;
      Stip_171.add_attribute("Typ", "SUBSFREQ"); // 2
      Stip_171_set.insert("SUBSFREQ");
      Stip_171.add_attribute("Val", "StipulationValue_t_230976074"); // 2
      Stip_171_set.insert("StipulationValue_t_230976074");
      all_values.push_back(Stip_171_set);
      all_compo_names.insert("Stip_171_set");

      SecL_3.add_element(Stip_171);
    }
    {
      xml_element SecLstUpdRelSymsLegGrp_1{"SecLstUpdRelSymsLegGrp"};
      multiset<string> SecLstUpdRelSymsLegGrp_1_set;
      SecLstUpdRelSymsLegGrp_1.add_attribute("SwapTyp", "1"); // 2
      SecLstUpdRelSymsLegGrp_1_set.insert("1");
      SecLstUpdRelSymsLegGrp_1.add_attribute("SettlTyp", "7"); // 2
      SecLstUpdRelSymsLegGrp_1_set.insert("7");
      all_values.push_back(SecLstUpdRelSymsLegGrp_1_set);
      all_compo_names.insert("SecLstUpdRelSymsLegGrp_1_set");

      {
        xml_element Leg_92{"Leg"};
        multiset<string> Leg_92_set;
        Leg_92.add_attribute("Sym", "LegSymbol_t_2058588148"); // 3
        Leg_92_set.insert("LegSymbol_t_2058588148");
        Leg_92.add_attribute("Sfx", "CD"); // 3
        Leg_92_set.insert("CD");
        Leg_92.add_attribute("ID", "LegSecurityID_t_1233698739"); // 3
        Leg_92_set.insert("LegSecurityID_t_1233698739");
        Leg_92.add_attribute("Src", "3"); // 3
        Leg_92_set.insert("3");
        Leg_92.add_attribute("Prod", "9"); // 3
        Leg_92_set.insert("9");
        Leg_92.add_attribute("CFI", "LegCFICode_t_861375812"); // 3
        Leg_92_set.insert("LegCFICode_t_861375812");
        Leg_92.add_attribute("SecTyp", "SECLOAN"); // 3
        Leg_92_set.insert("SECLOAN");
        Leg_92.add_attribute("SecSubTyp", "LegSecuritySubType_t_291720475"); // 3
        Leg_92_set.insert("LegSecuritySubType_t_291720475");
        Leg_92.add_attribute("MMY", "690107085"); // 3
        Leg_92_set.insert("690107085");
        Leg_92.add_attribute("Mat", "LegMaturityDate_t_1084434682"); // 3
        Leg_92_set.insert("LegMaturityDate_t_1084434682");
        Leg_92.add_attribute("MatTm", "1882393066"); // 3
        Leg_92_set.insert("1882393066");
        Leg_92.add_attribute("CpnPmt", "LegCouponPaymentDate_t_883903398"); // 3
        Leg_92_set.insert("LegCouponPaymentDate_t_883903398");
        Leg_92.add_attribute("Issued", "LegIssueDate_t_651669562"); // 3
        Leg_92_set.insert("LegIssueDate_t_651669562");
        Leg_92.add_attribute("RepoCollSecTyp", "616228032"); // 3
        Leg_92_set.insert("616228032");
        Leg_92.add_attribute("RepoTrm", "1056903195"); // 3
        Leg_92_set.insert("1056903195");
        Leg_92.add_attribute("RepoRt", "7298467.450000"); // 3
        Leg_92_set.insert("7298467.450000");
        Leg_92.add_attribute("Fctr", "404411.460000"); // 3
        Leg_92_set.insert("404411.460000");
        Leg_92.add_attribute("CrdRtg", "LegCreditRating_t_721673657"); // 3
        Leg_92_set.insert("LegCreditRating_t_721673657");
        Leg_92.add_attribute("Rgstry", "LegInstrRegistry_t_1837415821"); // 3
        Leg_92_set.insert("LegInstrRegistry_t_1837415821");
        Leg_92.add_attribute("Ctry", "230705970"); // 3
        Leg_92_set.insert("230705970");
        Leg_92.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_577891187"); // 3
        Leg_92_set.insert("LegStateOrProvinceOfIssue_t_577891187");
        Leg_92.add_attribute("Lcl", "LegLocaleOfIssue_t_540623162"); // 3
        Leg_92_set.insert("LegLocaleOfIssue_t_540623162");
        Leg_92.add_attribute("Redeem", "LegRedemptionDate_t_1555755224"); // 3
        Leg_92_set.insert("LegRedemptionDate_t_1555755224");
        Leg_92.add_attribute("Strk", "12036322.520000"); // 3
        Leg_92_set.insert("12036322.520000");
        Leg_92.add_attribute("StrkCcy", "EUR"); // 3
        Leg_92_set.insert("EUR");
        Leg_92.add_attribute("OptA", "1747936944"); // 3
        Leg_92_set.insert("1747936944");
        Leg_92.add_attribute("Cmult", "7198840.860000"); // 3
        Leg_92_set.insert("7198840.860000");
        Leg_92.add_attribute("MultTyp", "1"); // 3
        Leg_92_set.insert("1");
        Leg_92.add_attribute("FlowSchedTyp", "2"); // 3
        Leg_92_set.insert("2");
        Leg_92.add_attribute("UOM", "USD"); // 3
        Leg_92_set.insert("USD");
        Leg_92.add_attribute("UOMQty", "14608725.240000"); // 3
        Leg_92_set.insert("14608725.240000");
        Leg_92.add_attribute("PxUOM", "Bbl"); // 3
        Leg_92_set.insert("Bbl");
        Leg_92.add_attribute("PxUOMQty", "12292909.050000"); // 3
        Leg_92_set.insert("12292909.050000");
        Leg_92.add_attribute("TmUnit", "Min"); // 3
        Leg_92_set.insert("Min");
        Leg_92.add_attribute("ExerStyle", "0"); // 3
        Leg_92_set.insert("0");
        Leg_92.add_attribute("CpnRt", "20906667.170000"); // 3
        Leg_92_set.insert("20906667.170000");
        Leg_92.add_attribute("Exch", "LegSecurityExchange_t_255313777"); // 3
        Leg_92_set.insert("LegSecurityExchange_t_255313777");
        Leg_92.add_attribute("Issr", "LegIssuer_t_630467263"); // 3
        Leg_92_set.insert("LegIssuer_t_630467263");
        Leg_92.add_attribute("EncLegIssrLen", "633290154"); // 3
        Leg_92_set.insert("633290154");
        Leg_92.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1339748459"); // 3
        Leg_92_set.insert("EncodedLegIssuer_t_1339748459");
        Leg_92.add_attribute("Desc", "LegSecurityDesc_t_365376681"); // 3
        Leg_92_set.insert("LegSecurityDesc_t_365376681");
        Leg_92.add_attribute("EncLegSecDescLen", "1517193552"); // 3
        Leg_92_set.insert("1517193552");
        Leg_92.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1991418022"); // 3
        Leg_92_set.insert("EncodedLegSecurityDesc_t_1991418022");
        Leg_92.add_attribute("RatioQty", "9816047.130000"); // 3
        Leg_92_set.insert("9816047.130000");
        Leg_92.add_attribute("Side", "C"); // 3
        Leg_92_set.insert("C");
        Leg_92.add_attribute("Ccy", "CHF"); // 3
        Leg_92_set.insert("CHF");
        Leg_92.add_attribute("Pool", "LegPool_t_1148286757"); // 3
        Leg_92_set.insert("LegPool_t_1148286757");
        Leg_92.add_attribute("Dated", "LegDatedDate_t_263713292"); // 3
        Leg_92_set.insert("LegDatedDate_t_263713292");
        Leg_92.add_attribute("CSetMo", "1252751830"); // 3
        Leg_92_set.insert("1252751830");
        Leg_92.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1726177944"); // 3
        Leg_92_set.insert("LegInterestAccrualDate_t_1726177944");
        Leg_92.add_attribute("PutCall", "804336454"); // 3
        Leg_92_set.insert("804336454");
        Leg_92.add_attribute("LegOptionRatio", "6610234.060000"); // 3
        Leg_92_set.insert("6610234.060000");
        Leg_92.add_attribute("Px", "7823265.480000"); // 3
        Leg_92_set.insert("7823265.480000");
        all_values.push_back(Leg_92_set);
        all_compo_names.insert("Leg_92_set");

        {
          xml_element LegAID_89{"LegAID"};
          multiset<string> LegAID_89_set;
          LegAID_89.add_attribute("SecAltID", "LegSecurityAltID_t_593395850"); // 4
          LegAID_89_set.insert("LegSecurityAltID_t_593395850");
          LegAID_89.add_attribute("SecAltIDSrc", "3"); // 4
          LegAID_89_set.insert("3");
          all_values.push_back(LegAID_89_set);
          all_compo_names.insert("LegAID_89_set");

          Leg_92.add_element(LegAID_89);
        }
        SecLstUpdRelSymsLegGrp_1.add_element(Leg_92);
      }
      {
        xml_element Stip_172{"Stip"};
        multiset<string> Stip_172_set;
        Stip_172.add_attribute("StipTyp", "BGNCON"); // 3
        Stip_172_set.insert("BGNCON");
        Stip_172.add_attribute("StipVal", "LegStipulationValue_t_1313279937"); // 3
        Stip_172_set.insert("LegStipulationValue_t_1313279937");
        all_values.push_back(Stip_172_set);
        all_compo_names.insert("Stip_172_set");

        SecLstUpdRelSymsLegGrp_1.add_element(Stip_172);
      }
      {
        xml_element BnchmkCurve_8{"BnchmkCurve"};
        multiset<string> BnchmkCurve_8_set;
        BnchmkCurve_8.add_attribute("Ccy", "CHF"); // 3
        BnchmkCurve_8_set.insert("CHF");
        BnchmkCurve_8.add_attribute("Name", "FutureSWAP"); // 3
        BnchmkCurve_8_set.insert("FutureSWAP");
        BnchmkCurve_8.add_attribute("Point", "LegBenchmarkCurvePoint_t_695488608"); // 3
        BnchmkCurve_8_set.insert("LegBenchmarkCurvePoint_t_695488608");
        BnchmkCurve_8.add_attribute("Px", "217622.540000"); // 3
        BnchmkCurve_8_set.insert("217622.540000");
        BnchmkCurve_8.add_attribute("PxTyp", "390679360"); // 3
        BnchmkCurve_8_set.insert("390679360");
        all_values.push_back(BnchmkCurve_8_set);
        all_compo_names.insert("BnchmkCurve_8_set");

        SecLstUpdRelSymsLegGrp_1.add_element(BnchmkCurve_8);
      }
      SecL_3.add_element(SecLstUpdRelSymsLegGrp_1);
    }
    {
      xml_element SprdBnchmkCurve_30{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_30_set;
      SprdBnchmkCurve_30.add_attribute("Spread", "10494837.120000"); // 2
      SprdBnchmkCurve_30_set.insert("10494837.120000");
      SprdBnchmkCurve_30.add_attribute("Ccy", "EUR"); // 2
      SprdBnchmkCurve_30_set.insert("EUR");
      SprdBnchmkCurve_30.add_attribute("Name", "Euribor"); // 2
      SprdBnchmkCurve_30_set.insert("Euribor");
      SprdBnchmkCurve_30.add_attribute("Point", "BenchmarkCurvePoint_t_990976306"); // 2
      SprdBnchmkCurve_30_set.insert("BenchmarkCurvePoint_t_990976306");
      SprdBnchmkCurve_30.add_attribute("Px", "9671525.830000"); // 2
      SprdBnchmkCurve_30_set.insert("9671525.830000");
      SprdBnchmkCurve_30.add_attribute("PxTyp", "4"); // 2
      SprdBnchmkCurve_30_set.insert("4");
      SprdBnchmkCurve_30.add_attribute("SecID", "BenchmarkSecurityID_t_1356352987"); // 2
      SprdBnchmkCurve_30_set.insert("BenchmarkSecurityID_t_1356352987");
      SprdBnchmkCurve_30.add_attribute("SecIDSrc", "7"); // 2
      SprdBnchmkCurve_30_set.insert("7");
      all_values.push_back(SprdBnchmkCurve_30_set);
      all_compo_names.insert("SprdBnchmkCurve_30_set");

      SecL_3.add_element(SprdBnchmkCurve_30);
    }
    {
      xml_element Yield_25{"Yield"};
      multiset<string> Yield_25_set;
      Yield_25.add_attribute("Typ", "WORST"); // 2
      Yield_25_set.insert("WORST");
      Yield_25.add_attribute("Yld", "1904740.530000"); // 2
      Yield_25_set.insert("1904740.530000");
      Yield_25.add_attribute("CalcDt", "YieldCalcDate_t_763475587"); // 2
      Yield_25_set.insert("YieldCalcDate_t_763475587");
      Yield_25.add_attribute("RedDt", "YieldRedemptionDate_t_914777794"); // 2
      Yield_25_set.insert("YieldRedemptionDate_t_914777794");
      Yield_25.add_attribute("RedPx", "12125199.120000"); // 2
      Yield_25_set.insert("12125199.120000");
      Yield_25.add_attribute("RedPxTyp", "11"); // 2
      Yield_25_set.insert("11");
      all_values.push_back(Yield_25_set);
      all_compo_names.insert("Yield_25_set");

      SecL_3.add_element(Yield_25);
    }
    elt.add_element(SecL_3);
  } // end SecL
  { // SecL
    xml_element SecL_4{"SecL"};
    multiset<string> SecL_4_set;
    SecL_4.add_attribute("ListUpdActn", "A"); // 1
    SecL_4_set.insert("A");
    SecL_4.add_attribute("Ccy", "USD"); // 1
    SecL_4_set.insert("USD");
    SecL_4.add_attribute("TxnTm", "RelSymTransactTime_t_1982827540"); // 1
    SecL_4_set.insert("RelSymTransactTime_t_1982827540");
    SecL_4.add_attribute("Txt", "Text_t_978811501"); // 1
    SecL_4_set.insert("Text_t_978811501");
    SecL_4.add_attribute("EncTxtLen", "125299540"); // 1
    SecL_4_set.insert("125299540");
    SecL_4.add_attribute("EncTxt", "EncodedText_t_428739743"); // 1
    SecL_4_set.insert("EncodedText_t_428739743");
    all_values.push_back(SecL_4_set);
    all_compo_names.insert("SecL_4_set");

    {
      xml_element Instrmt_75{"Instrmt"};
      multiset<string> Instrmt_75_set;
      Instrmt_75.add_attribute("Sym", "Symbol_t_811143209"); // 2
      Instrmt_75_set.insert("Symbol_t_811143209");
      Instrmt_75.add_attribute("Sfx", "WI"); // 2
      Instrmt_75_set.insert("WI");
      Instrmt_75.add_attribute("ID", "SecurityID_t_1742019680"); // 2
      Instrmt_75_set.insert("SecurityID_t_1742019680");
      Instrmt_75.add_attribute("Src", "L"); // 2
      Instrmt_75_set.insert("L");
      Instrmt_75.add_attribute("Prod", "8"); // 2
      Instrmt_75_set.insert("8");
      Instrmt_75.add_attribute("ProdCmplx", "ProductComplex_t_903408135"); // 2
      Instrmt_75_set.insert("ProductComplex_t_903408135");
      Instrmt_75.add_attribute("SecGrp", "SecurityGroup_t_741247901"); // 2
      Instrmt_75_set.insert("SecurityGroup_t_741247901");
      Instrmt_75.add_attribute("CFI", "CFICode_t_1646337621"); // 2
      Instrmt_75_set.insert("CFICode_t_1646337621");
      Instrmt_75.add_attribute("SecTyp", "DINP"); // 2
      Instrmt_75_set.insert("DINP");
      Instrmt_75.add_attribute("SubTyp", "SecuritySubType_t_1790731613"); // 2
      Instrmt_75_set.insert("SecuritySubType_t_1790731613");
      Instrmt_75.add_attribute("MMY", "2006846663"); // 2
      Instrmt_75_set.insert("2006846663");
      Instrmt_75.add_attribute("MatDt", "MaturityDate_t_1627949924"); // 2
      Instrmt_75_set.insert("MaturityDate_t_1627949924");
      Instrmt_75.add_attribute("MatTm", "948045455"); // 2
      Instrmt_75_set.insert("948045455");
      Instrmt_75.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_850339321"); // 2
      Instrmt_75_set.insert("SettleOnOpenFlag_t_850339321");
      Instrmt_75.add_attribute("AsgnMeth", "447618859"); // 2
      Instrmt_75_set.insert("447618859");
      Instrmt_75.add_attribute("Status", "2"); // 2
      Instrmt_75_set.insert("2");
      Instrmt_75.add_attribute("CpnPmt", "CouponPaymentDate_t_59208661"); // 2
      Instrmt_75_set.insert("CouponPaymentDate_t_59208661");
      Instrmt_75.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_75_set.insert("XR");
      Instrmt_75.add_attribute("Snrty", "SD"); // 2
      Instrmt_75_set.insert("SD");
      Instrmt_75.add_attribute("NotlPctOut", "2496827.140000"); // 2
      Instrmt_75_set.insert("2496827.140000");
      Instrmt_75.add_attribute("OrigNotlPctOut", "15479569.350000"); // 2
      Instrmt_75_set.insert("15479569.350000");
      Instrmt_75.add_attribute("AttchPnt", "5533985.790000"); // 2
      Instrmt_75_set.insert("5533985.790000");
      Instrmt_75.add_attribute("DetchPnt", "14622026.260000"); // 2
      Instrmt_75_set.insert("14622026.260000");
      Instrmt_75.add_attribute("Issued", "IssueDate_t_1312235631"); // 2
      Instrmt_75_set.insert("IssueDate_t_1312235631");
      Instrmt_75.add_attribute("RepoCollSecTyp", "1731889665"); // 2
      Instrmt_75_set.insert("1731889665");
      Instrmt_75.add_attribute("RepoTrm", "1779990721"); // 2
      Instrmt_75_set.insert("1779990721");
      Instrmt_75.add_attribute("RepoRt", "6552086.240000"); // 2
      Instrmt_75_set.insert("6552086.240000");
      Instrmt_75.add_attribute("Fctr", "15672335.580000"); // 2
      Instrmt_75_set.insert("15672335.580000");
      Instrmt_75.add_attribute("CrdRtg", "CreditRating_t_611318574"); // 2
      Instrmt_75_set.insert("CreditRating_t_611318574");
      Instrmt_75.add_attribute("Rgstry", "InstrRegistry_t_780508164"); // 2
      Instrmt_75_set.insert("InstrRegistry_t_780508164");
      Instrmt_75.add_attribute("IssuCtry", "1995973301"); // 2
      Instrmt_75_set.insert("1995973301");
      Instrmt_75.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1422461783"); // 2
      Instrmt_75_set.insert("StateOrProvinceOfIssue_t_1422461783");
      Instrmt_75.add_attribute("Lcl", "LocaleOfIssue_t_1288587549"); // 2
      Instrmt_75_set.insert("LocaleOfIssue_t_1288587549");
      Instrmt_75.add_attribute("Redeem", "RedemptionDate_t_1590509333"); // 2
      Instrmt_75_set.insert("RedemptionDate_t_1590509333");
      Instrmt_75.add_attribute("StrkPx", "14682210.760000"); // 2
      Instrmt_75_set.insert("14682210.760000");
      Instrmt_75.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_75_set.insert("USD");
      Instrmt_75.add_attribute("StrkMult", "619853.290000"); // 2
      Instrmt_75_set.insert("619853.290000");
      Instrmt_75.add_attribute("StrkValu", "2645332.410000"); // 2
      Instrmt_75_set.insert("2645332.410000");
      Instrmt_75.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_75_set.insert("4");
      Instrmt_75.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_75_set.insert("3");
      Instrmt_75.add_attribute("StrkPxBndryPrcsn", "1238962.560000"); // 2
      Instrmt_75_set.insert("1238962.560000");
      Instrmt_75.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_75_set.insert("4");
      Instrmt_75.add_attribute("OptAt", "653278750"); // 2
      Instrmt_75_set.insert("653278750");
      Instrmt_75.add_attribute("Mult", "9742355.780000"); // 2
      Instrmt_75_set.insert("9742355.780000");
      Instrmt_75.add_attribute("MultTyp", "2"); // 2
      Instrmt_75_set.insert("2");
      Instrmt_75.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_75_set.insert("2");
      Instrmt_75.add_attribute("MinPxIncr", "10334442.390000"); // 2
      Instrmt_75_set.insert("10334442.390000");
      Instrmt_75.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_205604150"); // 2
      Instrmt_75_set.insert("MinPriceIncrementAmount_t_205604150");
      Instrmt_75.add_attribute("UOM", "MMbbl"); // 2
      Instrmt_75_set.insert("MMbbl");
      Instrmt_75.add_attribute("UOMQty", "12831269.530000"); // 2
      Instrmt_75_set.insert("12831269.530000");
      Instrmt_75.add_attribute("PxUOM", "Gal"); // 2
      Instrmt_75_set.insert("Gal");
      Instrmt_75.add_attribute("PxUOMQty", "1429222.220000"); // 2
      Instrmt_75_set.insert("1429222.220000");
      Instrmt_75.add_attribute("SettlMeth", "P"); // 2
      Instrmt_75_set.insert("P");
      Instrmt_75.add_attribute("ExerStyle", "0"); // 2
      Instrmt_75_set.insert("0");
      Instrmt_75.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_75_set.insert("1");
      Instrmt_75.add_attribute("OptPayAmt", "OptPayoutAmount_t_230353004"); // 2
      Instrmt_75_set.insert("OptPayoutAmount_t_230353004");
      Instrmt_75.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_75_set.insert("STD");
      Instrmt_75.add_attribute("ValMeth", "CDS"); // 2
      Instrmt_75_set.insert("CDS");
      Instrmt_75.add_attribute("ListMeth", "0"); // 2
      Instrmt_75_set.insert("0");
      Instrmt_75.add_attribute("CapPx", "2065462.090000"); // 2
      Instrmt_75_set.insert("2065462.090000");
      Instrmt_75.add_attribute("FlrPx", "11430514.510000"); // 2
      Instrmt_75_set.insert("11430514.510000");
      Instrmt_75.add_attribute("PutCall", "1"); // 2
      Instrmt_75_set.insert("1");
      Instrmt_75.add_attribute("FlexInd", "true"); // 2
      Instrmt_75_set.insert("true");
      Instrmt_75.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_75_set.insert("true");
      Instrmt_75.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_75_set.insert("Mo");
      Instrmt_75.add_attribute("CpnRt", "1133293.780000"); // 2
      Instrmt_75_set.insert("1133293.780000");
      Instrmt_75.add_attribute("Exch", "SecurityExchange_t_932510956"); // 2
      Instrmt_75_set.insert("SecurityExchange_t_932510956");
      Instrmt_75.add_attribute("PosLmt", "1646856118"); // 2
      Instrmt_75_set.insert("1646856118");
      Instrmt_75.add_attribute("NTPosLmt", "377862619"); // 2
      Instrmt_75_set.insert("377862619");
      Instrmt_75.add_attribute("Issr", "Issuer_t_425548623"); // 2
      Instrmt_75_set.insert("Issuer_t_425548623");
      Instrmt_75.add_attribute("EncIssrLen", "1352089413"); // 2
      Instrmt_75_set.insert("1352089413");
      Instrmt_75.add_attribute("EncIssr", "EncodedIssuer_t_501758876"); // 2
      Instrmt_75_set.insert("EncodedIssuer_t_501758876");
      Instrmt_75.add_attribute("Desc", "SecurityDesc_t_1546536214"); // 2
      Instrmt_75_set.insert("SecurityDesc_t_1546536214");
      Instrmt_75.add_attribute("EncSecDescLen", "2005368163"); // 2
      Instrmt_75_set.insert("2005368163");
      Instrmt_75.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1475994454"); // 2
      Instrmt_75_set.insert("EncodedSecurityDesc_t_1475994454");
      Instrmt_75.add_attribute("Pool", "Pool_t_967659016"); // 2
      Instrmt_75_set.insert("Pool_t_967659016");
      Instrmt_75.add_attribute("CSetMo", "1956271022"); // 2
      Instrmt_75_set.insert("1956271022");
      Instrmt_75.add_attribute("CPPgm", "99"); // 2
      Instrmt_75_set.insert("99");
      Instrmt_75.add_attribute("CPRegT", "CPRegType_t_1173263166"); // 2
      Instrmt_75_set.insert("CPRegType_t_1173263166");
      Instrmt_75.add_attribute("Dated", "DatedDate_t_1545794665"); // 2
      Instrmt_75_set.insert("DatedDate_t_1545794665");
      Instrmt_75.add_attribute("IntAcrl", "InterestAccrualDate_t_1645081998"); // 2
      Instrmt_75_set.insert("InterestAccrualDate_t_1645081998");
      all_values.push_back(Instrmt_75_set);
      all_compo_names.insert("Instrmt_75_set");

      {
        xml_element AID_78{"AID"};
        multiset<string> AID_78_set;
        AID_78.add_attribute("AltID", "SecurityAltID_t_779340603"); // 3
        AID_78_set.insert("SecurityAltID_t_779340603");
        AID_78.add_attribute("AltIDSrc", "D"); // 3
        AID_78_set.insert("D");
        all_values.push_back(AID_78_set);
        all_compo_names.insert("AID_78_set");

        Instrmt_75.add_element(AID_78);
      }
      {
        xml_element SecXML_78{"SecXML"};
        multiset<string> SecXML_78_set;
        SecXML_78.add_attribute("Schema", "SecurityXMLSchema_t_95444281"); // 3
        SecXML_78_set.insert("SecurityXMLSchema_t_95444281");
        all_values.push_back(SecXML_78_set);
        all_compo_names.insert("SecXML_78_set");

        Instrmt_75.add_element(SecXML_78);
      }
      {
        xml_element Evnt_78{"Evnt"};
        multiset<string> Evnt_78_set;
        Evnt_78.add_attribute("EventTyp", "12"); // 3
        Evnt_78_set.insert("12");
        Evnt_78.add_attribute("Dt", "EventDate_t_1416045128"); // 3
        Evnt_78_set.insert("EventDate_t_1416045128");
        Evnt_78.add_attribute("Tm", "EventTime_t_325797286"); // 3
        Evnt_78_set.insert("EventTime_t_325797286");
        Evnt_78.add_attribute("Px", "11236917.160000"); // 3
        Evnt_78_set.insert("11236917.160000");
        Evnt_78.add_attribute("Txt", "EventText_t_563123278"); // 3
        Evnt_78_set.insert("EventText_t_563123278");
        all_values.push_back(Evnt_78_set);
        all_compo_names.insert("Evnt_78_set");

        Instrmt_75.add_element(Evnt_78);
      }
      {
        xml_element Pty_386{"Pty"};
        multiset<string> Pty_386_set;
        Pty_386.add_attribute("ID", "InstrumentPartyID_t_1167468864"); // 3
        Pty_386_set.insert("InstrumentPartyID_t_1167468864");
        Pty_386.add_attribute("Src", "I"); // 3
        Pty_386_set.insert("I");
        Pty_386.add_attribute("R", "79"); // 3
        Pty_386_set.insert("79");
        all_values.push_back(Pty_386_set);
        all_compo_names.insert("Pty_386_set");

        {
          xml_element Sub_386{"Sub"};
          multiset<string> Sub_386_set;
          Sub_386.add_attribute("ID", "InstrumentPartySubID_t_1284118578"); // 4
          Sub_386_set.insert("InstrumentPartySubID_t_1284118578");
          Sub_386.add_attribute("Typ", "7"); // 4
          Sub_386_set.insert("7");
          all_values.push_back(Sub_386_set);
          all_compo_names.insert("Sub_386_set");

          Pty_386.add_element(Sub_386);
        }
        Instrmt_75.add_element(Pty_386);
      }
      {
        xml_element CmplxEvnt_75{"CmplxEvnt"};
        multiset<string> CmplxEvnt_75_set;
        CmplxEvnt_75.add_attribute("Typ", "5"); // 3
        CmplxEvnt_75_set.insert("5");
        CmplxEvnt_75.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_721505719"); // 3
        CmplxEvnt_75_set.insert("ComplexOptPayoutAmount_t_721505719");
        CmplxEvnt_75.add_attribute("Px", "7912174.140000"); // 3
        CmplxEvnt_75_set.insert("7912174.140000");
        CmplxEvnt_75.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_75_set.insert("4");
        CmplxEvnt_75.add_attribute("PxBndryPrcsn", "2208781.900000"); // 3
        CmplxEvnt_75_set.insert("2208781.900000");
        CmplxEvnt_75.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_75_set.insert("3");
        CmplxEvnt_75.add_attribute("Cond", "1"); // 3
        CmplxEvnt_75_set.insert("1");
        all_values.push_back(CmplxEvnt_75_set);
        all_compo_names.insert("CmplxEvnt_75_set");

        {
          xml_element EvntDts_75{"EvntDts"};
          multiset<string> EvntDts_75_set;
          EvntDts_75.add_attribute("StartDt", "ComplexEventStartDate_t_1572967603"); // 4
          EvntDts_75_set.insert("ComplexEventStartDate_t_1572967603");
          EvntDts_75.add_attribute("EndDt", "ComplexEventEndDate_t_1670838910"); // 4
          EvntDts_75_set.insert("ComplexEventEndDate_t_1670838910");
          all_values.push_back(EvntDts_75_set);
          all_compo_names.insert("EvntDts_75_set");

          {
            xml_element EvntTms_75{"EvntTms"};
            multiset<string> EvntTms_75_set;
            EvntTms_75.add_attribute("StartTm", "901880362"); // 5
            EvntTms_75_set.insert("901880362");
            EvntTms_75.add_attribute("EndTm", "1430852118"); // 5
            EvntTms_75_set.insert("1430852118");
            all_values.push_back(EvntTms_75_set);
            all_compo_names.insert("EvntTms_75_set");

            EvntDts_75.add_element(EvntTms_75);
          }
          CmplxEvnt_75.add_element(EvntDts_75);
        }
        Instrmt_75.add_element(CmplxEvnt_75);
      }
      SecL_4.add_element(Instrmt_75);
    }
    {
      xml_element InstrmtExt_14{"InstrmtExt"};
      multiset<string> InstrmtExt_14_set;
      InstrmtExt_14.add_attribute("DlvryForm", "1"); // 2
      InstrmtExt_14_set.insert("1");
      InstrmtExt_14.add_attribute("PctAtRisk", "18695393.780000"); // 2
      InstrmtExt_14_set.insert("18695393.780000");
      all_values.push_back(InstrmtExt_14_set);
      all_compo_names.insert("InstrmtExt_14_set");

      {
        xml_element Attrb_26{"Attrb"};
        multiset<string> Attrb_26_set;
        Attrb_26.add_attribute("Typ", "20"); // 3
        Attrb_26_set.insert("20");
        Attrb_26.add_attribute("Val", "InstrAttribValue_t_1361304761"); // 3
        Attrb_26_set.insert("InstrAttribValue_t_1361304761");
        all_values.push_back(Attrb_26_set);
        all_compo_names.insert("Attrb_26_set");

        InstrmtExt_14.add_element(Attrb_26);
      }
      SecL_4.add_element(InstrmtExt_14);
    }
    {
      xml_element FinDetls_29{"FinDetls"};
      multiset<string> FinDetls_29_set;
      FinDetls_29.add_attribute("AgmtDesc", "AgreementDesc_t_895318897"); // 2
      FinDetls_29_set.insert("AgreementDesc_t_895318897");
      FinDetls_29.add_attribute("AgmtID", "AgreementID_t_637950509"); // 2
      FinDetls_29_set.insert("AgreementID_t_637950509");
      FinDetls_29.add_attribute("AgmtDt", "AgreementDate_t_858903111"); // 2
      FinDetls_29_set.insert("AgreementDate_t_858903111");
      FinDetls_29.add_attribute("AgmtCcy", "EUR"); // 2
      FinDetls_29_set.insert("EUR");
      FinDetls_29.add_attribute("TrmTyp", "1"); // 2
      FinDetls_29_set.insert("1");
      FinDetls_29.add_attribute("StartDt", "StartDate_t_1224829524"); // 2
      FinDetls_29_set.insert("StartDate_t_1224829524");
      FinDetls_29.add_attribute("EndDt", "EndDate_t_1595228877"); // 2
      FinDetls_29_set.insert("EndDate_t_1595228877");
      FinDetls_29.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_29_set.insert("2");
      FinDetls_29.add_attribute("MgnRatio", "2010375.930000"); // 2
      FinDetls_29_set.insert("2010375.930000");
      all_values.push_back(FinDetls_29_set);
      all_compo_names.insert("FinDetls_29_set");

      SecL_4.add_element(FinDetls_29);
    }
    {
      xml_element SecTrdgRules_10{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_12{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_12_set;
        BaseTrdgRules_12.add_attribute("ExpirationCycle", "2"); // 3
        BaseTrdgRules_12_set.insert("2");
        BaseTrdgRules_12.add_attribute("MinTrdVol", "3001298.950000"); // 3
        BaseTrdgRules_12_set.insert("3001298.950000");
        BaseTrdgRules_12.add_attribute("MaxTrdVol", "15312755.180000"); // 3
        BaseTrdgRules_12_set.insert("15312755.180000");
        BaseTrdgRules_12.add_attribute("MxPxVar", "17170432.360000"); // 3
        BaseTrdgRules_12_set.insert("17170432.360000");
        BaseTrdgRules_12.add_attribute("ImpldMktInd", "1"); // 3
        BaseTrdgRules_12_set.insert("1");
        BaseTrdgRules_12.add_attribute("TrdCcy", "CAN"); // 3
        BaseTrdgRules_12_set.insert("CAN");
        BaseTrdgRules_12.add_attribute("RndLot", "1582705.440000"); // 3
        BaseTrdgRules_12_set.insert("1582705.440000");
        BaseTrdgRules_12.add_attribute("MlegModel", "0"); // 3
        BaseTrdgRules_12_set.insert("0");
        BaseTrdgRules_12.add_attribute("MlegPxMeth", "2"); // 3
        BaseTrdgRules_12_set.insert("2");
        BaseTrdgRules_12.add_attribute("PxTyp", "9"); // 3
        BaseTrdgRules_12_set.insert("9");
        all_values.push_back(BaseTrdgRules_12_set);
        all_compo_names.insert("BaseTrdgRules_12_set");

        {
          xml_element TickRules_12{"TickRules"};
          multiset<string> TickRules_12_set;
          TickRules_12.add_attribute("StartTickPxRng", "20219773.550000"); // 4
          TickRules_12_set.insert("20219773.550000");
          TickRules_12.add_attribute("EndTickPxRng", "1469511.260000"); // 4
          TickRules_12_set.insert("1469511.260000");
          TickRules_12.add_attribute("TickIncr", "19521163.370000"); // 4
          TickRules_12_set.insert("19521163.370000");
          TickRules_12.add_attribute("TickRuleTyp", "2"); // 4
          TickRules_12_set.insert("2");
          all_values.push_back(TickRules_12_set);
          all_compo_names.insert("TickRules_12_set");

          BaseTrdgRules_12.add_element(TickRules_12);
        }
        {
          xml_element LotTypeRules_12{"LotTypeRules"};
          multiset<string> LotTypeRules_12_set;
          LotTypeRules_12.add_attribute("LotTyp", "1"); // 4
          LotTypeRules_12_set.insert("1");
          LotTypeRules_12.add_attribute("MinLotSz", "12354848.070000"); // 4
          LotTypeRules_12_set.insert("12354848.070000");
          all_values.push_back(LotTypeRules_12_set);
          all_compo_names.insert("LotTypeRules_12_set");

          BaseTrdgRules_12.add_element(LotTypeRules_12);
        }
        {
          xml_element PxLmts_12{"PxLmts"};
          multiset<string> PxLmts_12_set;
          PxLmts_12.add_attribute("PxLmtTyp", "2"); // 4
          PxLmts_12_set.insert("2");
          PxLmts_12.add_attribute("LowLmtPx", "7708872.190000"); // 4
          PxLmts_12_set.insert("7708872.190000");
          PxLmts_12.add_attribute("HiLmtPx", "3276406.510000"); // 4
          PxLmts_12_set.insert("3276406.510000");
          PxLmts_12.add_attribute("TrdgRefPx", "17585034.460000"); // 4
          PxLmts_12_set.insert("17585034.460000");
          all_values.push_back(PxLmts_12_set);
          all_compo_names.insert("PxLmts_12_set");

          BaseTrdgRules_12.add_element(PxLmts_12);
        }
        SecTrdgRules_10.add_element(BaseTrdgRules_12);
      }
      {
        xml_element TrdgSesRulesGrp_10{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_10_set;
        TrdgSesRulesGrp_10.add_attribute("SesID", "3"); // 3
        TrdgSesRulesGrp_10_set.insert("3");
        TrdgSesRulesGrp_10.add_attribute("SesSub", "4"); // 3
        TrdgSesRulesGrp_10_set.insert("4");
        all_values.push_back(TrdgSesRulesGrp_10_set);
        all_compo_names.insert("TrdgSesRulesGrp_10_set");

        {
          xml_element TrdgSesRules_10{"TrdgSesRules"};
          {
            xml_element OrdTypRules_13{"OrdTypRules"};
            multiset<string> OrdTypRules_13_set;
            OrdTypRules_13.add_attribute("OrdTyp", "6"); // 5
            OrdTypRules_13_set.insert("6");
            all_values.push_back(OrdTypRules_13_set);
            all_compo_names.insert("OrdTypRules_13_set");

            TrdgSesRules_10.add_element(OrdTypRules_13);
          }
          {
            xml_element TmInForceRules_14{"TmInForceRules"};
            multiset<string> TmInForceRules_14_set;
            TmInForceRules_14.add_attribute("TmInForce", "8"); // 5
            TmInForceRules_14_set.insert("8");
            all_values.push_back(TmInForceRules_14_set);
            all_compo_names.insert("TmInForceRules_14_set");

            TrdgSesRules_10.add_element(TmInForceRules_14);
          }
          {
            xml_element ExecInstRules_14{"ExecInstRules"};
            multiset<string> ExecInstRules_14_set;
            ExecInstRules_14.add_attribute("ExecInstValu", "6"); // 5
            ExecInstRules_14_set.insert("6");
            all_values.push_back(ExecInstRules_14_set);
            all_compo_names.insert("ExecInstRules_14_set");

            TrdgSesRules_10.add_element(ExecInstRules_14);
          }
          {
            xml_element MtchRules_10{"MtchRules"};
            multiset<string> MtchRules_10_set;
            MtchRules_10.add_attribute("MtchAlgo", "MatchAlgorithm_t_1424270301"); // 5
            MtchRules_10_set.insert("MatchAlgorithm_t_1424270301");
            MtchRules_10.add_attribute("MtchTyp", "M2"); // 5
            MtchRules_10_set.insert("M2");
            all_values.push_back(MtchRules_10_set);
            all_compo_names.insert("MtchRules_10_set");

            TrdgSesRules_10.add_element(MtchRules_10);
          }
          {
            xml_element MDFeedTyps_10{"MDFeedTyps"};
            multiset<string> MDFeedTyps_10_set;
            MDFeedTyps_10.add_attribute("MDFeedTyp", "MDFeedType_t_592520140"); // 5
            MDFeedTyps_10_set.insert("MDFeedType_t_592520140");
            MDFeedTyps_10.add_attribute("MktDepth", "556931332"); // 5
            MDFeedTyps_10_set.insert("556931332");
            MDFeedTyps_10.add_attribute("MDBkTyp", "1"); // 5
            MDFeedTyps_10_set.insert("1");
            all_values.push_back(MDFeedTyps_10_set);
            all_compo_names.insert("MDFeedTyps_10_set");

            TrdgSesRules_10.add_element(MDFeedTyps_10);
          }
          TrdgSesRulesGrp_10.add_element(TrdgSesRules_10);
        }
        SecTrdgRules_10.add_element(TrdgSesRulesGrp_10);
      }
      {
        xml_element Attrb_27{"Attrb"};
        multiset<string> Attrb_27_set;
        Attrb_27.add_attribute("Typ", "27"); // 3
        Attrb_27_set.insert("27");
        Attrb_27.add_attribute("Val", "NestedInstrAttribValue_t_857061227"); // 3
        Attrb_27_set.insert("NestedInstrAttribValue_t_857061227");
        all_values.push_back(Attrb_27_set);
        all_compo_names.insert("Attrb_27_set");

        SecTrdgRules_10.add_element(Attrb_27);
      }
      SecL_4.add_element(SecTrdgRules_10);
    }
    {
      xml_element StrkRules_10{"StrkRules"};
      multiset<string> StrkRules_10_set;
      StrkRules_10.add_attribute("StrkRule", "StrikeRuleID_t_2003040956"); // 2
      StrkRules_10_set.insert("StrikeRuleID_t_2003040956");
      StrkRules_10.add_attribute("StartStrkPxRng", "1729482.360000"); // 2
      StrkRules_10_set.insert("1729482.360000");
      StrkRules_10.add_attribute("EndStrkPxRng", "2938260.520000"); // 2
      StrkRules_10_set.insert("2938260.520000");
      StrkRules_10.add_attribute("StrkIncr", "20647208.630000"); // 2
      StrkRules_10_set.insert("20647208.630000");
      StrkRules_10.add_attribute("StrkExrStyle", "2"); // 2
      StrkRules_10_set.insert("2");
      all_values.push_back(StrkRules_10_set);
      all_compo_names.insert("StrkRules_10_set");

      {
        xml_element MatRules_10{"MatRules"};
        multiset<string> MatRules_10_set;
        MatRules_10.add_attribute("MatRuleID", "MaturityRuleID_t_452096596"); // 3
        MatRules_10_set.insert("MaturityRuleID_t_452096596");
        MatRules_10.add_attribute("MMYFmt", "0"); // 3
        MatRules_10_set.insert("0");
        MatRules_10.add_attribute("MMYIncrUnits", "0"); // 3
        MatRules_10_set.insert("0");
        MatRules_10.add_attribute("StartMMY", "831245331"); // 3
        MatRules_10_set.insert("831245331");
        MatRules_10.add_attribute("EndMMY", "644628243"); // 3
        MatRules_10_set.insert("644628243");
        MatRules_10.add_attribute("MMYIncr", "825834146"); // 3
        MatRules_10_set.insert("825834146");
        all_values.push_back(MatRules_10_set);
        all_compo_names.insert("MatRules_10_set");

        StrkRules_10.add_element(MatRules_10);
      }
      SecL_4.add_element(StrkRules_10);
    }
    {
      xml_element Undly_108{"Undly"};
      multiset<string> Undly_108_set;
      Undly_108.add_attribute("Sym", "UnderlyingSymbol_t_635878020"); // 2
      Undly_108_set.insert("UnderlyingSymbol_t_635878020");
      Undly_108.add_attribute("Sfx", "CD"); // 2
      Undly_108_set.insert("CD");
      Undly_108.add_attribute("ID", "UnderlyingSecurityID_t_1874665635"); // 2
      Undly_108_set.insert("UnderlyingSecurityID_t_1874665635");
      Undly_108.add_attribute("Src", "H"); // 2
      Undly_108_set.insert("H");
      Undly_108.add_attribute("Prod", "8"); // 2
      Undly_108_set.insert("8");
      Undly_108.add_attribute("CFI", "UnderlyingCFICode_t_498069206"); // 2
      Undly_108_set.insert("UnderlyingCFICode_t_498069206");
      Undly_108.add_attribute("SecTyp", "USTB"); // 2
      Undly_108_set.insert("USTB");
      Undly_108.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_50695695"); // 2
      Undly_108_set.insert("UnderlyingSecuritySubType_t_50695695");
      Undly_108.add_attribute("MMY", "16791674"); // 2
      Undly_108_set.insert("16791674");
      Undly_108.add_attribute("Mat", "UnderlyingMaturityDate_t_1017110992"); // 2
      Undly_108_set.insert("UnderlyingMaturityDate_t_1017110992");
      Undly_108.add_attribute("MatTm", "520618604"); // 2
      Undly_108_set.insert("520618604");
      Undly_108.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1210173642"); // 2
      Undly_108_set.insert("UnderlyingCouponPaymentDate_t_1210173642");
      Undly_108.add_attribute("RestrctTyp", "XR"); // 2
      Undly_108_set.insert("XR");
      Undly_108.add_attribute("Snrty", "SB"); // 2
      Undly_108_set.insert("SB");
      Undly_108.add_attribute("NotlPctOut", "14809014.870000"); // 2
      Undly_108_set.insert("14809014.870000");
      Undly_108.add_attribute("OrigNotlPctOut", "6069223.950000"); // 2
      Undly_108_set.insert("6069223.950000");
      Undly_108.add_attribute("AttchPnt", "3543365.890000"); // 2
      Undly_108_set.insert("3543365.890000");
      Undly_108.add_attribute("DetchPnt", "19526669.250000"); // 2
      Undly_108_set.insert("19526669.250000");
      Undly_108.add_attribute("Issued", "UnderlyingIssueDate_t_1210311042"); // 2
      Undly_108_set.insert("UnderlyingIssueDate_t_1210311042");
      Undly_108.add_attribute("RepoCollSecTyp", "1211397816"); // 2
      Undly_108_set.insert("1211397816");
      Undly_108.add_attribute("RepoTrm", "1808224234"); // 2
      Undly_108_set.insert("1808224234");
      Undly_108.add_attribute("RepoRt", "13832592.780000"); // 2
      Undly_108_set.insert("13832592.780000");
      Undly_108.add_attribute("Fctr", "15052238.680000"); // 2
      Undly_108_set.insert("15052238.680000");
      Undly_108.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1725461449"); // 2
      Undly_108_set.insert("UnderlyingCreditRating_t_1725461449");
      Undly_108.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1270535320"); // 2
      Undly_108_set.insert("UnderlyingInstrRegistry_t_1270535320");
      Undly_108.add_attribute("Ctry", "1957320465"); // 2
      Undly_108_set.insert("1957320465");
      Undly_108.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_348112337"); // 2
      Undly_108_set.insert("UnderlyingStateOrProvinceOfIssue_t_348112337");
      Undly_108.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1949418340"); // 2
      Undly_108_set.insert("UnderlyingLocaleOfIssue_t_1949418340");
      Undly_108.add_attribute("Redeem", "UnderlyingRedemptionDate_t_641082148"); // 2
      Undly_108_set.insert("UnderlyingRedemptionDate_t_641082148");
      Undly_108.add_attribute("StrkPx", "9927405.800000"); // 2
      Undly_108_set.insert("9927405.800000");
      Undly_108.add_attribute("StrkCcy", "JPY"); // 2
      Undly_108_set.insert("JPY");
      Undly_108.add_attribute("OptA", "1035217792"); // 2
      Undly_108_set.insert("1035217792");
      Undly_108.add_attribute("Mult", "3549508.250000"); // 2
      Undly_108_set.insert("3549508.250000");
      Undly_108.add_attribute("MultTyp", "0"); // 2
      Undly_108_set.insert("0");
      Undly_108.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_108_set.insert("4");
      Undly_108.add_attribute("UOM", "MMbbl"); // 2
      Undly_108_set.insert("MMbbl");
      Undly_108.add_attribute("UOMQty", "10523591.800000"); // 2
      Undly_108_set.insert("10523591.800000");
      Undly_108.add_attribute("PxUOM", "lbs"); // 2
      Undly_108_set.insert("lbs");
      Undly_108.add_attribute("PxUOMQty", "8698117.050000"); // 2
      Undly_108_set.insert("8698117.050000");
      Undly_108.add_attribute("TmUnit", "S"); // 2
      Undly_108_set.insert("S");
      Undly_108.add_attribute("ExerStyle", "1"); // 2
      Undly_108_set.insert("1");
      Undly_108.add_attribute("CpnRt", "20799853.480000"); // 2
      Undly_108_set.insert("20799853.480000");
      Undly_108.add_attribute("Exch", "UnderlyingSecurityExchange_t_2083872427"); // 2
      Undly_108_set.insert("UnderlyingSecurityExchange_t_2083872427");
      Undly_108.add_attribute("Issr", "UnderlyingIssuer_t_1843613245"); // 2
      Undly_108_set.insert("UnderlyingIssuer_t_1843613245");
      Undly_108.add_attribute("EncUndIssrLen", "1413403187"); // 2
      Undly_108_set.insert("1413403187");
      Undly_108.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_543311174"); // 2
      Undly_108_set.insert("EncodedUnderlyingIssuer_t_543311174");
      Undly_108.add_attribute("Desc", "UnderlyingSecurityDesc_t_50466187"); // 2
      Undly_108_set.insert("UnderlyingSecurityDesc_t_50466187");
      Undly_108.add_attribute("EncUndSecDescLen", "1218586465"); // 2
      Undly_108_set.insert("1218586465");
      Undly_108.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1753622217"); // 2
      Undly_108_set.insert("EncodedUnderlyingSecurityDesc_t_1753622217");
      Undly_108.add_attribute("CPPgm", "UnderlyingCPProgram_t_1261864003"); // 2
      Undly_108_set.insert("UnderlyingCPProgram_t_1261864003");
      Undly_108.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_879327051"); // 2
      Undly_108_set.insert("UnderlyingCPRegType_t_879327051");
      Undly_108.add_attribute("AllocPct", "9893978.470000"); // 2
      Undly_108_set.insert("9893978.470000");
      Undly_108.add_attribute("Ccy", "GBP"); // 2
      Undly_108_set.insert("GBP");
      Undly_108.add_attribute("Qty", "1124495.190000"); // 2
      Undly_108_set.insert("1124495.190000");
      Undly_108.add_attribute("SettlTyp", "5"); // 2
      Undly_108_set.insert("5");
      Undly_108.add_attribute("CashAmt", "UnderlyingCashAmount_t_805417189"); // 2
      Undly_108_set.insert("UnderlyingCashAmount_t_805417189");
      Undly_108.add_attribute("CashTyp", "DIFF"); // 2
      Undly_108_set.insert("DIFF");
      Undly_108.add_attribute("Px", "10705231.890000"); // 2
      Undly_108_set.insert("10705231.890000");
      Undly_108.add_attribute("DirtPx", "17981577.690000"); // 2
      Undly_108_set.insert("17981577.690000");
      Undly_108.add_attribute("EndPx", "5421530.500000"); // 2
      Undly_108_set.insert("5421530.500000");
      Undly_108.add_attribute("StartVal", "UnderlyingStartValue_t_199999709"); // 2
      Undly_108_set.insert("UnderlyingStartValue_t_199999709");
      Undly_108.add_attribute("CurVal", "UnderlyingCurrentValue_t_685891913"); // 2
      Undly_108_set.insert("UnderlyingCurrentValue_t_685891913");
      Undly_108.add_attribute("EndVal", "UnderlyingEndValue_t_897103875"); // 2
      Undly_108_set.insert("UnderlyingEndValue_t_897103875");
      Undly_108.add_attribute("AdjQty", "12008390.580000"); // 2
      Undly_108_set.insert("12008390.580000");
      Undly_108.add_attribute("FxRate", "133019.540000"); // 2
      Undly_108_set.insert("133019.540000");
      Undly_108.add_attribute("FxRateCalc", "D"); // 2
      Undly_108_set.insert("D");
      Undly_108.add_attribute("CapValu", "UnderlyingCapValue_t_105714590"); // 2
      Undly_108_set.insert("UnderlyingCapValue_t_105714590");
      Undly_108.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1538891338"); // 2
      Undly_108_set.insert("UnderlyingSettlMethod_t_1538891338");
      Undly_108.add_attribute("PutCall", "472451964"); // 2
      Undly_108_set.insert("472451964");
      all_values.push_back(Undly_108_set);
      all_compo_names.insert("Undly_108_set");

      {
        xml_element UndAID_108{"UndAID"};
        multiset<string> UndAID_108_set;
        UndAID_108.add_attribute("AltID", "UnderlyingSecurityAltID_t_27701114"); // 3
        UndAID_108_set.insert("UnderlyingSecurityAltID_t_27701114");
        UndAID_108.add_attribute("AltIDSrc", "5"); // 3
        UndAID_108_set.insert("5");
        all_values.push_back(UndAID_108_set);
        all_compo_names.insert("UndAID_108_set");

        Undly_108.add_element(UndAID_108);
      }
      {
        xml_element Stip_173{"Stip"};
        multiset<string> Stip_173_set;
        Stip_173.add_attribute("Typ", "ROLLTYPE"); // 3
        Stip_173_set.insert("ROLLTYPE");
        Stip_173.add_attribute("Val", "UnderlyingStipValue_t_2111573542"); // 3
        Stip_173_set.insert("UnderlyingStipValue_t_2111573542");
        all_values.push_back(Stip_173_set);
        all_compo_names.insert("Stip_173_set");

        Undly_108.add_element(Stip_173);
      }
      {
        xml_element Pty_387{"Pty"};
        multiset<string> Pty_387_set;
        Pty_387.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1133745275"); // 3
        Pty_387_set.insert("UnderlyingInstrumentPartyID_t_1133745275");
        Pty_387.add_attribute("Src", "3"); // 3
        Pty_387_set.insert("3");
        Pty_387.add_attribute("R", "78"); // 3
        Pty_387_set.insert("78");
        all_values.push_back(Pty_387_set);
        all_compo_names.insert("Pty_387_set");

        {
          xml_element Sub_387{"Sub"};
          multiset<string> Sub_387_set;
          Sub_387.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1184211462"); // 4
          Sub_387_set.insert("UnderlyingInstrumentPartySubID_t_1184211462");
          Sub_387.add_attribute("Typ", "19"); // 4
          Sub_387_set.insert("19");
          all_values.push_back(Sub_387_set);
          all_compo_names.insert("Sub_387_set");

          Pty_387.add_element(Sub_387);
        }
        Undly_108.add_element(Pty_387);
      }
      SecL_4.add_element(Undly_108);
    }
    {
      xml_element Stip_174{"Stip"};
      multiset<string> Stip_174_set;
      Stip_174.add_attribute("Typ", "PRICEFREQ"); // 2
      Stip_174_set.insert("PRICEFREQ");
      Stip_174.add_attribute("Val", "StipulationValue_t_298591818"); // 2
      Stip_174_set.insert("StipulationValue_t_298591818");
      all_values.push_back(Stip_174_set);
      all_compo_names.insert("Stip_174_set");

      SecL_4.add_element(Stip_174);
    }
    {
      xml_element SecLstUpdRelSymsLegGrp_2{"SecLstUpdRelSymsLegGrp"};
      multiset<string> SecLstUpdRelSymsLegGrp_2_set;
      SecLstUpdRelSymsLegGrp_2.add_attribute("SwapTyp", "1"); // 2
      SecLstUpdRelSymsLegGrp_2_set.insert("1");
      SecLstUpdRelSymsLegGrp_2.add_attribute("SettlTyp", "1"); // 2
      SecLstUpdRelSymsLegGrp_2_set.insert("1");
      all_values.push_back(SecLstUpdRelSymsLegGrp_2_set);
      all_compo_names.insert("SecLstUpdRelSymsLegGrp_2_set");

      {
        xml_element Leg_93{"Leg"};
        multiset<string> Leg_93_set;
        Leg_93.add_attribute("Sym", "LegSymbol_t_918196042"); // 3
        Leg_93_set.insert("LegSymbol_t_918196042");
        Leg_93.add_attribute("Sfx", "CD"); // 3
        Leg_93_set.insert("CD");
        Leg_93.add_attribute("ID", "LegSecurityID_t_1215387004"); // 3
        Leg_93_set.insert("LegSecurityID_t_1215387004");
        Leg_93.add_attribute("Src", "2"); // 3
        Leg_93_set.insert("2");
        Leg_93.add_attribute("Prod", "7"); // 3
        Leg_93_set.insert("7");
        Leg_93.add_attribute("CFI", "LegCFICode_t_1129771216"); // 3
        Leg_93_set.insert("LegCFICode_t_1129771216");
        Leg_93.add_attribute("SecTyp", "TIPS"); // 3
        Leg_93_set.insert("TIPS");
        Leg_93.add_attribute("SecSubTyp", "LegSecuritySubType_t_534699234"); // 3
        Leg_93_set.insert("LegSecuritySubType_t_534699234");
        Leg_93.add_attribute("MMY", "1671924266"); // 3
        Leg_93_set.insert("1671924266");
        Leg_93.add_attribute("Mat", "LegMaturityDate_t_470676333"); // 3
        Leg_93_set.insert("LegMaturityDate_t_470676333");
        Leg_93.add_attribute("MatTm", "1220591147"); // 3
        Leg_93_set.insert("1220591147");
        Leg_93.add_attribute("CpnPmt", "LegCouponPaymentDate_t_421544493"); // 3
        Leg_93_set.insert("LegCouponPaymentDate_t_421544493");
        Leg_93.add_attribute("Issued", "LegIssueDate_t_1671515391"); // 3
        Leg_93_set.insert("LegIssueDate_t_1671515391");
        Leg_93.add_attribute("RepoCollSecTyp", "1233893101"); // 3
        Leg_93_set.insert("1233893101");
        Leg_93.add_attribute("RepoTrm", "24184752"); // 3
        Leg_93_set.insert("24184752");
        Leg_93.add_attribute("RepoRt", "17772299.810000"); // 3
        Leg_93_set.insert("17772299.810000");
        Leg_93.add_attribute("Fctr", "6253007.910000"); // 3
        Leg_93_set.insert("6253007.910000");
        Leg_93.add_attribute("CrdRtg", "LegCreditRating_t_496636717"); // 3
        Leg_93_set.insert("LegCreditRating_t_496636717");
        Leg_93.add_attribute("Rgstry", "LegInstrRegistry_t_1804931096"); // 3
        Leg_93_set.insert("LegInstrRegistry_t_1804931096");
        Leg_93.add_attribute("Ctry", "2062916469"); // 3
        Leg_93_set.insert("2062916469");
        Leg_93.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_901590381"); // 3
        Leg_93_set.insert("LegStateOrProvinceOfIssue_t_901590381");
        Leg_93.add_attribute("Lcl", "LegLocaleOfIssue_t_1769020990"); // 3
        Leg_93_set.insert("LegLocaleOfIssue_t_1769020990");
        Leg_93.add_attribute("Redeem", "LegRedemptionDate_t_1049178096"); // 3
        Leg_93_set.insert("LegRedemptionDate_t_1049178096");
        Leg_93.add_attribute("Strk", "5724635.850000"); // 3
        Leg_93_set.insert("5724635.850000");
        Leg_93.add_attribute("StrkCcy", "CAN"); // 3
        Leg_93_set.insert("CAN");
        Leg_93.add_attribute("OptA", "1461923254"); // 3
        Leg_93_set.insert("1461923254");
        Leg_93.add_attribute("Cmult", "2424780.480000"); // 3
        Leg_93_set.insert("2424780.480000");
        Leg_93.add_attribute("MultTyp", "2"); // 3
        Leg_93_set.insert("2");
        Leg_93.add_attribute("FlowSchedTyp", "1"); // 3
        Leg_93_set.insert("1");
        Leg_93.add_attribute("UOM", "lbs"); // 3
        Leg_93_set.insert("lbs");
        Leg_93.add_attribute("UOMQty", "13026937.710000"); // 3
        Leg_93_set.insert("13026937.710000");
        Leg_93.add_attribute("PxUOM", "tn"); // 3
        Leg_93_set.insert("tn");
        Leg_93.add_attribute("PxUOMQty", "4133188.890000"); // 3
        Leg_93_set.insert("4133188.890000");
        Leg_93.add_attribute("TmUnit", "Min"); // 3
        Leg_93_set.insert("Min");
        Leg_93.add_attribute("ExerStyle", "0"); // 3
        Leg_93_set.insert("0");
        Leg_93.add_attribute("CpnRt", "15430901.050000"); // 3
        Leg_93_set.insert("15430901.050000");
        Leg_93.add_attribute("Exch", "LegSecurityExchange_t_773523830"); // 3
        Leg_93_set.insert("LegSecurityExchange_t_773523830");
        Leg_93.add_attribute("Issr", "LegIssuer_t_433074949"); // 3
        Leg_93_set.insert("LegIssuer_t_433074949");
        Leg_93.add_attribute("EncLegIssrLen", "1067530723"); // 3
        Leg_93_set.insert("1067530723");
        Leg_93.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1244200163"); // 3
        Leg_93_set.insert("EncodedLegIssuer_t_1244200163");
        Leg_93.add_attribute("Desc", "LegSecurityDesc_t_1653666096"); // 3
        Leg_93_set.insert("LegSecurityDesc_t_1653666096");
        Leg_93.add_attribute("EncLegSecDescLen", "1489075217"); // 3
        Leg_93_set.insert("1489075217");
        Leg_93.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_768231907"); // 3
        Leg_93_set.insert("EncodedLegSecurityDesc_t_768231907");
        Leg_93.add_attribute("RatioQty", "7400755.490000"); // 3
        Leg_93_set.insert("7400755.490000");
        Leg_93.add_attribute("Side", "2"); // 3
        Leg_93_set.insert("2");
        Leg_93.add_attribute("Ccy", "GBP"); // 3
        Leg_93_set.insert("GBP");
        Leg_93.add_attribute("Pool", "LegPool_t_2009896686"); // 3
        Leg_93_set.insert("LegPool_t_2009896686");
        Leg_93.add_attribute("Dated", "LegDatedDate_t_55425688"); // 3
        Leg_93_set.insert("LegDatedDate_t_55425688");
        Leg_93.add_attribute("CSetMo", "1280809161"); // 3
        Leg_93_set.insert("1280809161");
        Leg_93.add_attribute("IntAcrl", "LegInterestAccrualDate_t_764003420"); // 3
        Leg_93_set.insert("LegInterestAccrualDate_t_764003420");
        Leg_93.add_attribute("PutCall", "1824446678"); // 3
        Leg_93_set.insert("1824446678");
        Leg_93.add_attribute("LegOptionRatio", "1825036.100000"); // 3
        Leg_93_set.insert("1825036.100000");
        Leg_93.add_attribute("Px", "13364670.050000"); // 3
        Leg_93_set.insert("13364670.050000");
        all_values.push_back(Leg_93_set);
        all_compo_names.insert("Leg_93_set");

        {
          xml_element LegAID_90{"LegAID"};
          multiset<string> LegAID_90_set;
          LegAID_90.add_attribute("SecAltID", "LegSecurityAltID_t_1953385089"); // 4
          LegAID_90_set.insert("LegSecurityAltID_t_1953385089");
          LegAID_90.add_attribute("SecAltIDSrc", "I"); // 4
          LegAID_90_set.insert("I");
          all_values.push_back(LegAID_90_set);
          all_compo_names.insert("LegAID_90_set");

          Leg_93.add_element(LegAID_90);
        }
        SecLstUpdRelSymsLegGrp_2.add_element(Leg_93);
      }
      {
        xml_element Stip_175{"Stip"};
        multiset<string> Stip_175_set;
        Stip_175.add_attribute("StipTyp", "TEXT"); // 3
        Stip_175_set.insert("TEXT");
        Stip_175.add_attribute("StipVal", "LegStipulationValue_t_48379489"); // 3
        Stip_175_set.insert("LegStipulationValue_t_48379489");
        all_values.push_back(Stip_175_set);
        all_compo_names.insert("Stip_175_set");

        SecLstUpdRelSymsLegGrp_2.add_element(Stip_175);
      }
      {
        xml_element BnchmkCurve_9{"BnchmkCurve"};
        multiset<string> BnchmkCurve_9_set;
        BnchmkCurve_9.add_attribute("Ccy", "GBP"); // 3
        BnchmkCurve_9_set.insert("GBP");
        BnchmkCurve_9.add_attribute("Name", "Euribor"); // 3
        BnchmkCurve_9_set.insert("Euribor");
        BnchmkCurve_9.add_attribute("Point", "LegBenchmarkCurvePoint_t_1955601021"); // 3
        BnchmkCurve_9_set.insert("LegBenchmarkCurvePoint_t_1955601021");
        BnchmkCurve_9.add_attribute("Px", "7484835.410000"); // 3
        BnchmkCurve_9_set.insert("7484835.410000");
        BnchmkCurve_9.add_attribute("PxTyp", "1807113911"); // 3
        BnchmkCurve_9_set.insert("1807113911");
        all_values.push_back(BnchmkCurve_9_set);
        all_compo_names.insert("BnchmkCurve_9_set");

        SecLstUpdRelSymsLegGrp_2.add_element(BnchmkCurve_9);
      }
      SecL_4.add_element(SecLstUpdRelSymsLegGrp_2);
    }
    {
      xml_element SprdBnchmkCurve_31{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_31_set;
      SprdBnchmkCurve_31.add_attribute("Spread", "3109645.790000"); // 2
      SprdBnchmkCurve_31_set.insert("3109645.790000");
      SprdBnchmkCurve_31.add_attribute("Ccy", "CAN"); // 2
      SprdBnchmkCurve_31_set.insert("CAN");
      SprdBnchmkCurve_31.add_attribute("Name", "EUREPO"); // 2
      SprdBnchmkCurve_31_set.insert("EUREPO");
      SprdBnchmkCurve_31.add_attribute("Point", "BenchmarkCurvePoint_t_1079934206"); // 2
      SprdBnchmkCurve_31_set.insert("BenchmarkCurvePoint_t_1079934206");
      SprdBnchmkCurve_31.add_attribute("Px", "1227674.440000"); // 2
      SprdBnchmkCurve_31_set.insert("1227674.440000");
      SprdBnchmkCurve_31.add_attribute("PxTyp", "3"); // 2
      SprdBnchmkCurve_31_set.insert("3");
      SprdBnchmkCurve_31.add_attribute("SecID", "BenchmarkSecurityID_t_586116654"); // 2
      SprdBnchmkCurve_31_set.insert("BenchmarkSecurityID_t_586116654");
      SprdBnchmkCurve_31.add_attribute("SecIDSrc", "C"); // 2
      SprdBnchmkCurve_31_set.insert("C");
      all_values.push_back(SprdBnchmkCurve_31_set);
      all_compo_names.insert("SprdBnchmkCurve_31_set");

      SecL_4.add_element(SprdBnchmkCurve_31);
    }
    {
      xml_element Yield_26{"Yield"};
      multiset<string> Yield_26_set;
      Yield_26.add_attribute("Typ", "PREVCLOSE"); // 2
      Yield_26_set.insert("PREVCLOSE");
      Yield_26.add_attribute("Yld", "13261922.040000"); // 2
      Yield_26_set.insert("13261922.040000");
      Yield_26.add_attribute("CalcDt", "YieldCalcDate_t_977618983"); // 2
      Yield_26_set.insert("YieldCalcDate_t_977618983");
      Yield_26.add_attribute("RedDt", "YieldRedemptionDate_t_1347415072"); // 2
      Yield_26_set.insert("YieldRedemptionDate_t_1347415072");
      Yield_26.add_attribute("RedPx", "5440848.960000"); // 2
      Yield_26_set.insert("5440848.960000");
      Yield_26.add_attribute("RedPxTyp", "13"); // 2
      Yield_26_set.insert("13");
      all_values.push_back(Yield_26_set);
      all_compo_names.insert("Yield_26_set");

      SecL_4.add_element(Yield_26);
    }
    elt.add_element(SecL_4);
  } // end SecL
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
