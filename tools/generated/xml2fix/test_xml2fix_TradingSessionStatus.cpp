#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionStatus_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesStat" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionStatus_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_1112449626"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesReqID_t_1112449626");
  elt.add_attribute("MktID", "MarketID_t_1136575914"); // 0
  TradingSessionStatus_message_t_0.insert("MarketID_t_1136575914");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1313759856"); // 0
  TradingSessionStatus_message_t_0.insert("MarketSegmentID_t_1313759856");
  elt.add_attribute("SesID", "5"); // 0
  TradingSessionStatus_message_t_0.insert("5");
  elt.add_attribute("SesSub", "7"); // 0
  TradingSessionStatus_message_t_0.insert("7");
  elt.add_attribute("Method", "1"); // 0
  TradingSessionStatus_message_t_0.insert("1");
  elt.add_attribute("Mode", "1"); // 0
  TradingSessionStatus_message_t_0.insert("1");
  elt.add_attribute("Unsol", "N"); // 0
  TradingSessionStatus_message_t_0.insert("N");
  elt.add_attribute("Stat", "0"); // 0
  TradingSessionStatus_message_t_0.insert("0");
  elt.add_attribute("TradSesEvent", "1"); // 0
  TradingSessionStatus_message_t_0.insert("1");
  elt.add_attribute("StatRejRsn", "1"); // 0
  TradingSessionStatus_message_t_0.insert("1");
  elt.add_attribute("StartTm", "TradSesStartTime_t_755025661"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesStartTime_t_755025661");
  elt.add_attribute("OpenTm", "TradSesOpenTime_t_1344631439"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesOpenTime_t_1344631439");
  elt.add_attribute("PreClsTm", "TradSesPreCloseTime_t_520101397"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesPreCloseTime_t_520101397");
  elt.add_attribute("ClsTm", "TradSesCloseTime_t_2141785591"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesCloseTime_t_2141785591");
  elt.add_attribute("EndTm", "TradSesEndTime_t_929122390"); // 0
  TradingSessionStatus_message_t_0.insert("TradSesEndTime_t_929122390");
  elt.add_attribute("TotVolTrdd", "9731710.040000"); // 0
  TradingSessionStatus_message_t_0.insert("9731710.040000");
  elt.add_attribute("Txt", "Text_t_1813135768"); // 0
  TradingSessionStatus_message_t_0.insert("Text_t_1813135768");
  elt.add_attribute("EncTxtLen", "836301272"); // 0
  TradingSessionStatus_message_t_0.insert("836301272");
  elt.add_attribute("EncTxt", "EncodedText_t_1906008172"); // 0
  TradingSessionStatus_message_t_0.insert("EncodedText_t_1906008172");
  all_values.push_back(TradingSessionStatus_message_t_0);
  all_compo_names.insert("TradingSessionStatus_message_t");

  { // Hdr
    xml_element Hdr_103{"Hdr"};
    multiset<string> Hdr_103_set;
    Hdr_103.add_attribute("SeqNum", "424135968"); // 1
    Hdr_103_set.insert("424135968");
    Hdr_103.add_attribute("SID", "SenderCompID_t_635548937"); // 1
    Hdr_103_set.insert("SenderCompID_t_635548937");
    Hdr_103.add_attribute("TID", "TargetCompID_t_961075255"); // 1
    Hdr_103_set.insert("TargetCompID_t_961075255");
    Hdr_103.add_attribute("OBID", "OnBehalfOfCompID_t_114310489"); // 1
    Hdr_103_set.insert("OnBehalfOfCompID_t_114310489");
    Hdr_103.add_attribute("D2ID", "DeliverToCompID_t_1378551879"); // 1
    Hdr_103_set.insert("DeliverToCompID_t_1378551879");
    Hdr_103.add_attribute("SSub", "SenderSubID_t_644959572"); // 1
    Hdr_103_set.insert("SenderSubID_t_644959572");
    Hdr_103.add_attribute("SLoc", "SenderLocationID_t_528720780"); // 1
    Hdr_103_set.insert("SenderLocationID_t_528720780");
    Hdr_103.add_attribute("TSub", "TargetSubID_t_1955775228"); // 1
    Hdr_103_set.insert("TargetSubID_t_1955775228");
    Hdr_103.add_attribute("TLoc", "TargetLocationID_t_472790726"); // 1
    Hdr_103_set.insert("TargetLocationID_t_472790726");
    Hdr_103.add_attribute("OBSub", "OnBehalfOfSubID_t_884553308"); // 1
    Hdr_103_set.insert("OnBehalfOfSubID_t_884553308");
    Hdr_103.add_attribute("OBLoc", "OnBehalfOfLocationID_t_934051312"); // 1
    Hdr_103_set.insert("OnBehalfOfLocationID_t_934051312");
    Hdr_103.add_attribute("D2Sub", "DeliverToSubID_t_1585240352"); // 1
    Hdr_103_set.insert("DeliverToSubID_t_1585240352");
    Hdr_103.add_attribute("D2Loc", "DeliverToLocationID_t_2021129223"); // 1
    Hdr_103_set.insert("DeliverToLocationID_t_2021129223");
    Hdr_103.add_attribute("PosDup", "N"); // 1
    Hdr_103_set.insert("N");
    Hdr_103.add_attribute("PosRsnd", "N"); // 1
    Hdr_103_set.insert("N");
    Hdr_103.add_attribute("Snt", "SendingTime_t_1945044967"); // 1
    Hdr_103_set.insert("SendingTime_t_1945044967");
    Hdr_103.add_attribute("OrigSnt", "OrigSendingTime_t_905387835"); // 1
    Hdr_103_set.insert("OrigSendingTime_t_905387835");
    Hdr_103.add_attribute("MsgEncd", "MessageEncoding_t_1485736600"); // 1
    Hdr_103_set.insert("MessageEncoding_t_1485736600");
    all_values.push_back(Hdr_103_set);
    all_compo_names.insert("Hdr_103_set");

    {
      xml_element Hop_103{"Hop"};
      multiset<string> Hop_103_set;
      Hop_103.add_attribute("ID", "HopCompID_t_335071937"); // 2
      Hop_103_set.insert("HopCompID_t_335071937");
      Hop_103.add_attribute("Ref", "1013299317"); // 2
      Hop_103_set.insert("1013299317");
      Hop_103.add_attribute("Snt", "HopSendingTime_t_303705054"); // 2
      Hop_103_set.insert("HopSendingTime_t_303705054");
      all_values.push_back(Hop_103_set);
      all_compo_names.insert("Hop_103_set");

      Hdr_103.add_element(Hop_103);
    }
    elt.add_element(Hdr_103);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_22{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_22_set;
    ApplSeqCtrl_22.add_attribute("ApplID", "ApplID_t_1811327275"); // 1
    ApplSeqCtrl_22_set.insert("ApplID_t_1811327275");
    ApplSeqCtrl_22.add_attribute("ApplSeqNum", "1768324979"); // 1
    ApplSeqCtrl_22_set.insert("1768324979");
    ApplSeqCtrl_22.add_attribute("ApplLastSeqNum", "1648336493"); // 1
    ApplSeqCtrl_22_set.insert("1648336493");
    ApplSeqCtrl_22.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_22_set.insert("false");
    all_values.push_back(ApplSeqCtrl_22_set);
    all_compo_names.insert("ApplSeqCtrl_22_set");

    elt.add_element(ApplSeqCtrl_22);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_89{"Instrmt"};
    multiset<string> Instrmt_89_set;
    Instrmt_89.add_attribute("Sym", "Symbol_t_1762626922"); // 1
    Instrmt_89_set.insert("Symbol_t_1762626922");
    Instrmt_89.add_attribute("Sfx", "WI"); // 1
    Instrmt_89_set.insert("WI");
    Instrmt_89.add_attribute("ID", "SecurityID_t_1157116029"); // 1
    Instrmt_89_set.insert("SecurityID_t_1157116029");
    Instrmt_89.add_attribute("Src", "F"); // 1
    Instrmt_89_set.insert("F");
    Instrmt_89.add_attribute("Prod", "11"); // 1
    Instrmt_89_set.insert("11");
    Instrmt_89.add_attribute("ProdCmplx", "ProductComplex_t_915640554"); // 1
    Instrmt_89_set.insert("ProductComplex_t_915640554");
    Instrmt_89.add_attribute("SecGrp", "SecurityGroup_t_1852415010"); // 1
    Instrmt_89_set.insert("SecurityGroup_t_1852415010");
    Instrmt_89.add_attribute("CFI", "CFICode_t_1901825444"); // 1
    Instrmt_89_set.insert("CFICode_t_1901825444");
    Instrmt_89.add_attribute("SecTyp", "FOR"); // 1
    Instrmt_89_set.insert("FOR");
    Instrmt_89.add_attribute("SubTyp", "SecuritySubType_t_1966725499"); // 1
    Instrmt_89_set.insert("SecuritySubType_t_1966725499");
    Instrmt_89.add_attribute("MMY", "1132893675"); // 1
    Instrmt_89_set.insert("1132893675");
    Instrmt_89.add_attribute("MatDt", "MaturityDate_t_374191733"); // 1
    Instrmt_89_set.insert("MaturityDate_t_374191733");
    Instrmt_89.add_attribute("MatTm", "347962631"); // 1
    Instrmt_89_set.insert("347962631");
    Instrmt_89.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_941185256"); // 1
    Instrmt_89_set.insert("SettleOnOpenFlag_t_941185256");
    Instrmt_89.add_attribute("AsgnMeth", "846982459"); // 1
    Instrmt_89_set.insert("846982459");
    Instrmt_89.add_attribute("Status", "1"); // 1
    Instrmt_89_set.insert("1");
    Instrmt_89.add_attribute("CpnPmt", "CouponPaymentDate_t_1875236568"); // 1
    Instrmt_89_set.insert("CouponPaymentDate_t_1875236568");
    Instrmt_89.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_89_set.insert("XR");
    Instrmt_89.add_attribute("Snrty", "SD"); // 1
    Instrmt_89_set.insert("SD");
    Instrmt_89.add_attribute("NotlPctOut", "19755640.890000"); // 1
    Instrmt_89_set.insert("19755640.890000");
    Instrmt_89.add_attribute("OrigNotlPctOut", "19401719.650000"); // 1
    Instrmt_89_set.insert("19401719.650000");
    Instrmt_89.add_attribute("AttchPnt", "9037228.340000"); // 1
    Instrmt_89_set.insert("9037228.340000");
    Instrmt_89.add_attribute("DetchPnt", "7334682.760000"); // 1
    Instrmt_89_set.insert("7334682.760000");
    Instrmt_89.add_attribute("Issued", "IssueDate_t_1278424918"); // 1
    Instrmt_89_set.insert("IssueDate_t_1278424918");
    Instrmt_89.add_attribute("RepoCollSecTyp", "1238794771"); // 1
    Instrmt_89_set.insert("1238794771");
    Instrmt_89.add_attribute("RepoTrm", "1746767593"); // 1
    Instrmt_89_set.insert("1746767593");
    Instrmt_89.add_attribute("RepoRt", "15821299.720000"); // 1
    Instrmt_89_set.insert("15821299.720000");
    Instrmt_89.add_attribute("Fctr", "9026383.990000"); // 1
    Instrmt_89_set.insert("9026383.990000");
    Instrmt_89.add_attribute("CrdRtg", "CreditRating_t_1367608924"); // 1
    Instrmt_89_set.insert("CreditRating_t_1367608924");
    Instrmt_89.add_attribute("Rgstry", "InstrRegistry_t_1082982817"); // 1
    Instrmt_89_set.insert("InstrRegistry_t_1082982817");
    Instrmt_89.add_attribute("IssuCtry", "1086583424"); // 1
    Instrmt_89_set.insert("1086583424");
    Instrmt_89.add_attribute("StPrv", "StateOrProvinceOfIssue_t_982752198"); // 1
    Instrmt_89_set.insert("StateOrProvinceOfIssue_t_982752198");
    Instrmt_89.add_attribute("Lcl", "LocaleOfIssue_t_1512958052"); // 1
    Instrmt_89_set.insert("LocaleOfIssue_t_1512958052");
    Instrmt_89.add_attribute("Redeem", "RedemptionDate_t_96215805"); // 1
    Instrmt_89_set.insert("RedemptionDate_t_96215805");
    Instrmt_89.add_attribute("StrkPx", "2635475.920000"); // 1
    Instrmt_89_set.insert("2635475.920000");
    Instrmt_89.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_89_set.insert("CHF");
    Instrmt_89.add_attribute("StrkMult", "21159626.030000"); // 1
    Instrmt_89_set.insert("21159626.030000");
    Instrmt_89.add_attribute("StrkValu", "3860927.080000"); // 1
    Instrmt_89_set.insert("3860927.080000");
    Instrmt_89.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_89_set.insert("1");
    Instrmt_89.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_89_set.insert("5");
    Instrmt_89.add_attribute("StrkPxBndryPrcsn", "15189863.840000"); // 1
    Instrmt_89_set.insert("15189863.840000");
    Instrmt_89.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_89_set.insert("3");
    Instrmt_89.add_attribute("OptAt", "135683438"); // 1
    Instrmt_89_set.insert("135683438");
    Instrmt_89.add_attribute("Mult", "3126879.920000"); // 1
    Instrmt_89_set.insert("3126879.920000");
    Instrmt_89.add_attribute("MultTyp", "0"); // 1
    Instrmt_89_set.insert("0");
    Instrmt_89.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_89_set.insert("3");
    Instrmt_89.add_attribute("MinPxIncr", "404409.120000"); // 1
    Instrmt_89_set.insert("404409.120000");
    Instrmt_89.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_99518229"); // 1
    Instrmt_89_set.insert("MinPriceIncrementAmount_t_99518229");
    Instrmt_89.add_attribute("UOM", "MMbbl"); // 1
    Instrmt_89_set.insert("MMbbl");
    Instrmt_89.add_attribute("UOMQty", "20160050.010000"); // 1
    Instrmt_89_set.insert("20160050.010000");
    Instrmt_89.add_attribute("PxUOM", "USD"); // 1
    Instrmt_89_set.insert("USD");
    Instrmt_89.add_attribute("PxUOMQty", "12306000.790000"); // 1
    Instrmt_89_set.insert("12306000.790000");
    Instrmt_89.add_attribute("SettlMeth", "P"); // 1
    Instrmt_89_set.insert("P");
    Instrmt_89.add_attribute("ExerStyle", "0"); // 1
    Instrmt_89_set.insert("0");
    Instrmt_89.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_89_set.insert("1");
    Instrmt_89.add_attribute("OptPayAmt", "OptPayoutAmount_t_201273575"); // 1
    Instrmt_89_set.insert("OptPayoutAmount_t_201273575");
    Instrmt_89.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_89_set.insert("STD");
    Instrmt_89.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_89_set.insert("FUT");
    Instrmt_89.add_attribute("ListMeth", "1"); // 1
    Instrmt_89_set.insert("1");
    Instrmt_89.add_attribute("CapPx", "16882606.050000"); // 1
    Instrmt_89_set.insert("16882606.050000");
    Instrmt_89.add_attribute("FlrPx", "1636493.770000"); // 1
    Instrmt_89_set.insert("1636493.770000");
    Instrmt_89.add_attribute("PutCall", "0"); // 1
    Instrmt_89_set.insert("0");
    Instrmt_89.add_attribute("FlexInd", "true"); // 1
    Instrmt_89_set.insert("true");
    Instrmt_89.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_89_set.insert("false");
    Instrmt_89.add_attribute("TmUnit", "H"); // 1
    Instrmt_89_set.insert("H");
    Instrmt_89.add_attribute("CpnRt", "16854859.220000"); // 1
    Instrmt_89_set.insert("16854859.220000");
    Instrmt_89.add_attribute("Exch", "SecurityExchange_t_1271721542"); // 1
    Instrmt_89_set.insert("SecurityExchange_t_1271721542");
    Instrmt_89.add_attribute("PosLmt", "636177597"); // 1
    Instrmt_89_set.insert("636177597");
    Instrmt_89.add_attribute("NTPosLmt", "2071578630"); // 1
    Instrmt_89_set.insert("2071578630");
    Instrmt_89.add_attribute("Issr", "Issuer_t_2012810063"); // 1
    Instrmt_89_set.insert("Issuer_t_2012810063");
    Instrmt_89.add_attribute("EncIssrLen", "423898404"); // 1
    Instrmt_89_set.insert("423898404");
    Instrmt_89.add_attribute("EncIssr", "EncodedIssuer_t_1443081366"); // 1
    Instrmt_89_set.insert("EncodedIssuer_t_1443081366");
    Instrmt_89.add_attribute("Desc", "SecurityDesc_t_980606669"); // 1
    Instrmt_89_set.insert("SecurityDesc_t_980606669");
    Instrmt_89.add_attribute("EncSecDescLen", "559581842"); // 1
    Instrmt_89_set.insert("559581842");
    Instrmt_89.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1755769358"); // 1
    Instrmt_89_set.insert("EncodedSecurityDesc_t_1755769358");
    Instrmt_89.add_attribute("Pool", "Pool_t_795385734"); // 1
    Instrmt_89_set.insert("Pool_t_795385734");
    Instrmt_89.add_attribute("CSetMo", "1927781220"); // 1
    Instrmt_89_set.insert("1927781220");
    Instrmt_89.add_attribute("CPPgm", "1"); // 1
    Instrmt_89_set.insert("1");
    Instrmt_89.add_attribute("CPRegT", "CPRegType_t_894903963"); // 1
    Instrmt_89_set.insert("CPRegType_t_894903963");
    Instrmt_89.add_attribute("Dated", "DatedDate_t_107174817"); // 1
    Instrmt_89_set.insert("DatedDate_t_107174817");
    Instrmt_89.add_attribute("IntAcrl", "InterestAccrualDate_t_1664731624"); // 1
    Instrmt_89_set.insert("InterestAccrualDate_t_1664731624");
    all_values.push_back(Instrmt_89_set);
    all_compo_names.insert("Instrmt_89_set");

    {
      xml_element AID_92{"AID"};
      multiset<string> AID_92_set;
      AID_92.add_attribute("AltID", "SecurityAltID_t_787110510"); // 2
      AID_92_set.insert("SecurityAltID_t_787110510");
      AID_92.add_attribute("AltIDSrc", "J"); // 2
      AID_92_set.insert("J");
      all_values.push_back(AID_92_set);
      all_compo_names.insert("AID_92_set");

      Instrmt_89.add_element(AID_92);
    }
    {
      xml_element SecXML_89{"SecXML"};
      multiset<string> SecXML_89_set;
      SecXML_89.add_attribute("Schema", "SecurityXMLSchema_t_119237606"); // 2
      SecXML_89_set.insert("SecurityXMLSchema_t_119237606");
      all_values.push_back(SecXML_89_set);
      all_compo_names.insert("SecXML_89_set");

      Instrmt_89.add_element(SecXML_89);
    }
    {
      xml_element Evnt_89{"Evnt"};
      multiset<string> Evnt_89_set;
      Evnt_89.add_attribute("EventTyp", "14"); // 2
      Evnt_89_set.insert("14");
      Evnt_89.add_attribute("Dt", "EventDate_t_1659686098"); // 2
      Evnt_89_set.insert("EventDate_t_1659686098");
      Evnt_89.add_attribute("Tm", "EventTime_t_320511181"); // 2
      Evnt_89_set.insert("EventTime_t_320511181");
      Evnt_89.add_attribute("Px", "4155361.150000"); // 2
      Evnt_89_set.insert("4155361.150000");
      Evnt_89.add_attribute("Txt", "EventText_t_736752052"); // 2
      Evnt_89_set.insert("EventText_t_736752052");
      all_values.push_back(Evnt_89_set);
      all_compo_names.insert("Evnt_89_set");

      Instrmt_89.add_element(Evnt_89);
    }
    {
      xml_element Pty_437{"Pty"};
      multiset<string> Pty_437_set;
      Pty_437.add_attribute("ID", "InstrumentPartyID_t_1889393680"); // 2
      Pty_437_set.insert("InstrumentPartyID_t_1889393680");
      Pty_437.add_attribute("Src", "B"); // 2
      Pty_437_set.insert("B");
      Pty_437.add_attribute("R", "56"); // 2
      Pty_437_set.insert("56");
      all_values.push_back(Pty_437_set);
      all_compo_names.insert("Pty_437_set");

      {
        xml_element Sub_437{"Sub"};
        multiset<string> Sub_437_set;
        Sub_437.add_attribute("ID", "InstrumentPartySubID_t_146061082"); // 3
        Sub_437_set.insert("InstrumentPartySubID_t_146061082");
        Sub_437.add_attribute("Typ", "5"); // 3
        Sub_437_set.insert("5");
        all_values.push_back(Sub_437_set);
        all_compo_names.insert("Sub_437_set");

        Pty_437.add_element(Sub_437);
      }
      Instrmt_89.add_element(Pty_437);
    }
    {
      xml_element CmplxEvnt_86{"CmplxEvnt"};
      multiset<string> CmplxEvnt_86_set;
      CmplxEvnt_86.add_attribute("Typ", "5"); // 2
      CmplxEvnt_86_set.insert("5");
      CmplxEvnt_86.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_813759725"); // 2
      CmplxEvnt_86_set.insert("ComplexOptPayoutAmount_t_813759725");
      CmplxEvnt_86.add_attribute("Px", "5480503.560000"); // 2
      CmplxEvnt_86_set.insert("5480503.560000");
      CmplxEvnt_86.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_86_set.insert("3");
      CmplxEvnt_86.add_attribute("PxBndryPrcsn", "14499373.220000"); // 2
      CmplxEvnt_86_set.insert("14499373.220000");
      CmplxEvnt_86.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_86_set.insert("3");
      CmplxEvnt_86.add_attribute("Cond", "1"); // 2
      CmplxEvnt_86_set.insert("1");
      all_values.push_back(CmplxEvnt_86_set);
      all_compo_names.insert("CmplxEvnt_86_set");

      {
        xml_element EvntDts_86{"EvntDts"};
        multiset<string> EvntDts_86_set;
        EvntDts_86.add_attribute("StartDt", "ComplexEventStartDate_t_1873835726"); // 3
        EvntDts_86_set.insert("ComplexEventStartDate_t_1873835726");
        EvntDts_86.add_attribute("EndDt", "ComplexEventEndDate_t_1915226705"); // 3
        EvntDts_86_set.insert("ComplexEventEndDate_t_1915226705");
        all_values.push_back(EvntDts_86_set);
        all_compo_names.insert("EvntDts_86_set");

        {
          xml_element EvntTms_86{"EvntTms"};
          multiset<string> EvntTms_86_set;
          EvntTms_86.add_attribute("StartTm", "1130437591"); // 4
          EvntTms_86_set.insert("1130437591");
          EvntTms_86.add_attribute("EndTm", "285933920"); // 4
          EvntTms_86_set.insert("285933920");
          all_values.push_back(EvntTms_86_set);
          all_compo_names.insert("EvntTms_86_set");

          EvntDts_86.add_element(EvntTms_86);
        }
        CmplxEvnt_86.add_element(EvntDts_86);
      }
      Instrmt_89.add_element(CmplxEvnt_86);
    }
    elt.add_element(Instrmt_89);
  } // end Instrmt
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
