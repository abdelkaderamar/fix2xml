#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Email.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Email_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Email" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Email_message_t_0;
  elt.add_attribute("EmailThreadID", "EmailThreadID_t_406280152"); // 0
  Email_message_t_0.insert("EmailThreadID_t_406280152");
  elt.add_attribute("EmailTyp", "2"); // 0
  Email_message_t_0.insert("2");
  elt.add_attribute("OrigTm", "OrigTime_t_1074088926"); // 0
  Email_message_t_0.insert("OrigTime_t_1074088926");
  elt.add_attribute("Subject", "Subject_t_298071152"); // 0
  Email_message_t_0.insert("Subject_t_298071152");
  elt.add_attribute("EncSubjectLen", "1693132116"); // 0
  Email_message_t_0.insert("1693132116");
  elt.add_attribute("EncSubject", "EncodedSubject_t_284072434"); // 0
  Email_message_t_0.insert("EncodedSubject_t_284072434");
  elt.add_attribute("OrdID", "OrderID_t_103483920"); // 0
  Email_message_t_0.insert("OrderID_t_103483920");
  elt.add_attribute("ClOrdID", "ClOrdID_t_70875243"); // 0
  Email_message_t_0.insert("ClOrdID_t_70875243");
  elt.add_attribute("RawDataLength", "825218723"); // 0
  Email_message_t_0.insert("825218723");
  elt.add_attribute("RawData", "RawData_t_2141078209"); // 0
  Email_message_t_0.insert("RawData_t_2141078209");
  all_values.push_back(Email_message_t_0);
  all_compo_names.insert("Email_message_t");

  { // Hdr
    xml_element Hdr_30{"Hdr"};
    multiset<string> Hdr_30_set;
    Hdr_30.add_attribute("SeqNum", "532063086"); // 1
    Hdr_30_set.insert("532063086");
    Hdr_30.add_attribute("SID", "SenderCompID_t_959165647"); // 1
    Hdr_30_set.insert("SenderCompID_t_959165647");
    Hdr_30.add_attribute("TID", "TargetCompID_t_317754818"); // 1
    Hdr_30_set.insert("TargetCompID_t_317754818");
    Hdr_30.add_attribute("OBID", "OnBehalfOfCompID_t_393099251"); // 1
    Hdr_30_set.insert("OnBehalfOfCompID_t_393099251");
    Hdr_30.add_attribute("D2ID", "DeliverToCompID_t_1830378456"); // 1
    Hdr_30_set.insert("DeliverToCompID_t_1830378456");
    Hdr_30.add_attribute("SSub", "SenderSubID_t_705752373"); // 1
    Hdr_30_set.insert("SenderSubID_t_705752373");
    Hdr_30.add_attribute("SLoc", "SenderLocationID_t_1436980107"); // 1
    Hdr_30_set.insert("SenderLocationID_t_1436980107");
    Hdr_30.add_attribute("TSub", "TargetSubID_t_1596937461"); // 1
    Hdr_30_set.insert("TargetSubID_t_1596937461");
    Hdr_30.add_attribute("TLoc", "TargetLocationID_t_111728006"); // 1
    Hdr_30_set.insert("TargetLocationID_t_111728006");
    Hdr_30.add_attribute("OBSub", "OnBehalfOfSubID_t_631751621"); // 1
    Hdr_30_set.insert("OnBehalfOfSubID_t_631751621");
    Hdr_30.add_attribute("OBLoc", "OnBehalfOfLocationID_t_681032108"); // 1
    Hdr_30_set.insert("OnBehalfOfLocationID_t_681032108");
    Hdr_30.add_attribute("D2Sub", "DeliverToSubID_t_1739144731"); // 1
    Hdr_30_set.insert("DeliverToSubID_t_1739144731");
    Hdr_30.add_attribute("D2Loc", "DeliverToLocationID_t_1562904409"); // 1
    Hdr_30_set.insert("DeliverToLocationID_t_1562904409");
    Hdr_30.add_attribute("PosDup", "N"); // 1
    Hdr_30_set.insert("N");
    Hdr_30.add_attribute("PosRsnd", "Y"); // 1
    Hdr_30_set.insert("Y");
    Hdr_30.add_attribute("Snt", "SendingTime_t_557371717"); // 1
    Hdr_30_set.insert("SendingTime_t_557371717");
    Hdr_30.add_attribute("OrigSnt", "OrigSendingTime_t_472405370"); // 1
    Hdr_30_set.insert("OrigSendingTime_t_472405370");
    Hdr_30.add_attribute("MsgEncd", "MessageEncoding_t_1701622479"); // 1
    Hdr_30_set.insert("MessageEncoding_t_1701622479");
    all_values.push_back(Hdr_30_set);
    all_compo_names.insert("Hdr_30_set");

    {
      xml_element Hop_30{"Hop"};
      multiset<string> Hop_30_set;
      Hop_30.add_attribute("ID", "HopCompID_t_1207920179"); // 2
      Hop_30_set.insert("HopCompID_t_1207920179");
      Hop_30.add_attribute("Ref", "1246576360"); // 2
      Hop_30_set.insert("1246576360");
      Hop_30.add_attribute("Snt", "HopSendingTime_t_307384560"); // 2
      Hop_30_set.insert("HopSendingTime_t_307384560");
      all_values.push_back(Hop_30_set);
      all_compo_names.insert("Hop_30_set");

      Hdr_30.add_element(Hop_30);
    }
    elt.add_element(Hdr_30);
  } // end Hdr
  { // Rtg
    xml_element Rtg_0{"Rtg"};
    multiset<string> Rtg_0_set;
    Rtg_0.add_attribute("RtgTyp", "1"); // 1
    Rtg_0_set.insert("1");
    Rtg_0.add_attribute("RtgID", "RoutingID_t_1381473486"); // 1
    Rtg_0_set.insert("RoutingID_t_1381473486");
    all_values.push_back(Rtg_0_set);
    all_compo_names.insert("Rtg_0_set");

    elt.add_element(Rtg_0);
  } // end Rtg
  { // Inst
    xml_element Inst_3{"Inst"};
    {
      xml_element Instrmt_23{"Instrmt"};
      multiset<string> Instrmt_23_set;
      Instrmt_23.add_attribute("Sym", "Symbol_t_2080021616"); // 2
      Instrmt_23_set.insert("Symbol_t_2080021616");
      Instrmt_23.add_attribute("Sfx", "CD"); // 2
      Instrmt_23_set.insert("CD");
      Instrmt_23.add_attribute("ID", "SecurityID_t_2015755404"); // 2
      Instrmt_23_set.insert("SecurityID_t_2015755404");
      Instrmt_23.add_attribute("Src", "M"); // 2
      Instrmt_23_set.insert("M");
      Instrmt_23.add_attribute("Prod", "2"); // 2
      Instrmt_23_set.insert("2");
      Instrmt_23.add_attribute("ProdCmplx", "ProductComplex_t_2009349965"); // 2
      Instrmt_23_set.insert("ProductComplex_t_2009349965");
      Instrmt_23.add_attribute("SecGrp", "SecurityGroup_t_535476297"); // 2
      Instrmt_23_set.insert("SecurityGroup_t_535476297");
      Instrmt_23.add_attribute("CFI", "CFICode_t_1302446642"); // 2
      Instrmt_23_set.insert("CFICode_t_1302446642");
      Instrmt_23.add_attribute("SecTyp", "AN"); // 2
      Instrmt_23_set.insert("AN");
      Instrmt_23.add_attribute("SubTyp", "SecuritySubType_t_928575548"); // 2
      Instrmt_23_set.insert("SecuritySubType_t_928575548");
      Instrmt_23.add_attribute("MMY", "985341450"); // 2
      Instrmt_23_set.insert("985341450");
      Instrmt_23.add_attribute("MatDt", "MaturityDate_t_885373509"); // 2
      Instrmt_23_set.insert("MaturityDate_t_885373509");
      Instrmt_23.add_attribute("MatTm", "218072007"); // 2
      Instrmt_23_set.insert("218072007");
      Instrmt_23.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_434795263"); // 2
      Instrmt_23_set.insert("SettleOnOpenFlag_t_434795263");
      Instrmt_23.add_attribute("AsgnMeth", "997101515"); // 2
      Instrmt_23_set.insert("997101515");
      Instrmt_23.add_attribute("Status", "2"); // 2
      Instrmt_23_set.insert("2");
      Instrmt_23.add_attribute("CpnPmt", "CouponPaymentDate_t_1115827371"); // 2
      Instrmt_23_set.insert("CouponPaymentDate_t_1115827371");
      Instrmt_23.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_23_set.insert("XR");
      Instrmt_23.add_attribute("Snrty", "SB"); // 2
      Instrmt_23_set.insert("SB");
      Instrmt_23.add_attribute("NotlPctOut", "7882168.270000"); // 2
      Instrmt_23_set.insert("7882168.270000");
      Instrmt_23.add_attribute("OrigNotlPctOut", "2256609.220000"); // 2
      Instrmt_23_set.insert("2256609.220000");
      Instrmt_23.add_attribute("AttchPnt", "8226161.070000"); // 2
      Instrmt_23_set.insert("8226161.070000");
      Instrmt_23.add_attribute("DetchPnt", "12606221.970000"); // 2
      Instrmt_23_set.insert("12606221.970000");
      Instrmt_23.add_attribute("Issued", "IssueDate_t_1927283401"); // 2
      Instrmt_23_set.insert("IssueDate_t_1927283401");
      Instrmt_23.add_attribute("RepoCollSecTyp", "2030536286"); // 2
      Instrmt_23_set.insert("2030536286");
      Instrmt_23.add_attribute("RepoTrm", "359714910"); // 2
      Instrmt_23_set.insert("359714910");
      Instrmt_23.add_attribute("RepoRt", "871843.130000"); // 2
      Instrmt_23_set.insert("871843.130000");
      Instrmt_23.add_attribute("Fctr", "14972529.700000"); // 2
      Instrmt_23_set.insert("14972529.700000");
      Instrmt_23.add_attribute("CrdRtg", "CreditRating_t_746604410"); // 2
      Instrmt_23_set.insert("CreditRating_t_746604410");
      Instrmt_23.add_attribute("Rgstry", "InstrRegistry_t_1468657799"); // 2
      Instrmt_23_set.insert("InstrRegistry_t_1468657799");
      Instrmt_23.add_attribute("IssuCtry", "1262040805"); // 2
      Instrmt_23_set.insert("1262040805");
      Instrmt_23.add_attribute("StPrv", "StateOrProvinceOfIssue_t_679142378"); // 2
      Instrmt_23_set.insert("StateOrProvinceOfIssue_t_679142378");
      Instrmt_23.add_attribute("Lcl", "LocaleOfIssue_t_986720071"); // 2
      Instrmt_23_set.insert("LocaleOfIssue_t_986720071");
      Instrmt_23.add_attribute("Redeem", "RedemptionDate_t_1130312561"); // 2
      Instrmt_23_set.insert("RedemptionDate_t_1130312561");
      Instrmt_23.add_attribute("StrkPx", "6825555.890000"); // 2
      Instrmt_23_set.insert("6825555.890000");
      Instrmt_23.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_23_set.insert("CHF");
      Instrmt_23.add_attribute("StrkMult", "12180318.870000"); // 2
      Instrmt_23_set.insert("12180318.870000");
      Instrmt_23.add_attribute("StrkValu", "4849640.600000"); // 2
      Instrmt_23_set.insert("4849640.600000");
      Instrmt_23.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_23_set.insert("4");
      Instrmt_23.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_23_set.insert("1");
      Instrmt_23.add_attribute("StrkPxBndryPrcsn", "14703055.100000"); // 2
      Instrmt_23_set.insert("14703055.100000");
      Instrmt_23.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_23_set.insert("1");
      Instrmt_23.add_attribute("OptAt", "217195795"); // 2
      Instrmt_23_set.insert("217195795");
      Instrmt_23.add_attribute("Mult", "19051007.740000"); // 2
      Instrmt_23_set.insert("19051007.740000");
      Instrmt_23.add_attribute("MultTyp", "1"); // 2
      Instrmt_23_set.insert("1");
      Instrmt_23.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_23_set.insert("4");
      Instrmt_23.add_attribute("MinPxIncr", "8734444.970000"); // 2
      Instrmt_23_set.insert("8734444.970000");
      Instrmt_23.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1495553991"); // 2
      Instrmt_23_set.insert("MinPriceIncrementAmount_t_1495553991");
      Instrmt_23.add_attribute("UOM", "Bu"); // 2
      Instrmt_23_set.insert("Bu");
      Instrmt_23.add_attribute("UOMQty", "16616613.250000"); // 2
      Instrmt_23_set.insert("16616613.250000");
      Instrmt_23.add_attribute("PxUOM", "Bbl"); // 2
      Instrmt_23_set.insert("Bbl");
      Instrmt_23.add_attribute("PxUOMQty", "73962.740000"); // 2
      Instrmt_23_set.insert("73962.740000");
      Instrmt_23.add_attribute("SettlMeth", "C"); // 2
      Instrmt_23_set.insert("C");
      Instrmt_23.add_attribute("ExerStyle", "1"); // 2
      Instrmt_23_set.insert("1");
      Instrmt_23.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_23_set.insert("2");
      Instrmt_23.add_attribute("OptPayAmt", "OptPayoutAmount_t_1134514784"); // 2
      Instrmt_23_set.insert("OptPayoutAmount_t_1134514784");
      Instrmt_23.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_23_set.insert("STD");
      Instrmt_23.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_23_set.insert("FUTDA");
      Instrmt_23.add_attribute("ListMeth", "0"); // 2
      Instrmt_23_set.insert("0");
      Instrmt_23.add_attribute("CapPx", "9093731.320000"); // 2
      Instrmt_23_set.insert("9093731.320000");
      Instrmt_23.add_attribute("FlrPx", "5022590.400000"); // 2
      Instrmt_23_set.insert("5022590.400000");
      Instrmt_23.add_attribute("PutCall", "0"); // 2
      Instrmt_23_set.insert("0");
      Instrmt_23.add_attribute("FlexInd", "false"); // 2
      Instrmt_23_set.insert("false");
      Instrmt_23.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_23_set.insert("false");
      Instrmt_23.add_attribute("TmUnit", "H"); // 2
      Instrmt_23_set.insert("H");
      Instrmt_23.add_attribute("CpnRt", "10786106.220000"); // 2
      Instrmt_23_set.insert("10786106.220000");
      Instrmt_23.add_attribute("Exch", "SecurityExchange_t_477266832"); // 2
      Instrmt_23_set.insert("SecurityExchange_t_477266832");
      Instrmt_23.add_attribute("PosLmt", "165881753"); // 2
      Instrmt_23_set.insert("165881753");
      Instrmt_23.add_attribute("NTPosLmt", "1563574682"); // 2
      Instrmt_23_set.insert("1563574682");
      Instrmt_23.add_attribute("Issr", "Issuer_t_1649066847"); // 2
      Instrmt_23_set.insert("Issuer_t_1649066847");
      Instrmt_23.add_attribute("EncIssrLen", "165005540"); // 2
      Instrmt_23_set.insert("165005540");
      Instrmt_23.add_attribute("EncIssr", "EncodedIssuer_t_886396545"); // 2
      Instrmt_23_set.insert("EncodedIssuer_t_886396545");
      Instrmt_23.add_attribute("Desc", "SecurityDesc_t_1558756724"); // 2
      Instrmt_23_set.insert("SecurityDesc_t_1558756724");
      Instrmt_23.add_attribute("EncSecDescLen", "382201335"); // 2
      Instrmt_23_set.insert("382201335");
      Instrmt_23.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_644013671"); // 2
      Instrmt_23_set.insert("EncodedSecurityDesc_t_644013671");
      Instrmt_23.add_attribute("Pool", "Pool_t_318064468"); // 2
      Instrmt_23_set.insert("Pool_t_318064468");
      Instrmt_23.add_attribute("CSetMo", "1449220759"); // 2
      Instrmt_23_set.insert("1449220759");
      Instrmt_23.add_attribute("CPPgm", "2"); // 2
      Instrmt_23_set.insert("2");
      Instrmt_23.add_attribute("CPRegT", "CPRegType_t_1813618459"); // 2
      Instrmt_23_set.insert("CPRegType_t_1813618459");
      Instrmt_23.add_attribute("Dated", "DatedDate_t_634000926"); // 2
      Instrmt_23_set.insert("DatedDate_t_634000926");
      Instrmt_23.add_attribute("IntAcrl", "InterestAccrualDate_t_1031635845"); // 2
      Instrmt_23_set.insert("InterestAccrualDate_t_1031635845");
      all_values.push_back(Instrmt_23_set);
      all_compo_names.insert("Instrmt_23_set");

      {
        xml_element AID_26{"AID"};
        multiset<string> AID_26_set;
        AID_26.add_attribute("AltID", "SecurityAltID_t_1387349724"); // 3
        AID_26_set.insert("SecurityAltID_t_1387349724");
        AID_26.add_attribute("AltIDSrc", "5"); // 3
        AID_26_set.insert("5");
        all_values.push_back(AID_26_set);
        all_compo_names.insert("AID_26_set");

        Instrmt_23.add_element(AID_26);
      }
      {
        xml_element SecXML_26{"SecXML"};
        multiset<string> SecXML_26_set;
        SecXML_26.add_attribute("Schema", "SecurityXMLSchema_t_1806435720"); // 3
        SecXML_26_set.insert("SecurityXMLSchema_t_1806435720");
        all_values.push_back(SecXML_26_set);
        all_compo_names.insert("SecXML_26_set");

        Instrmt_23.add_element(SecXML_26);
      }
      {
        xml_element Evnt_26{"Evnt"};
        multiset<string> Evnt_26_set;
        Evnt_26.add_attribute("EventTyp", "4"); // 3
        Evnt_26_set.insert("4");
        Evnt_26.add_attribute("Dt", "EventDate_t_531846112"); // 3
        Evnt_26_set.insert("EventDate_t_531846112");
        Evnt_26.add_attribute("Tm", "EventTime_t_793466856"); // 3
        Evnt_26_set.insert("EventTime_t_793466856");
        Evnt_26.add_attribute("Px", "1815960.760000"); // 3
        Evnt_26_set.insert("1815960.760000");
        Evnt_26.add_attribute("Txt", "EventText_t_1919547995"); // 3
        Evnt_26_set.insert("EventText_t_1919547995");
        all_values.push_back(Evnt_26_set);
        all_compo_names.insert("Evnt_26_set");

        Instrmt_23.add_element(Evnt_26);
      }
      {
        xml_element Pty_151{"Pty"};
        multiset<string> Pty_151_set;
        Pty_151.add_attribute("ID", "InstrumentPartyID_t_527102403"); // 3
        Pty_151_set.insert("InstrumentPartyID_t_527102403");
        Pty_151.add_attribute("Src", "9"); // 3
        Pty_151_set.insert("9");
        Pty_151.add_attribute("R", "54"); // 3
        Pty_151_set.insert("54");
        all_values.push_back(Pty_151_set);
        all_compo_names.insert("Pty_151_set");

        {
          xml_element Sub_151{"Sub"};
          multiset<string> Sub_151_set;
          Sub_151.add_attribute("ID", "InstrumentPartySubID_t_939880327"); // 4
          Sub_151_set.insert("InstrumentPartySubID_t_939880327");
          Sub_151.add_attribute("Typ", "7"); // 4
          Sub_151_set.insert("7");
          all_values.push_back(Sub_151_set);
          all_compo_names.insert("Sub_151_set");

          Pty_151.add_element(Sub_151);
        }
        Instrmt_23.add_element(Pty_151);
      }
      {
        xml_element CmplxEvnt_23{"CmplxEvnt"};
        multiset<string> CmplxEvnt_23_set;
        CmplxEvnt_23.add_attribute("Typ", "9"); // 3
        CmplxEvnt_23_set.insert("9");
        CmplxEvnt_23.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2035213841"); // 3
        CmplxEvnt_23_set.insert("ComplexOptPayoutAmount_t_2035213841");
        CmplxEvnt_23.add_attribute("Px", "19181893.850000"); // 3
        CmplxEvnt_23_set.insert("19181893.850000");
        CmplxEvnt_23.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_23_set.insert("4");
        CmplxEvnt_23.add_attribute("PxBndryPrcsn", "536119.460000"); // 3
        CmplxEvnt_23_set.insert("536119.460000");
        CmplxEvnt_23.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_23_set.insert("1");
        CmplxEvnt_23.add_attribute("Cond", "1"); // 3
        CmplxEvnt_23_set.insert("1");
        all_values.push_back(CmplxEvnt_23_set);
        all_compo_names.insert("CmplxEvnt_23_set");

        {
          xml_element EvntDts_23{"EvntDts"};
          multiset<string> EvntDts_23_set;
          EvntDts_23.add_attribute("StartDt", "ComplexEventStartDate_t_218617487"); // 4
          EvntDts_23_set.insert("ComplexEventStartDate_t_218617487");
          EvntDts_23.add_attribute("EndDt", "ComplexEventEndDate_t_73193317"); // 4
          EvntDts_23_set.insert("ComplexEventEndDate_t_73193317");
          all_values.push_back(EvntDts_23_set);
          all_compo_names.insert("EvntDts_23_set");

          {
            xml_element EvntTms_23{"EvntTms"};
            multiset<string> EvntTms_23_set;
            EvntTms_23.add_attribute("StartTm", "1297018096"); // 5
            EvntTms_23_set.insert("1297018096");
            EvntTms_23.add_attribute("EndTm", "600818822"); // 5
            EvntTms_23_set.insert("600818822");
            all_values.push_back(EvntTms_23_set);
            all_compo_names.insert("EvntTms_23_set");

            EvntDts_23.add_element(EvntTms_23);
          }
          CmplxEvnt_23.add_element(EvntDts_23);
        }
        Instrmt_23.add_element(CmplxEvnt_23);
      }
      Inst_3.add_element(Instrmt_23);
    }
    elt.add_element(Inst_3);
  } // end Inst
  { // Inst
    xml_element Inst_4{"Inst"};
    {
      xml_element Instrmt_24{"Instrmt"};
      multiset<string> Instrmt_24_set;
      Instrmt_24.add_attribute("Sym", "Symbol_t_717206988"); // 2
      Instrmt_24_set.insert("Symbol_t_717206988");
      Instrmt_24.add_attribute("Sfx", "CD"); // 2
      Instrmt_24_set.insert("CD");
      Instrmt_24.add_attribute("ID", "SecurityID_t_2050039582"); // 2
      Instrmt_24_set.insert("SecurityID_t_2050039582");
      Instrmt_24.add_attribute("Src", "J"); // 2
      Instrmt_24_set.insert("J");
      Instrmt_24.add_attribute("Prod", "6"); // 2
      Instrmt_24_set.insert("6");
      Instrmt_24.add_attribute("ProdCmplx", "ProductComplex_t_536556860"); // 2
      Instrmt_24_set.insert("ProductComplex_t_536556860");
      Instrmt_24.add_attribute("SecGrp", "SecurityGroup_t_1118817354"); // 2
      Instrmt_24_set.insert("SecurityGroup_t_1118817354");
      Instrmt_24.add_attribute("CFI", "CFICode_t_521083452"); // 2
      Instrmt_24_set.insert("CFICode_t_521083452");
      Instrmt_24.add_attribute("SecTyp", "RVLVTRM"); // 2
      Instrmt_24_set.insert("RVLVTRM");
      Instrmt_24.add_attribute("SubTyp", "SecuritySubType_t_777769426"); // 2
      Instrmt_24_set.insert("SecuritySubType_t_777769426");
      Instrmt_24.add_attribute("MMY", "1261964195"); // 2
      Instrmt_24_set.insert("1261964195");
      Instrmt_24.add_attribute("MatDt", "MaturityDate_t_1709800172"); // 2
      Instrmt_24_set.insert("MaturityDate_t_1709800172");
      Instrmt_24.add_attribute("MatTm", "1571236282"); // 2
      Instrmt_24_set.insert("1571236282");
      Instrmt_24.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1443560271"); // 2
      Instrmt_24_set.insert("SettleOnOpenFlag_t_1443560271");
      Instrmt_24.add_attribute("AsgnMeth", "1481864519"); // 2
      Instrmt_24_set.insert("1481864519");
      Instrmt_24.add_attribute("Status", "2"); // 2
      Instrmt_24_set.insert("2");
      Instrmt_24.add_attribute("CpnPmt", "CouponPaymentDate_t_387045831"); // 2
      Instrmt_24_set.insert("CouponPaymentDate_t_387045831");
      Instrmt_24.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_24_set.insert("MM");
      Instrmt_24.add_attribute("Snrty", "SR"); // 2
      Instrmt_24_set.insert("SR");
      Instrmt_24.add_attribute("NotlPctOut", "12266245.950000"); // 2
      Instrmt_24_set.insert("12266245.950000");
      Instrmt_24.add_attribute("OrigNotlPctOut", "15155992.470000"); // 2
      Instrmt_24_set.insert("15155992.470000");
      Instrmt_24.add_attribute("AttchPnt", "7784655.580000"); // 2
      Instrmt_24_set.insert("7784655.580000");
      Instrmt_24.add_attribute("DetchPnt", "9973303.320000"); // 2
      Instrmt_24_set.insert("9973303.320000");
      Instrmt_24.add_attribute("Issued", "IssueDate_t_1752277420"); // 2
      Instrmt_24_set.insert("IssueDate_t_1752277420");
      Instrmt_24.add_attribute("RepoCollSecTyp", "832077505"); // 2
      Instrmt_24_set.insert("832077505");
      Instrmt_24.add_attribute("RepoTrm", "184127104"); // 2
      Instrmt_24_set.insert("184127104");
      Instrmt_24.add_attribute("RepoRt", "14905387.920000"); // 2
      Instrmt_24_set.insert("14905387.920000");
      Instrmt_24.add_attribute("Fctr", "10506949.920000"); // 2
      Instrmt_24_set.insert("10506949.920000");
      Instrmt_24.add_attribute("CrdRtg", "CreditRating_t_257320421"); // 2
      Instrmt_24_set.insert("CreditRating_t_257320421");
      Instrmt_24.add_attribute("Rgstry", "InstrRegistry_t_640073241"); // 2
      Instrmt_24_set.insert("InstrRegistry_t_640073241");
      Instrmt_24.add_attribute("IssuCtry", "1651513814"); // 2
      Instrmt_24_set.insert("1651513814");
      Instrmt_24.add_attribute("StPrv", "StateOrProvinceOfIssue_t_974527409"); // 2
      Instrmt_24_set.insert("StateOrProvinceOfIssue_t_974527409");
      Instrmt_24.add_attribute("Lcl", "LocaleOfIssue_t_107672157"); // 2
      Instrmt_24_set.insert("LocaleOfIssue_t_107672157");
      Instrmt_24.add_attribute("Redeem", "RedemptionDate_t_1554069748"); // 2
      Instrmt_24_set.insert("RedemptionDate_t_1554069748");
      Instrmt_24.add_attribute("StrkPx", "10617089.180000"); // 2
      Instrmt_24_set.insert("10617089.180000");
      Instrmt_24.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_24_set.insert("USD");
      Instrmt_24.add_attribute("StrkMult", "330426.240000"); // 2
      Instrmt_24_set.insert("330426.240000");
      Instrmt_24.add_attribute("StrkValu", "19099729.850000"); // 2
      Instrmt_24_set.insert("19099729.850000");
      Instrmt_24.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_24_set.insert("1");
      Instrmt_24.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_24_set.insert("1");
      Instrmt_24.add_attribute("StrkPxBndryPrcsn", "10244535.320000"); // 2
      Instrmt_24_set.insert("10244535.320000");
      Instrmt_24.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_24_set.insert("2");
      Instrmt_24.add_attribute("OptAt", "234564684"); // 2
      Instrmt_24_set.insert("234564684");
      Instrmt_24.add_attribute("Mult", "3205301.560000"); // 2
      Instrmt_24_set.insert("3205301.560000");
      Instrmt_24.add_attribute("MultTyp", "0"); // 2
      Instrmt_24_set.insert("0");
      Instrmt_24.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_24_set.insert("2");
      Instrmt_24.add_attribute("MinPxIncr", "7075759.870000"); // 2
      Instrmt_24_set.insert("7075759.870000");
      Instrmt_24.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1773982323"); // 2
      Instrmt_24_set.insert("MinPriceIncrementAmount_t_1773982323");
      Instrmt_24.add_attribute("UOM", "lbs"); // 2
      Instrmt_24_set.insert("lbs");
      Instrmt_24.add_attribute("UOMQty", "19342005.820000"); // 2
      Instrmt_24_set.insert("19342005.820000");
      Instrmt_24.add_attribute("PxUOM", "t"); // 2
      Instrmt_24_set.insert("t");
      Instrmt_24.add_attribute("PxUOMQty", "18546206.450000"); // 2
      Instrmt_24_set.insert("18546206.450000");
      Instrmt_24.add_attribute("SettlMeth", "P"); // 2
      Instrmt_24_set.insert("P");
      Instrmt_24.add_attribute("ExerStyle", "0"); // 2
      Instrmt_24_set.insert("0");
      Instrmt_24.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_24_set.insert("2");
      Instrmt_24.add_attribute("OptPayAmt", "OptPayoutAmount_t_968174371"); // 2
      Instrmt_24_set.insert("OptPayoutAmount_t_968174371");
      Instrmt_24.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_24_set.insert("INT");
      Instrmt_24.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_24_set.insert("CDSD");
      Instrmt_24.add_attribute("ListMeth", "1"); // 2
      Instrmt_24_set.insert("1");
      Instrmt_24.add_attribute("CapPx", "7300200.790000"); // 2
      Instrmt_24_set.insert("7300200.790000");
      Instrmt_24.add_attribute("FlrPx", "10939396.610000"); // 2
      Instrmt_24_set.insert("10939396.610000");
      Instrmt_24.add_attribute("PutCall", "0"); // 2
      Instrmt_24_set.insert("0");
      Instrmt_24.add_attribute("FlexInd", "false"); // 2
      Instrmt_24_set.insert("false");
      Instrmt_24.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_24_set.insert("false");
      Instrmt_24.add_attribute("TmUnit", "H"); // 2
      Instrmt_24_set.insert("H");
      Instrmt_24.add_attribute("CpnRt", "790981.220000"); // 2
      Instrmt_24_set.insert("790981.220000");
      Instrmt_24.add_attribute("Exch", "SecurityExchange_t_443668722"); // 2
      Instrmt_24_set.insert("SecurityExchange_t_443668722");
      Instrmt_24.add_attribute("PosLmt", "1147290096"); // 2
      Instrmt_24_set.insert("1147290096");
      Instrmt_24.add_attribute("NTPosLmt", "1989071107"); // 2
      Instrmt_24_set.insert("1989071107");
      Instrmt_24.add_attribute("Issr", "Issuer_t_1564765742"); // 2
      Instrmt_24_set.insert("Issuer_t_1564765742");
      Instrmt_24.add_attribute("EncIssrLen", "1958102146"); // 2
      Instrmt_24_set.insert("1958102146");
      Instrmt_24.add_attribute("EncIssr", "EncodedIssuer_t_866040991"); // 2
      Instrmt_24_set.insert("EncodedIssuer_t_866040991");
      Instrmt_24.add_attribute("Desc", "SecurityDesc_t_100695639"); // 2
      Instrmt_24_set.insert("SecurityDesc_t_100695639");
      Instrmt_24.add_attribute("EncSecDescLen", "45183183"); // 2
      Instrmt_24_set.insert("45183183");
      Instrmt_24.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1186571147"); // 2
      Instrmt_24_set.insert("EncodedSecurityDesc_t_1186571147");
      Instrmt_24.add_attribute("Pool", "Pool_t_118490056"); // 2
      Instrmt_24_set.insert("Pool_t_118490056");
      Instrmt_24.add_attribute("CSetMo", "230602905"); // 2
      Instrmt_24_set.insert("230602905");
      Instrmt_24.add_attribute("CPPgm", "2"); // 2
      Instrmt_24_set.insert("2");
      Instrmt_24.add_attribute("CPRegT", "CPRegType_t_1892472379"); // 2
      Instrmt_24_set.insert("CPRegType_t_1892472379");
      Instrmt_24.add_attribute("Dated", "DatedDate_t_1306757992"); // 2
      Instrmt_24_set.insert("DatedDate_t_1306757992");
      Instrmt_24.add_attribute("IntAcrl", "InterestAccrualDate_t_1680864069"); // 2
      Instrmt_24_set.insert("InterestAccrualDate_t_1680864069");
      all_values.push_back(Instrmt_24_set);
      all_compo_names.insert("Instrmt_24_set");

      {
        xml_element AID_27{"AID"};
        multiset<string> AID_27_set;
        AID_27.add_attribute("AltID", "SecurityAltID_t_887086653"); // 3
        AID_27_set.insert("SecurityAltID_t_887086653");
        AID_27.add_attribute("AltIDSrc", "L"); // 3
        AID_27_set.insert("L");
        all_values.push_back(AID_27_set);
        all_compo_names.insert("AID_27_set");

        Instrmt_24.add_element(AID_27);
      }
      {
        xml_element SecXML_27{"SecXML"};
        multiset<string> SecXML_27_set;
        SecXML_27.add_attribute("Schema", "SecurityXMLSchema_t_317427688"); // 3
        SecXML_27_set.insert("SecurityXMLSchema_t_317427688");
        all_values.push_back(SecXML_27_set);
        all_compo_names.insert("SecXML_27_set");

        Instrmt_24.add_element(SecXML_27);
      }
      {
        xml_element Evnt_27{"Evnt"};
        multiset<string> Evnt_27_set;
        Evnt_27.add_attribute("EventTyp", "7"); // 3
        Evnt_27_set.insert("7");
        Evnt_27.add_attribute("Dt", "EventDate_t_1553109492"); // 3
        Evnt_27_set.insert("EventDate_t_1553109492");
        Evnt_27.add_attribute("Tm", "EventTime_t_1285602060"); // 3
        Evnt_27_set.insert("EventTime_t_1285602060");
        Evnt_27.add_attribute("Px", "17239251.850000"); // 3
        Evnt_27_set.insert("17239251.850000");
        Evnt_27.add_attribute("Txt", "EventText_t_995535338"); // 3
        Evnt_27_set.insert("EventText_t_995535338");
        all_values.push_back(Evnt_27_set);
        all_compo_names.insert("Evnt_27_set");

        Instrmt_24.add_element(Evnt_27);
      }
      {
        xml_element Pty_152{"Pty"};
        multiset<string> Pty_152_set;
        Pty_152.add_attribute("ID", "InstrumentPartyID_t_363613205"); // 3
        Pty_152_set.insert("InstrumentPartyID_t_363613205");
        Pty_152.add_attribute("Src", "8"); // 3
        Pty_152_set.insert("8");
        Pty_152.add_attribute("R", "4"); // 3
        Pty_152_set.insert("4");
        all_values.push_back(Pty_152_set);
        all_compo_names.insert("Pty_152_set");

        {
          xml_element Sub_152{"Sub"};
          multiset<string> Sub_152_set;
          Sub_152.add_attribute("ID", "InstrumentPartySubID_t_416151759"); // 4
          Sub_152_set.insert("InstrumentPartySubID_t_416151759");
          Sub_152.add_attribute("Typ", "31"); // 4
          Sub_152_set.insert("31");
          all_values.push_back(Sub_152_set);
          all_compo_names.insert("Sub_152_set");

          Pty_152.add_element(Sub_152);
        }
        Instrmt_24.add_element(Pty_152);
      }
      {
        xml_element CmplxEvnt_24{"CmplxEvnt"};
        multiset<string> CmplxEvnt_24_set;
        CmplxEvnt_24.add_attribute("Typ", "2"); // 3
        CmplxEvnt_24_set.insert("2");
        CmplxEvnt_24.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1530399232"); // 3
        CmplxEvnt_24_set.insert("ComplexOptPayoutAmount_t_1530399232");
        CmplxEvnt_24.add_attribute("Px", "12232519.760000"); // 3
        CmplxEvnt_24_set.insert("12232519.760000");
        CmplxEvnt_24.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_24_set.insert("1");
        CmplxEvnt_24.add_attribute("PxBndryPrcsn", "5302056.800000"); // 3
        CmplxEvnt_24_set.insert("5302056.800000");
        CmplxEvnt_24.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_24_set.insert("2");
        CmplxEvnt_24.add_attribute("Cond", "2"); // 3
        CmplxEvnt_24_set.insert("2");
        all_values.push_back(CmplxEvnt_24_set);
        all_compo_names.insert("CmplxEvnt_24_set");

        {
          xml_element EvntDts_24{"EvntDts"};
          multiset<string> EvntDts_24_set;
          EvntDts_24.add_attribute("StartDt", "ComplexEventStartDate_t_340824179"); // 4
          EvntDts_24_set.insert("ComplexEventStartDate_t_340824179");
          EvntDts_24.add_attribute("EndDt", "ComplexEventEndDate_t_1930880426"); // 4
          EvntDts_24_set.insert("ComplexEventEndDate_t_1930880426");
          all_values.push_back(EvntDts_24_set);
          all_compo_names.insert("EvntDts_24_set");

          {
            xml_element EvntTms_24{"EvntTms"};
            multiset<string> EvntTms_24_set;
            EvntTms_24.add_attribute("StartTm", "404163569"); // 5
            EvntTms_24_set.insert("404163569");
            EvntTms_24.add_attribute("EndTm", "386007362"); // 5
            EvntTms_24_set.insert("386007362");
            all_values.push_back(EvntTms_24_set);
            all_compo_names.insert("EvntTms_24_set");

            EvntDts_24.add_element(EvntTms_24);
          }
          CmplxEvnt_24.add_element(EvntDts_24);
        }
        Instrmt_24.add_element(CmplxEvnt_24);
      }
      Inst_4.add_element(Instrmt_24);
    }
    elt.add_element(Inst_4);
  } // end Inst
  { // Inst
    xml_element Inst_5{"Inst"};
    {
      xml_element Instrmt_25{"Instrmt"};
      multiset<string> Instrmt_25_set;
      Instrmt_25.add_attribute("Sym", "Symbol_t_969967926"); // 2
      Instrmt_25_set.insert("Symbol_t_969967926");
      Instrmt_25.add_attribute("Sfx", "WI"); // 2
      Instrmt_25_set.insert("WI");
      Instrmt_25.add_attribute("ID", "SecurityID_t_616610267"); // 2
      Instrmt_25_set.insert("SecurityID_t_616610267");
      Instrmt_25.add_attribute("Src", "4"); // 2
      Instrmt_25_set.insert("4");
      Instrmt_25.add_attribute("Prod", "4"); // 2
      Instrmt_25_set.insert("4");
      Instrmt_25.add_attribute("ProdCmplx", "ProductComplex_t_1923368259"); // 2
      Instrmt_25_set.insert("ProductComplex_t_1923368259");
      Instrmt_25.add_attribute("SecGrp", "SecurityGroup_t_250011834"); // 2
      Instrmt_25_set.insert("SecurityGroup_t_250011834");
      Instrmt_25.add_attribute("CFI", "CFICode_t_1154729009"); // 2
      Instrmt_25_set.insert("CFICode_t_1154729009");
      Instrmt_25.add_attribute("SecTyp", "PS"); // 2
      Instrmt_25_set.insert("PS");
      Instrmt_25.add_attribute("SubTyp", "SecuritySubType_t_567439523"); // 2
      Instrmt_25_set.insert("SecuritySubType_t_567439523");
      Instrmt_25.add_attribute("MMY", "641223708"); // 2
      Instrmt_25_set.insert("641223708");
      Instrmt_25.add_attribute("MatDt", "MaturityDate_t_195405444"); // 2
      Instrmt_25_set.insert("MaturityDate_t_195405444");
      Instrmt_25.add_attribute("MatTm", "1853041583"); // 2
      Instrmt_25_set.insert("1853041583");
      Instrmt_25.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_217665245"); // 2
      Instrmt_25_set.insert("SettleOnOpenFlag_t_217665245");
      Instrmt_25.add_attribute("AsgnMeth", "1190940783"); // 2
      Instrmt_25_set.insert("1190940783");
      Instrmt_25.add_attribute("Status", "1"); // 2
      Instrmt_25_set.insert("1");
      Instrmt_25.add_attribute("CpnPmt", "CouponPaymentDate_t_524126862"); // 2
      Instrmt_25_set.insert("CouponPaymentDate_t_524126862");
      Instrmt_25.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_25_set.insert("MM");
      Instrmt_25.add_attribute("Snrty", "SB"); // 2
      Instrmt_25_set.insert("SB");
      Instrmt_25.add_attribute("NotlPctOut", "16682807.160000"); // 2
      Instrmt_25_set.insert("16682807.160000");
      Instrmt_25.add_attribute("OrigNotlPctOut", "15754492.470000"); // 2
      Instrmt_25_set.insert("15754492.470000");
      Instrmt_25.add_attribute("AttchPnt", "20157221.310000"); // 2
      Instrmt_25_set.insert("20157221.310000");
      Instrmt_25.add_attribute("DetchPnt", "7440490.440000"); // 2
      Instrmt_25_set.insert("7440490.440000");
      Instrmt_25.add_attribute("Issued", "IssueDate_t_314151434"); // 2
      Instrmt_25_set.insert("IssueDate_t_314151434");
      Instrmt_25.add_attribute("RepoCollSecTyp", "398444164"); // 2
      Instrmt_25_set.insert("398444164");
      Instrmt_25.add_attribute("RepoTrm", "1808888479"); // 2
      Instrmt_25_set.insert("1808888479");
      Instrmt_25.add_attribute("RepoRt", "6176193.640000"); // 2
      Instrmt_25_set.insert("6176193.640000");
      Instrmt_25.add_attribute("Fctr", "7392683.430000"); // 2
      Instrmt_25_set.insert("7392683.430000");
      Instrmt_25.add_attribute("CrdRtg", "CreditRating_t_1592285258"); // 2
      Instrmt_25_set.insert("CreditRating_t_1592285258");
      Instrmt_25.add_attribute("Rgstry", "InstrRegistry_t_1021782933"); // 2
      Instrmt_25_set.insert("InstrRegistry_t_1021782933");
      Instrmt_25.add_attribute("IssuCtry", "1125275705"); // 2
      Instrmt_25_set.insert("1125275705");
      Instrmt_25.add_attribute("StPrv", "StateOrProvinceOfIssue_t_414769536"); // 2
      Instrmt_25_set.insert("StateOrProvinceOfIssue_t_414769536");
      Instrmt_25.add_attribute("Lcl", "LocaleOfIssue_t_1544436558"); // 2
      Instrmt_25_set.insert("LocaleOfIssue_t_1544436558");
      Instrmt_25.add_attribute("Redeem", "RedemptionDate_t_1741885972"); // 2
      Instrmt_25_set.insert("RedemptionDate_t_1741885972");
      Instrmt_25.add_attribute("StrkPx", "11314009.490000"); // 2
      Instrmt_25_set.insert("11314009.490000");
      Instrmt_25.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_25_set.insert("CAN");
      Instrmt_25.add_attribute("StrkMult", "13814127.830000"); // 2
      Instrmt_25_set.insert("13814127.830000");
      Instrmt_25.add_attribute("StrkValu", "8193242.750000"); // 2
      Instrmt_25_set.insert("8193242.750000");
      Instrmt_25.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_25_set.insert("4");
      Instrmt_25.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_25_set.insert("2");
      Instrmt_25.add_attribute("StrkPxBndryPrcsn", "14605479.830000"); // 2
      Instrmt_25_set.insert("14605479.830000");
      Instrmt_25.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_25_set.insert("1");
      Instrmt_25.add_attribute("OptAt", "1654410241"); // 2
      Instrmt_25_set.insert("1654410241");
      Instrmt_25.add_attribute("Mult", "16782132.280000"); // 2
      Instrmt_25_set.insert("16782132.280000");
      Instrmt_25.add_attribute("MultTyp", "0"); // 2
      Instrmt_25_set.insert("0");
      Instrmt_25.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_25_set.insert("1");
      Instrmt_25.add_attribute("MinPxIncr", "548564.430000"); // 2
      Instrmt_25_set.insert("548564.430000");
      Instrmt_25.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_531861249"); // 2
      Instrmt_25_set.insert("MinPriceIncrementAmount_t_531861249");
      Instrmt_25.add_attribute("UOM", "MMBtu"); // 2
      Instrmt_25_set.insert("MMBtu");
      Instrmt_25.add_attribute("UOMQty", "17231371.590000"); // 2
      Instrmt_25_set.insert("17231371.590000");
      Instrmt_25.add_attribute("PxUOM", "MMbbl"); // 2
      Instrmt_25_set.insert("MMbbl");
      Instrmt_25.add_attribute("PxUOMQty", "20771427.640000"); // 2
      Instrmt_25_set.insert("20771427.640000");
      Instrmt_25.add_attribute("SettlMeth", "C"); // 2
      Instrmt_25_set.insert("C");
      Instrmt_25.add_attribute("ExerStyle", "1"); // 2
      Instrmt_25_set.insert("1");
      Instrmt_25.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_25_set.insert("1");
      Instrmt_25.add_attribute("OptPayAmt", "OptPayoutAmount_t_2128591035"); // 2
      Instrmt_25_set.insert("OptPayoutAmount_t_2128591035");
      Instrmt_25.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_25_set.insert("PCTPAR");
      Instrmt_25.add_attribute("ValMeth", "CDS"); // 2
      Instrmt_25_set.insert("CDS");
      Instrmt_25.add_attribute("ListMeth", "1"); // 2
      Instrmt_25_set.insert("1");
      Instrmt_25.add_attribute("CapPx", "19133805.800000"); // 2
      Instrmt_25_set.insert("19133805.800000");
      Instrmt_25.add_attribute("FlrPx", "451636.800000"); // 2
      Instrmt_25_set.insert("451636.800000");
      Instrmt_25.add_attribute("PutCall", "1"); // 2
      Instrmt_25_set.insert("1");
      Instrmt_25.add_attribute("FlexInd", "true"); // 2
      Instrmt_25_set.insert("true");
      Instrmt_25.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_25_set.insert("true");
      Instrmt_25.add_attribute("TmUnit", "D"); // 2
      Instrmt_25_set.insert("D");
      Instrmt_25.add_attribute("CpnRt", "9749287.560000"); // 2
      Instrmt_25_set.insert("9749287.560000");
      Instrmt_25.add_attribute("Exch", "SecurityExchange_t_1157336587"); // 2
      Instrmt_25_set.insert("SecurityExchange_t_1157336587");
      Instrmt_25.add_attribute("PosLmt", "206008618"); // 2
      Instrmt_25_set.insert("206008618");
      Instrmt_25.add_attribute("NTPosLmt", "1794253031"); // 2
      Instrmt_25_set.insert("1794253031");
      Instrmt_25.add_attribute("Issr", "Issuer_t_1317403123"); // 2
      Instrmt_25_set.insert("Issuer_t_1317403123");
      Instrmt_25.add_attribute("EncIssrLen", "7377276"); // 2
      Instrmt_25_set.insert("7377276");
      Instrmt_25.add_attribute("EncIssr", "EncodedIssuer_t_1107317366"); // 2
      Instrmt_25_set.insert("EncodedIssuer_t_1107317366");
      Instrmt_25.add_attribute("Desc", "SecurityDesc_t_1672875103"); // 2
      Instrmt_25_set.insert("SecurityDesc_t_1672875103");
      Instrmt_25.add_attribute("EncSecDescLen", "1661787518"); // 2
      Instrmt_25_set.insert("1661787518");
      Instrmt_25.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_638046947"); // 2
      Instrmt_25_set.insert("EncodedSecurityDesc_t_638046947");
      Instrmt_25.add_attribute("Pool", "Pool_t_1071804218"); // 2
      Instrmt_25_set.insert("Pool_t_1071804218");
      Instrmt_25.add_attribute("CSetMo", "1237885251"); // 2
      Instrmt_25_set.insert("1237885251");
      Instrmt_25.add_attribute("CPPgm", "99"); // 2
      Instrmt_25_set.insert("99");
      Instrmt_25.add_attribute("CPRegT", "CPRegType_t_1603665467"); // 2
      Instrmt_25_set.insert("CPRegType_t_1603665467");
      Instrmt_25.add_attribute("Dated", "DatedDate_t_1299305884"); // 2
      Instrmt_25_set.insert("DatedDate_t_1299305884");
      Instrmt_25.add_attribute("IntAcrl", "InterestAccrualDate_t_268556901"); // 2
      Instrmt_25_set.insert("InterestAccrualDate_t_268556901");
      all_values.push_back(Instrmt_25_set);
      all_compo_names.insert("Instrmt_25_set");

      {
        xml_element AID_28{"AID"};
        multiset<string> AID_28_set;
        AID_28.add_attribute("AltID", "SecurityAltID_t_1563492316"); // 3
        AID_28_set.insert("SecurityAltID_t_1563492316");
        AID_28.add_attribute("AltIDSrc", "C"); // 3
        AID_28_set.insert("C");
        all_values.push_back(AID_28_set);
        all_compo_names.insert("AID_28_set");

        Instrmt_25.add_element(AID_28);
      }
      {
        xml_element SecXML_28{"SecXML"};
        multiset<string> SecXML_28_set;
        SecXML_28.add_attribute("Schema", "SecurityXMLSchema_t_588259457"); // 3
        SecXML_28_set.insert("SecurityXMLSchema_t_588259457");
        all_values.push_back(SecXML_28_set);
        all_compo_names.insert("SecXML_28_set");

        Instrmt_25.add_element(SecXML_28);
      }
      {
        xml_element Evnt_28{"Evnt"};
        multiset<string> Evnt_28_set;
        Evnt_28.add_attribute("EventTyp", "1"); // 3
        Evnt_28_set.insert("1");
        Evnt_28.add_attribute("Dt", "EventDate_t_1557068281"); // 3
        Evnt_28_set.insert("EventDate_t_1557068281");
        Evnt_28.add_attribute("Tm", "EventTime_t_569366845"); // 3
        Evnt_28_set.insert("EventTime_t_569366845");
        Evnt_28.add_attribute("Px", "5815845.990000"); // 3
        Evnt_28_set.insert("5815845.990000");
        Evnt_28.add_attribute("Txt", "EventText_t_476956257"); // 3
        Evnt_28_set.insert("EventText_t_476956257");
        all_values.push_back(Evnt_28_set);
        all_compo_names.insert("Evnt_28_set");

        Instrmt_25.add_element(Evnt_28);
      }
      {
        xml_element Pty_153{"Pty"};
        multiset<string> Pty_153_set;
        Pty_153.add_attribute("ID", "InstrumentPartyID_t_2142759490"); // 3
        Pty_153_set.insert("InstrumentPartyID_t_2142759490");
        Pty_153.add_attribute("Src", "B"); // 3
        Pty_153_set.insert("B");
        Pty_153.add_attribute("R", "48"); // 3
        Pty_153_set.insert("48");
        all_values.push_back(Pty_153_set);
        all_compo_names.insert("Pty_153_set");

        {
          xml_element Sub_153{"Sub"};
          multiset<string> Sub_153_set;
          Sub_153.add_attribute("ID", "InstrumentPartySubID_t_1983438024"); // 4
          Sub_153_set.insert("InstrumentPartySubID_t_1983438024");
          Sub_153.add_attribute("Typ", "29"); // 4
          Sub_153_set.insert("29");
          all_values.push_back(Sub_153_set);
          all_compo_names.insert("Sub_153_set");

          Pty_153.add_element(Sub_153);
        }
        Instrmt_25.add_element(Pty_153);
      }
      {
        xml_element CmplxEvnt_25{"CmplxEvnt"};
        multiset<string> CmplxEvnt_25_set;
        CmplxEvnt_25.add_attribute("Typ", "7"); // 3
        CmplxEvnt_25_set.insert("7");
        CmplxEvnt_25.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_808033858"); // 3
        CmplxEvnt_25_set.insert("ComplexOptPayoutAmount_t_808033858");
        CmplxEvnt_25.add_attribute("Px", "4852601.310000"); // 3
        CmplxEvnt_25_set.insert("4852601.310000");
        CmplxEvnt_25.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_25_set.insert("5");
        CmplxEvnt_25.add_attribute("PxBndryPrcsn", "10140424.760000"); // 3
        CmplxEvnt_25_set.insert("10140424.760000");
        CmplxEvnt_25.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_25_set.insert("1");
        CmplxEvnt_25.add_attribute("Cond", "1"); // 3
        CmplxEvnt_25_set.insert("1");
        all_values.push_back(CmplxEvnt_25_set);
        all_compo_names.insert("CmplxEvnt_25_set");

        {
          xml_element EvntDts_25{"EvntDts"};
          multiset<string> EvntDts_25_set;
          EvntDts_25.add_attribute("StartDt", "ComplexEventStartDate_t_1021419753"); // 4
          EvntDts_25_set.insert("ComplexEventStartDate_t_1021419753");
          EvntDts_25.add_attribute("EndDt", "ComplexEventEndDate_t_1239346881"); // 4
          EvntDts_25_set.insert("ComplexEventEndDate_t_1239346881");
          all_values.push_back(EvntDts_25_set);
          all_compo_names.insert("EvntDts_25_set");

          {
            xml_element EvntTms_25{"EvntTms"};
            multiset<string> EvntTms_25_set;
            EvntTms_25.add_attribute("StartTm", "14333459"); // 5
            EvntTms_25_set.insert("14333459");
            EvntTms_25.add_attribute("EndTm", "535723623"); // 5
            EvntTms_25_set.insert("535723623");
            all_values.push_back(EvntTms_25_set);
            all_compo_names.insert("EvntTms_25_set");

            EvntDts_25.add_element(EvntTms_25);
          }
          CmplxEvnt_25.add_element(EvntDts_25);
        }
        Instrmt_25.add_element(CmplxEvnt_25);
      }
      Inst_5.add_element(Instrmt_25);
    }
    elt.add_element(Inst_5);
  } // end Inst
  { // Undly
    xml_element Undly_33{"Undly"};
    multiset<string> Undly_33_set;
    Undly_33.add_attribute("Sym", "UnderlyingSymbol_t_1086137677"); // 1
    Undly_33_set.insert("UnderlyingSymbol_t_1086137677");
    Undly_33.add_attribute("Sfx", "CD"); // 1
    Undly_33_set.insert("CD");
    Undly_33.add_attribute("ID", "UnderlyingSecurityID_t_422813570"); // 1
    Undly_33_set.insert("UnderlyingSecurityID_t_422813570");
    Undly_33.add_attribute("Src", "6"); // 1
    Undly_33_set.insert("6");
    Undly_33.add_attribute("Prod", "4"); // 1
    Undly_33_set.insert("4");
    Undly_33.add_attribute("CFI", "UnderlyingCFICode_t_691370471"); // 1
    Undly_33_set.insert("UnderlyingCFICode_t_691370471");
    Undly_33.add_attribute("SecTyp", "OOF"); // 1
    Undly_33_set.insert("OOF");
    Undly_33.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_6912464"); // 1
    Undly_33_set.insert("UnderlyingSecuritySubType_t_6912464");
    Undly_33.add_attribute("MMY", "1279629929"); // 1
    Undly_33_set.insert("1279629929");
    Undly_33.add_attribute("Mat", "UnderlyingMaturityDate_t_1795798765"); // 1
    Undly_33_set.insert("UnderlyingMaturityDate_t_1795798765");
    Undly_33.add_attribute("MatTm", "1563980745"); // 1
    Undly_33_set.insert("1563980745");
    Undly_33.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1848996774"); // 1
    Undly_33_set.insert("UnderlyingCouponPaymentDate_t_1848996774");
    Undly_33.add_attribute("RestrctTyp", "MR"); // 1
    Undly_33_set.insert("MR");
    Undly_33.add_attribute("Snrty", "SD"); // 1
    Undly_33_set.insert("SD");
    Undly_33.add_attribute("NotlPctOut", "18442726.160000"); // 1
    Undly_33_set.insert("18442726.160000");
    Undly_33.add_attribute("OrigNotlPctOut", "5773812.490000"); // 1
    Undly_33_set.insert("5773812.490000");
    Undly_33.add_attribute("AttchPnt", "4155732.920000"); // 1
    Undly_33_set.insert("4155732.920000");
    Undly_33.add_attribute("DetchPnt", "16802269.920000"); // 1
    Undly_33_set.insert("16802269.920000");
    Undly_33.add_attribute("Issued", "UnderlyingIssueDate_t_87712623"); // 1
    Undly_33_set.insert("UnderlyingIssueDate_t_87712623");
    Undly_33.add_attribute("RepoCollSecTyp", "577259234"); // 1
    Undly_33_set.insert("577259234");
    Undly_33.add_attribute("RepoTrm", "340777203"); // 1
    Undly_33_set.insert("340777203");
    Undly_33.add_attribute("RepoRt", "5729727.540000"); // 1
    Undly_33_set.insert("5729727.540000");
    Undly_33.add_attribute("Fctr", "18962817.630000"); // 1
    Undly_33_set.insert("18962817.630000");
    Undly_33.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1354819679"); // 1
    Undly_33_set.insert("UnderlyingCreditRating_t_1354819679");
    Undly_33.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_705002269"); // 1
    Undly_33_set.insert("UnderlyingInstrRegistry_t_705002269");
    Undly_33.add_attribute("Ctry", "237740120"); // 1
    Undly_33_set.insert("237740120");
    Undly_33.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_228755784"); // 1
    Undly_33_set.insert("UnderlyingStateOrProvinceOfIssue_t_228755784");
    Undly_33.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1944349150"); // 1
    Undly_33_set.insert("UnderlyingLocaleOfIssue_t_1944349150");
    Undly_33.add_attribute("Redeem", "UnderlyingRedemptionDate_t_252073579"); // 1
    Undly_33_set.insert("UnderlyingRedemptionDate_t_252073579");
    Undly_33.add_attribute("StrkPx", "7644794.070000"); // 1
    Undly_33_set.insert("7644794.070000");
    Undly_33.add_attribute("StrkCcy", "CHF"); // 1
    Undly_33_set.insert("CHF");
    Undly_33.add_attribute("OptA", "390604634"); // 1
    Undly_33_set.insert("390604634");
    Undly_33.add_attribute("Mult", "20970729.000000"); // 1
    Undly_33_set.insert("20970729.000000");
    Undly_33.add_attribute("MultTyp", "2"); // 1
    Undly_33_set.insert("2");
    Undly_33.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_33_set.insert("0");
    Undly_33.add_attribute("UOM", "MMBtu"); // 1
    Undly_33_set.insert("MMBtu");
    Undly_33.add_attribute("UOMQty", "18388589.190000"); // 1
    Undly_33_set.insert("18388589.190000");
    Undly_33.add_attribute("PxUOM", "Bu"); // 1
    Undly_33_set.insert("Bu");
    Undly_33.add_attribute("PxUOMQty", "19205896.520000"); // 1
    Undly_33_set.insert("19205896.520000");
    Undly_33.add_attribute("TmUnit", "Yr"); // 1
    Undly_33_set.insert("Yr");
    Undly_33.add_attribute("ExerStyle", "2"); // 1
    Undly_33_set.insert("2");
    Undly_33.add_attribute("CpnRt", "16221027.780000"); // 1
    Undly_33_set.insert("16221027.780000");
    Undly_33.add_attribute("Exch", "UnderlyingSecurityExchange_t_1717073754"); // 1
    Undly_33_set.insert("UnderlyingSecurityExchange_t_1717073754");
    Undly_33.add_attribute("Issr", "UnderlyingIssuer_t_632898661"); // 1
    Undly_33_set.insert("UnderlyingIssuer_t_632898661");
    Undly_33.add_attribute("EncUndIssrLen", "1318891747"); // 1
    Undly_33_set.insert("1318891747");
    Undly_33.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_146971355"); // 1
    Undly_33_set.insert("EncodedUnderlyingIssuer_t_146971355");
    Undly_33.add_attribute("Desc", "UnderlyingSecurityDesc_t_1048471953"); // 1
    Undly_33_set.insert("UnderlyingSecurityDesc_t_1048471953");
    Undly_33.add_attribute("EncUndSecDescLen", "851635091"); // 1
    Undly_33_set.insert("851635091");
    Undly_33.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_234683978"); // 1
    Undly_33_set.insert("EncodedUnderlyingSecurityDesc_t_234683978");
    Undly_33.add_attribute("CPPgm", "UnderlyingCPProgram_t_1625731187"); // 1
    Undly_33_set.insert("UnderlyingCPProgram_t_1625731187");
    Undly_33.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1192412294"); // 1
    Undly_33_set.insert("UnderlyingCPRegType_t_1192412294");
    Undly_33.add_attribute("AllocPct", "8076567.330000"); // 1
    Undly_33_set.insert("8076567.330000");
    Undly_33.add_attribute("Ccy", "USD"); // 1
    Undly_33_set.insert("USD");
    Undly_33.add_attribute("Qty", "15126590.020000"); // 1
    Undly_33_set.insert("15126590.020000");
    Undly_33.add_attribute("SettlTyp", "5"); // 1
    Undly_33_set.insert("5");
    Undly_33.add_attribute("CashAmt", "UnderlyingCashAmount_t_628504110"); // 1
    Undly_33_set.insert("UnderlyingCashAmount_t_628504110");
    Undly_33.add_attribute("CashTyp", "FIXED"); // 1
    Undly_33_set.insert("FIXED");
    Undly_33.add_attribute("Px", "18643430.020000"); // 1
    Undly_33_set.insert("18643430.020000");
    Undly_33.add_attribute("DirtPx", "13929835.180000"); // 1
    Undly_33_set.insert("13929835.180000");
    Undly_33.add_attribute("EndPx", "8363001.860000"); // 1
    Undly_33_set.insert("8363001.860000");
    Undly_33.add_attribute("StartVal", "UnderlyingStartValue_t_1055070611"); // 1
    Undly_33_set.insert("UnderlyingStartValue_t_1055070611");
    Undly_33.add_attribute("CurVal", "UnderlyingCurrentValue_t_1783588152"); // 1
    Undly_33_set.insert("UnderlyingCurrentValue_t_1783588152");
    Undly_33.add_attribute("EndVal", "UnderlyingEndValue_t_785889438"); // 1
    Undly_33_set.insert("UnderlyingEndValue_t_785889438");
    Undly_33.add_attribute("AdjQty", "7881177.170000"); // 1
    Undly_33_set.insert("7881177.170000");
    Undly_33.add_attribute("FxRate", "9521402.490000"); // 1
    Undly_33_set.insert("9521402.490000");
    Undly_33.add_attribute("FxRateCalc", "D"); // 1
    Undly_33_set.insert("D");
    Undly_33.add_attribute("CapValu", "UnderlyingCapValue_t_479492988"); // 1
    Undly_33_set.insert("UnderlyingCapValue_t_479492988");
    Undly_33.add_attribute("SetMeth", "UnderlyingSettlMethod_t_127604810"); // 1
    Undly_33_set.insert("UnderlyingSettlMethod_t_127604810");
    Undly_33.add_attribute("PutCall", "1199955166"); // 1
    Undly_33_set.insert("1199955166");
    all_values.push_back(Undly_33_set);
    all_compo_names.insert("Undly_33_set");

    {
      xml_element UndAID_33{"UndAID"};
      multiset<string> UndAID_33_set;
      UndAID_33.add_attribute("AltID", "UnderlyingSecurityAltID_t_1966667025"); // 2
      UndAID_33_set.insert("UnderlyingSecurityAltID_t_1966667025");
      UndAID_33.add_attribute("AltIDSrc", "K"); // 2
      UndAID_33_set.insert("K");
      all_values.push_back(UndAID_33_set);
      all_compo_names.insert("UndAID_33_set");

      Undly_33.add_element(UndAID_33);
    }
    {
      xml_element Stip_50{"Stip"};
      multiset<string> Stip_50_set;
      Stip_50.add_attribute("Typ", "WALA"); // 2
      Stip_50_set.insert("WALA");
      Stip_50.add_attribute("Val", "UnderlyingStipValue_t_1536257131"); // 2
      Stip_50_set.insert("UnderlyingStipValue_t_1536257131");
      all_values.push_back(Stip_50_set);
      all_compo_names.insert("Stip_50_set");

      Undly_33.add_element(Stip_50);
    }
    {
      xml_element Pty_154{"Pty"};
      multiset<string> Pty_154_set;
      Pty_154.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1499948777"); // 2
      Pty_154_set.insert("UnderlyingInstrumentPartyID_t_1499948777");
      Pty_154.add_attribute("Src", "A"); // 2
      Pty_154_set.insert("A");
      Pty_154.add_attribute("R", "38"); // 2
      Pty_154_set.insert("38");
      all_values.push_back(Pty_154_set);
      all_compo_names.insert("Pty_154_set");

      {
        xml_element Sub_154{"Sub"};
        multiset<string> Sub_154_set;
        Sub_154.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_400937082"); // 3
        Sub_154_set.insert("UnderlyingInstrumentPartySubID_t_400937082");
        Sub_154.add_attribute("Typ", "29"); // 3
        Sub_154_set.insert("29");
        all_values.push_back(Sub_154_set);
        all_compo_names.insert("Sub_154_set");

        Pty_154.add_element(Sub_154);
      }
      Undly_33.add_element(Pty_154);
    }
    elt.add_element(Undly_33);
  } // end Undly
  { // Undly
    xml_element Undly_34{"Undly"};
    multiset<string> Undly_34_set;
    Undly_34.add_attribute("Sym", "UnderlyingSymbol_t_1917912465"); // 1
    Undly_34_set.insert("UnderlyingSymbol_t_1917912465");
    Undly_34.add_attribute("Sfx", "WI"); // 1
    Undly_34_set.insert("WI");
    Undly_34.add_attribute("ID", "UnderlyingSecurityID_t_1890029781"); // 1
    Undly_34_set.insert("UnderlyingSecurityID_t_1890029781");
    Undly_34.add_attribute("Src", "K"); // 1
    Undly_34_set.insert("K");
    Undly_34.add_attribute("Prod", "5"); // 1
    Undly_34_set.insert("5");
    Undly_34.add_attribute("CFI", "UnderlyingCFICode_t_142294459"); // 1
    Undly_34_set.insert("UnderlyingCFICode_t_142294459");
    Undly_34.add_attribute("SecTyp", "DEFLTED"); // 1
    Undly_34_set.insert("DEFLTED");
    Undly_34.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_718499698"); // 1
    Undly_34_set.insert("UnderlyingSecuritySubType_t_718499698");
    Undly_34.add_attribute("MMY", "770798570"); // 1
    Undly_34_set.insert("770798570");
    Undly_34.add_attribute("Mat", "UnderlyingMaturityDate_t_1252785408"); // 1
    Undly_34_set.insert("UnderlyingMaturityDate_t_1252785408");
    Undly_34.add_attribute("MatTm", "435359052"); // 1
    Undly_34_set.insert("435359052");
    Undly_34.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_16298440"); // 1
    Undly_34_set.insert("UnderlyingCouponPaymentDate_t_16298440");
    Undly_34.add_attribute("RestrctTyp", "MM"); // 1
    Undly_34_set.insert("MM");
    Undly_34.add_attribute("Snrty", "SB"); // 1
    Undly_34_set.insert("SB");
    Undly_34.add_attribute("NotlPctOut", "17998865.920000"); // 1
    Undly_34_set.insert("17998865.920000");
    Undly_34.add_attribute("OrigNotlPctOut", "7274913.840000"); // 1
    Undly_34_set.insert("7274913.840000");
    Undly_34.add_attribute("AttchPnt", "1310637.320000"); // 1
    Undly_34_set.insert("1310637.320000");
    Undly_34.add_attribute("DetchPnt", "6045431.930000"); // 1
    Undly_34_set.insert("6045431.930000");
    Undly_34.add_attribute("Issued", "UnderlyingIssueDate_t_6856897"); // 1
    Undly_34_set.insert("UnderlyingIssueDate_t_6856897");
    Undly_34.add_attribute("RepoCollSecTyp", "610556721"); // 1
    Undly_34_set.insert("610556721");
    Undly_34.add_attribute("RepoTrm", "732148003"); // 1
    Undly_34_set.insert("732148003");
    Undly_34.add_attribute("RepoRt", "12068120.630000"); // 1
    Undly_34_set.insert("12068120.630000");
    Undly_34.add_attribute("Fctr", "4297400.980000"); // 1
    Undly_34_set.insert("4297400.980000");
    Undly_34.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1599198119"); // 1
    Undly_34_set.insert("UnderlyingCreditRating_t_1599198119");
    Undly_34.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1881386360"); // 1
    Undly_34_set.insert("UnderlyingInstrRegistry_t_1881386360");
    Undly_34.add_attribute("Ctry", "1965997230"); // 1
    Undly_34_set.insert("1965997230");
    Undly_34.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_951663249"); // 1
    Undly_34_set.insert("UnderlyingStateOrProvinceOfIssue_t_951663249");
    Undly_34.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1727368755"); // 1
    Undly_34_set.insert("UnderlyingLocaleOfIssue_t_1727368755");
    Undly_34.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1501742068"); // 1
    Undly_34_set.insert("UnderlyingRedemptionDate_t_1501742068");
    Undly_34.add_attribute("StrkPx", "13526003.310000"); // 1
    Undly_34_set.insert("13526003.310000");
    Undly_34.add_attribute("StrkCcy", "CAN"); // 1
    Undly_34_set.insert("CAN");
    Undly_34.add_attribute("OptA", "1231784953"); // 1
    Undly_34_set.insert("1231784953");
    Undly_34.add_attribute("Mult", "200487.280000"); // 1
    Undly_34_set.insert("200487.280000");
    Undly_34.add_attribute("MultTyp", "0"); // 1
    Undly_34_set.insert("0");
    Undly_34.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_34_set.insert("4");
    Undly_34.add_attribute("UOM", "MMbbl"); // 1
    Undly_34_set.insert("MMbbl");
    Undly_34.add_attribute("UOMQty", "17935173.390000"); // 1
    Undly_34_set.insert("17935173.390000");
    Undly_34.add_attribute("PxUOM", "MWh"); // 1
    Undly_34_set.insert("MWh");
    Undly_34.add_attribute("PxUOMQty", "9331417.570000"); // 1
    Undly_34_set.insert("9331417.570000");
    Undly_34.add_attribute("TmUnit", "D"); // 1
    Undly_34_set.insert("D");
    Undly_34.add_attribute("ExerStyle", "2"); // 1
    Undly_34_set.insert("2");
    Undly_34.add_attribute("CpnRt", "9494401.970000"); // 1
    Undly_34_set.insert("9494401.970000");
    Undly_34.add_attribute("Exch", "UnderlyingSecurityExchange_t_840421045"); // 1
    Undly_34_set.insert("UnderlyingSecurityExchange_t_840421045");
    Undly_34.add_attribute("Issr", "UnderlyingIssuer_t_834819995"); // 1
    Undly_34_set.insert("UnderlyingIssuer_t_834819995");
    Undly_34.add_attribute("EncUndIssrLen", "601843141"); // 1
    Undly_34_set.insert("601843141");
    Undly_34.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1567912429"); // 1
    Undly_34_set.insert("EncodedUnderlyingIssuer_t_1567912429");
    Undly_34.add_attribute("Desc", "UnderlyingSecurityDesc_t_965883728"); // 1
    Undly_34_set.insert("UnderlyingSecurityDesc_t_965883728");
    Undly_34.add_attribute("EncUndSecDescLen", "1206386334"); // 1
    Undly_34_set.insert("1206386334");
    Undly_34.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1574769327"); // 1
    Undly_34_set.insert("EncodedUnderlyingSecurityDesc_t_1574769327");
    Undly_34.add_attribute("CPPgm", "UnderlyingCPProgram_t_1576440449"); // 1
    Undly_34_set.insert("UnderlyingCPProgram_t_1576440449");
    Undly_34.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1938534337"); // 1
    Undly_34_set.insert("UnderlyingCPRegType_t_1938534337");
    Undly_34.add_attribute("AllocPct", "6340977.420000"); // 1
    Undly_34_set.insert("6340977.420000");
    Undly_34.add_attribute("Ccy", "CAN"); // 1
    Undly_34_set.insert("CAN");
    Undly_34.add_attribute("Qty", "3680004.540000"); // 1
    Undly_34_set.insert("3680004.540000");
    Undly_34.add_attribute("SettlTyp", "4"); // 1
    Undly_34_set.insert("4");
    Undly_34.add_attribute("CashAmt", "UnderlyingCashAmount_t_194428410"); // 1
    Undly_34_set.insert("UnderlyingCashAmount_t_194428410");
    Undly_34.add_attribute("CashTyp", "FIXED"); // 1
    Undly_34_set.insert("FIXED");
    Undly_34.add_attribute("Px", "11789525.500000"); // 1
    Undly_34_set.insert("11789525.500000");
    Undly_34.add_attribute("DirtPx", "15470287.410000"); // 1
    Undly_34_set.insert("15470287.410000");
    Undly_34.add_attribute("EndPx", "2253881.560000"); // 1
    Undly_34_set.insert("2253881.560000");
    Undly_34.add_attribute("StartVal", "UnderlyingStartValue_t_303639787"); // 1
    Undly_34_set.insert("UnderlyingStartValue_t_303639787");
    Undly_34.add_attribute("CurVal", "UnderlyingCurrentValue_t_631330046"); // 1
    Undly_34_set.insert("UnderlyingCurrentValue_t_631330046");
    Undly_34.add_attribute("EndVal", "UnderlyingEndValue_t_245436884"); // 1
    Undly_34_set.insert("UnderlyingEndValue_t_245436884");
    Undly_34.add_attribute("AdjQty", "64125.750000"); // 1
    Undly_34_set.insert("64125.750000");
    Undly_34.add_attribute("FxRate", "9693452.750000"); // 1
    Undly_34_set.insert("9693452.750000");
    Undly_34.add_attribute("FxRateCalc", "M"); // 1
    Undly_34_set.insert("M");
    Undly_34.add_attribute("CapValu", "UnderlyingCapValue_t_1799929914"); // 1
    Undly_34_set.insert("UnderlyingCapValue_t_1799929914");
    Undly_34.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2025860203"); // 1
    Undly_34_set.insert("UnderlyingSettlMethod_t_2025860203");
    Undly_34.add_attribute("PutCall", "1340921829"); // 1
    Undly_34_set.insert("1340921829");
    all_values.push_back(Undly_34_set);
    all_compo_names.insert("Undly_34_set");

    {
      xml_element UndAID_34{"UndAID"};
      multiset<string> UndAID_34_set;
      UndAID_34.add_attribute("AltID", "UnderlyingSecurityAltID_t_551265366"); // 2
      UndAID_34_set.insert("UnderlyingSecurityAltID_t_551265366");
      UndAID_34.add_attribute("AltIDSrc", "6"); // 2
      UndAID_34_set.insert("6");
      all_values.push_back(UndAID_34_set);
      all_compo_names.insert("UndAID_34_set");

      Undly_34.add_element(UndAID_34);
    }
    {
      xml_element Stip_51{"Stip"};
      multiset<string> Stip_51_set;
      Stip_51.add_attribute("Typ", "YIELD"); // 2
      Stip_51_set.insert("YIELD");
      Stip_51.add_attribute("Val", "UnderlyingStipValue_t_1391686411"); // 2
      Stip_51_set.insert("UnderlyingStipValue_t_1391686411");
      all_values.push_back(Stip_51_set);
      all_compo_names.insert("Stip_51_set");

      Undly_34.add_element(Stip_51);
    }
    {
      xml_element Pty_155{"Pty"};
      multiset<string> Pty_155_set;
      Pty_155.add_attribute("ID", "UnderlyingInstrumentPartyID_t_57586882"); // 2
      Pty_155_set.insert("UnderlyingInstrumentPartyID_t_57586882");
      Pty_155.add_attribute("Src", "F"); // 2
      Pty_155_set.insert("F");
      Pty_155.add_attribute("R", "10"); // 2
      Pty_155_set.insert("10");
      all_values.push_back(Pty_155_set);
      all_compo_names.insert("Pty_155_set");

      {
        xml_element Sub_155{"Sub"};
        multiset<string> Sub_155_set;
        Sub_155.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1023470610"); // 3
        Sub_155_set.insert("UnderlyingInstrumentPartySubID_t_1023470610");
        Sub_155.add_attribute("Typ", "23"); // 3
        Sub_155_set.insert("23");
        all_values.push_back(Sub_155_set);
        all_compo_names.insert("Sub_155_set");

        Pty_155.add_element(Sub_155);
      }
      Undly_34.add_element(Pty_155);
    }
    elt.add_element(Undly_34);
  } // end Undly
  { // Undly
    xml_element Undly_35{"Undly"};
    multiset<string> Undly_35_set;
    Undly_35.add_attribute("Sym", "UnderlyingSymbol_t_239400872"); // 1
    Undly_35_set.insert("UnderlyingSymbol_t_239400872");
    Undly_35.add_attribute("Sfx", "WI"); // 1
    Undly_35_set.insert("WI");
    Undly_35.add_attribute("ID", "UnderlyingSecurityID_t_1742158544"); // 1
    Undly_35_set.insert("UnderlyingSecurityID_t_1742158544");
    Undly_35.add_attribute("Src", "B"); // 1
    Undly_35_set.insert("B");
    Undly_35.add_attribute("Prod", "13"); // 1
    Undly_35_set.insert("13");
    Undly_35.add_attribute("CFI", "UnderlyingCFICode_t_984923705"); // 1
    Undly_35_set.insert("UnderlyingCFICode_t_984923705");
    Undly_35.add_attribute("SecTyp", "SPCLA"); // 1
    Undly_35_set.insert("SPCLA");
    Undly_35.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2135818440"); // 1
    Undly_35_set.insert("UnderlyingSecuritySubType_t_2135818440");
    Undly_35.add_attribute("MMY", "1179352115"); // 1
    Undly_35_set.insert("1179352115");
    Undly_35.add_attribute("Mat", "UnderlyingMaturityDate_t_1189384631"); // 1
    Undly_35_set.insert("UnderlyingMaturityDate_t_1189384631");
    Undly_35.add_attribute("MatTm", "1167287342"); // 1
    Undly_35_set.insert("1167287342");
    Undly_35.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_578897209"); // 1
    Undly_35_set.insert("UnderlyingCouponPaymentDate_t_578897209");
    Undly_35.add_attribute("RestrctTyp", "XR"); // 1
    Undly_35_set.insert("XR");
    Undly_35.add_attribute("Snrty", "SR"); // 1
    Undly_35_set.insert("SR");
    Undly_35.add_attribute("NotlPctOut", "12102272.550000"); // 1
    Undly_35_set.insert("12102272.550000");
    Undly_35.add_attribute("OrigNotlPctOut", "16602096.720000"); // 1
    Undly_35_set.insert("16602096.720000");
    Undly_35.add_attribute("AttchPnt", "14773397.050000"); // 1
    Undly_35_set.insert("14773397.050000");
    Undly_35.add_attribute("DetchPnt", "320888.830000"); // 1
    Undly_35_set.insert("320888.830000");
    Undly_35.add_attribute("Issued", "UnderlyingIssueDate_t_2067989744"); // 1
    Undly_35_set.insert("UnderlyingIssueDate_t_2067989744");
    Undly_35.add_attribute("RepoCollSecTyp", "1129785971"); // 1
    Undly_35_set.insert("1129785971");
    Undly_35.add_attribute("RepoTrm", "2057949086"); // 1
    Undly_35_set.insert("2057949086");
    Undly_35.add_attribute("RepoRt", "12614279.250000"); // 1
    Undly_35_set.insert("12614279.250000");
    Undly_35.add_attribute("Fctr", "16810513.370000"); // 1
    Undly_35_set.insert("16810513.370000");
    Undly_35.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1280715973"); // 1
    Undly_35_set.insert("UnderlyingCreditRating_t_1280715973");
    Undly_35.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1404306304"); // 1
    Undly_35_set.insert("UnderlyingInstrRegistry_t_1404306304");
    Undly_35.add_attribute("Ctry", "925254101"); // 1
    Undly_35_set.insert("925254101");
    Undly_35.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1338302855"); // 1
    Undly_35_set.insert("UnderlyingStateOrProvinceOfIssue_t_1338302855");
    Undly_35.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1544177"); // 1
    Undly_35_set.insert("UnderlyingLocaleOfIssue_t_1544177");
    Undly_35.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1737369294"); // 1
    Undly_35_set.insert("UnderlyingRedemptionDate_t_1737369294");
    Undly_35.add_attribute("StrkPx", "2142898.180000"); // 1
    Undly_35_set.insert("2142898.180000");
    Undly_35.add_attribute("StrkCcy", "GBP"); // 1
    Undly_35_set.insert("GBP");
    Undly_35.add_attribute("OptA", "666717229"); // 1
    Undly_35_set.insert("666717229");
    Undly_35.add_attribute("Mult", "15473269.280000"); // 1
    Undly_35_set.insert("15473269.280000");
    Undly_35.add_attribute("MultTyp", "2"); // 1
    Undly_35_set.insert("2");
    Undly_35.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_35_set.insert("0");
    Undly_35.add_attribute("UOM", "MMbbl"); // 1
    Undly_35_set.insert("MMbbl");
    Undly_35.add_attribute("UOMQty", "19442842.010000"); // 1
    Undly_35_set.insert("19442842.010000");
    Undly_35.add_attribute("PxUOM", "tn"); // 1
    Undly_35_set.insert("tn");
    Undly_35.add_attribute("PxUOMQty", "15641191.010000"); // 1
    Undly_35_set.insert("15641191.010000");
    Undly_35.add_attribute("TmUnit", "Mo"); // 1
    Undly_35_set.insert("Mo");
    Undly_35.add_attribute("ExerStyle", "1"); // 1
    Undly_35_set.insert("1");
    Undly_35.add_attribute("CpnRt", "21430163.100000"); // 1
    Undly_35_set.insert("21430163.100000");
    Undly_35.add_attribute("Exch", "UnderlyingSecurityExchange_t_253474324"); // 1
    Undly_35_set.insert("UnderlyingSecurityExchange_t_253474324");
    Undly_35.add_attribute("Issr", "UnderlyingIssuer_t_1456907157"); // 1
    Undly_35_set.insert("UnderlyingIssuer_t_1456907157");
    Undly_35.add_attribute("EncUndIssrLen", "1205759918"); // 1
    Undly_35_set.insert("1205759918");
    Undly_35.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1913683996"); // 1
    Undly_35_set.insert("EncodedUnderlyingIssuer_t_1913683996");
    Undly_35.add_attribute("Desc", "UnderlyingSecurityDesc_t_786763214"); // 1
    Undly_35_set.insert("UnderlyingSecurityDesc_t_786763214");
    Undly_35.add_attribute("EncUndSecDescLen", "1237848801"); // 1
    Undly_35_set.insert("1237848801");
    Undly_35.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1834190092"); // 1
    Undly_35_set.insert("EncodedUnderlyingSecurityDesc_t_1834190092");
    Undly_35.add_attribute("CPPgm", "UnderlyingCPProgram_t_1916549186"); // 1
    Undly_35_set.insert("UnderlyingCPProgram_t_1916549186");
    Undly_35.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1148314239"); // 1
    Undly_35_set.insert("UnderlyingCPRegType_t_1148314239");
    Undly_35.add_attribute("AllocPct", "9481343.690000"); // 1
    Undly_35_set.insert("9481343.690000");
    Undly_35.add_attribute("Ccy", "GBP"); // 1
    Undly_35_set.insert("GBP");
    Undly_35.add_attribute("Qty", "2049570.260000"); // 1
    Undly_35_set.insert("2049570.260000");
    Undly_35.add_attribute("SettlTyp", "5"); // 1
    Undly_35_set.insert("5");
    Undly_35.add_attribute("CashAmt", "UnderlyingCashAmount_t_1619849419"); // 1
    Undly_35_set.insert("UnderlyingCashAmount_t_1619849419");
    Undly_35.add_attribute("CashTyp", "DIFF"); // 1
    Undly_35_set.insert("DIFF");
    Undly_35.add_attribute("Px", "19652566.220000"); // 1
    Undly_35_set.insert("19652566.220000");
    Undly_35.add_attribute("DirtPx", "18341392.370000"); // 1
    Undly_35_set.insert("18341392.370000");
    Undly_35.add_attribute("EndPx", "116695.870000"); // 1
    Undly_35_set.insert("116695.870000");
    Undly_35.add_attribute("StartVal", "UnderlyingStartValue_t_1794543140"); // 1
    Undly_35_set.insert("UnderlyingStartValue_t_1794543140");
    Undly_35.add_attribute("CurVal", "UnderlyingCurrentValue_t_353372819"); // 1
    Undly_35_set.insert("UnderlyingCurrentValue_t_353372819");
    Undly_35.add_attribute("EndVal", "UnderlyingEndValue_t_1558996515"); // 1
    Undly_35_set.insert("UnderlyingEndValue_t_1558996515");
    Undly_35.add_attribute("AdjQty", "3498446.250000"); // 1
    Undly_35_set.insert("3498446.250000");
    Undly_35.add_attribute("FxRate", "13312143.590000"); // 1
    Undly_35_set.insert("13312143.590000");
    Undly_35.add_attribute("FxRateCalc", "D"); // 1
    Undly_35_set.insert("D");
    Undly_35.add_attribute("CapValu", "UnderlyingCapValue_t_146645178"); // 1
    Undly_35_set.insert("UnderlyingCapValue_t_146645178");
    Undly_35.add_attribute("SetMeth", "UnderlyingSettlMethod_t_149907044"); // 1
    Undly_35_set.insert("UnderlyingSettlMethod_t_149907044");
    Undly_35.add_attribute("PutCall", "1360398955"); // 1
    Undly_35_set.insert("1360398955");
    all_values.push_back(Undly_35_set);
    all_compo_names.insert("Undly_35_set");

    {
      xml_element UndAID_35{"UndAID"};
      multiset<string> UndAID_35_set;
      UndAID_35.add_attribute("AltID", "UnderlyingSecurityAltID_t_1132830363"); // 2
      UndAID_35_set.insert("UnderlyingSecurityAltID_t_1132830363");
      UndAID_35.add_attribute("AltIDSrc", "3"); // 2
      UndAID_35_set.insert("3");
      all_values.push_back(UndAID_35_set);
      all_compo_names.insert("UndAID_35_set");

      Undly_35.add_element(UndAID_35);
    }
    {
      xml_element Stip_52{"Stip"};
      multiset<string> Stip_52_set;
      Stip_52.add_attribute("Typ", "ISSUESIZE"); // 2
      Stip_52_set.insert("ISSUESIZE");
      Stip_52.add_attribute("Val", "UnderlyingStipValue_t_1386304687"); // 2
      Stip_52_set.insert("UnderlyingStipValue_t_1386304687");
      all_values.push_back(Stip_52_set);
      all_compo_names.insert("Stip_52_set");

      Undly_35.add_element(Stip_52);
    }
    {
      xml_element Pty_156{"Pty"};
      multiset<string> Pty_156_set;
      Pty_156.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1592794229"); // 2
      Pty_156_set.insert("UnderlyingInstrumentPartyID_t_1592794229");
      Pty_156.add_attribute("Src", "6"); // 2
      Pty_156_set.insert("6");
      Pty_156.add_attribute("R", "12"); // 2
      Pty_156_set.insert("12");
      all_values.push_back(Pty_156_set);
      all_compo_names.insert("Pty_156_set");

      {
        xml_element Sub_156{"Sub"};
        multiset<string> Sub_156_set;
        Sub_156.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_232073796"); // 3
        Sub_156_set.insert("UnderlyingInstrumentPartySubID_t_232073796");
        Sub_156.add_attribute("Typ", "30"); // 3
        Sub_156_set.insert("30");
        all_values.push_back(Sub_156_set);
        all_compo_names.insert("Sub_156_set");

        Pty_156.add_element(Sub_156);
      }
      Undly_35.add_element(Pty_156);
    }
    elt.add_element(Undly_35);
  } // end Undly
  { // Leg
    xml_element Leg_35{"Leg"};
    multiset<string> Leg_35_set;
    Leg_35.add_attribute("Sym", "LegSymbol_t_1139334"); // 1
    Leg_35_set.insert("LegSymbol_t_1139334");
    Leg_35.add_attribute("Sfx", "WI"); // 1
    Leg_35_set.insert("WI");
    Leg_35.add_attribute("ID", "LegSecurityID_t_1787345848"); // 1
    Leg_35_set.insert("LegSecurityID_t_1787345848");
    Leg_35.add_attribute("Src", "8"); // 1
    Leg_35_set.insert("8");
    Leg_35.add_attribute("Prod", "2"); // 1
    Leg_35_set.insert("2");
    Leg_35.add_attribute("CFI", "LegCFICode_t_1992302874"); // 1
    Leg_35_set.insert("LegCFICode_t_1992302874");
    Leg_35.add_attribute("SecTyp", "FXFWD"); // 1
    Leg_35_set.insert("FXFWD");
    Leg_35.add_attribute("SecSubTyp", "LegSecuritySubType_t_406799615"); // 1
    Leg_35_set.insert("LegSecuritySubType_t_406799615");
    Leg_35.add_attribute("MMY", "51320429"); // 1
    Leg_35_set.insert("51320429");
    Leg_35.add_attribute("Mat", "LegMaturityDate_t_1496916512"); // 1
    Leg_35_set.insert("LegMaturityDate_t_1496916512");
    Leg_35.add_attribute("MatTm", "93455204"); // 1
    Leg_35_set.insert("93455204");
    Leg_35.add_attribute("CpnPmt", "LegCouponPaymentDate_t_62990016"); // 1
    Leg_35_set.insert("LegCouponPaymentDate_t_62990016");
    Leg_35.add_attribute("Issued", "LegIssueDate_t_1143976005"); // 1
    Leg_35_set.insert("LegIssueDate_t_1143976005");
    Leg_35.add_attribute("RepoCollSecTyp", "446828023"); // 1
    Leg_35_set.insert("446828023");
    Leg_35.add_attribute("RepoTrm", "1621986532"); // 1
    Leg_35_set.insert("1621986532");
    Leg_35.add_attribute("RepoRt", "14938206.300000"); // 1
    Leg_35_set.insert("14938206.300000");
    Leg_35.add_attribute("Fctr", "17780423.830000"); // 1
    Leg_35_set.insert("17780423.830000");
    Leg_35.add_attribute("CrdRtg", "LegCreditRating_t_1418266385"); // 1
    Leg_35_set.insert("LegCreditRating_t_1418266385");
    Leg_35.add_attribute("Rgstry", "LegInstrRegistry_t_1640465808"); // 1
    Leg_35_set.insert("LegInstrRegistry_t_1640465808");
    Leg_35.add_attribute("Ctry", "1927949427"); // 1
    Leg_35_set.insert("1927949427");
    Leg_35.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_631181692"); // 1
    Leg_35_set.insert("LegStateOrProvinceOfIssue_t_631181692");
    Leg_35.add_attribute("Lcl", "LegLocaleOfIssue_t_625812523"); // 1
    Leg_35_set.insert("LegLocaleOfIssue_t_625812523");
    Leg_35.add_attribute("Redeem", "LegRedemptionDate_t_2063836499"); // 1
    Leg_35_set.insert("LegRedemptionDate_t_2063836499");
    Leg_35.add_attribute("Strk", "19871133.100000"); // 1
    Leg_35_set.insert("19871133.100000");
    Leg_35.add_attribute("StrkCcy", "CHF"); // 1
    Leg_35_set.insert("CHF");
    Leg_35.add_attribute("OptA", "253837549"); // 1
    Leg_35_set.insert("253837549");
    Leg_35.add_attribute("Cmult", "10171385.970000"); // 1
    Leg_35_set.insert("10171385.970000");
    Leg_35.add_attribute("MultTyp", "0"); // 1
    Leg_35_set.insert("0");
    Leg_35.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_35_set.insert("3");
    Leg_35.add_attribute("UOM", "USD"); // 1
    Leg_35_set.insert("USD");
    Leg_35.add_attribute("UOMQty", "17423602.110000"); // 1
    Leg_35_set.insert("17423602.110000");
    Leg_35.add_attribute("PxUOM", "oz_tr"); // 1
    Leg_35_set.insert("oz_tr");
    Leg_35.add_attribute("PxUOMQty", "14962122.770000"); // 1
    Leg_35_set.insert("14962122.770000");
    Leg_35.add_attribute("TmUnit", "Yr"); // 1
    Leg_35_set.insert("Yr");
    Leg_35.add_attribute("ExerStyle", "2"); // 1
    Leg_35_set.insert("2");
    Leg_35.add_attribute("CpnRt", "13410315.030000"); // 1
    Leg_35_set.insert("13410315.030000");
    Leg_35.add_attribute("Exch", "LegSecurityExchange_t_577792662"); // 1
    Leg_35_set.insert("LegSecurityExchange_t_577792662");
    Leg_35.add_attribute("Issr", "LegIssuer_t_1752531328"); // 1
    Leg_35_set.insert("LegIssuer_t_1752531328");
    Leg_35.add_attribute("EncLegIssrLen", "1392351933"); // 1
    Leg_35_set.insert("1392351933");
    Leg_35.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2074709175"); // 1
    Leg_35_set.insert("EncodedLegIssuer_t_2074709175");
    Leg_35.add_attribute("Desc", "LegSecurityDesc_t_1845986532"); // 1
    Leg_35_set.insert("LegSecurityDesc_t_1845986532");
    Leg_35.add_attribute("EncLegSecDescLen", "1455341949"); // 1
    Leg_35_set.insert("1455341949");
    Leg_35.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1071201532"); // 1
    Leg_35_set.insert("EncodedLegSecurityDesc_t_1071201532");
    Leg_35.add_attribute("RatioQty", "1453309.080000"); // 1
    Leg_35_set.insert("1453309.080000");
    Leg_35.add_attribute("Side", "2"); // 1
    Leg_35_set.insert("2");
    Leg_35.add_attribute("Ccy", "EUR"); // 1
    Leg_35_set.insert("EUR");
    Leg_35.add_attribute("Pool", "LegPool_t_200627571"); // 1
    Leg_35_set.insert("LegPool_t_200627571");
    Leg_35.add_attribute("Dated", "LegDatedDate_t_2058004322"); // 1
    Leg_35_set.insert("LegDatedDate_t_2058004322");
    Leg_35.add_attribute("CSetMo", "1703839070"); // 1
    Leg_35_set.insert("1703839070");
    Leg_35.add_attribute("IntAcrl", "LegInterestAccrualDate_t_831809263"); // 1
    Leg_35_set.insert("LegInterestAccrualDate_t_831809263");
    Leg_35.add_attribute("PutCall", "536333198"); // 1
    Leg_35_set.insert("536333198");
    Leg_35.add_attribute("LegOptionRatio", "16201919.220000"); // 1
    Leg_35_set.insert("16201919.220000");
    Leg_35.add_attribute("Px", "6714389.250000"); // 1
    Leg_35_set.insert("6714389.250000");
    all_values.push_back(Leg_35_set);
    all_compo_names.insert("Leg_35_set");

    {
      xml_element LegAID_35{"LegAID"};
      multiset<string> LegAID_35_set;
      LegAID_35.add_attribute("SecAltID", "LegSecurityAltID_t_400966760"); // 2
      LegAID_35_set.insert("LegSecurityAltID_t_400966760");
      LegAID_35.add_attribute("SecAltIDSrc", "L"); // 2
      LegAID_35_set.insert("L");
      all_values.push_back(LegAID_35_set);
      all_compo_names.insert("LegAID_35_set");

      Leg_35.add_element(LegAID_35);
    }
    elt.add_element(Leg_35);
  } // end Leg
  { // Leg
    xml_element Leg_36{"Leg"};
    multiset<string> Leg_36_set;
    Leg_36.add_attribute("Sym", "LegSymbol_t_925276475"); // 1
    Leg_36_set.insert("LegSymbol_t_925276475");
    Leg_36.add_attribute("Sfx", "CD"); // 1
    Leg_36_set.insert("CD");
    Leg_36.add_attribute("ID", "LegSecurityID_t_575592584"); // 1
    Leg_36_set.insert("LegSecurityID_t_575592584");
    Leg_36.add_attribute("Src", "I"); // 1
    Leg_36_set.insert("I");
    Leg_36.add_attribute("Prod", "2"); // 1
    Leg_36_set.insert("2");
    Leg_36.add_attribute("CFI", "LegCFICode_t_170469147"); // 1
    Leg_36_set.insert("LegCFICode_t_170469147");
    Leg_36.add_attribute("SecTyp", "MF"); // 1
    Leg_36_set.insert("MF");
    Leg_36.add_attribute("SecSubTyp", "LegSecuritySubType_t_475700415"); // 1
    Leg_36_set.insert("LegSecuritySubType_t_475700415");
    Leg_36.add_attribute("MMY", "1216601919"); // 1
    Leg_36_set.insert("1216601919");
    Leg_36.add_attribute("Mat", "LegMaturityDate_t_293232999"); // 1
    Leg_36_set.insert("LegMaturityDate_t_293232999");
    Leg_36.add_attribute("MatTm", "1816731919"); // 1
    Leg_36_set.insert("1816731919");
    Leg_36.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1794394582"); // 1
    Leg_36_set.insert("LegCouponPaymentDate_t_1794394582");
    Leg_36.add_attribute("Issued", "LegIssueDate_t_2045764327"); // 1
    Leg_36_set.insert("LegIssueDate_t_2045764327");
    Leg_36.add_attribute("RepoCollSecTyp", "1061600204"); // 1
    Leg_36_set.insert("1061600204");
    Leg_36.add_attribute("RepoTrm", "1721620109"); // 1
    Leg_36_set.insert("1721620109");
    Leg_36.add_attribute("RepoRt", "17442672.120000"); // 1
    Leg_36_set.insert("17442672.120000");
    Leg_36.add_attribute("Fctr", "3694585.050000"); // 1
    Leg_36_set.insert("3694585.050000");
    Leg_36.add_attribute("CrdRtg", "LegCreditRating_t_645337993"); // 1
    Leg_36_set.insert("LegCreditRating_t_645337993");
    Leg_36.add_attribute("Rgstry", "LegInstrRegistry_t_1889598120"); // 1
    Leg_36_set.insert("LegInstrRegistry_t_1889598120");
    Leg_36.add_attribute("Ctry", "1299303339"); // 1
    Leg_36_set.insert("1299303339");
    Leg_36.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1062876507"); // 1
    Leg_36_set.insert("LegStateOrProvinceOfIssue_t_1062876507");
    Leg_36.add_attribute("Lcl", "LegLocaleOfIssue_t_1665487763"); // 1
    Leg_36_set.insert("LegLocaleOfIssue_t_1665487763");
    Leg_36.add_attribute("Redeem", "LegRedemptionDate_t_1499930910"); // 1
    Leg_36_set.insert("LegRedemptionDate_t_1499930910");
    Leg_36.add_attribute("Strk", "9733971.810000"); // 1
    Leg_36_set.insert("9733971.810000");
    Leg_36.add_attribute("StrkCcy", "CAN"); // 1
    Leg_36_set.insert("CAN");
    Leg_36.add_attribute("OptA", "1509730379"); // 1
    Leg_36_set.insert("1509730379");
    Leg_36.add_attribute("Cmult", "6945514.590000"); // 1
    Leg_36_set.insert("6945514.590000");
    Leg_36.add_attribute("MultTyp", "0"); // 1
    Leg_36_set.insert("0");
    Leg_36.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_36_set.insert("0");
    Leg_36.add_attribute("UOM", "t"); // 1
    Leg_36_set.insert("t");
    Leg_36.add_attribute("UOMQty", "17809719.260000"); // 1
    Leg_36_set.insert("17809719.260000");
    Leg_36.add_attribute("PxUOM", "Bcf"); // 1
    Leg_36_set.insert("Bcf");
    Leg_36.add_attribute("PxUOMQty", "1045157.500000"); // 1
    Leg_36_set.insert("1045157.500000");
    Leg_36.add_attribute("TmUnit", "H"); // 1
    Leg_36_set.insert("H");
    Leg_36.add_attribute("ExerStyle", "1"); // 1
    Leg_36_set.insert("1");
    Leg_36.add_attribute("CpnRt", "2749848.970000"); // 1
    Leg_36_set.insert("2749848.970000");
    Leg_36.add_attribute("Exch", "LegSecurityExchange_t_1412160277"); // 1
    Leg_36_set.insert("LegSecurityExchange_t_1412160277");
    Leg_36.add_attribute("Issr", "LegIssuer_t_636507404"); // 1
    Leg_36_set.insert("LegIssuer_t_636507404");
    Leg_36.add_attribute("EncLegIssrLen", "1491586817"); // 1
    Leg_36_set.insert("1491586817");
    Leg_36.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1705393277"); // 1
    Leg_36_set.insert("EncodedLegIssuer_t_1705393277");
    Leg_36.add_attribute("Desc", "LegSecurityDesc_t_305755675"); // 1
    Leg_36_set.insert("LegSecurityDesc_t_305755675");
    Leg_36.add_attribute("EncLegSecDescLen", "1138497751"); // 1
    Leg_36_set.insert("1138497751");
    Leg_36.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1603673956"); // 1
    Leg_36_set.insert("EncodedLegSecurityDesc_t_1603673956");
    Leg_36.add_attribute("RatioQty", "13673558.790000"); // 1
    Leg_36_set.insert("13673558.790000");
    Leg_36.add_attribute("Side", "5"); // 1
    Leg_36_set.insert("5");
    Leg_36.add_attribute("Ccy", "USD"); // 1
    Leg_36_set.insert("USD");
    Leg_36.add_attribute("Pool", "LegPool_t_1357972205"); // 1
    Leg_36_set.insert("LegPool_t_1357972205");
    Leg_36.add_attribute("Dated", "LegDatedDate_t_942571992"); // 1
    Leg_36_set.insert("LegDatedDate_t_942571992");
    Leg_36.add_attribute("CSetMo", "888634075"); // 1
    Leg_36_set.insert("888634075");
    Leg_36.add_attribute("IntAcrl", "LegInterestAccrualDate_t_273365064"); // 1
    Leg_36_set.insert("LegInterestAccrualDate_t_273365064");
    Leg_36.add_attribute("PutCall", "460576107"); // 1
    Leg_36_set.insert("460576107");
    Leg_36.add_attribute("LegOptionRatio", "2410813.370000"); // 1
    Leg_36_set.insert("2410813.370000");
    Leg_36.add_attribute("Px", "12467622.450000"); // 1
    Leg_36_set.insert("12467622.450000");
    all_values.push_back(Leg_36_set);
    all_compo_names.insert("Leg_36_set");

    {
      xml_element LegAID_36{"LegAID"};
      multiset<string> LegAID_36_set;
      LegAID_36.add_attribute("SecAltID", "LegSecurityAltID_t_1682419293"); // 2
      LegAID_36_set.insert("LegSecurityAltID_t_1682419293");
      LegAID_36.add_attribute("SecAltIDSrc", "6"); // 2
      LegAID_36_set.insert("6");
      all_values.push_back(LegAID_36_set);
      all_compo_names.insert("LegAID_36_set");

      Leg_36.add_element(LegAID_36);
    }
    elt.add_element(Leg_36);
  } // end Leg
  { // Leg
    xml_element Leg_37{"Leg"};
    multiset<string> Leg_37_set;
    Leg_37.add_attribute("Sym", "LegSymbol_t_609008977"); // 1
    Leg_37_set.insert("LegSymbol_t_609008977");
    Leg_37.add_attribute("Sfx", "CD"); // 1
    Leg_37_set.insert("CD");
    Leg_37.add_attribute("ID", "LegSecurityID_t_1281033314"); // 1
    Leg_37_set.insert("LegSecurityID_t_1281033314");
    Leg_37.add_attribute("Src", "4"); // 1
    Leg_37_set.insert("4");
    Leg_37.add_attribute("Prod", "4"); // 1
    Leg_37_set.insert("4");
    Leg_37.add_attribute("CFI", "LegCFICode_t_914521592"); // 1
    Leg_37_set.insert("LegCFICode_t_914521592");
    Leg_37.add_attribute("SecTyp", "MTN"); // 1
    Leg_37_set.insert("MTN");
    Leg_37.add_attribute("SecSubTyp", "LegSecuritySubType_t_2010409669"); // 1
    Leg_37_set.insert("LegSecuritySubType_t_2010409669");
    Leg_37.add_attribute("MMY", "1231696935"); // 1
    Leg_37_set.insert("1231696935");
    Leg_37.add_attribute("Mat", "LegMaturityDate_t_1714348307"); // 1
    Leg_37_set.insert("LegMaturityDate_t_1714348307");
    Leg_37.add_attribute("MatTm", "137910919"); // 1
    Leg_37_set.insert("137910919");
    Leg_37.add_attribute("CpnPmt", "LegCouponPaymentDate_t_496373564"); // 1
    Leg_37_set.insert("LegCouponPaymentDate_t_496373564");
    Leg_37.add_attribute("Issued", "LegIssueDate_t_203372063"); // 1
    Leg_37_set.insert("LegIssueDate_t_203372063");
    Leg_37.add_attribute("RepoCollSecTyp", "1629497736"); // 1
    Leg_37_set.insert("1629497736");
    Leg_37.add_attribute("RepoTrm", "54283193"); // 1
    Leg_37_set.insert("54283193");
    Leg_37.add_attribute("RepoRt", "5091277.380000"); // 1
    Leg_37_set.insert("5091277.380000");
    Leg_37.add_attribute("Fctr", "6205118.390000"); // 1
    Leg_37_set.insert("6205118.390000");
    Leg_37.add_attribute("CrdRtg", "LegCreditRating_t_1657957150"); // 1
    Leg_37_set.insert("LegCreditRating_t_1657957150");
    Leg_37.add_attribute("Rgstry", "LegInstrRegistry_t_1876483617"); // 1
    Leg_37_set.insert("LegInstrRegistry_t_1876483617");
    Leg_37.add_attribute("Ctry", "1333146051"); // 1
    Leg_37_set.insert("1333146051");
    Leg_37.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_710931022"); // 1
    Leg_37_set.insert("LegStateOrProvinceOfIssue_t_710931022");
    Leg_37.add_attribute("Lcl", "LegLocaleOfIssue_t_1465814354"); // 1
    Leg_37_set.insert("LegLocaleOfIssue_t_1465814354");
    Leg_37.add_attribute("Redeem", "LegRedemptionDate_t_543634608"); // 1
    Leg_37_set.insert("LegRedemptionDate_t_543634608");
    Leg_37.add_attribute("Strk", "16535030.150000"); // 1
    Leg_37_set.insert("16535030.150000");
    Leg_37.add_attribute("StrkCcy", "USD"); // 1
    Leg_37_set.insert("USD");
    Leg_37.add_attribute("OptA", "2114079122"); // 1
    Leg_37_set.insert("2114079122");
    Leg_37.add_attribute("Cmult", "4480461.190000"); // 1
    Leg_37_set.insert("4480461.190000");
    Leg_37.add_attribute("MultTyp", "0"); // 1
    Leg_37_set.insert("0");
    Leg_37.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_37_set.insert("2");
    Leg_37.add_attribute("UOM", "Gal"); // 1
    Leg_37_set.insert("Gal");
    Leg_37.add_attribute("UOMQty", "5252872.460000"); // 1
    Leg_37_set.insert("5252872.460000");
    Leg_37.add_attribute("PxUOM", "MWh"); // 1
    Leg_37_set.insert("MWh");
    Leg_37.add_attribute("PxUOMQty", "69336.480000"); // 1
    Leg_37_set.insert("69336.480000");
    Leg_37.add_attribute("TmUnit", "Wk"); // 1
    Leg_37_set.insert("Wk");
    Leg_37.add_attribute("ExerStyle", "0"); // 1
    Leg_37_set.insert("0");
    Leg_37.add_attribute("CpnRt", "9214552.400000"); // 1
    Leg_37_set.insert("9214552.400000");
    Leg_37.add_attribute("Exch", "LegSecurityExchange_t_303567386"); // 1
    Leg_37_set.insert("LegSecurityExchange_t_303567386");
    Leg_37.add_attribute("Issr", "LegIssuer_t_1499838164"); // 1
    Leg_37_set.insert("LegIssuer_t_1499838164");
    Leg_37.add_attribute("EncLegIssrLen", "5668527"); // 1
    Leg_37_set.insert("5668527");
    Leg_37.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2017915694"); // 1
    Leg_37_set.insert("EncodedLegIssuer_t_2017915694");
    Leg_37.add_attribute("Desc", "LegSecurityDesc_t_1637749083"); // 1
    Leg_37_set.insert("LegSecurityDesc_t_1637749083");
    Leg_37.add_attribute("EncLegSecDescLen", "502042091"); // 1
    Leg_37_set.insert("502042091");
    Leg_37.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_73804109"); // 1
    Leg_37_set.insert("EncodedLegSecurityDesc_t_73804109");
    Leg_37.add_attribute("RatioQty", "11197631.710000"); // 1
    Leg_37_set.insert("11197631.710000");
    Leg_37.add_attribute("Side", "6"); // 1
    Leg_37_set.insert("6");
    Leg_37.add_attribute("Ccy", "USD"); // 1
    Leg_37_set.insert("USD");
    Leg_37.add_attribute("Pool", "LegPool_t_66798787"); // 1
    Leg_37_set.insert("LegPool_t_66798787");
    Leg_37.add_attribute("Dated", "LegDatedDate_t_311931817"); // 1
    Leg_37_set.insert("LegDatedDate_t_311931817");
    Leg_37.add_attribute("CSetMo", "925937413"); // 1
    Leg_37_set.insert("925937413");
    Leg_37.add_attribute("IntAcrl", "LegInterestAccrualDate_t_777729809"); // 1
    Leg_37_set.insert("LegInterestAccrualDate_t_777729809");
    Leg_37.add_attribute("PutCall", "1777746171"); // 1
    Leg_37_set.insert("1777746171");
    Leg_37.add_attribute("LegOptionRatio", "14695720.210000"); // 1
    Leg_37_set.insert("14695720.210000");
    Leg_37.add_attribute("Px", "2837491.760000"); // 1
    Leg_37_set.insert("2837491.760000");
    all_values.push_back(Leg_37_set);
    all_compo_names.insert("Leg_37_set");

    {
      xml_element LegAID_37{"LegAID"};
      multiset<string> LegAID_37_set;
      LegAID_37.add_attribute("SecAltID", "LegSecurityAltID_t_1984710953"); // 2
      LegAID_37_set.insert("LegSecurityAltID_t_1984710953");
      LegAID_37.add_attribute("SecAltIDSrc", "L"); // 2
      LegAID_37_set.insert("L");
      all_values.push_back(LegAID_37_set);
      all_compo_names.insert("LegAID_37_set");

      Leg_37.add_element(LegAID_37);
    }
    elt.add_element(Leg_37);
  } // end Leg
  { // TxtLn
    xml_element TxtLn_0{"TxtLn"};
    multiset<string> TxtLn_0_set;
    TxtLn_0.add_attribute("Txt", "Text_t_285273424"); // 1
    TxtLn_0_set.insert("Text_t_285273424");
    TxtLn_0.add_attribute("EncTxtLen", "55366315"); // 1
    TxtLn_0_set.insert("55366315");
    TxtLn_0.add_attribute("EncTxt", "EncodedText_t_1899359418"); // 1
    TxtLn_0_set.insert("EncodedText_t_1899359418");
    all_values.push_back(TxtLn_0_set);
    all_compo_names.insert("TxtLn_0_set");

    elt.add_element(TxtLn_0);
  } // end TxtLn
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
