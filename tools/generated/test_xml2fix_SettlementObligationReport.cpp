#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementObligationReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementObligationReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SettlObligation" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementObligationReport_message_t_0;
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1306688730"); // 0
  SettlementObligationReport_message_t_0.insert("ClearingBusinessDate_t_1306688730");
  elt.add_attribute("CycleNo", "1101313609"); // 0
  SettlementObligationReport_message_t_0.insert("1101313609");
  elt.add_attribute("SettlMsgID", "SettlObligMsgID_t_585762923"); // 0
  SettlementObligationReport_message_t_0.insert("SettlObligMsgID_t_585762923");
  elt.add_attribute("SettlMode", "2"); // 0
  SettlementObligationReport_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_515358758"); // 0
  SettlementObligationReport_message_t_0.insert("Text_t_515358758");
  elt.add_attribute("EncTxtLen", "1132781535"); // 0
  SettlementObligationReport_message_t_0.insert("1132781535");
  elt.add_attribute("EncTxt", "EncodedText_t_1633326012"); // 0
  SettlementObligationReport_message_t_0.insert("EncodedText_t_1633326012");
  elt.add_attribute("TxnTm", "TransactTime_t_1466849566"); // 0
  SettlementObligationReport_message_t_0.insert("TransactTime_t_1466849566");
  all_values.push_back(SettlementObligationReport_message_t_0);
  all_compo_names.insert("SettlementObligationReport_message_t");

  { // Hdr
    xml_element Hdr_92{"Hdr"};
    multiset<string> Hdr_92_set;
    Hdr_92.add_attribute("SeqNum", "1741879576"); // 1
    Hdr_92_set.insert("1741879576");
    Hdr_92.add_attribute("SID", "SenderCompID_t_54822801"); // 1
    Hdr_92_set.insert("SenderCompID_t_54822801");
    Hdr_92.add_attribute("TID", "TargetCompID_t_1390898963"); // 1
    Hdr_92_set.insert("TargetCompID_t_1390898963");
    Hdr_92.add_attribute("OBID", "OnBehalfOfCompID_t_212077407"); // 1
    Hdr_92_set.insert("OnBehalfOfCompID_t_212077407");
    Hdr_92.add_attribute("D2ID", "DeliverToCompID_t_1971155938"); // 1
    Hdr_92_set.insert("DeliverToCompID_t_1971155938");
    Hdr_92.add_attribute("SSub", "SenderSubID_t_605599559"); // 1
    Hdr_92_set.insert("SenderSubID_t_605599559");
    Hdr_92.add_attribute("SLoc", "SenderLocationID_t_1787237623"); // 1
    Hdr_92_set.insert("SenderLocationID_t_1787237623");
    Hdr_92.add_attribute("TSub", "TargetSubID_t_1291393703"); // 1
    Hdr_92_set.insert("TargetSubID_t_1291393703");
    Hdr_92.add_attribute("TLoc", "TargetLocationID_t_904384301"); // 1
    Hdr_92_set.insert("TargetLocationID_t_904384301");
    Hdr_92.add_attribute("OBSub", "OnBehalfOfSubID_t_1479475290"); // 1
    Hdr_92_set.insert("OnBehalfOfSubID_t_1479475290");
    Hdr_92.add_attribute("OBLoc", "OnBehalfOfLocationID_t_31746173"); // 1
    Hdr_92_set.insert("OnBehalfOfLocationID_t_31746173");
    Hdr_92.add_attribute("D2Sub", "DeliverToSubID_t_59862036"); // 1
    Hdr_92_set.insert("DeliverToSubID_t_59862036");
    Hdr_92.add_attribute("D2Loc", "DeliverToLocationID_t_171404281"); // 1
    Hdr_92_set.insert("DeliverToLocationID_t_171404281");
    Hdr_92.add_attribute("PosDup", "N"); // 1
    Hdr_92_set.insert("N");
    Hdr_92.add_attribute("PosRsnd", "N"); // 1
    Hdr_92_set.insert("N");
    Hdr_92.add_attribute("Snt", "SendingTime_t_2095045236"); // 1
    Hdr_92_set.insert("SendingTime_t_2095045236");
    Hdr_92.add_attribute("OrigSnt", "OrigSendingTime_t_334153612"); // 1
    Hdr_92_set.insert("OrigSendingTime_t_334153612");
    Hdr_92.add_attribute("MsgEncd", "MessageEncoding_t_1988252541"); // 1
    Hdr_92_set.insert("MessageEncoding_t_1988252541");
    all_values.push_back(Hdr_92_set);
    all_compo_names.insert("Hdr_92_set");

    {
      xml_element Hop_92{"Hop"};
      multiset<string> Hop_92_set;
      Hop_92.add_attribute("ID", "HopCompID_t_1489928264"); // 2
      Hop_92_set.insert("HopCompID_t_1489928264");
      Hop_92.add_attribute("Ref", "2022907982"); // 2
      Hop_92_set.insert("2022907982");
      Hop_92.add_attribute("Snt", "HopSendingTime_t_1842431086"); // 2
      Hop_92_set.insert("HopSendingTime_t_1842431086");
      all_values.push_back(Hop_92_set);
      all_compo_names.insert("Hop_92_set");

      Hdr_92.add_element(Hop_92);
    }
    elt.add_element(Hdr_92);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_18{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_18_set;
    ApplSeqCtrl_18.add_attribute("ApplID", "ApplID_t_758349678"); // 1
    ApplSeqCtrl_18_set.insert("ApplID_t_758349678");
    ApplSeqCtrl_18.add_attribute("ApplSeqNum", "2135692637"); // 1
    ApplSeqCtrl_18_set.insert("2135692637");
    ApplSeqCtrl_18.add_attribute("ApplLastSeqNum", "1001636168"); // 1
    ApplSeqCtrl_18_set.insert("1001636168");
    ApplSeqCtrl_18.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_18_set.insert("true");
    all_values.push_back(ApplSeqCtrl_18_set);
    all_compo_names.insert("ApplSeqCtrl_18_set");

    elt.add_element(ApplSeqCtrl_18);
  } // end ApplSeqCtrl
  { // SettlObligInst
    xml_element SettlObligInst_0{"SettlObligInst"};
    multiset<string> SettlObligInst_0_set;
    SettlObligInst_0.add_attribute("NetGrossInd", "1"); // 1
    SettlObligInst_0_set.insert("1");
    SettlObligInst_0.add_attribute("SettlID", "SettlObligID_t_227538398"); // 1
    SettlObligInst_0_set.insert("SettlObligID_t_227538398");
    SettlObligInst_0.add_attribute("SettlTransTyp", "C"); // 1
    SettlObligInst_0_set.insert("C");
    SettlObligInst_0.add_attribute("SettlRefID", "SettlObligRefID_t_1552778854"); // 1
    SettlObligInst_0_set.insert("SettlObligRefID_t_1552778854");
    SettlObligInst_0.add_attribute("CcyAmt", "CcyAmt_t_1694387964"); // 1
    SettlObligInst_0_set.insert("CcyAmt_t_1694387964");
    SettlObligInst_0.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1301149376"); // 1
    SettlObligInst_0_set.insert("SettlCurrAmt_t_1301149376");
    SettlObligInst_0.add_attribute("Ccy", "JPY"); // 1
    SettlObligInst_0_set.insert("JPY");
    SettlObligInst_0.add_attribute("SettlCcy", "JPY"); // 1
    SettlObligInst_0_set.insert("JPY");
    SettlObligInst_0.add_attribute("SettlCurrFxRt", "15434028.390000"); // 1
    SettlObligInst_0_set.insert("15434028.390000");
    SettlObligInst_0.add_attribute("SettlDt", "SettlDate_t_1152980758"); // 1
    SettlObligInst_0_set.insert("SettlDate_t_1152980758");
    SettlObligInst_0.add_attribute("EfctvTm", "EffectiveTime_t_575184001"); // 1
    SettlObligInst_0_set.insert("EffectiveTime_t_575184001");
    SettlObligInst_0.add_attribute("ExpireTm", "ExpireTime_t_300303492"); // 1
    SettlObligInst_0_set.insert("ExpireTime_t_300303492");
    SettlObligInst_0.add_attribute("LastUpdateTm", "LastUpdateTime_t_484972401"); // 1
    SettlObligInst_0_set.insert("LastUpdateTime_t_484972401");
    all_values.push_back(SettlObligInst_0_set);
    all_compo_names.insert("SettlObligInst_0_set");

    {
      xml_element Instrmt_82{"Instrmt"};
      multiset<string> Instrmt_82_set;
      Instrmt_82.add_attribute("Sym", "Symbol_t_606930174"); // 2
      Instrmt_82_set.insert("Symbol_t_606930174");
      Instrmt_82.add_attribute("Sfx", "CD"); // 2
      Instrmt_82_set.insert("CD");
      Instrmt_82.add_attribute("ID", "SecurityID_t_656376682"); // 2
      Instrmt_82_set.insert("SecurityID_t_656376682");
      Instrmt_82.add_attribute("Src", "E"); // 2
      Instrmt_82_set.insert("E");
      Instrmt_82.add_attribute("Prod", "6"); // 2
      Instrmt_82_set.insert("6");
      Instrmt_82.add_attribute("ProdCmplx", "ProductComplex_t_603938270"); // 2
      Instrmt_82_set.insert("ProductComplex_t_603938270");
      Instrmt_82.add_attribute("SecGrp", "SecurityGroup_t_1911762559"); // 2
      Instrmt_82_set.insert("SecurityGroup_t_1911762559");
      Instrmt_82.add_attribute("CFI", "CFICode_t_525960358"); // 2
      Instrmt_82_set.insert("CFICode_t_525960358");
      Instrmt_82.add_attribute("SecTyp", "TBOND"); // 2
      Instrmt_82_set.insert("TBOND");
      Instrmt_82.add_attribute("SubTyp", "SecuritySubType_t_1787186893"); // 2
      Instrmt_82_set.insert("SecuritySubType_t_1787186893");
      Instrmt_82.add_attribute("MMY", "220907796"); // 2
      Instrmt_82_set.insert("220907796");
      Instrmt_82.add_attribute("MatDt", "MaturityDate_t_704732565"); // 2
      Instrmt_82_set.insert("MaturityDate_t_704732565");
      Instrmt_82.add_attribute("MatTm", "1775395883"); // 2
      Instrmt_82_set.insert("1775395883");
      Instrmt_82.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1222543964"); // 2
      Instrmt_82_set.insert("SettleOnOpenFlag_t_1222543964");
      Instrmt_82.add_attribute("AsgnMeth", "416912205"); // 2
      Instrmt_82_set.insert("416912205");
      Instrmt_82.add_attribute("Status", "1"); // 2
      Instrmt_82_set.insert("1");
      Instrmt_82.add_attribute("CpnPmt", "CouponPaymentDate_t_1141996806"); // 2
      Instrmt_82_set.insert("CouponPaymentDate_t_1141996806");
      Instrmt_82.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_82_set.insert("XR");
      Instrmt_82.add_attribute("Snrty", "SD"); // 2
      Instrmt_82_set.insert("SD");
      Instrmt_82.add_attribute("NotlPctOut", "5472920.120000"); // 2
      Instrmt_82_set.insert("5472920.120000");
      Instrmt_82.add_attribute("OrigNotlPctOut", "1913549.190000"); // 2
      Instrmt_82_set.insert("1913549.190000");
      Instrmt_82.add_attribute("AttchPnt", "10623033.250000"); // 2
      Instrmt_82_set.insert("10623033.250000");
      Instrmt_82.add_attribute("DetchPnt", "74100.200000"); // 2
      Instrmt_82_set.insert("74100.200000");
      Instrmt_82.add_attribute("Issued", "IssueDate_t_1129158199"); // 2
      Instrmt_82_set.insert("IssueDate_t_1129158199");
      Instrmt_82.add_attribute("RepoCollSecTyp", "428046460"); // 2
      Instrmt_82_set.insert("428046460");
      Instrmt_82.add_attribute("RepoTrm", "1438683966"); // 2
      Instrmt_82_set.insert("1438683966");
      Instrmt_82.add_attribute("RepoRt", "5250773.900000"); // 2
      Instrmt_82_set.insert("5250773.900000");
      Instrmt_82.add_attribute("Fctr", "15810272.190000"); // 2
      Instrmt_82_set.insert("15810272.190000");
      Instrmt_82.add_attribute("CrdRtg", "CreditRating_t_2013867967"); // 2
      Instrmt_82_set.insert("CreditRating_t_2013867967");
      Instrmt_82.add_attribute("Rgstry", "InstrRegistry_t_825380882"); // 2
      Instrmt_82_set.insert("InstrRegistry_t_825380882");
      Instrmt_82.add_attribute("IssuCtry", "2065999620"); // 2
      Instrmt_82_set.insert("2065999620");
      Instrmt_82.add_attribute("StPrv", "StateOrProvinceOfIssue_t_473314494"); // 2
      Instrmt_82_set.insert("StateOrProvinceOfIssue_t_473314494");
      Instrmt_82.add_attribute("Lcl", "LocaleOfIssue_t_1185546411"); // 2
      Instrmt_82_set.insert("LocaleOfIssue_t_1185546411");
      Instrmt_82.add_attribute("Redeem", "RedemptionDate_t_574892654"); // 2
      Instrmt_82_set.insert("RedemptionDate_t_574892654");
      Instrmt_82.add_attribute("StrkPx", "20509234.410000"); // 2
      Instrmt_82_set.insert("20509234.410000");
      Instrmt_82.add_attribute("StrkCcy", "JPY"); // 2
      Instrmt_82_set.insert("JPY");
      Instrmt_82.add_attribute("StrkMult", "18152023.520000"); // 2
      Instrmt_82_set.insert("18152023.520000");
      Instrmt_82.add_attribute("StrkValu", "2492145.850000"); // 2
      Instrmt_82_set.insert("2492145.850000");
      Instrmt_82.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_82_set.insert("4");
      Instrmt_82.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_82_set.insert("4");
      Instrmt_82.add_attribute("StrkPxBndryPrcsn", "4701223.810000"); // 2
      Instrmt_82_set.insert("4701223.810000");
      Instrmt_82.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_82_set.insert("1");
      Instrmt_82.add_attribute("OptAt", "1082817833"); // 2
      Instrmt_82_set.insert("1082817833");
      Instrmt_82.add_attribute("Mult", "16926663.460000"); // 2
      Instrmt_82_set.insert("16926663.460000");
      Instrmt_82.add_attribute("MultTyp", "2"); // 2
      Instrmt_82_set.insert("2");
      Instrmt_82.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_82_set.insert("1");
      Instrmt_82.add_attribute("MinPxIncr", "6871795.040000"); // 2
      Instrmt_82_set.insert("6871795.040000");
      Instrmt_82.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_743825536"); // 2
      Instrmt_82_set.insert("MinPriceIncrementAmount_t_743825536");
      Instrmt_82.add_attribute("UOM", "MMBtu"); // 2
      Instrmt_82_set.insert("MMBtu");
      Instrmt_82.add_attribute("UOMQty", "12344715.170000"); // 2
      Instrmt_82_set.insert("12344715.170000");
      Instrmt_82.add_attribute("PxUOM", "MMBtu"); // 2
      Instrmt_82_set.insert("MMBtu");
      Instrmt_82.add_attribute("PxUOMQty", "21081592.540000"); // 2
      Instrmt_82_set.insert("21081592.540000");
      Instrmt_82.add_attribute("SettlMeth", "P"); // 2
      Instrmt_82_set.insert("P");
      Instrmt_82.add_attribute("ExerStyle", "0"); // 2
      Instrmt_82_set.insert("0");
      Instrmt_82.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_82_set.insert("2");
      Instrmt_82.add_attribute("OptPayAmt", "OptPayoutAmount_t_533081855"); // 2
      Instrmt_82_set.insert("OptPayoutAmount_t_533081855");
      Instrmt_82.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_82_set.insert("INX");
      Instrmt_82.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_82_set.insert("FUT");
      Instrmt_82.add_attribute("ListMeth", "0"); // 2
      Instrmt_82_set.insert("0");
      Instrmt_82.add_attribute("CapPx", "12673132.800000"); // 2
      Instrmt_82_set.insert("12673132.800000");
      Instrmt_82.add_attribute("FlrPx", "18882652.580000"); // 2
      Instrmt_82_set.insert("18882652.580000");
      Instrmt_82.add_attribute("PutCall", "0"); // 2
      Instrmt_82_set.insert("0");
      Instrmt_82.add_attribute("FlexInd", "false"); // 2
      Instrmt_82_set.insert("false");
      Instrmt_82.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_82_set.insert("true");
      Instrmt_82.add_attribute("TmUnit", "H"); // 2
      Instrmt_82_set.insert("H");
      Instrmt_82.add_attribute("CpnRt", "286302.700000"); // 2
      Instrmt_82_set.insert("286302.700000");
      Instrmt_82.add_attribute("Exch", "SecurityExchange_t_1494505188"); // 2
      Instrmt_82_set.insert("SecurityExchange_t_1494505188");
      Instrmt_82.add_attribute("PosLmt", "443939166"); // 2
      Instrmt_82_set.insert("443939166");
      Instrmt_82.add_attribute("NTPosLmt", "277844856"); // 2
      Instrmt_82_set.insert("277844856");
      Instrmt_82.add_attribute("Issr", "Issuer_t_472235351"); // 2
      Instrmt_82_set.insert("Issuer_t_472235351");
      Instrmt_82.add_attribute("EncIssrLen", "1898844764"); // 2
      Instrmt_82_set.insert("1898844764");
      Instrmt_82.add_attribute("EncIssr", "EncodedIssuer_t_747967237"); // 2
      Instrmt_82_set.insert("EncodedIssuer_t_747967237");
      Instrmt_82.add_attribute("Desc", "SecurityDesc_t_154698079"); // 2
      Instrmt_82_set.insert("SecurityDesc_t_154698079");
      Instrmt_82.add_attribute("EncSecDescLen", "834178949"); // 2
      Instrmt_82_set.insert("834178949");
      Instrmt_82.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_293149935"); // 2
      Instrmt_82_set.insert("EncodedSecurityDesc_t_293149935");
      Instrmt_82.add_attribute("Pool", "Pool_t_254073012"); // 2
      Instrmt_82_set.insert("Pool_t_254073012");
      Instrmt_82.add_attribute("CSetMo", "2118880930"); // 2
      Instrmt_82_set.insert("2118880930");
      Instrmt_82.add_attribute("CPPgm", "1"); // 2
      Instrmt_82_set.insert("1");
      Instrmt_82.add_attribute("CPRegT", "CPRegType_t_997898548"); // 2
      Instrmt_82_set.insert("CPRegType_t_997898548");
      Instrmt_82.add_attribute("Dated", "DatedDate_t_1017253211"); // 2
      Instrmt_82_set.insert("DatedDate_t_1017253211");
      Instrmt_82.add_attribute("IntAcrl", "InterestAccrualDate_t_67317309"); // 2
      Instrmt_82_set.insert("InterestAccrualDate_t_67317309");
      all_values.push_back(Instrmt_82_set);
      all_compo_names.insert("Instrmt_82_set");

      {
        xml_element AID_85{"AID"};
        multiset<string> AID_85_set;
        AID_85.add_attribute("AltID", "SecurityAltID_t_1933079004"); // 3
        AID_85_set.insert("SecurityAltID_t_1933079004");
        AID_85.add_attribute("AltIDSrc", "K"); // 3
        AID_85_set.insert("K");
        all_values.push_back(AID_85_set);
        all_compo_names.insert("AID_85_set");

        Instrmt_82.add_element(AID_85);
      }
      {
        xml_element SecXML_85{"SecXML"};
        multiset<string> SecXML_85_set;
        SecXML_85.add_attribute("Schema", "SecurityXMLSchema_t_1309198846"); // 3
        SecXML_85_set.insert("SecurityXMLSchema_t_1309198846");
        all_values.push_back(SecXML_85_set);
        all_compo_names.insert("SecXML_85_set");

        Instrmt_82.add_element(SecXML_85);
      }
      {
        xml_element Evnt_85{"Evnt"};
        multiset<string> Evnt_85_set;
        Evnt_85.add_attribute("EventTyp", "10"); // 3
        Evnt_85_set.insert("10");
        Evnt_85.add_attribute("Dt", "EventDate_t_1366650885"); // 3
        Evnt_85_set.insert("EventDate_t_1366650885");
        Evnt_85.add_attribute("Tm", "EventTime_t_1842280701"); // 3
        Evnt_85_set.insert("EventTime_t_1842280701");
        Evnt_85.add_attribute("Px", "1443827.600000"); // 3
        Evnt_85_set.insert("1443827.600000");
        Evnt_85.add_attribute("Txt", "EventText_t_1188916523"); // 3
        Evnt_85_set.insert("EventText_t_1188916523");
        all_values.push_back(Evnt_85_set);
        all_compo_names.insert("Evnt_85_set");

        Instrmt_82.add_element(Evnt_85);
      }
      {
        xml_element Pty_428{"Pty"};
        multiset<string> Pty_428_set;
        Pty_428.add_attribute("ID", "InstrumentPartyID_t_94263227"); // 3
        Pty_428_set.insert("InstrumentPartyID_t_94263227");
        Pty_428.add_attribute("Src", "F"); // 3
        Pty_428_set.insert("F");
        Pty_428.add_attribute("R", "79"); // 3
        Pty_428_set.insert("79");
        all_values.push_back(Pty_428_set);
        all_compo_names.insert("Pty_428_set");

        {
          xml_element Sub_428{"Sub"};
          multiset<string> Sub_428_set;
          Sub_428.add_attribute("ID", "InstrumentPartySubID_t_967043896"); // 4
          Sub_428_set.insert("InstrumentPartySubID_t_967043896");
          Sub_428.add_attribute("Typ", "20"); // 4
          Sub_428_set.insert("20");
          all_values.push_back(Sub_428_set);
          all_compo_names.insert("Sub_428_set");

          Pty_428.add_element(Sub_428);
        }
        Instrmt_82.add_element(Pty_428);
      }
      {
        xml_element CmplxEvnt_82{"CmplxEvnt"};
        multiset<string> CmplxEvnt_82_set;
        CmplxEvnt_82.add_attribute("Typ", "8"); // 3
        CmplxEvnt_82_set.insert("8");
        CmplxEvnt_82.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1743264357"); // 3
        CmplxEvnt_82_set.insert("ComplexOptPayoutAmount_t_1743264357");
        CmplxEvnt_82.add_attribute("Px", "17457023.540000"); // 3
        CmplxEvnt_82_set.insert("17457023.540000");
        CmplxEvnt_82.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_82_set.insert("3");
        CmplxEvnt_82.add_attribute("PxBndryPrcsn", "397198.750000"); // 3
        CmplxEvnt_82_set.insert("397198.750000");
        CmplxEvnt_82.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_82_set.insert("3");
        CmplxEvnt_82.add_attribute("Cond", "2"); // 3
        CmplxEvnt_82_set.insert("2");
        all_values.push_back(CmplxEvnt_82_set);
        all_compo_names.insert("CmplxEvnt_82_set");

        {
          xml_element EvntDts_82{"EvntDts"};
          multiset<string> EvntDts_82_set;
          EvntDts_82.add_attribute("StartDt", "ComplexEventStartDate_t_1938564639"); // 4
          EvntDts_82_set.insert("ComplexEventStartDate_t_1938564639");
          EvntDts_82.add_attribute("EndDt", "ComplexEventEndDate_t_624030799"); // 4
          EvntDts_82_set.insert("ComplexEventEndDate_t_624030799");
          all_values.push_back(EvntDts_82_set);
          all_compo_names.insert("EvntDts_82_set");

          {
            xml_element EvntTms_82{"EvntTms"};
            multiset<string> EvntTms_82_set;
            EvntTms_82.add_attribute("StartTm", "1219327368"); // 5
            EvntTms_82_set.insert("1219327368");
            EvntTms_82.add_attribute("EndTm", "625259940"); // 5
            EvntTms_82_set.insert("625259940");
            all_values.push_back(EvntTms_82_set);
            all_compo_names.insert("EvntTms_82_set");

            EvntDts_82.add_element(EvntTms_82);
          }
          CmplxEvnt_82.add_element(EvntDts_82);
        }
        Instrmt_82.add_element(CmplxEvnt_82);
      }
      SettlObligInst_0.add_element(Instrmt_82);
    }
    {
      xml_element Pty_429{"Pty"};
      multiset<string> Pty_429_set;
      Pty_429.add_attribute("ID", "PartyID_t_917180735"); // 2
      Pty_429_set.insert("PartyID_t_917180735");
      Pty_429.add_attribute("Src", "E"); // 2
      Pty_429_set.insert("E");
      Pty_429.add_attribute("R", "22"); // 2
      Pty_429_set.insert("22");
      all_values.push_back(Pty_429_set);
      all_compo_names.insert("Pty_429_set");

      {
        xml_element Sub_429{"Sub"};
        multiset<string> Sub_429_set;
        Sub_429.add_attribute("ID", "PartySubID_t_1897510175"); // 3
        Sub_429_set.insert("PartySubID_t_1897510175");
        Sub_429.add_attribute("Typ", "18"); // 3
        Sub_429_set.insert("18");
        all_values.push_back(Sub_429_set);
        all_compo_names.insert("Sub_429_set");

        Pty_429.add_element(Sub_429);
      }
      SettlObligInst_0.add_element(Pty_429);
    }
    {
      xml_element SettlDetails_0{"SettlDetails"};
      multiset<string> SettlDetails_0_set;
      SettlDetails_0.add_attribute("SettlSrc", "3"); // 2
      SettlDetails_0_set.insert("3");
      all_values.push_back(SettlDetails_0_set);
      all_compo_names.insert("SettlDetails_0_set");

      {
        xml_element Pty_430{"Pty"};
        multiset<string> Pty_430_set;
        Pty_430.add_attribute("ID", "SettlPartyID_t_1964827484"); // 3
        Pty_430_set.insert("SettlPartyID_t_1964827484");
        Pty_430.add_attribute("Src", "E"); // 3
        Pty_430_set.insert("E");
        Pty_430.add_attribute("R", "59"); // 3
        Pty_430_set.insert("59");
        all_values.push_back(Pty_430_set);
        all_compo_names.insert("Pty_430_set");

        {
          xml_element Sub_430{"Sub"};
          multiset<string> Sub_430_set;
          Sub_430.add_attribute("ID", "SettlPartySubID_t_1126542682"); // 4
          Sub_430_set.insert("SettlPartySubID_t_1126542682");
          Sub_430.add_attribute("Typ", "17"); // 4
          Sub_430_set.insert("17");
          all_values.push_back(Sub_430_set);
          all_compo_names.insert("Sub_430_set");

          Pty_430.add_element(Sub_430);
        }
        SettlDetails_0.add_element(Pty_430);
      }
      SettlObligInst_0.add_element(SettlDetails_0);
    }
    elt.add_element(SettlObligInst_0);
  } // end SettlObligInst
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
