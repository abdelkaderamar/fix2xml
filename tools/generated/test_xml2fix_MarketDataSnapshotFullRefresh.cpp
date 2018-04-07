#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataSnapshotFullRefresh.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataSnapshotFullRefresh_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataFull" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataSnapshotFullRefresh_message_t_0;
  elt.add_attribute("TotNumRpts", "892817297"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("892817297");
  elt.add_attribute("RptID", "42879265"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("42879265");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1831643963"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("ClearingBusinessDate_t_1831643963");
  elt.add_attribute("MDBkTyp", "3"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("3");
  elt.add_attribute("MDSubBkTyp", "1326989739"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("1326989739");
  elt.add_attribute("MktDepth", "1941831630"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("1941831630");
  elt.add_attribute("MDFeedTyp", "MDFeedType_t_1489798291"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("MDFeedType_t_1489798291");
  elt.add_attribute("RefInd", "false"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("false");
  elt.add_attribute("TrdDt", "TradeDate_t_2121977670"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("TradeDate_t_2121977670");
  elt.add_attribute("ReqID", "MDReqID_t_411394245"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("MDReqID_t_411394245");
  elt.add_attribute("MDStrmID", "MDStreamID_t_278910738"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("MDStreamID_t_278910738");
  elt.add_attribute("FinclStat", "2"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("2");
  elt.add_attribute("CorpActn", "J"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("J");
  elt.add_attribute("NetChgPrevDay", "19547241.110000"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("19547241.110000");
  elt.add_attribute("ApplQuDepth", "591915355"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("591915355");
  elt.add_attribute("ApplQuResolution", "2"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("2");
  all_values.push_back(MarketDataSnapshotFullRefresh_message_t_0);
  all_compo_names.insert("MarketDataSnapshotFullRefresh_message_t");

  { // Hdr
    xml_element Hdr_42{"Hdr"};
    multiset<string> Hdr_42_set;
    Hdr_42.add_attribute("SeqNum", "372831806"); // 1
    Hdr_42_set.insert("372831806");
    Hdr_42.add_attribute("SID", "SenderCompID_t_2139102316"); // 1
    Hdr_42_set.insert("SenderCompID_t_2139102316");
    Hdr_42.add_attribute("TID", "TargetCompID_t_432502015"); // 1
    Hdr_42_set.insert("TargetCompID_t_432502015");
    Hdr_42.add_attribute("OBID", "OnBehalfOfCompID_t_1505067784"); // 1
    Hdr_42_set.insert("OnBehalfOfCompID_t_1505067784");
    Hdr_42.add_attribute("D2ID", "DeliverToCompID_t_1050299413"); // 1
    Hdr_42_set.insert("DeliverToCompID_t_1050299413");
    Hdr_42.add_attribute("SSub", "SenderSubID_t_1773439835"); // 1
    Hdr_42_set.insert("SenderSubID_t_1773439835");
    Hdr_42.add_attribute("SLoc", "SenderLocationID_t_376482664"); // 1
    Hdr_42_set.insert("SenderLocationID_t_376482664");
    Hdr_42.add_attribute("TSub", "TargetSubID_t_1265683668"); // 1
    Hdr_42_set.insert("TargetSubID_t_1265683668");
    Hdr_42.add_attribute("TLoc", "TargetLocationID_t_1320390284"); // 1
    Hdr_42_set.insert("TargetLocationID_t_1320390284");
    Hdr_42.add_attribute("OBSub", "OnBehalfOfSubID_t_1867313190"); // 1
    Hdr_42_set.insert("OnBehalfOfSubID_t_1867313190");
    Hdr_42.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1892077564"); // 1
    Hdr_42_set.insert("OnBehalfOfLocationID_t_1892077564");
    Hdr_42.add_attribute("D2Sub", "DeliverToSubID_t_1577637483"); // 1
    Hdr_42_set.insert("DeliverToSubID_t_1577637483");
    Hdr_42.add_attribute("D2Loc", "DeliverToLocationID_t_1431773195"); // 1
    Hdr_42_set.insert("DeliverToLocationID_t_1431773195");
    Hdr_42.add_attribute("PosDup", "Y"); // 1
    Hdr_42_set.insert("Y");
    Hdr_42.add_attribute("PosRsnd", "N"); // 1
    Hdr_42_set.insert("N");
    Hdr_42.add_attribute("Snt", "SendingTime_t_177106845"); // 1
    Hdr_42_set.insert("SendingTime_t_177106845");
    Hdr_42.add_attribute("OrigSnt", "OrigSendingTime_t_683537947"); // 1
    Hdr_42_set.insert("OrigSendingTime_t_683537947");
    Hdr_42.add_attribute("MsgEncd", "MessageEncoding_t_528965423"); // 1
    Hdr_42_set.insert("MessageEncoding_t_528965423");
    all_values.push_back(Hdr_42_set);
    all_compo_names.insert("Hdr_42_set");

    {
      xml_element Hop_42{"Hop"};
      multiset<string> Hop_42_set;
      Hop_42.add_attribute("ID", "HopCompID_t_1289616107"); // 2
      Hop_42_set.insert("HopCompID_t_1289616107");
      Hop_42.add_attribute("Ref", "2010527686"); // 2
      Hop_42_set.insert("2010527686");
      Hop_42.add_attribute("Snt", "HopSendingTime_t_323313405"); // 2
      Hop_42_set.insert("HopSendingTime_t_323313405");
      all_values.push_back(Hop_42_set);
      all_compo_names.insert("Hop_42_set");

      Hdr_42.add_element(Hop_42);
    }
    elt.add_element(Hdr_42);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_7{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_7_set;
    ApplSeqCtrl_7.add_attribute("ApplID", "ApplID_t_631930750"); // 1
    ApplSeqCtrl_7_set.insert("ApplID_t_631930750");
    ApplSeqCtrl_7.add_attribute("ApplSeqNum", "1069767252"); // 1
    ApplSeqCtrl_7_set.insert("1069767252");
    ApplSeqCtrl_7.add_attribute("ApplLastSeqNum", "297807428"); // 1
    ApplSeqCtrl_7_set.insert("297807428");
    ApplSeqCtrl_7.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_7_set.insert("false");
    all_values.push_back(ApplSeqCtrl_7_set);
    all_compo_names.insert("ApplSeqCtrl_7_set");

    elt.add_element(ApplSeqCtrl_7);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_34{"Instrmt"};
    multiset<string> Instrmt_34_set;
    Instrmt_34.add_attribute("Sym", "Symbol_t_1348677990"); // 1
    Instrmt_34_set.insert("Symbol_t_1348677990");
    Instrmt_34.add_attribute("Sfx", "CD"); // 1
    Instrmt_34_set.insert("CD");
    Instrmt_34.add_attribute("ID", "SecurityID_t_564798544"); // 1
    Instrmt_34_set.insert("SecurityID_t_564798544");
    Instrmt_34.add_attribute("Src", "L"); // 1
    Instrmt_34_set.insert("L");
    Instrmt_34.add_attribute("Prod", "9"); // 1
    Instrmt_34_set.insert("9");
    Instrmt_34.add_attribute("ProdCmplx", "ProductComplex_t_2105037594"); // 1
    Instrmt_34_set.insert("ProductComplex_t_2105037594");
    Instrmt_34.add_attribute("SecGrp", "SecurityGroup_t_1528750259"); // 1
    Instrmt_34_set.insert("SecurityGroup_t_1528750259");
    Instrmt_34.add_attribute("CFI", "CFICode_t_1985008924"); // 1
    Instrmt_34_set.insert("CFICode_t_1985008924");
    Instrmt_34.add_attribute("SecTyp", "ABS"); // 1
    Instrmt_34_set.insert("ABS");
    Instrmt_34.add_attribute("SubTyp", "SecuritySubType_t_886334396"); // 1
    Instrmt_34_set.insert("SecuritySubType_t_886334396");
    Instrmt_34.add_attribute("MMY", "887824689"); // 1
    Instrmt_34_set.insert("887824689");
    Instrmt_34.add_attribute("MatDt", "MaturityDate_t_16012149"); // 1
    Instrmt_34_set.insert("MaturityDate_t_16012149");
    Instrmt_34.add_attribute("MatTm", "1262817060"); // 1
    Instrmt_34_set.insert("1262817060");
    Instrmt_34.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_6024709"); // 1
    Instrmt_34_set.insert("SettleOnOpenFlag_t_6024709");
    Instrmt_34.add_attribute("AsgnMeth", "1336402434"); // 1
    Instrmt_34_set.insert("1336402434");
    Instrmt_34.add_attribute("Status", "1"); // 1
    Instrmt_34_set.insert("1");
    Instrmt_34.add_attribute("CpnPmt", "CouponPaymentDate_t_1898102274"); // 1
    Instrmt_34_set.insert("CouponPaymentDate_t_1898102274");
    Instrmt_34.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_34_set.insert("MR");
    Instrmt_34.add_attribute("Snrty", "SB"); // 1
    Instrmt_34_set.insert("SB");
    Instrmt_34.add_attribute("NotlPctOut", "3912773.070000"); // 1
    Instrmt_34_set.insert("3912773.070000");
    Instrmt_34.add_attribute("OrigNotlPctOut", "16113613.780000"); // 1
    Instrmt_34_set.insert("16113613.780000");
    Instrmt_34.add_attribute("AttchPnt", "4440429.950000"); // 1
    Instrmt_34_set.insert("4440429.950000");
    Instrmt_34.add_attribute("DetchPnt", "10748152.540000"); // 1
    Instrmt_34_set.insert("10748152.540000");
    Instrmt_34.add_attribute("Issued", "IssueDate_t_2140326801"); // 1
    Instrmt_34_set.insert("IssueDate_t_2140326801");
    Instrmt_34.add_attribute("RepoCollSecTyp", "1733659102"); // 1
    Instrmt_34_set.insert("1733659102");
    Instrmt_34.add_attribute("RepoTrm", "937859293"); // 1
    Instrmt_34_set.insert("937859293");
    Instrmt_34.add_attribute("RepoRt", "3161565.590000"); // 1
    Instrmt_34_set.insert("3161565.590000");
    Instrmt_34.add_attribute("Fctr", "2181062.050000"); // 1
    Instrmt_34_set.insert("2181062.050000");
    Instrmt_34.add_attribute("CrdRtg", "CreditRating_t_2007626545"); // 1
    Instrmt_34_set.insert("CreditRating_t_2007626545");
    Instrmt_34.add_attribute("Rgstry", "InstrRegistry_t_613963987"); // 1
    Instrmt_34_set.insert("InstrRegistry_t_613963987");
    Instrmt_34.add_attribute("IssuCtry", "1261431200"); // 1
    Instrmt_34_set.insert("1261431200");
    Instrmt_34.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1208820887"); // 1
    Instrmt_34_set.insert("StateOrProvinceOfIssue_t_1208820887");
    Instrmt_34.add_attribute("Lcl", "LocaleOfIssue_t_2015438887"); // 1
    Instrmt_34_set.insert("LocaleOfIssue_t_2015438887");
    Instrmt_34.add_attribute("Redeem", "RedemptionDate_t_1826229745"); // 1
    Instrmt_34_set.insert("RedemptionDate_t_1826229745");
    Instrmt_34.add_attribute("StrkPx", "2172556.920000"); // 1
    Instrmt_34_set.insert("2172556.920000");
    Instrmt_34.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_34_set.insert("CAN");
    Instrmt_34.add_attribute("StrkMult", "17460059.520000"); // 1
    Instrmt_34_set.insert("17460059.520000");
    Instrmt_34.add_attribute("StrkValu", "16988707.700000"); // 1
    Instrmt_34_set.insert("16988707.700000");
    Instrmt_34.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_34_set.insert("2");
    Instrmt_34.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_34_set.insert("1");
    Instrmt_34.add_attribute("StrkPxBndryPrcsn", "4392118.110000"); // 1
    Instrmt_34_set.insert("4392118.110000");
    Instrmt_34.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_34_set.insert("4");
    Instrmt_34.add_attribute("OptAt", "1747673760"); // 1
    Instrmt_34_set.insert("1747673760");
    Instrmt_34.add_attribute("Mult", "4452365.210000"); // 1
    Instrmt_34_set.insert("4452365.210000");
    Instrmt_34.add_attribute("MultTyp", "1"); // 1
    Instrmt_34_set.insert("1");
    Instrmt_34.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_34_set.insert("4");
    Instrmt_34.add_attribute("MinPxIncr", "1958551.470000"); // 1
    Instrmt_34_set.insert("1958551.470000");
    Instrmt_34.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2145326858"); // 1
    Instrmt_34_set.insert("MinPriceIncrementAmount_t_2145326858");
    Instrmt_34.add_attribute("UOM", "tn"); // 1
    Instrmt_34_set.insert("tn");
    Instrmt_34.add_attribute("UOMQty", "5871324.540000"); // 1
    Instrmt_34_set.insert("5871324.540000");
    Instrmt_34.add_attribute("PxUOM", "t"); // 1
    Instrmt_34_set.insert("t");
    Instrmt_34.add_attribute("PxUOMQty", "12938158.590000"); // 1
    Instrmt_34_set.insert("12938158.590000");
    Instrmt_34.add_attribute("SettlMeth", "P"); // 1
    Instrmt_34_set.insert("P");
    Instrmt_34.add_attribute("ExerStyle", "0"); // 1
    Instrmt_34_set.insert("0");
    Instrmt_34.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_34_set.insert("1");
    Instrmt_34.add_attribute("OptPayAmt", "OptPayoutAmount_t_452323354"); // 1
    Instrmt_34_set.insert("OptPayoutAmount_t_452323354");
    Instrmt_34.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_34_set.insert("INX");
    Instrmt_34.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_34_set.insert("CDSD");
    Instrmt_34.add_attribute("ListMeth", "1"); // 1
    Instrmt_34_set.insert("1");
    Instrmt_34.add_attribute("CapPx", "3846846.400000"); // 1
    Instrmt_34_set.insert("3846846.400000");
    Instrmt_34.add_attribute("FlrPx", "2120450.710000"); // 1
    Instrmt_34_set.insert("2120450.710000");
    Instrmt_34.add_attribute("PutCall", "0"); // 1
    Instrmt_34_set.insert("0");
    Instrmt_34.add_attribute("FlexInd", "false"); // 1
    Instrmt_34_set.insert("false");
    Instrmt_34.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_34_set.insert("true");
    Instrmt_34.add_attribute("TmUnit", "D"); // 1
    Instrmt_34_set.insert("D");
    Instrmt_34.add_attribute("CpnRt", "21139853.730000"); // 1
    Instrmt_34_set.insert("21139853.730000");
    Instrmt_34.add_attribute("Exch", "SecurityExchange_t_1674574860"); // 1
    Instrmt_34_set.insert("SecurityExchange_t_1674574860");
    Instrmt_34.add_attribute("PosLmt", "1337065134"); // 1
    Instrmt_34_set.insert("1337065134");
    Instrmt_34.add_attribute("NTPosLmt", "1665372496"); // 1
    Instrmt_34_set.insert("1665372496");
    Instrmt_34.add_attribute("Issr", "Issuer_t_1700930865"); // 1
    Instrmt_34_set.insert("Issuer_t_1700930865");
    Instrmt_34.add_attribute("EncIssrLen", "1821921834"); // 1
    Instrmt_34_set.insert("1821921834");
    Instrmt_34.add_attribute("EncIssr", "EncodedIssuer_t_2104584307"); // 1
    Instrmt_34_set.insert("EncodedIssuer_t_2104584307");
    Instrmt_34.add_attribute("Desc", "SecurityDesc_t_1743299020"); // 1
    Instrmt_34_set.insert("SecurityDesc_t_1743299020");
    Instrmt_34.add_attribute("EncSecDescLen", "1422111946"); // 1
    Instrmt_34_set.insert("1422111946");
    Instrmt_34.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_402337180"); // 1
    Instrmt_34_set.insert("EncodedSecurityDesc_t_402337180");
    Instrmt_34.add_attribute("Pool", "Pool_t_974585961"); // 1
    Instrmt_34_set.insert("Pool_t_974585961");
    Instrmt_34.add_attribute("CSetMo", "2004948661"); // 1
    Instrmt_34_set.insert("2004948661");
    Instrmt_34.add_attribute("CPPgm", "2"); // 1
    Instrmt_34_set.insert("2");
    Instrmt_34.add_attribute("CPRegT", "CPRegType_t_972429172"); // 1
    Instrmt_34_set.insert("CPRegType_t_972429172");
    Instrmt_34.add_attribute("Dated", "DatedDate_t_707237877"); // 1
    Instrmt_34_set.insert("DatedDate_t_707237877");
    Instrmt_34.add_attribute("IntAcrl", "InterestAccrualDate_t_1185324782"); // 1
    Instrmt_34_set.insert("InterestAccrualDate_t_1185324782");
    all_values.push_back(Instrmt_34_set);
    all_compo_names.insert("Instrmt_34_set");

    {
      xml_element AID_37{"AID"};
      multiset<string> AID_37_set;
      AID_37.add_attribute("AltID", "SecurityAltID_t_434150112"); // 2
      AID_37_set.insert("SecurityAltID_t_434150112");
      AID_37.add_attribute("AltIDSrc", "2"); // 2
      AID_37_set.insert("2");
      all_values.push_back(AID_37_set);
      all_compo_names.insert("AID_37_set");

      Instrmt_34.add_element(AID_37);
    }
    {
      xml_element SecXML_37{"SecXML"};
      multiset<string> SecXML_37_set;
      SecXML_37.add_attribute("Schema", "SecurityXMLSchema_t_699788843"); // 2
      SecXML_37_set.insert("SecurityXMLSchema_t_699788843");
      all_values.push_back(SecXML_37_set);
      all_compo_names.insert("SecXML_37_set");

      Instrmt_34.add_element(SecXML_37);
    }
    {
      xml_element Evnt_37{"Evnt"};
      multiset<string> Evnt_37_set;
      Evnt_37.add_attribute("EventTyp", "14"); // 2
      Evnt_37_set.insert("14");
      Evnt_37.add_attribute("Dt", "EventDate_t_733561403"); // 2
      Evnt_37_set.insert("EventDate_t_733561403");
      Evnt_37.add_attribute("Tm", "EventTime_t_1152112197"); // 2
      Evnt_37_set.insert("EventTime_t_1152112197");
      Evnt_37.add_attribute("Px", "18069185.070000"); // 2
      Evnt_37_set.insert("18069185.070000");
      Evnt_37.add_attribute("Txt", "EventText_t_1831658922"); // 2
      Evnt_37_set.insert("EventText_t_1831658922");
      all_values.push_back(Evnt_37_set);
      all_compo_names.insert("Evnt_37_set");

      Instrmt_34.add_element(Evnt_37);
    }
    {
      xml_element Pty_195{"Pty"};
      multiset<string> Pty_195_set;
      Pty_195.add_attribute("ID", "InstrumentPartyID_t_1464578448"); // 2
      Pty_195_set.insert("InstrumentPartyID_t_1464578448");
      Pty_195.add_attribute("Src", "6"); // 2
      Pty_195_set.insert("6");
      Pty_195.add_attribute("R", "60"); // 2
      Pty_195_set.insert("60");
      all_values.push_back(Pty_195_set);
      all_compo_names.insert("Pty_195_set");

      {
        xml_element Sub_195{"Sub"};
        multiset<string> Sub_195_set;
        Sub_195.add_attribute("ID", "InstrumentPartySubID_t_838381938"); // 3
        Sub_195_set.insert("InstrumentPartySubID_t_838381938");
        Sub_195.add_attribute("Typ", "22"); // 3
        Sub_195_set.insert("22");
        all_values.push_back(Sub_195_set);
        all_compo_names.insert("Sub_195_set");

        Pty_195.add_element(Sub_195);
      }
      Instrmt_34.add_element(Pty_195);
    }
    {
      xml_element CmplxEvnt_34{"CmplxEvnt"};
      multiset<string> CmplxEvnt_34_set;
      CmplxEvnt_34.add_attribute("Typ", "9"); // 2
      CmplxEvnt_34_set.insert("9");
      CmplxEvnt_34.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_429441120"); // 2
      CmplxEvnt_34_set.insert("ComplexOptPayoutAmount_t_429441120");
      CmplxEvnt_34.add_attribute("Px", "2632611.040000"); // 2
      CmplxEvnt_34_set.insert("2632611.040000");
      CmplxEvnt_34.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_34_set.insert("5");
      CmplxEvnt_34.add_attribute("PxBndryPrcsn", "17665062.550000"); // 2
      CmplxEvnt_34_set.insert("17665062.550000");
      CmplxEvnt_34.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_34_set.insert("3");
      CmplxEvnt_34.add_attribute("Cond", "2"); // 2
      CmplxEvnt_34_set.insert("2");
      all_values.push_back(CmplxEvnt_34_set);
      all_compo_names.insert("CmplxEvnt_34_set");

      {
        xml_element EvntDts_34{"EvntDts"};
        multiset<string> EvntDts_34_set;
        EvntDts_34.add_attribute("StartDt", "ComplexEventStartDate_t_1440944441"); // 3
        EvntDts_34_set.insert("ComplexEventStartDate_t_1440944441");
        EvntDts_34.add_attribute("EndDt", "ComplexEventEndDate_t_1885734259"); // 3
        EvntDts_34_set.insert("ComplexEventEndDate_t_1885734259");
        all_values.push_back(EvntDts_34_set);
        all_compo_names.insert("EvntDts_34_set");

        {
          xml_element EvntTms_34{"EvntTms"};
          multiset<string> EvntTms_34_set;
          EvntTms_34.add_attribute("StartTm", "610848964"); // 4
          EvntTms_34_set.insert("610848964");
          EvntTms_34.add_attribute("EndTm", "715572740"); // 4
          EvntTms_34_set.insert("715572740");
          all_values.push_back(EvntTms_34_set);
          all_compo_names.insert("EvntTms_34_set");

          EvntDts_34.add_element(EvntTms_34);
        }
        CmplxEvnt_34.add_element(EvntDts_34);
      }
      Instrmt_34.add_element(CmplxEvnt_34);
    }
    elt.add_element(Instrmt_34);
  } // end Instrmt
  { // Undly
    xml_element Undly_47{"Undly"};
    multiset<string> Undly_47_set;
    Undly_47.add_attribute("Sym", "UnderlyingSymbol_t_1585434925"); // 1
    Undly_47_set.insert("UnderlyingSymbol_t_1585434925");
    Undly_47.add_attribute("Sfx", "WI"); // 1
    Undly_47_set.insert("WI");
    Undly_47.add_attribute("ID", "UnderlyingSecurityID_t_738780119"); // 1
    Undly_47_set.insert("UnderlyingSecurityID_t_738780119");
    Undly_47.add_attribute("Src", "I"); // 1
    Undly_47_set.insert("I");
    Undly_47.add_attribute("Prod", "7"); // 1
    Undly_47_set.insert("7");
    Undly_47.add_attribute("CFI", "UnderlyingCFICode_t_1924104901"); // 1
    Undly_47_set.insert("UnderlyingCFICode_t_1924104901");
    Undly_47.add_attribute("SecTyp", "TD"); // 1
    Undly_47_set.insert("TD");
    Undly_47.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1133845719"); // 1
    Undly_47_set.insert("UnderlyingSecuritySubType_t_1133845719");
    Undly_47.add_attribute("MMY", "476410096"); // 1
    Undly_47_set.insert("476410096");
    Undly_47.add_attribute("Mat", "UnderlyingMaturityDate_t_733244768"); // 1
    Undly_47_set.insert("UnderlyingMaturityDate_t_733244768");
    Undly_47.add_attribute("MatTm", "1867407122"); // 1
    Undly_47_set.insert("1867407122");
    Undly_47.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1628522293"); // 1
    Undly_47_set.insert("UnderlyingCouponPaymentDate_t_1628522293");
    Undly_47.add_attribute("RestrctTyp", "FR"); // 1
    Undly_47_set.insert("FR");
    Undly_47.add_attribute("Snrty", "SD"); // 1
    Undly_47_set.insert("SD");
    Undly_47.add_attribute("NotlPctOut", "9456170.930000"); // 1
    Undly_47_set.insert("9456170.930000");
    Undly_47.add_attribute("OrigNotlPctOut", "4367991.270000"); // 1
    Undly_47_set.insert("4367991.270000");
    Undly_47.add_attribute("AttchPnt", "14478027.420000"); // 1
    Undly_47_set.insert("14478027.420000");
    Undly_47.add_attribute("DetchPnt", "17839990.310000"); // 1
    Undly_47_set.insert("17839990.310000");
    Undly_47.add_attribute("Issued", "UnderlyingIssueDate_t_733558506"); // 1
    Undly_47_set.insert("UnderlyingIssueDate_t_733558506");
    Undly_47.add_attribute("RepoCollSecTyp", "1234814256"); // 1
    Undly_47_set.insert("1234814256");
    Undly_47.add_attribute("RepoTrm", "65956504"); // 1
    Undly_47_set.insert("65956504");
    Undly_47.add_attribute("RepoRt", "9968196.100000"); // 1
    Undly_47_set.insert("9968196.100000");
    Undly_47.add_attribute("Fctr", "5489169.820000"); // 1
    Undly_47_set.insert("5489169.820000");
    Undly_47.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1832462759"); // 1
    Undly_47_set.insert("UnderlyingCreditRating_t_1832462759");
    Undly_47.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_777969562"); // 1
    Undly_47_set.insert("UnderlyingInstrRegistry_t_777969562");
    Undly_47.add_attribute("Ctry", "1563950573"); // 1
    Undly_47_set.insert("1563950573");
    Undly_47.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1125923552"); // 1
    Undly_47_set.insert("UnderlyingStateOrProvinceOfIssue_t_1125923552");
    Undly_47.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_516220173"); // 1
    Undly_47_set.insert("UnderlyingLocaleOfIssue_t_516220173");
    Undly_47.add_attribute("Redeem", "UnderlyingRedemptionDate_t_27315889"); // 1
    Undly_47_set.insert("UnderlyingRedemptionDate_t_27315889");
    Undly_47.add_attribute("StrkPx", "18414962.920000"); // 1
    Undly_47_set.insert("18414962.920000");
    Undly_47.add_attribute("StrkCcy", "CHF"); // 1
    Undly_47_set.insert("CHF");
    Undly_47.add_attribute("OptA", "267050397"); // 1
    Undly_47_set.insert("267050397");
    Undly_47.add_attribute("Mult", "13955880.850000"); // 1
    Undly_47_set.insert("13955880.850000");
    Undly_47.add_attribute("MultTyp", "0"); // 1
    Undly_47_set.insert("0");
    Undly_47.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_47_set.insert("3");
    Undly_47.add_attribute("UOM", "MMBtu"); // 1
    Undly_47_set.insert("MMBtu");
    Undly_47.add_attribute("UOMQty", "7201781.780000"); // 1
    Undly_47_set.insert("7201781.780000");
    Undly_47.add_attribute("PxUOM", "USD"); // 1
    Undly_47_set.insert("USD");
    Undly_47.add_attribute("PxUOMQty", "16486194.350000"); // 1
    Undly_47_set.insert("16486194.350000");
    Undly_47.add_attribute("TmUnit", "Wk"); // 1
    Undly_47_set.insert("Wk");
    Undly_47.add_attribute("ExerStyle", "1"); // 1
    Undly_47_set.insert("1");
    Undly_47.add_attribute("CpnRt", "11296580.800000"); // 1
    Undly_47_set.insert("11296580.800000");
    Undly_47.add_attribute("Exch", "UnderlyingSecurityExchange_t_1846102575"); // 1
    Undly_47_set.insert("UnderlyingSecurityExchange_t_1846102575");
    Undly_47.add_attribute("Issr", "UnderlyingIssuer_t_1805193970"); // 1
    Undly_47_set.insert("UnderlyingIssuer_t_1805193970");
    Undly_47.add_attribute("EncUndIssrLen", "2075275174"); // 1
    Undly_47_set.insert("2075275174");
    Undly_47.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_135418054"); // 1
    Undly_47_set.insert("EncodedUnderlyingIssuer_t_135418054");
    Undly_47.add_attribute("Desc", "UnderlyingSecurityDesc_t_1105513064"); // 1
    Undly_47_set.insert("UnderlyingSecurityDesc_t_1105513064");
    Undly_47.add_attribute("EncUndSecDescLen", "1711790557"); // 1
    Undly_47_set.insert("1711790557");
    Undly_47.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_868976560"); // 1
    Undly_47_set.insert("EncodedUnderlyingSecurityDesc_t_868976560");
    Undly_47.add_attribute("CPPgm", "UnderlyingCPProgram_t_192843672"); // 1
    Undly_47_set.insert("UnderlyingCPProgram_t_192843672");
    Undly_47.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1777747061"); // 1
    Undly_47_set.insert("UnderlyingCPRegType_t_1777747061");
    Undly_47.add_attribute("AllocPct", "18657961.700000"); // 1
    Undly_47_set.insert("18657961.700000");
    Undly_47.add_attribute("Ccy", "GBP"); // 1
    Undly_47_set.insert("GBP");
    Undly_47.add_attribute("Qty", "4962820.840000"); // 1
    Undly_47_set.insert("4962820.840000");
    Undly_47.add_attribute("SettlTyp", "5"); // 1
    Undly_47_set.insert("5");
    Undly_47.add_attribute("CashAmt", "UnderlyingCashAmount_t_441166077"); // 1
    Undly_47_set.insert("UnderlyingCashAmount_t_441166077");
    Undly_47.add_attribute("CashTyp", "FIXED"); // 1
    Undly_47_set.insert("FIXED");
    Undly_47.add_attribute("Px", "1855434.690000"); // 1
    Undly_47_set.insert("1855434.690000");
    Undly_47.add_attribute("DirtPx", "1351787.210000"); // 1
    Undly_47_set.insert("1351787.210000");
    Undly_47.add_attribute("EndPx", "16693102.230000"); // 1
    Undly_47_set.insert("16693102.230000");
    Undly_47.add_attribute("StartVal", "UnderlyingStartValue_t_1798294284"); // 1
    Undly_47_set.insert("UnderlyingStartValue_t_1798294284");
    Undly_47.add_attribute("CurVal", "UnderlyingCurrentValue_t_402229119"); // 1
    Undly_47_set.insert("UnderlyingCurrentValue_t_402229119");
    Undly_47.add_attribute("EndVal", "UnderlyingEndValue_t_917414660"); // 1
    Undly_47_set.insert("UnderlyingEndValue_t_917414660");
    Undly_47.add_attribute("AdjQty", "16739419.010000"); // 1
    Undly_47_set.insert("16739419.010000");
    Undly_47.add_attribute("FxRate", "19495551.470000"); // 1
    Undly_47_set.insert("19495551.470000");
    Undly_47.add_attribute("FxRateCalc", "D"); // 1
    Undly_47_set.insert("D");
    Undly_47.add_attribute("CapValu", "UnderlyingCapValue_t_246636431"); // 1
    Undly_47_set.insert("UnderlyingCapValue_t_246636431");
    Undly_47.add_attribute("SetMeth", "UnderlyingSettlMethod_t_335759598"); // 1
    Undly_47_set.insert("UnderlyingSettlMethod_t_335759598");
    Undly_47.add_attribute("PutCall", "1590759786"); // 1
    Undly_47_set.insert("1590759786");
    all_values.push_back(Undly_47_set);
    all_compo_names.insert("Undly_47_set");

    {
      xml_element UndAID_47{"UndAID"};
      multiset<string> UndAID_47_set;
      UndAID_47.add_attribute("AltID", "UnderlyingSecurityAltID_t_1700059378"); // 2
      UndAID_47_set.insert("UnderlyingSecurityAltID_t_1700059378");
      UndAID_47.add_attribute("AltIDSrc", "H"); // 2
      UndAID_47_set.insert("H");
      all_values.push_back(UndAID_47_set);
      all_compo_names.insert("UndAID_47_set");

      Undly_47.add_element(UndAID_47);
    }
    {
      xml_element Stip_71{"Stip"};
      multiset<string> Stip_71_set;
      Stip_71.add_attribute("Typ", "WHOLE"); // 2
      Stip_71_set.insert("WHOLE");
      Stip_71.add_attribute("Val", "UnderlyingStipValue_t_1398678305"); // 2
      Stip_71_set.insert("UnderlyingStipValue_t_1398678305");
      all_values.push_back(Stip_71_set);
      all_compo_names.insert("Stip_71_set");

      Undly_47.add_element(Stip_71);
    }
    {
      xml_element Pty_196{"Pty"};
      multiset<string> Pty_196_set;
      Pty_196.add_attribute("ID", "UnderlyingInstrumentPartyID_t_247081495"); // 2
      Pty_196_set.insert("UnderlyingInstrumentPartyID_t_247081495");
      Pty_196.add_attribute("Src", "H"); // 2
      Pty_196_set.insert("H");
      Pty_196.add_attribute("R", "78"); // 2
      Pty_196_set.insert("78");
      all_values.push_back(Pty_196_set);
      all_compo_names.insert("Pty_196_set");

      {
        xml_element Sub_196{"Sub"};
        multiset<string> Sub_196_set;
        Sub_196.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1352594559"); // 3
        Sub_196_set.insert("UnderlyingInstrumentPartySubID_t_1352594559");
        Sub_196.add_attribute("Typ", "24"); // 3
        Sub_196_set.insert("24");
        all_values.push_back(Sub_196_set);
        all_compo_names.insert("Sub_196_set");

        Pty_196.add_element(Sub_196);
      }
      Undly_47.add_element(Pty_196);
    }
    elt.add_element(Undly_47);
  } // end Undly
  { // Undly
    xml_element Undly_48{"Undly"};
    multiset<string> Undly_48_set;
    Undly_48.add_attribute("Sym", "UnderlyingSymbol_t_255589272"); // 1
    Undly_48_set.insert("UnderlyingSymbol_t_255589272");
    Undly_48.add_attribute("Sfx", "CD"); // 1
    Undly_48_set.insert("CD");
    Undly_48.add_attribute("ID", "UnderlyingSecurityID_t_1842779715"); // 1
    Undly_48_set.insert("UnderlyingSecurityID_t_1842779715");
    Undly_48.add_attribute("Src", "2"); // 1
    Undly_48_set.insert("2");
    Undly_48.add_attribute("Prod", "1"); // 1
    Undly_48_set.insert("1");
    Undly_48.add_attribute("CFI", "UnderlyingCFICode_t_1158022240"); // 1
    Undly_48_set.insert("UnderlyingCFICode_t_1158022240");
    Undly_48.add_attribute("SecTyp", "CP"); // 1
    Undly_48_set.insert("CP");
    Undly_48.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_297942818"); // 1
    Undly_48_set.insert("UnderlyingSecuritySubType_t_297942818");
    Undly_48.add_attribute("MMY", "1599188317"); // 1
    Undly_48_set.insert("1599188317");
    Undly_48.add_attribute("Mat", "UnderlyingMaturityDate_t_1482686137"); // 1
    Undly_48_set.insert("UnderlyingMaturityDate_t_1482686137");
    Undly_48.add_attribute("MatTm", "483486288"); // 1
    Undly_48_set.insert("483486288");
    Undly_48.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1734367038"); // 1
    Undly_48_set.insert("UnderlyingCouponPaymentDate_t_1734367038");
    Undly_48.add_attribute("RestrctTyp", "MR"); // 1
    Undly_48_set.insert("MR");
    Undly_48.add_attribute("Snrty", "SR"); // 1
    Undly_48_set.insert("SR");
    Undly_48.add_attribute("NotlPctOut", "21365961.570000"); // 1
    Undly_48_set.insert("21365961.570000");
    Undly_48.add_attribute("OrigNotlPctOut", "19219273.730000"); // 1
    Undly_48_set.insert("19219273.730000");
    Undly_48.add_attribute("AttchPnt", "18082388.250000"); // 1
    Undly_48_set.insert("18082388.250000");
    Undly_48.add_attribute("DetchPnt", "19386676.560000"); // 1
    Undly_48_set.insert("19386676.560000");
    Undly_48.add_attribute("Issued", "UnderlyingIssueDate_t_1864067724"); // 1
    Undly_48_set.insert("UnderlyingIssueDate_t_1864067724");
    Undly_48.add_attribute("RepoCollSecTyp", "2054875257"); // 1
    Undly_48_set.insert("2054875257");
    Undly_48.add_attribute("RepoTrm", "126943607"); // 1
    Undly_48_set.insert("126943607");
    Undly_48.add_attribute("RepoRt", "13073438.620000"); // 1
    Undly_48_set.insert("13073438.620000");
    Undly_48.add_attribute("Fctr", "16074509.870000"); // 1
    Undly_48_set.insert("16074509.870000");
    Undly_48.add_attribute("CrdRtg", "UnderlyingCreditRating_t_716314779"); // 1
    Undly_48_set.insert("UnderlyingCreditRating_t_716314779");
    Undly_48.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1880278081"); // 1
    Undly_48_set.insert("UnderlyingInstrRegistry_t_1880278081");
    Undly_48.add_attribute("Ctry", "858645645"); // 1
    Undly_48_set.insert("858645645");
    Undly_48.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_963396274"); // 1
    Undly_48_set.insert("UnderlyingStateOrProvinceOfIssue_t_963396274");
    Undly_48.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_233520177"); // 1
    Undly_48_set.insert("UnderlyingLocaleOfIssue_t_233520177");
    Undly_48.add_attribute("Redeem", "UnderlyingRedemptionDate_t_245258357"); // 1
    Undly_48_set.insert("UnderlyingRedemptionDate_t_245258357");
    Undly_48.add_attribute("StrkPx", "1685071.860000"); // 1
    Undly_48_set.insert("1685071.860000");
    Undly_48.add_attribute("StrkCcy", "CAN"); // 1
    Undly_48_set.insert("CAN");
    Undly_48.add_attribute("OptA", "1713945418"); // 1
    Undly_48_set.insert("1713945418");
    Undly_48.add_attribute("Mult", "21413325.470000"); // 1
    Undly_48_set.insert("21413325.470000");
    Undly_48.add_attribute("MultTyp", "0"); // 1
    Undly_48_set.insert("0");
    Undly_48.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_48_set.insert("1");
    Undly_48.add_attribute("UOM", "Gal"); // 1
    Undly_48_set.insert("Gal");
    Undly_48.add_attribute("UOMQty", "9449333.040000"); // 1
    Undly_48_set.insert("9449333.040000");
    Undly_48.add_attribute("PxUOM", "Bcf"); // 1
    Undly_48_set.insert("Bcf");
    Undly_48.add_attribute("PxUOMQty", "6035758.080000"); // 1
    Undly_48_set.insert("6035758.080000");
    Undly_48.add_attribute("TmUnit", "S"); // 1
    Undly_48_set.insert("S");
    Undly_48.add_attribute("ExerStyle", "2"); // 1
    Undly_48_set.insert("2");
    Undly_48.add_attribute("CpnRt", "1904591.980000"); // 1
    Undly_48_set.insert("1904591.980000");
    Undly_48.add_attribute("Exch", "UnderlyingSecurityExchange_t_1284648506"); // 1
    Undly_48_set.insert("UnderlyingSecurityExchange_t_1284648506");
    Undly_48.add_attribute("Issr", "UnderlyingIssuer_t_621903039"); // 1
    Undly_48_set.insert("UnderlyingIssuer_t_621903039");
    Undly_48.add_attribute("EncUndIssrLen", "179571708"); // 1
    Undly_48_set.insert("179571708");
    Undly_48.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1059092232"); // 1
    Undly_48_set.insert("EncodedUnderlyingIssuer_t_1059092232");
    Undly_48.add_attribute("Desc", "UnderlyingSecurityDesc_t_282658217"); // 1
    Undly_48_set.insert("UnderlyingSecurityDesc_t_282658217");
    Undly_48.add_attribute("EncUndSecDescLen", "2118239364"); // 1
    Undly_48_set.insert("2118239364");
    Undly_48.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_775676308"); // 1
    Undly_48_set.insert("EncodedUnderlyingSecurityDesc_t_775676308");
    Undly_48.add_attribute("CPPgm", "UnderlyingCPProgram_t_190049826"); // 1
    Undly_48_set.insert("UnderlyingCPProgram_t_190049826");
    Undly_48.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_97699323"); // 1
    Undly_48_set.insert("UnderlyingCPRegType_t_97699323");
    Undly_48.add_attribute("AllocPct", "20830201.710000"); // 1
    Undly_48_set.insert("20830201.710000");
    Undly_48.add_attribute("Ccy", "EUR"); // 1
    Undly_48_set.insert("EUR");
    Undly_48.add_attribute("Qty", "18158146.040000"); // 1
    Undly_48_set.insert("18158146.040000");
    Undly_48.add_attribute("SettlTyp", "2"); // 1
    Undly_48_set.insert("2");
    Undly_48.add_attribute("CashAmt", "UnderlyingCashAmount_t_1777410377"); // 1
    Undly_48_set.insert("UnderlyingCashAmount_t_1777410377");
    Undly_48.add_attribute("CashTyp", "DIFF"); // 1
    Undly_48_set.insert("DIFF");
    Undly_48.add_attribute("Px", "7539211.670000"); // 1
    Undly_48_set.insert("7539211.670000");
    Undly_48.add_attribute("DirtPx", "19459175.630000"); // 1
    Undly_48_set.insert("19459175.630000");
    Undly_48.add_attribute("EndPx", "2004039.650000"); // 1
    Undly_48_set.insert("2004039.650000");
    Undly_48.add_attribute("StartVal", "UnderlyingStartValue_t_1254768797"); // 1
    Undly_48_set.insert("UnderlyingStartValue_t_1254768797");
    Undly_48.add_attribute("CurVal", "UnderlyingCurrentValue_t_1512379333"); // 1
    Undly_48_set.insert("UnderlyingCurrentValue_t_1512379333");
    Undly_48.add_attribute("EndVal", "UnderlyingEndValue_t_194252864"); // 1
    Undly_48_set.insert("UnderlyingEndValue_t_194252864");
    Undly_48.add_attribute("AdjQty", "17295182.210000"); // 1
    Undly_48_set.insert("17295182.210000");
    Undly_48.add_attribute("FxRate", "12185563.420000"); // 1
    Undly_48_set.insert("12185563.420000");
    Undly_48.add_attribute("FxRateCalc", "D"); // 1
    Undly_48_set.insert("D");
    Undly_48.add_attribute("CapValu", "UnderlyingCapValue_t_526967877"); // 1
    Undly_48_set.insert("UnderlyingCapValue_t_526967877");
    Undly_48.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1222676169"); // 1
    Undly_48_set.insert("UnderlyingSettlMethod_t_1222676169");
    Undly_48.add_attribute("PutCall", "1949699811"); // 1
    Undly_48_set.insert("1949699811");
    all_values.push_back(Undly_48_set);
    all_compo_names.insert("Undly_48_set");

    {
      xml_element UndAID_48{"UndAID"};
      multiset<string> UndAID_48_set;
      UndAID_48.add_attribute("AltID", "UnderlyingSecurityAltID_t_807103671"); // 2
      UndAID_48_set.insert("UnderlyingSecurityAltID_t_807103671");
      UndAID_48.add_attribute("AltIDSrc", "J"); // 2
      UndAID_48_set.insert("J");
      all_values.push_back(UndAID_48_set);
      all_compo_names.insert("UndAID_48_set");

      Undly_48.add_element(UndAID_48);
    }
    {
      xml_element Stip_72{"Stip"};
      multiset<string> Stip_72_set;
      Stip_72.add_attribute("Typ", "STRUCT"); // 2
      Stip_72_set.insert("STRUCT");
      Stip_72.add_attribute("Val", "UnderlyingStipValue_t_2091752177"); // 2
      Stip_72_set.insert("UnderlyingStipValue_t_2091752177");
      all_values.push_back(Stip_72_set);
      all_compo_names.insert("Stip_72_set");

      Undly_48.add_element(Stip_72);
    }
    {
      xml_element Pty_197{"Pty"};
      multiset<string> Pty_197_set;
      Pty_197.add_attribute("ID", "UnderlyingInstrumentPartyID_t_184701675"); // 2
      Pty_197_set.insert("UnderlyingInstrumentPartyID_t_184701675");
      Pty_197.add_attribute("Src", "C"); // 2
      Pty_197_set.insert("C");
      Pty_197.add_attribute("R", "83"); // 2
      Pty_197_set.insert("83");
      all_values.push_back(Pty_197_set);
      all_compo_names.insert("Pty_197_set");

      {
        xml_element Sub_197{"Sub"};
        multiset<string> Sub_197_set;
        Sub_197.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_467359892"); // 3
        Sub_197_set.insert("UnderlyingInstrumentPartySubID_t_467359892");
        Sub_197.add_attribute("Typ", "9"); // 3
        Sub_197_set.insert("9");
        all_values.push_back(Sub_197_set);
        all_compo_names.insert("Sub_197_set");

        Pty_197.add_element(Sub_197);
      }
      Undly_48.add_element(Pty_197);
    }
    elt.add_element(Undly_48);
  } // end Undly
  { // Leg
    xml_element Leg_45{"Leg"};
    multiset<string> Leg_45_set;
    Leg_45.add_attribute("Sym", "LegSymbol_t_657409718"); // 1
    Leg_45_set.insert("LegSymbol_t_657409718");
    Leg_45.add_attribute("Sfx", "WI"); // 1
    Leg_45_set.insert("WI");
    Leg_45.add_attribute("ID", "LegSecurityID_t_1714573593"); // 1
    Leg_45_set.insert("LegSecurityID_t_1714573593");
    Leg_45.add_attribute("Src", "7"); // 1
    Leg_45_set.insert("7");
    Leg_45.add_attribute("Prod", "13"); // 1
    Leg_45_set.insert("13");
    Leg_45.add_attribute("CFI", "LegCFICode_t_1382904549"); // 1
    Leg_45_set.insert("LegCFICode_t_1382904549");
    Leg_45.add_attribute("SecTyp", "MLEG"); // 1
    Leg_45_set.insert("MLEG");
    Leg_45.add_attribute("SecSubTyp", "LegSecuritySubType_t_684642942"); // 1
    Leg_45_set.insert("LegSecuritySubType_t_684642942");
    Leg_45.add_attribute("MMY", "1284755682"); // 1
    Leg_45_set.insert("1284755682");
    Leg_45.add_attribute("Mat", "LegMaturityDate_t_1570010862"); // 1
    Leg_45_set.insert("LegMaturityDate_t_1570010862");
    Leg_45.add_attribute("MatTm", "483076857"); // 1
    Leg_45_set.insert("483076857");
    Leg_45.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1485159647"); // 1
    Leg_45_set.insert("LegCouponPaymentDate_t_1485159647");
    Leg_45.add_attribute("Issued", "LegIssueDate_t_677296011"); // 1
    Leg_45_set.insert("LegIssueDate_t_677296011");
    Leg_45.add_attribute("RepoCollSecTyp", "1995456191"); // 1
    Leg_45_set.insert("1995456191");
    Leg_45.add_attribute("RepoTrm", "1679412511"); // 1
    Leg_45_set.insert("1679412511");
    Leg_45.add_attribute("RepoRt", "2593305.840000"); // 1
    Leg_45_set.insert("2593305.840000");
    Leg_45.add_attribute("Fctr", "10665288.850000"); // 1
    Leg_45_set.insert("10665288.850000");
    Leg_45.add_attribute("CrdRtg", "LegCreditRating_t_878052866"); // 1
    Leg_45_set.insert("LegCreditRating_t_878052866");
    Leg_45.add_attribute("Rgstry", "LegInstrRegistry_t_786298462"); // 1
    Leg_45_set.insert("LegInstrRegistry_t_786298462");
    Leg_45.add_attribute("Ctry", "141721406"); // 1
    Leg_45_set.insert("141721406");
    Leg_45.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_680269029"); // 1
    Leg_45_set.insert("LegStateOrProvinceOfIssue_t_680269029");
    Leg_45.add_attribute("Lcl", "LegLocaleOfIssue_t_1593402133"); // 1
    Leg_45_set.insert("LegLocaleOfIssue_t_1593402133");
    Leg_45.add_attribute("Redeem", "LegRedemptionDate_t_1852003690"); // 1
    Leg_45_set.insert("LegRedemptionDate_t_1852003690");
    Leg_45.add_attribute("Strk", "6729443.910000"); // 1
    Leg_45_set.insert("6729443.910000");
    Leg_45.add_attribute("StrkCcy", "EUR"); // 1
    Leg_45_set.insert("EUR");
    Leg_45.add_attribute("OptA", "845191460"); // 1
    Leg_45_set.insert("845191460");
    Leg_45.add_attribute("Cmult", "3935477.760000"); // 1
    Leg_45_set.insert("3935477.760000");
    Leg_45.add_attribute("MultTyp", "2"); // 1
    Leg_45_set.insert("2");
    Leg_45.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_45_set.insert("1");
    Leg_45.add_attribute("UOM", "tn"); // 1
    Leg_45_set.insert("tn");
    Leg_45.add_attribute("UOMQty", "10139913.280000"); // 1
    Leg_45_set.insert("10139913.280000");
    Leg_45.add_attribute("PxUOM", "Alw"); // 1
    Leg_45_set.insert("Alw");
    Leg_45.add_attribute("PxUOMQty", "17396747.910000"); // 1
    Leg_45_set.insert("17396747.910000");
    Leg_45.add_attribute("TmUnit", "H"); // 1
    Leg_45_set.insert("H");
    Leg_45.add_attribute("ExerStyle", "2"); // 1
    Leg_45_set.insert("2");
    Leg_45.add_attribute("CpnRt", "9750956.920000"); // 1
    Leg_45_set.insert("9750956.920000");
    Leg_45.add_attribute("Exch", "LegSecurityExchange_t_2137507907"); // 1
    Leg_45_set.insert("LegSecurityExchange_t_2137507907");
    Leg_45.add_attribute("Issr", "LegIssuer_t_820771862"); // 1
    Leg_45_set.insert("LegIssuer_t_820771862");
    Leg_45.add_attribute("EncLegIssrLen", "112367726"); // 1
    Leg_45_set.insert("112367726");
    Leg_45.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1560035121"); // 1
    Leg_45_set.insert("EncodedLegIssuer_t_1560035121");
    Leg_45.add_attribute("Desc", "LegSecurityDesc_t_1303848720"); // 1
    Leg_45_set.insert("LegSecurityDesc_t_1303848720");
    Leg_45.add_attribute("EncLegSecDescLen", "1597527374"); // 1
    Leg_45_set.insert("1597527374");
    Leg_45.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_89847484"); // 1
    Leg_45_set.insert("EncodedLegSecurityDesc_t_89847484");
    Leg_45.add_attribute("RatioQty", "11518212.630000"); // 1
    Leg_45_set.insert("11518212.630000");
    Leg_45.add_attribute("Side", "E"); // 1
    Leg_45_set.insert("E");
    Leg_45.add_attribute("Ccy", "GBP"); // 1
    Leg_45_set.insert("GBP");
    Leg_45.add_attribute("Pool", "LegPool_t_2007509104"); // 1
    Leg_45_set.insert("LegPool_t_2007509104");
    Leg_45.add_attribute("Dated", "LegDatedDate_t_1135476530"); // 1
    Leg_45_set.insert("LegDatedDate_t_1135476530");
    Leg_45.add_attribute("CSetMo", "212587906"); // 1
    Leg_45_set.insert("212587906");
    Leg_45.add_attribute("IntAcrl", "LegInterestAccrualDate_t_540294485"); // 1
    Leg_45_set.insert("LegInterestAccrualDate_t_540294485");
    Leg_45.add_attribute("PutCall", "581395015"); // 1
    Leg_45_set.insert("581395015");
    Leg_45.add_attribute("LegOptionRatio", "20645915.960000"); // 1
    Leg_45_set.insert("20645915.960000");
    Leg_45.add_attribute("Px", "12132388.760000"); // 1
    Leg_45_set.insert("12132388.760000");
    all_values.push_back(Leg_45_set);
    all_compo_names.insert("Leg_45_set");

    {
      xml_element LegAID_45{"LegAID"};
      multiset<string> LegAID_45_set;
      LegAID_45.add_attribute("SecAltID", "LegSecurityAltID_t_2119065678"); // 2
      LegAID_45_set.insert("LegSecurityAltID_t_2119065678");
      LegAID_45.add_attribute("SecAltIDSrc", "2"); // 2
      LegAID_45_set.insert("2");
      all_values.push_back(LegAID_45_set);
      all_compo_names.insert("LegAID_45_set");

      Leg_45.add_element(LegAID_45);
    }
    elt.add_element(Leg_45);
  } // end Leg
  { // Leg
    xml_element Leg_46{"Leg"};
    multiset<string> Leg_46_set;
    Leg_46.add_attribute("Sym", "LegSymbol_t_2058430337"); // 1
    Leg_46_set.insert("LegSymbol_t_2058430337");
    Leg_46.add_attribute("Sfx", "CD"); // 1
    Leg_46_set.insert("CD");
    Leg_46.add_attribute("ID", "LegSecurityID_t_162911275"); // 1
    Leg_46_set.insert("LegSecurityID_t_162911275");
    Leg_46.add_attribute("Src", "C"); // 1
    Leg_46_set.insert("C");
    Leg_46.add_attribute("Prod", "4"); // 1
    Leg_46_set.insert("4");
    Leg_46.add_attribute("CFI", "LegCFICode_t_1176902604"); // 1
    Leg_46_set.insert("LegCFICode_t_1176902604");
    Leg_46.add_attribute("SecTyp", "MBS"); // 1
    Leg_46_set.insert("MBS");
    Leg_46.add_attribute("SecSubTyp", "LegSecuritySubType_t_2129905795"); // 1
    Leg_46_set.insert("LegSecuritySubType_t_2129905795");
    Leg_46.add_attribute("MMY", "350837168"); // 1
    Leg_46_set.insert("350837168");
    Leg_46.add_attribute("Mat", "LegMaturityDate_t_116682564"); // 1
    Leg_46_set.insert("LegMaturityDate_t_116682564");
    Leg_46.add_attribute("MatTm", "957517839"); // 1
    Leg_46_set.insert("957517839");
    Leg_46.add_attribute("CpnPmt", "LegCouponPaymentDate_t_340861427"); // 1
    Leg_46_set.insert("LegCouponPaymentDate_t_340861427");
    Leg_46.add_attribute("Issued", "LegIssueDate_t_937454426"); // 1
    Leg_46_set.insert("LegIssueDate_t_937454426");
    Leg_46.add_attribute("RepoCollSecTyp", "1069885565"); // 1
    Leg_46_set.insert("1069885565");
    Leg_46.add_attribute("RepoTrm", "1900896548"); // 1
    Leg_46_set.insert("1900896548");
    Leg_46.add_attribute("RepoRt", "938194.980000"); // 1
    Leg_46_set.insert("938194.980000");
    Leg_46.add_attribute("Fctr", "5199292.910000"); // 1
    Leg_46_set.insert("5199292.910000");
    Leg_46.add_attribute("CrdRtg", "LegCreditRating_t_1990744032"); // 1
    Leg_46_set.insert("LegCreditRating_t_1990744032");
    Leg_46.add_attribute("Rgstry", "LegInstrRegistry_t_1245640761"); // 1
    Leg_46_set.insert("LegInstrRegistry_t_1245640761");
    Leg_46.add_attribute("Ctry", "1649385529"); // 1
    Leg_46_set.insert("1649385529");
    Leg_46.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_192438453"); // 1
    Leg_46_set.insert("LegStateOrProvinceOfIssue_t_192438453");
    Leg_46.add_attribute("Lcl", "LegLocaleOfIssue_t_1316507261"); // 1
    Leg_46_set.insert("LegLocaleOfIssue_t_1316507261");
    Leg_46.add_attribute("Redeem", "LegRedemptionDate_t_1509410985"); // 1
    Leg_46_set.insert("LegRedemptionDate_t_1509410985");
    Leg_46.add_attribute("Strk", "13279149.830000"); // 1
    Leg_46_set.insert("13279149.830000");
    Leg_46.add_attribute("StrkCcy", "GBP"); // 1
    Leg_46_set.insert("GBP");
    Leg_46.add_attribute("OptA", "1909309999"); // 1
    Leg_46_set.insert("1909309999");
    Leg_46.add_attribute("Cmult", "14462031.150000"); // 1
    Leg_46_set.insert("14462031.150000");
    Leg_46.add_attribute("MultTyp", "0"); // 1
    Leg_46_set.insert("0");
    Leg_46.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_46_set.insert("4");
    Leg_46.add_attribute("UOM", "MMbbl"); // 1
    Leg_46_set.insert("MMbbl");
    Leg_46.add_attribute("UOMQty", "10264073.880000"); // 1
    Leg_46_set.insert("10264073.880000");
    Leg_46.add_attribute("PxUOM", "lbs"); // 1
    Leg_46_set.insert("lbs");
    Leg_46.add_attribute("PxUOMQty", "14154440.560000"); // 1
    Leg_46_set.insert("14154440.560000");
    Leg_46.add_attribute("TmUnit", "Yr"); // 1
    Leg_46_set.insert("Yr");
    Leg_46.add_attribute("ExerStyle", "2"); // 1
    Leg_46_set.insert("2");
    Leg_46.add_attribute("CpnRt", "4448630.120000"); // 1
    Leg_46_set.insert("4448630.120000");
    Leg_46.add_attribute("Exch", "LegSecurityExchange_t_1906101967"); // 1
    Leg_46_set.insert("LegSecurityExchange_t_1906101967");
    Leg_46.add_attribute("Issr", "LegIssuer_t_471191338"); // 1
    Leg_46_set.insert("LegIssuer_t_471191338");
    Leg_46.add_attribute("EncLegIssrLen", "795700181"); // 1
    Leg_46_set.insert("795700181");
    Leg_46.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2022784531"); // 1
    Leg_46_set.insert("EncodedLegIssuer_t_2022784531");
    Leg_46.add_attribute("Desc", "LegSecurityDesc_t_1428709177"); // 1
    Leg_46_set.insert("LegSecurityDesc_t_1428709177");
    Leg_46.add_attribute("EncLegSecDescLen", "1136561608"); // 1
    Leg_46_set.insert("1136561608");
    Leg_46.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_812755309"); // 1
    Leg_46_set.insert("EncodedLegSecurityDesc_t_812755309");
    Leg_46.add_attribute("RatioQty", "3511110.940000"); // 1
    Leg_46_set.insert("3511110.940000");
    Leg_46.add_attribute("Side", "E"); // 1
    Leg_46_set.insert("E");
    Leg_46.add_attribute("Ccy", "JPY"); // 1
    Leg_46_set.insert("JPY");
    Leg_46.add_attribute("Pool", "LegPool_t_733234893"); // 1
    Leg_46_set.insert("LegPool_t_733234893");
    Leg_46.add_attribute("Dated", "LegDatedDate_t_4731921"); // 1
    Leg_46_set.insert("LegDatedDate_t_4731921");
    Leg_46.add_attribute("CSetMo", "372942267"); // 1
    Leg_46_set.insert("372942267");
    Leg_46.add_attribute("IntAcrl", "LegInterestAccrualDate_t_925673346"); // 1
    Leg_46_set.insert("LegInterestAccrualDate_t_925673346");
    Leg_46.add_attribute("PutCall", "1321239183"); // 1
    Leg_46_set.insert("1321239183");
    Leg_46.add_attribute("LegOptionRatio", "18823532.520000"); // 1
    Leg_46_set.insert("18823532.520000");
    Leg_46.add_attribute("Px", "1061046.820000"); // 1
    Leg_46_set.insert("1061046.820000");
    all_values.push_back(Leg_46_set);
    all_compo_names.insert("Leg_46_set");

    {
      xml_element LegAID_46{"LegAID"};
      multiset<string> LegAID_46_set;
      LegAID_46.add_attribute("SecAltID", "LegSecurityAltID_t_702850702"); // 2
      LegAID_46_set.insert("LegSecurityAltID_t_702850702");
      LegAID_46.add_attribute("SecAltIDSrc", "J"); // 2
      LegAID_46_set.insert("J");
      all_values.push_back(LegAID_46_set);
      all_compo_names.insert("LegAID_46_set");

      Leg_46.add_element(LegAID_46);
    }
    elt.add_element(Leg_46);
  } // end Leg
  { // Leg
    xml_element Leg_47{"Leg"};
    multiset<string> Leg_47_set;
    Leg_47.add_attribute("Sym", "LegSymbol_t_2015414681"); // 1
    Leg_47_set.insert("LegSymbol_t_2015414681");
    Leg_47.add_attribute("Sfx", "CD"); // 1
    Leg_47_set.insert("CD");
    Leg_47.add_attribute("ID", "LegSecurityID_t_752552125"); // 1
    Leg_47_set.insert("LegSecurityID_t_752552125");
    Leg_47.add_attribute("Src", "9"); // 1
    Leg_47_set.insert("9");
    Leg_47.add_attribute("Prod", "7"); // 1
    Leg_47_set.insert("7");
    Leg_47.add_attribute("CFI", "LegCFICode_t_1778959513"); // 1
    Leg_47_set.insert("LegCFICode_t_1778959513");
    Leg_47.add_attribute("SecTyp", "YCD"); // 1
    Leg_47_set.insert("YCD");
    Leg_47.add_attribute("SecSubTyp", "LegSecuritySubType_t_522063359"); // 1
    Leg_47_set.insert("LegSecuritySubType_t_522063359");
    Leg_47.add_attribute("MMY", "1557024189"); // 1
    Leg_47_set.insert("1557024189");
    Leg_47.add_attribute("Mat", "LegMaturityDate_t_188646792"); // 1
    Leg_47_set.insert("LegMaturityDate_t_188646792");
    Leg_47.add_attribute("MatTm", "966926372"); // 1
    Leg_47_set.insert("966926372");
    Leg_47.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1315642508"); // 1
    Leg_47_set.insert("LegCouponPaymentDate_t_1315642508");
    Leg_47.add_attribute("Issued", "LegIssueDate_t_659838130"); // 1
    Leg_47_set.insert("LegIssueDate_t_659838130");
    Leg_47.add_attribute("RepoCollSecTyp", "1762626553"); // 1
    Leg_47_set.insert("1762626553");
    Leg_47.add_attribute("RepoTrm", "1190943391"); // 1
    Leg_47_set.insert("1190943391");
    Leg_47.add_attribute("RepoRt", "20885473.070000"); // 1
    Leg_47_set.insert("20885473.070000");
    Leg_47.add_attribute("Fctr", "7517045.130000"); // 1
    Leg_47_set.insert("7517045.130000");
    Leg_47.add_attribute("CrdRtg", "LegCreditRating_t_2003698700"); // 1
    Leg_47_set.insert("LegCreditRating_t_2003698700");
    Leg_47.add_attribute("Rgstry", "LegInstrRegistry_t_292174753"); // 1
    Leg_47_set.insert("LegInstrRegistry_t_292174753");
    Leg_47.add_attribute("Ctry", "1641679022"); // 1
    Leg_47_set.insert("1641679022");
    Leg_47.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_762789860"); // 1
    Leg_47_set.insert("LegStateOrProvinceOfIssue_t_762789860");
    Leg_47.add_attribute("Lcl", "LegLocaleOfIssue_t_1163215139"); // 1
    Leg_47_set.insert("LegLocaleOfIssue_t_1163215139");
    Leg_47.add_attribute("Redeem", "LegRedemptionDate_t_227430268"); // 1
    Leg_47_set.insert("LegRedemptionDate_t_227430268");
    Leg_47.add_attribute("Strk", "7675217.820000"); // 1
    Leg_47_set.insert("7675217.820000");
    Leg_47.add_attribute("StrkCcy", "JPY"); // 1
    Leg_47_set.insert("JPY");
    Leg_47.add_attribute("OptA", "2088760965"); // 1
    Leg_47_set.insert("2088760965");
    Leg_47.add_attribute("Cmult", "12710270.100000"); // 1
    Leg_47_set.insert("12710270.100000");
    Leg_47.add_attribute("MultTyp", "2"); // 1
    Leg_47_set.insert("2");
    Leg_47.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_47_set.insert("4");
    Leg_47.add_attribute("UOM", "tn"); // 1
    Leg_47_set.insert("tn");
    Leg_47.add_attribute("UOMQty", "11271393.290000"); // 1
    Leg_47_set.insert("11271393.290000");
    Leg_47.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_47_set.insert("MMbbl");
    Leg_47.add_attribute("PxUOMQty", "16606705.620000"); // 1
    Leg_47_set.insert("16606705.620000");
    Leg_47.add_attribute("TmUnit", "Yr"); // 1
    Leg_47_set.insert("Yr");
    Leg_47.add_attribute("ExerStyle", "2"); // 1
    Leg_47_set.insert("2");
    Leg_47.add_attribute("CpnRt", "12921464.280000"); // 1
    Leg_47_set.insert("12921464.280000");
    Leg_47.add_attribute("Exch", "LegSecurityExchange_t_428356344"); // 1
    Leg_47_set.insert("LegSecurityExchange_t_428356344");
    Leg_47.add_attribute("Issr", "LegIssuer_t_274380852"); // 1
    Leg_47_set.insert("LegIssuer_t_274380852");
    Leg_47.add_attribute("EncLegIssrLen", "701686969"); // 1
    Leg_47_set.insert("701686969");
    Leg_47.add_attribute("EncLegIssr", "EncodedLegIssuer_t_617003136"); // 1
    Leg_47_set.insert("EncodedLegIssuer_t_617003136");
    Leg_47.add_attribute("Desc", "LegSecurityDesc_t_1241307224"); // 1
    Leg_47_set.insert("LegSecurityDesc_t_1241307224");
    Leg_47.add_attribute("EncLegSecDescLen", "2017329477"); // 1
    Leg_47_set.insert("2017329477");
    Leg_47.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1276841266"); // 1
    Leg_47_set.insert("EncodedLegSecurityDesc_t_1276841266");
    Leg_47.add_attribute("RatioQty", "8564501.290000"); // 1
    Leg_47_set.insert("8564501.290000");
    Leg_47.add_attribute("Side", "5"); // 1
    Leg_47_set.insert("5");
    Leg_47.add_attribute("Ccy", "JPY"); // 1
    Leg_47_set.insert("JPY");
    Leg_47.add_attribute("Pool", "LegPool_t_917004272"); // 1
    Leg_47_set.insert("LegPool_t_917004272");
    Leg_47.add_attribute("Dated", "LegDatedDate_t_1510079679"); // 1
    Leg_47_set.insert("LegDatedDate_t_1510079679");
    Leg_47.add_attribute("CSetMo", "1102350017"); // 1
    Leg_47_set.insert("1102350017");
    Leg_47.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1679794133"); // 1
    Leg_47_set.insert("LegInterestAccrualDate_t_1679794133");
    Leg_47.add_attribute("PutCall", "525811170"); // 1
    Leg_47_set.insert("525811170");
    Leg_47.add_attribute("LegOptionRatio", "13297802.850000"); // 1
    Leg_47_set.insert("13297802.850000");
    Leg_47.add_attribute("Px", "2998322.670000"); // 1
    Leg_47_set.insert("2998322.670000");
    all_values.push_back(Leg_47_set);
    all_compo_names.insert("Leg_47_set");

    {
      xml_element LegAID_47{"LegAID"};
      multiset<string> LegAID_47_set;
      LegAID_47.add_attribute("SecAltID", "LegSecurityAltID_t_2061968577"); // 2
      LegAID_47_set.insert("LegSecurityAltID_t_2061968577");
      LegAID_47.add_attribute("SecAltIDSrc", "M"); // 2
      LegAID_47_set.insert("M");
      all_values.push_back(LegAID_47_set);
      all_compo_names.insert("LegAID_47_set");

      Leg_47.add_element(LegAID_47);
    }
    elt.add_element(Leg_47);
  } // end Leg
  { // Full
    xml_element Full_0{"Full"};
    multiset<string> Full_0_set;
    Full_0.add_attribute("Typ", "7"); // 1
    Full_0_set.insert("7");
    Full_0.add_attribute("ID", "MDEntryID_t_1594608548"); // 1
    Full_0_set.insert("MDEntryID_t_1594608548");
    Full_0.add_attribute("Px", "8852376.030000"); // 1
    Full_0_set.insert("8852376.030000");
    Full_0.add_attribute("PxTyp", "14"); // 1
    Full_0_set.insert("14");
    Full_0.add_attribute("OrdTyp", "6"); // 1
    Full_0_set.insert("6");
    Full_0.add_attribute("Ccy", "CAN"); // 1
    Full_0_set.insert("CAN");
    Full_0.add_attribute("SettlCcy", "CHF"); // 1
    Full_0_set.insert("CHF");
    Full_0.add_attribute("Sz", "7514800.710000"); // 1
    Full_0_set.insert("7514800.710000");
    Full_0.add_attribute("LotTyp", "2"); // 1
    Full_0_set.insert("2");
    Full_0.add_attribute("Dt", "1557634137"); // 1
    Full_0_set.insert("1557634137");
    Full_0.add_attribute("Tm", "1453167040"); // 1
    Full_0_set.insert("1453167040");
    Full_0.add_attribute("TickDirctn", "2"); // 1
    Full_0_set.insert("2");
    Full_0.add_attribute("Mkt", "MDMkt_t_651457713"); // 1
    Full_0_set.insert("MDMkt_t_651457713");
    Full_0.add_attribute("SesID", "6"); // 1
    Full_0_set.insert("6");
    Full_0.add_attribute("SesSub", "5"); // 1
    Full_0_set.insert("5");
    Full_0.add_attribute("TrdgStat", "20"); // 1
    Full_0_set.insert("20");
    Full_0.add_attribute("HaltRsn", "5"); // 1
    Full_0_set.insert("5");
    Full_0.add_attribute("QCond", "y"); // 1
    Full_0_set.insert("y");
    Full_0.add_attribute("TrdCond", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("Orig", "MDEntryOriginator_t_1153322713"); // 1
    Full_0_set.insert("MDEntryOriginator_t_1153322713");
    Full_0.add_attribute("LctnID", "LocationID_t_2057961029"); // 1
    Full_0_set.insert("LocationID_t_2057961029");
    Full_0.add_attribute("DeskID", "DeskID_t_2070928854"); // 1
    Full_0_set.insert("DeskID_t_2070928854");
    Full_0.add_attribute("OpenClsSettlFlag", "4"); // 1
    Full_0_set.insert("4");
    Full_0.add_attribute("TmInForce", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("ExpireDt", "ExpireDate_t_1253225491"); // 1
    Full_0_set.insert("ExpireDate_t_1253225491");
    Full_0.add_attribute("ExpireTm", "ExpireTime_t_985465465"); // 1
    Full_0_set.insert("ExpireTime_t_985465465");
    Full_0.add_attribute("MinQty", "3507734.800000"); // 1
    Full_0_set.insert("3507734.800000");
    Full_0.add_attribute("ExecInst", "k"); // 1
    Full_0_set.insert("k");
    Full_0.add_attribute("SellerDays", "1226575049"); // 1
    Full_0_set.insert("1226575049");
    Full_0.add_attribute("OrdID", "OrderID_t_1536285420"); // 1
    Full_0_set.insert("OrderID_t_1536285420");
    Full_0.add_attribute("OrdID2", "SecondaryOrderID_t_1035750642"); // 1
    Full_0_set.insert("SecondaryOrderID_t_1035750642");
    Full_0.add_attribute("EntryID", "QuoteEntryID_t_2111812653"); // 1
    Full_0_set.insert("QuoteEntryID_t_2111812653");
    Full_0.add_attribute("Buyer", "MDEntryBuyer_t_1482432148"); // 1
    Full_0_set.insert("MDEntryBuyer_t_1482432148");
    Full_0.add_attribute("Seller", "MDEntrySeller_t_1610014872"); // 1
    Full_0_set.insert("MDEntrySeller_t_1610014872");
    Full_0.add_attribute("NumOfOrds", "1495264798"); // 1
    Full_0_set.insert("1495264798");
    Full_0.add_attribute("PosNo", "941765791"); // 1
    Full_0_set.insert("941765791");
    Full_0.add_attribute("Scope", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("PxDelta", "6310344.350000"); // 1
    Full_0_set.insert("6310344.350000");
    Full_0.add_attribute("TrdTyp", "23"); // 1
    Full_0_set.insert("23");
    Full_0.add_attribute("Txt", "Text_t_348889866"); // 1
    Full_0_set.insert("Text_t_348889866");
    Full_0.add_attribute("EncTxtLen", "41184925"); // 1
    Full_0_set.insert("41184925");
    Full_0.add_attribute("EncTxt", "EncodedText_t_998929254"); // 1
    Full_0_set.insert("EncodedText_t_998929254");
    Full_0.add_attribute("MDPxLvl", "549508672"); // 1
    Full_0_set.insert("549508672");
    Full_0.add_attribute("Cpcty", "R"); // 1
    Full_0_set.insert("R");
    Full_0.add_attribute("MDOrigTyp", "0"); // 1
    Full_0_set.insert("0");
    Full_0.add_attribute("HighPx", "20269687.450000"); // 1
    Full_0_set.insert("20269687.450000");
    Full_0.add_attribute("LowPx", "530668.330000"); // 1
    Full_0_set.insert("530668.330000");
    Full_0.add_attribute("FirstPx", "4107769.160000"); // 1
    Full_0_set.insert("4107769.160000");
    Full_0.add_attribute("LastPx", "4273664.470000"); // 1
    Full_0_set.insert("4273664.470000");
    Full_0.add_attribute("TrdVol", "10216456.700000"); // 1
    Full_0_set.insert("10216456.700000");
    Full_0.add_attribute("SettlTyp", "C"); // 1
    Full_0_set.insert("C");
    Full_0.add_attribute("SettlDt", "SettlDate_t_337843828"); // 1
    Full_0_set.insert("SettlDate_t_337843828");
    Full_0.add_attribute("MDQteTyp", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("RptSeq", "102249180"); // 1
    Full_0_set.insert("102249180");
    Full_0.add_attribute("DealingCpcty", "P"); // 1
    Full_0_set.insert("P");
    Full_0.add_attribute("MDEntrySpotRt", "508327.190000"); // 1
    Full_0_set.insert("508327.190000");
    Full_0.add_attribute("MDEntryFwdPnts", "10877146.460000"); // 1
    Full_0_set.insert("10877146.460000");
    all_values.push_back(Full_0_set);
    all_compo_names.insert("Full_0_set");

    {
      xml_element Yield_10{"Yield"};
      multiset<string> Yield_10_set;
      Yield_10.add_attribute("Typ", "LASTQUARTER"); // 2
      Yield_10_set.insert("LASTQUARTER");
      Yield_10.add_attribute("Yld", "16394584.610000"); // 2
      Yield_10_set.insert("16394584.610000");
      Yield_10.add_attribute("CalcDt", "YieldCalcDate_t_166806047"); // 2
      Yield_10_set.insert("YieldCalcDate_t_166806047");
      Yield_10.add_attribute("RedDt", "YieldRedemptionDate_t_513707632"); // 2
      Yield_10_set.insert("YieldRedemptionDate_t_513707632");
      Yield_10.add_attribute("RedPx", "5277254.560000"); // 2
      Yield_10_set.insert("5277254.560000");
      Yield_10.add_attribute("RedPxTyp", "14"); // 2
      Yield_10_set.insert("14");
      all_values.push_back(Yield_10_set);
      all_compo_names.insert("Yield_10_set");

      Full_0.add_element(Yield_10);
    }
    {
      xml_element SprdBnchmkCurve_15{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_15_set;
      SprdBnchmkCurve_15.add_attribute("Spread", "19961397.800000"); // 2
      SprdBnchmkCurve_15_set.insert("19961397.800000");
      SprdBnchmkCurve_15.add_attribute("Ccy", "JPY"); // 2
      SprdBnchmkCurve_15_set.insert("JPY");
      SprdBnchmkCurve_15.add_attribute("Name", "Pfandbriefe"); // 2
      SprdBnchmkCurve_15_set.insert("Pfandbriefe");
      SprdBnchmkCurve_15.add_attribute("Point", "BenchmarkCurvePoint_t_755530877"); // 2
      SprdBnchmkCurve_15_set.insert("BenchmarkCurvePoint_t_755530877");
      SprdBnchmkCurve_15.add_attribute("Px", "1099506.380000"); // 2
      SprdBnchmkCurve_15_set.insert("1099506.380000");
      SprdBnchmkCurve_15.add_attribute("PxTyp", "9"); // 2
      SprdBnchmkCurve_15_set.insert("9");
      SprdBnchmkCurve_15.add_attribute("SecID", "BenchmarkSecurityID_t_1104420743"); // 2
      SprdBnchmkCurve_15_set.insert("BenchmarkSecurityID_t_1104420743");
      SprdBnchmkCurve_15.add_attribute("SecIDSrc", "8"); // 2
      SprdBnchmkCurve_15_set.insert("8");
      all_values.push_back(SprdBnchmkCurve_15_set);
      all_compo_names.insert("SprdBnchmkCurve_15_set");

      Full_0.add_element(SprdBnchmkCurve_15);
    }
    {
      xml_element RtSrc_10{"RtSrc"};
      multiset<string> RtSrc_10_set;
      RtSrc_10.add_attribute("RtSrc", "1"); // 2
      RtSrc_10_set.insert("1");
      RtSrc_10.add_attribute("RtSrcTyp", "0"); // 2
      RtSrc_10_set.insert("0");
      RtSrc_10.add_attribute("RefPg", "ReferencePage_t_843778201"); // 2
      RtSrc_10_set.insert("ReferencePage_t_843778201");
      all_values.push_back(RtSrc_10_set);
      all_compo_names.insert("RtSrc_10_set");

      Full_0.add_element(RtSrc_10);
    }
    {
      xml_element SecSizesGrp_3{"SecSizesGrp"};
      multiset<string> SecSizesGrp_3_set;
      SecSizesGrp_3.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_3_set.insert("1");
      SecSizesGrp_3.add_attribute("MDSecSize", "15334145.130000"); // 2
      SecSizesGrp_3_set.insert("15334145.130000");
      all_values.push_back(SecSizesGrp_3_set);
      all_compo_names.insert("SecSizesGrp_3_set");

      Full_0.add_element(SecSizesGrp_3);
    }
    {
      xml_element Pty_198{"Pty"};
      multiset<string> Pty_198_set;
      Pty_198.add_attribute("ID", "PartyID_t_896845034"); // 2
      Pty_198_set.insert("PartyID_t_896845034");
      Pty_198.add_attribute("Src", "C"); // 2
      Pty_198_set.insert("C");
      Pty_198.add_attribute("R", "43"); // 2
      Pty_198_set.insert("43");
      all_values.push_back(Pty_198_set);
      all_compo_names.insert("Pty_198_set");

      {
        xml_element Sub_198{"Sub"};
        multiset<string> Sub_198_set;
        Sub_198.add_attribute("ID", "PartySubID_t_1918490704"); // 3
        Sub_198_set.insert("PartySubID_t_1918490704");
        Sub_198.add_attribute("Typ", "29"); // 3
        Sub_198_set.insert("29");
        all_values.push_back(Sub_198_set);
        all_compo_names.insert("Sub_198_set");

        Pty_198.add_element(Sub_198);
      }
      Full_0.add_element(Pty_198);
    }
    elt.add_element(Full_0);
  } // end Full
  { // Full
    xml_element Full_1{"Full"};
    multiset<string> Full_1_set;
    Full_1.add_attribute("Typ", "0"); // 1
    Full_1_set.insert("0");
    Full_1.add_attribute("ID", "MDEntryID_t_716097932"); // 1
    Full_1_set.insert("MDEntryID_t_716097932");
    Full_1.add_attribute("Px", "14392139.470000"); // 1
    Full_1_set.insert("14392139.470000");
    Full_1.add_attribute("PxTyp", "6"); // 1
    Full_1_set.insert("6");
    Full_1.add_attribute("OrdTyp", "K"); // 1
    Full_1_set.insert("K");
    Full_1.add_attribute("Ccy", "EUR"); // 1
    Full_1_set.insert("EUR");
    Full_1.add_attribute("SettlCcy", "EUR"); // 1
    Full_1_set.insert("EUR");
    Full_1.add_attribute("Sz", "4164033.630000"); // 1
    Full_1_set.insert("4164033.630000");
    Full_1.add_attribute("LotTyp", "2"); // 1
    Full_1_set.insert("2");
    Full_1.add_attribute("Dt", "677386045"); // 1
    Full_1_set.insert("677386045");
    Full_1.add_attribute("Tm", "265059496"); // 1
    Full_1_set.insert("265059496");
    Full_1.add_attribute("TickDirctn", "1"); // 1
    Full_1_set.insert("1");
    Full_1.add_attribute("Mkt", "MDMkt_t_156302248"); // 1
    Full_1_set.insert("MDMkt_t_156302248");
    Full_1.add_attribute("SesID", "1"); // 1
    Full_1_set.insert("1");
    Full_1.add_attribute("SesSub", "4"); // 1
    Full_1_set.insert("4");
    Full_1.add_attribute("TrdgStat", "3"); // 1
    Full_1_set.insert("3");
    Full_1.add_attribute("HaltRsn", "4"); // 1
    Full_1_set.insert("4");
    Full_1.add_attribute("QCond", "N"); // 1
    Full_1_set.insert("N");
    Full_1.add_attribute("TrdCond", "R"); // 1
    Full_1_set.insert("R");
    Full_1.add_attribute("Orig", "MDEntryOriginator_t_579295303"); // 1
    Full_1_set.insert("MDEntryOriginator_t_579295303");
    Full_1.add_attribute("LctnID", "LocationID_t_2143284989"); // 1
    Full_1_set.insert("LocationID_t_2143284989");
    Full_1.add_attribute("DeskID", "DeskID_t_1261166650"); // 1
    Full_1_set.insert("DeskID_t_1261166650");
    Full_1.add_attribute("OpenClsSettlFlag", "4"); // 1
    Full_1_set.insert("4");
    Full_1.add_attribute("TmInForce", "4"); // 1
    Full_1_set.insert("4");
    Full_1.add_attribute("ExpireDt", "ExpireDate_t_10528037"); // 1
    Full_1_set.insert("ExpireDate_t_10528037");
    Full_1.add_attribute("ExpireTm", "ExpireTime_t_1861732309"); // 1
    Full_1_set.insert("ExpireTime_t_1861732309");
    Full_1.add_attribute("MinQty", "13425131.660000"); // 1
    Full_1_set.insert("13425131.660000");
    Full_1.add_attribute("ExecInst", "b"); // 1
    Full_1_set.insert("b");
    Full_1.add_attribute("SellerDays", "1051213428"); // 1
    Full_1_set.insert("1051213428");
    Full_1.add_attribute("OrdID", "OrderID_t_1493654306"); // 1
    Full_1_set.insert("OrderID_t_1493654306");
    Full_1.add_attribute("OrdID2", "SecondaryOrderID_t_497633026"); // 1
    Full_1_set.insert("SecondaryOrderID_t_497633026");
    Full_1.add_attribute("EntryID", "QuoteEntryID_t_342943727"); // 1
    Full_1_set.insert("QuoteEntryID_t_342943727");
    Full_1.add_attribute("Buyer", "MDEntryBuyer_t_271444178"); // 1
    Full_1_set.insert("MDEntryBuyer_t_271444178");
    Full_1.add_attribute("Seller", "MDEntrySeller_t_1264563677"); // 1
    Full_1_set.insert("MDEntrySeller_t_1264563677");
    Full_1.add_attribute("NumOfOrds", "722388673"); // 1
    Full_1_set.insert("722388673");
    Full_1.add_attribute("PosNo", "174139909"); // 1
    Full_1_set.insert("174139909");
    Full_1.add_attribute("Scope", "2"); // 1
    Full_1_set.insert("2");
    Full_1.add_attribute("PxDelta", "12686396.660000"); // 1
    Full_1_set.insert("12686396.660000");
    Full_1.add_attribute("TrdTyp", "24"); // 1
    Full_1_set.insert("24");
    Full_1.add_attribute("Txt", "Text_t_162616415"); // 1
    Full_1_set.insert("Text_t_162616415");
    Full_1.add_attribute("EncTxtLen", "1946025711"); // 1
    Full_1_set.insert("1946025711");
    Full_1.add_attribute("EncTxt", "EncodedText_t_855602769"); // 1
    Full_1_set.insert("EncodedText_t_855602769");
    Full_1.add_attribute("MDPxLvl", "939504016"); // 1
    Full_1_set.insert("939504016");
    Full_1.add_attribute("Cpcty", "G"); // 1
    Full_1_set.insert("G");
    Full_1.add_attribute("MDOrigTyp", "0"); // 1
    Full_1_set.insert("0");
    Full_1.add_attribute("HighPx", "3244388.460000"); // 1
    Full_1_set.insert("3244388.460000");
    Full_1.add_attribute("LowPx", "2210971.970000"); // 1
    Full_1_set.insert("2210971.970000");
    Full_1.add_attribute("FirstPx", "11552660.990000"); // 1
    Full_1_set.insert("11552660.990000");
    Full_1.add_attribute("LastPx", "8137944.200000"); // 1
    Full_1_set.insert("8137944.200000");
    Full_1.add_attribute("TrdVol", "6384856.460000"); // 1
    Full_1_set.insert("6384856.460000");
    Full_1.add_attribute("SettlTyp", "7"); // 1
    Full_1_set.insert("7");
    Full_1.add_attribute("SettlDt", "SettlDate_t_809595761"); // 1
    Full_1_set.insert("SettlDate_t_809595761");
    Full_1.add_attribute("MDQteTyp", "2"); // 1
    Full_1_set.insert("2");
    Full_1.add_attribute("RptSeq", "1675944927"); // 1
    Full_1_set.insert("1675944927");
    Full_1.add_attribute("DealingCpcty", "P"); // 1
    Full_1_set.insert("P");
    Full_1.add_attribute("MDEntrySpotRt", "19101803.340000"); // 1
    Full_1_set.insert("19101803.340000");
    Full_1.add_attribute("MDEntryFwdPnts", "13901935.880000"); // 1
    Full_1_set.insert("13901935.880000");
    all_values.push_back(Full_1_set);
    all_compo_names.insert("Full_1_set");

    {
      xml_element Yield_11{"Yield"};
      multiset<string> Yield_11_set;
      Yield_11.add_attribute("Typ", "LONGAVGLIFE"); // 2
      Yield_11_set.insert("LONGAVGLIFE");
      Yield_11.add_attribute("Yld", "16917154.270000"); // 2
      Yield_11_set.insert("16917154.270000");
      Yield_11.add_attribute("CalcDt", "YieldCalcDate_t_293923368"); // 2
      Yield_11_set.insert("YieldCalcDate_t_293923368");
      Yield_11.add_attribute("RedDt", "YieldRedemptionDate_t_880011793"); // 2
      Yield_11_set.insert("YieldRedemptionDate_t_880011793");
      Yield_11.add_attribute("RedPx", "418648.050000"); // 2
      Yield_11_set.insert("418648.050000");
      Yield_11.add_attribute("RedPxTyp", "4"); // 2
      Yield_11_set.insert("4");
      all_values.push_back(Yield_11_set);
      all_compo_names.insert("Yield_11_set");

      Full_1.add_element(Yield_11);
    }
    {
      xml_element SprdBnchmkCurve_16{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_16_set;
      SprdBnchmkCurve_16.add_attribute("Spread", "11514559.710000"); // 2
      SprdBnchmkCurve_16_set.insert("11514559.710000");
      SprdBnchmkCurve_16.add_attribute("Ccy", "USD"); // 2
      SprdBnchmkCurve_16_set.insert("USD");
      SprdBnchmkCurve_16.add_attribute("Name", "LIBID"); // 2
      SprdBnchmkCurve_16_set.insert("LIBID");
      SprdBnchmkCurve_16.add_attribute("Point", "BenchmarkCurvePoint_t_682413977"); // 2
      SprdBnchmkCurve_16_set.insert("BenchmarkCurvePoint_t_682413977");
      SprdBnchmkCurve_16.add_attribute("Px", "4804117.860000"); // 2
      SprdBnchmkCurve_16_set.insert("4804117.860000");
      SprdBnchmkCurve_16.add_attribute("PxTyp", "2"); // 2
      SprdBnchmkCurve_16_set.insert("2");
      SprdBnchmkCurve_16.add_attribute("SecID", "BenchmarkSecurityID_t_845030393"); // 2
      SprdBnchmkCurve_16_set.insert("BenchmarkSecurityID_t_845030393");
      SprdBnchmkCurve_16.add_attribute("SecIDSrc", "B"); // 2
      SprdBnchmkCurve_16_set.insert("B");
      all_values.push_back(SprdBnchmkCurve_16_set);
      all_compo_names.insert("SprdBnchmkCurve_16_set");

      Full_1.add_element(SprdBnchmkCurve_16);
    }
    {
      xml_element RtSrc_11{"RtSrc"};
      multiset<string> RtSrc_11_set;
      RtSrc_11.add_attribute("RtSrc", "2"); // 2
      RtSrc_11_set.insert("2");
      RtSrc_11.add_attribute("RtSrcTyp", "1"); // 2
      RtSrc_11_set.insert("1");
      RtSrc_11.add_attribute("RefPg", "ReferencePage_t_233798161"); // 2
      RtSrc_11_set.insert("ReferencePage_t_233798161");
      all_values.push_back(RtSrc_11_set);
      all_compo_names.insert("RtSrc_11_set");

      Full_1.add_element(RtSrc_11);
    }
    {
      xml_element SecSizesGrp_4{"SecSizesGrp"};
      multiset<string> SecSizesGrp_4_set;
      SecSizesGrp_4.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_4_set.insert("1");
      SecSizesGrp_4.add_attribute("MDSecSize", "21089732.560000"); // 2
      SecSizesGrp_4_set.insert("21089732.560000");
      all_values.push_back(SecSizesGrp_4_set);
      all_compo_names.insert("SecSizesGrp_4_set");

      Full_1.add_element(SecSizesGrp_4);
    }
    {
      xml_element Pty_199{"Pty"};
      multiset<string> Pty_199_set;
      Pty_199.add_attribute("ID", "PartyID_t_454895359"); // 2
      Pty_199_set.insert("PartyID_t_454895359");
      Pty_199.add_attribute("Src", "I"); // 2
      Pty_199_set.insert("I");
      Pty_199.add_attribute("R", "66"); // 2
      Pty_199_set.insert("66");
      all_values.push_back(Pty_199_set);
      all_compo_names.insert("Pty_199_set");

      {
        xml_element Sub_199{"Sub"};
        multiset<string> Sub_199_set;
        Sub_199.add_attribute("ID", "PartySubID_t_1093381005"); // 3
        Sub_199_set.insert("PartySubID_t_1093381005");
        Sub_199.add_attribute("Typ", "9"); // 3
        Sub_199_set.insert("9");
        all_values.push_back(Sub_199_set);
        all_compo_names.insert("Sub_199_set");

        Pty_199.add_element(Sub_199);
      }
      Full_1.add_element(Pty_199);
    }
    elt.add_element(Full_1);
  } // end Full
  { // Rtg
    xml_element Rtg_7{"Rtg"};
    multiset<string> Rtg_7_set;
    Rtg_7.add_attribute("RtgTyp", "3"); // 1
    Rtg_7_set.insert("3");
    Rtg_7.add_attribute("RtgID", "RoutingID_t_658663949"); // 1
    Rtg_7_set.insert("RoutingID_t_658663949");
    all_values.push_back(Rtg_7_set);
    all_compo_names.insert("Rtg_7_set");

    elt.add_element(Rtg_7);
  } // end Rtg
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
