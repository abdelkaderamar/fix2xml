#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatusRequest_message_t_0;
  elt.add_attribute("StatReqID", "SecurityStatusReqID_t_1279979353"); // 0
  SecurityStatusRequest_message_t_0.insert("SecurityStatusReqID_t_1279979353");
  elt.add_attribute("Ccy", "USD"); // 0
  SecurityStatusRequest_message_t_0.insert("USD");
  elt.add_attribute("SubReqTyp", "0"); // 0
  SecurityStatusRequest_message_t_0.insert("0");
  elt.add_attribute("MktID", "MarketID_t_1501314885"); // 0
  SecurityStatusRequest_message_t_0.insert("MarketID_t_1501314885");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_862787005"); // 0
  SecurityStatusRequest_message_t_0.insert("MarketSegmentID_t_862787005");
  elt.add_attribute("SesID", "5"); // 0
  SecurityStatusRequest_message_t_0.insert("5");
  elt.add_attribute("SesSub", "6"); // 0
  SecurityStatusRequest_message_t_0.insert("6");
  all_values.push_back(SecurityStatusRequest_message_t_0);
  all_compo_names.insert("SecurityStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_87{"Hdr"};
    multiset<string> Hdr_87_set;
    Hdr_87.add_attribute("SeqNum", "541481907"); // 1
    Hdr_87_set.insert("541481907");
    Hdr_87.add_attribute("SID", "SenderCompID_t_873481181"); // 1
    Hdr_87_set.insert("SenderCompID_t_873481181");
    Hdr_87.add_attribute("TID", "TargetCompID_t_1336824397"); // 1
    Hdr_87_set.insert("TargetCompID_t_1336824397");
    Hdr_87.add_attribute("OBID", "OnBehalfOfCompID_t_1370268456"); // 1
    Hdr_87_set.insert("OnBehalfOfCompID_t_1370268456");
    Hdr_87.add_attribute("D2ID", "DeliverToCompID_t_1465928008"); // 1
    Hdr_87_set.insert("DeliverToCompID_t_1465928008");
    Hdr_87.add_attribute("SSub", "SenderSubID_t_72632271"); // 1
    Hdr_87_set.insert("SenderSubID_t_72632271");
    Hdr_87.add_attribute("SLoc", "SenderLocationID_t_1125665154"); // 1
    Hdr_87_set.insert("SenderLocationID_t_1125665154");
    Hdr_87.add_attribute("TSub", "TargetSubID_t_164530648"); // 1
    Hdr_87_set.insert("TargetSubID_t_164530648");
    Hdr_87.add_attribute("TLoc", "TargetLocationID_t_1076120444"); // 1
    Hdr_87_set.insert("TargetLocationID_t_1076120444");
    Hdr_87.add_attribute("OBSub", "OnBehalfOfSubID_t_1835909888"); // 1
    Hdr_87_set.insert("OnBehalfOfSubID_t_1835909888");
    Hdr_87.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1969918907"); // 1
    Hdr_87_set.insert("OnBehalfOfLocationID_t_1969918907");
    Hdr_87.add_attribute("D2Sub", "DeliverToSubID_t_521385417"); // 1
    Hdr_87_set.insert("DeliverToSubID_t_521385417");
    Hdr_87.add_attribute("D2Loc", "DeliverToLocationID_t_1279818286"); // 1
    Hdr_87_set.insert("DeliverToLocationID_t_1279818286");
    Hdr_87.add_attribute("PosDup", "N"); // 1
    Hdr_87_set.insert("N");
    Hdr_87.add_attribute("PosRsnd", "Y"); // 1
    Hdr_87_set.insert("Y");
    Hdr_87.add_attribute("Snt", "SendingTime_t_1320137972"); // 1
    Hdr_87_set.insert("SendingTime_t_1320137972");
    Hdr_87.add_attribute("OrigSnt", "OrigSendingTime_t_1974686029"); // 1
    Hdr_87_set.insert("OrigSendingTime_t_1974686029");
    Hdr_87.add_attribute("MsgEncd", "MessageEncoding_t_883204999"); // 1
    Hdr_87_set.insert("MessageEncoding_t_883204999");
    all_values.push_back(Hdr_87_set);
    all_compo_names.insert("Hdr_87_set");

    {
      xml_element Hop_87{"Hop"};
      multiset<string> Hop_87_set;
      Hop_87.add_attribute("ID", "HopCompID_t_823769856"); // 2
      Hop_87_set.insert("HopCompID_t_823769856");
      Hop_87.add_attribute("Ref", "1616964984"); // 2
      Hop_87_set.insert("1616964984");
      Hop_87.add_attribute("Snt", "HopSendingTime_t_1739743597"); // 2
      Hop_87_set.insert("HopSendingTime_t_1739743597");
      all_values.push_back(Hop_87_set);
      all_compo_names.insert("Hop_87_set");

      Hdr_87.add_element(Hop_87);
    }
    elt.add_element(Hdr_87);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_81{"Instrmt"};
    multiset<string> Instrmt_81_set;
    Instrmt_81.add_attribute("Sym", "Symbol_t_2137647795"); // 1
    Instrmt_81_set.insert("Symbol_t_2137647795");
    Instrmt_81.add_attribute("Sfx", "CD"); // 1
    Instrmt_81_set.insert("CD");
    Instrmt_81.add_attribute("ID", "SecurityID_t_872239302"); // 1
    Instrmt_81_set.insert("SecurityID_t_872239302");
    Instrmt_81.add_attribute("Src", "J"); // 1
    Instrmt_81_set.insert("J");
    Instrmt_81.add_attribute("Prod", "4"); // 1
    Instrmt_81_set.insert("4");
    Instrmt_81.add_attribute("ProdCmplx", "ProductComplex_t_1838751339"); // 1
    Instrmt_81_set.insert("ProductComplex_t_1838751339");
    Instrmt_81.add_attribute("SecGrp", "SecurityGroup_t_604237710"); // 1
    Instrmt_81_set.insert("SecurityGroup_t_604237710");
    Instrmt_81.add_attribute("CFI", "CFICode_t_444839524"); // 1
    Instrmt_81_set.insert("CFICode_t_444839524");
    Instrmt_81.add_attribute("SecTyp", "CPP"); // 1
    Instrmt_81_set.insert("CPP");
    Instrmt_81.add_attribute("SubTyp", "SecuritySubType_t_1818244740"); // 1
    Instrmt_81_set.insert("SecuritySubType_t_1818244740");
    Instrmt_81.add_attribute("MMY", "986321431"); // 1
    Instrmt_81_set.insert("986321431");
    Instrmt_81.add_attribute("MatDt", "MaturityDate_t_2080879619"); // 1
    Instrmt_81_set.insert("MaturityDate_t_2080879619");
    Instrmt_81.add_attribute("MatTm", "1007585489"); // 1
    Instrmt_81_set.insert("1007585489");
    Instrmt_81.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_209106239"); // 1
    Instrmt_81_set.insert("SettleOnOpenFlag_t_209106239");
    Instrmt_81.add_attribute("AsgnMeth", "1399323979"); // 1
    Instrmt_81_set.insert("1399323979");
    Instrmt_81.add_attribute("Status", "1"); // 1
    Instrmt_81_set.insert("1");
    Instrmt_81.add_attribute("CpnPmt", "CouponPaymentDate_t_1334771394"); // 1
    Instrmt_81_set.insert("CouponPaymentDate_t_1334771394");
    Instrmt_81.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_81_set.insert("XR");
    Instrmt_81.add_attribute("Snrty", "SB"); // 1
    Instrmt_81_set.insert("SB");
    Instrmt_81.add_attribute("NotlPctOut", "10231976.340000"); // 1
    Instrmt_81_set.insert("10231976.340000");
    Instrmt_81.add_attribute("OrigNotlPctOut", "13862898.870000"); // 1
    Instrmt_81_set.insert("13862898.870000");
    Instrmt_81.add_attribute("AttchPnt", "5302399.730000"); // 1
    Instrmt_81_set.insert("5302399.730000");
    Instrmt_81.add_attribute("DetchPnt", "1555322.720000"); // 1
    Instrmt_81_set.insert("1555322.720000");
    Instrmt_81.add_attribute("Issued", "IssueDate_t_276812503"); // 1
    Instrmt_81_set.insert("IssueDate_t_276812503");
    Instrmt_81.add_attribute("RepoCollSecTyp", "743667264"); // 1
    Instrmt_81_set.insert("743667264");
    Instrmt_81.add_attribute("RepoTrm", "1475670245"); // 1
    Instrmt_81_set.insert("1475670245");
    Instrmt_81.add_attribute("RepoRt", "1040148.840000"); // 1
    Instrmt_81_set.insert("1040148.840000");
    Instrmt_81.add_attribute("Fctr", "16268722.640000"); // 1
    Instrmt_81_set.insert("16268722.640000");
    Instrmt_81.add_attribute("CrdRtg", "CreditRating_t_151956453"); // 1
    Instrmt_81_set.insert("CreditRating_t_151956453");
    Instrmt_81.add_attribute("Rgstry", "InstrRegistry_t_1720979869"); // 1
    Instrmt_81_set.insert("InstrRegistry_t_1720979869");
    Instrmt_81.add_attribute("IssuCtry", "1219132213"); // 1
    Instrmt_81_set.insert("1219132213");
    Instrmt_81.add_attribute("StPrv", "StateOrProvinceOfIssue_t_142120601"); // 1
    Instrmt_81_set.insert("StateOrProvinceOfIssue_t_142120601");
    Instrmt_81.add_attribute("Lcl", "LocaleOfIssue_t_188067909"); // 1
    Instrmt_81_set.insert("LocaleOfIssue_t_188067909");
    Instrmt_81.add_attribute("Redeem", "RedemptionDate_t_2091371515"); // 1
    Instrmt_81_set.insert("RedemptionDate_t_2091371515");
    Instrmt_81.add_attribute("StrkPx", "13925270.730000"); // 1
    Instrmt_81_set.insert("13925270.730000");
    Instrmt_81.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_81_set.insert("GBP");
    Instrmt_81.add_attribute("StrkMult", "19967647.830000"); // 1
    Instrmt_81_set.insert("19967647.830000");
    Instrmt_81.add_attribute("StrkValu", "2149599.510000"); // 1
    Instrmt_81_set.insert("2149599.510000");
    Instrmt_81.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_81_set.insert("1");
    Instrmt_81.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_81_set.insert("1");
    Instrmt_81.add_attribute("StrkPxBndryPrcsn", "12012813.830000"); // 1
    Instrmt_81_set.insert("12012813.830000");
    Instrmt_81.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_81_set.insert("1");
    Instrmt_81.add_attribute("OptAt", "527627716"); // 1
    Instrmt_81_set.insert("527627716");
    Instrmt_81.add_attribute("Mult", "14103876.220000"); // 1
    Instrmt_81_set.insert("14103876.220000");
    Instrmt_81.add_attribute("MultTyp", "0"); // 1
    Instrmt_81_set.insert("0");
    Instrmt_81.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_81_set.insert("1");
    Instrmt_81.add_attribute("MinPxIncr", "5976753.680000"); // 1
    Instrmt_81_set.insert("5976753.680000");
    Instrmt_81.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1591644927"); // 1
    Instrmt_81_set.insert("MinPriceIncrementAmount_t_1591644927");
    Instrmt_81.add_attribute("UOM", "MWh"); // 1
    Instrmt_81_set.insert("MWh");
    Instrmt_81.add_attribute("UOMQty", "16208730.030000"); // 1
    Instrmt_81_set.insert("16208730.030000");
    Instrmt_81.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_81_set.insert("Alw");
    Instrmt_81.add_attribute("PxUOMQty", "21469400.060000"); // 1
    Instrmt_81_set.insert("21469400.060000");
    Instrmt_81.add_attribute("SettlMeth", "P"); // 1
    Instrmt_81_set.insert("P");
    Instrmt_81.add_attribute("ExerStyle", "2"); // 1
    Instrmt_81_set.insert("2");
    Instrmt_81.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_81_set.insert("2");
    Instrmt_81.add_attribute("OptPayAmt", "OptPayoutAmount_t_1104591872"); // 1
    Instrmt_81_set.insert("OptPayoutAmount_t_1104591872");
    Instrmt_81.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_81_set.insert("INT");
    Instrmt_81.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_81_set.insert("CDSD");
    Instrmt_81.add_attribute("ListMeth", "0"); // 1
    Instrmt_81_set.insert("0");
    Instrmt_81.add_attribute("CapPx", "7847747.750000"); // 1
    Instrmt_81_set.insert("7847747.750000");
    Instrmt_81.add_attribute("FlrPx", "14416444.520000"); // 1
    Instrmt_81_set.insert("14416444.520000");
    Instrmt_81.add_attribute("PutCall", "1"); // 1
    Instrmt_81_set.insert("1");
    Instrmt_81.add_attribute("FlexInd", "true"); // 1
    Instrmt_81_set.insert("true");
    Instrmt_81.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_81_set.insert("false");
    Instrmt_81.add_attribute("TmUnit", "D"); // 1
    Instrmt_81_set.insert("D");
    Instrmt_81.add_attribute("CpnRt", "7429631.110000"); // 1
    Instrmt_81_set.insert("7429631.110000");
    Instrmt_81.add_attribute("Exch", "SecurityExchange_t_1020687877"); // 1
    Instrmt_81_set.insert("SecurityExchange_t_1020687877");
    Instrmt_81.add_attribute("PosLmt", "492993488"); // 1
    Instrmt_81_set.insert("492993488");
    Instrmt_81.add_attribute("NTPosLmt", "957923063"); // 1
    Instrmt_81_set.insert("957923063");
    Instrmt_81.add_attribute("Issr", "Issuer_t_1863241874"); // 1
    Instrmt_81_set.insert("Issuer_t_1863241874");
    Instrmt_81.add_attribute("EncIssrLen", "13035715"); // 1
    Instrmt_81_set.insert("13035715");
    Instrmt_81.add_attribute("EncIssr", "EncodedIssuer_t_11720798"); // 1
    Instrmt_81_set.insert("EncodedIssuer_t_11720798");
    Instrmt_81.add_attribute("Desc", "SecurityDesc_t_491708194"); // 1
    Instrmt_81_set.insert("SecurityDesc_t_491708194");
    Instrmt_81.add_attribute("EncSecDescLen", "540663432"); // 1
    Instrmt_81_set.insert("540663432");
    Instrmt_81.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1422108420"); // 1
    Instrmt_81_set.insert("EncodedSecurityDesc_t_1422108420");
    Instrmt_81.add_attribute("Pool", "Pool_t_519498493"); // 1
    Instrmt_81_set.insert("Pool_t_519498493");
    Instrmt_81.add_attribute("CSetMo", "1025260"); // 1
    Instrmt_81_set.insert("1025260");
    Instrmt_81.add_attribute("CPPgm", "1"); // 1
    Instrmt_81_set.insert("1");
    Instrmt_81.add_attribute("CPRegT", "CPRegType_t_2111143420"); // 1
    Instrmt_81_set.insert("CPRegType_t_2111143420");
    Instrmt_81.add_attribute("Dated", "DatedDate_t_1617725293"); // 1
    Instrmt_81_set.insert("DatedDate_t_1617725293");
    Instrmt_81.add_attribute("IntAcrl", "InterestAccrualDate_t_1493173144"); // 1
    Instrmt_81_set.insert("InterestAccrualDate_t_1493173144");
    all_values.push_back(Instrmt_81_set);
    all_compo_names.insert("Instrmt_81_set");

    {
      xml_element AID_84{"AID"};
      multiset<string> AID_84_set;
      AID_84.add_attribute("AltID", "SecurityAltID_t_794110938"); // 2
      AID_84_set.insert("SecurityAltID_t_794110938");
      AID_84.add_attribute("AltIDSrc", "K"); // 2
      AID_84_set.insert("K");
      all_values.push_back(AID_84_set);
      all_compo_names.insert("AID_84_set");

      Instrmt_81.add_element(AID_84);
    }
    {
      xml_element SecXML_84{"SecXML"};
      multiset<string> SecXML_84_set;
      SecXML_84.add_attribute("Schema", "SecurityXMLSchema_t_1122094771"); // 2
      SecXML_84_set.insert("SecurityXMLSchema_t_1122094771");
      all_values.push_back(SecXML_84_set);
      all_compo_names.insert("SecXML_84_set");

      Instrmt_81.add_element(SecXML_84);
    }
    {
      xml_element Evnt_84{"Evnt"};
      multiset<string> Evnt_84_set;
      Evnt_84.add_attribute("EventTyp", "8"); // 2
      Evnt_84_set.insert("8");
      Evnt_84.add_attribute("Dt", "EventDate_t_212821627"); // 2
      Evnt_84_set.insert("EventDate_t_212821627");
      Evnt_84.add_attribute("Tm", "EventTime_t_79202996"); // 2
      Evnt_84_set.insert("EventTime_t_79202996");
      Evnt_84.add_attribute("Px", "9651695.140000"); // 2
      Evnt_84_set.insert("9651695.140000");
      Evnt_84.add_attribute("Txt", "EventText_t_435333866"); // 2
      Evnt_84_set.insert("EventText_t_435333866");
      all_values.push_back(Evnt_84_set);
      all_compo_names.insert("Evnt_84_set");

      Instrmt_81.add_element(Evnt_84);
    }
    {
      xml_element Pty_416{"Pty"};
      multiset<string> Pty_416_set;
      Pty_416.add_attribute("ID", "InstrumentPartyID_t_1335751322"); // 2
      Pty_416_set.insert("InstrumentPartyID_t_1335751322");
      Pty_416.add_attribute("Src", "4"); // 2
      Pty_416_set.insert("4");
      Pty_416.add_attribute("R", "84"); // 2
      Pty_416_set.insert("84");
      all_values.push_back(Pty_416_set);
      all_compo_names.insert("Pty_416_set");

      {
        xml_element Sub_416{"Sub"};
        multiset<string> Sub_416_set;
        Sub_416.add_attribute("ID", "InstrumentPartySubID_t_586936601"); // 3
        Sub_416_set.insert("InstrumentPartySubID_t_586936601");
        Sub_416.add_attribute("Typ", "12"); // 3
        Sub_416_set.insert("12");
        all_values.push_back(Sub_416_set);
        all_compo_names.insert("Sub_416_set");

        Pty_416.add_element(Sub_416);
      }
      Instrmt_81.add_element(Pty_416);
    }
    {
      xml_element CmplxEvnt_81{"CmplxEvnt"};
      multiset<string> CmplxEvnt_81_set;
      CmplxEvnt_81.add_attribute("Typ", "7"); // 2
      CmplxEvnt_81_set.insert("7");
      CmplxEvnt_81.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1230648953"); // 2
      CmplxEvnt_81_set.insert("ComplexOptPayoutAmount_t_1230648953");
      CmplxEvnt_81.add_attribute("Px", "13182664.360000"); // 2
      CmplxEvnt_81_set.insert("13182664.360000");
      CmplxEvnt_81.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_81_set.insert("2");
      CmplxEvnt_81.add_attribute("PxBndryPrcsn", "17236424.410000"); // 2
      CmplxEvnt_81_set.insert("17236424.410000");
      CmplxEvnt_81.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_81_set.insert("2");
      CmplxEvnt_81.add_attribute("Cond", "1"); // 2
      CmplxEvnt_81_set.insert("1");
      all_values.push_back(CmplxEvnt_81_set);
      all_compo_names.insert("CmplxEvnt_81_set");

      {
        xml_element EvntDts_81{"EvntDts"};
        multiset<string> EvntDts_81_set;
        EvntDts_81.add_attribute("StartDt", "ComplexEventStartDate_t_1736678157"); // 3
        EvntDts_81_set.insert("ComplexEventStartDate_t_1736678157");
        EvntDts_81.add_attribute("EndDt", "ComplexEventEndDate_t_140426649"); // 3
        EvntDts_81_set.insert("ComplexEventEndDate_t_140426649");
        all_values.push_back(EvntDts_81_set);
        all_compo_names.insert("EvntDts_81_set");

        {
          xml_element EvntTms_81{"EvntTms"};
          multiset<string> EvntTms_81_set;
          EvntTms_81.add_attribute("StartTm", "195697638"); // 4
          EvntTms_81_set.insert("195697638");
          EvntTms_81.add_attribute("EndTm", "129857941"); // 4
          EvntTms_81_set.insert("129857941");
          all_values.push_back(EvntTms_81_set);
          all_compo_names.insert("EvntTms_81_set");

          EvntDts_81.add_element(EvntTms_81);
        }
        CmplxEvnt_81.add_element(EvntDts_81);
      }
      Instrmt_81.add_element(CmplxEvnt_81);
    }
    elt.add_element(Instrmt_81);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_16{"InstrmtExt"};
    multiset<string> InstrmtExt_16_set;
    InstrmtExt_16.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_16_set.insert("1");
    InstrmtExt_16.add_attribute("PctAtRisk", "7151961.320000"); // 1
    InstrmtExt_16_set.insert("7151961.320000");
    all_values.push_back(InstrmtExt_16_set);
    all_compo_names.insert("InstrmtExt_16_set");

    {
      xml_element Attrb_27{"Attrb"};
      multiset<string> Attrb_27_set;
      Attrb_27.add_attribute("Typ", "2"); // 2
      Attrb_27_set.insert("2");
      Attrb_27.add_attribute("Val", "InstrAttribValue_t_1434835211"); // 2
      Attrb_27_set.insert("InstrAttribValue_t_1434835211");
      all_values.push_back(Attrb_27_set);
      all_compo_names.insert("Attrb_27_set");

      InstrmtExt_16.add_element(Attrb_27);
    }
    elt.add_element(InstrmtExt_16);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_118{"Undly"};
    multiset<string> Undly_118_set;
    Undly_118.add_attribute("Sym", "UnderlyingSymbol_t_1748608495"); // 1
    Undly_118_set.insert("UnderlyingSymbol_t_1748608495");
    Undly_118.add_attribute("Sfx", "WI"); // 1
    Undly_118_set.insert("WI");
    Undly_118.add_attribute("ID", "UnderlyingSecurityID_t_1472966843"); // 1
    Undly_118_set.insert("UnderlyingSecurityID_t_1472966843");
    Undly_118.add_attribute("Src", "4"); // 1
    Undly_118_set.insert("4");
    Undly_118.add_attribute("Prod", "3"); // 1
    Undly_118_set.insert("3");
    Undly_118.add_attribute("CFI", "UnderlyingCFICode_t_1226857803"); // 1
    Undly_118_set.insert("UnderlyingCFICode_t_1226857803");
    Undly_118.add_attribute("SecTyp", "PS"); // 1
    Undly_118_set.insert("PS");
    Undly_118.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1981822474"); // 1
    Undly_118_set.insert("UnderlyingSecuritySubType_t_1981822474");
    Undly_118.add_attribute("MMY", "44543669"); // 1
    Undly_118_set.insert("44543669");
    Undly_118.add_attribute("Mat", "UnderlyingMaturityDate_t_1866461992"); // 1
    Undly_118_set.insert("UnderlyingMaturityDate_t_1866461992");
    Undly_118.add_attribute("MatTm", "1170090148"); // 1
    Undly_118_set.insert("1170090148");
    Undly_118.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1794487958"); // 1
    Undly_118_set.insert("UnderlyingCouponPaymentDate_t_1794487958");
    Undly_118.add_attribute("RestrctTyp", "MM"); // 1
    Undly_118_set.insert("MM");
    Undly_118.add_attribute("Snrty", "SD"); // 1
    Undly_118_set.insert("SD");
    Undly_118.add_attribute("NotlPctOut", "2223076.350000"); // 1
    Undly_118_set.insert("2223076.350000");
    Undly_118.add_attribute("OrigNotlPctOut", "5635000.030000"); // 1
    Undly_118_set.insert("5635000.030000");
    Undly_118.add_attribute("AttchPnt", "8401920.550000"); // 1
    Undly_118_set.insert("8401920.550000");
    Undly_118.add_attribute("DetchPnt", "15405740.710000"); // 1
    Undly_118_set.insert("15405740.710000");
    Undly_118.add_attribute("Issued", "UnderlyingIssueDate_t_551731221"); // 1
    Undly_118_set.insert("UnderlyingIssueDate_t_551731221");
    Undly_118.add_attribute("RepoCollSecTyp", "416350848"); // 1
    Undly_118_set.insert("416350848");
    Undly_118.add_attribute("RepoTrm", "1669279923"); // 1
    Undly_118_set.insert("1669279923");
    Undly_118.add_attribute("RepoRt", "2557206.660000"); // 1
    Undly_118_set.insert("2557206.660000");
    Undly_118.add_attribute("Fctr", "55453.570000"); // 1
    Undly_118_set.insert("55453.570000");
    Undly_118.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1809706572"); // 1
    Undly_118_set.insert("UnderlyingCreditRating_t_1809706572");
    Undly_118.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_451418304"); // 1
    Undly_118_set.insert("UnderlyingInstrRegistry_t_451418304");
    Undly_118.add_attribute("Ctry", "135403298"); // 1
    Undly_118_set.insert("135403298");
    Undly_118.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1224757994"); // 1
    Undly_118_set.insert("UnderlyingStateOrProvinceOfIssue_t_1224757994");
    Undly_118.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1166614436"); // 1
    Undly_118_set.insert("UnderlyingLocaleOfIssue_t_1166614436");
    Undly_118.add_attribute("Redeem", "UnderlyingRedemptionDate_t_266286500"); // 1
    Undly_118_set.insert("UnderlyingRedemptionDate_t_266286500");
    Undly_118.add_attribute("StrkPx", "5121095.570000"); // 1
    Undly_118_set.insert("5121095.570000");
    Undly_118.add_attribute("StrkCcy", "CHF"); // 1
    Undly_118_set.insert("CHF");
    Undly_118.add_attribute("OptA", "1292634264"); // 1
    Undly_118_set.insert("1292634264");
    Undly_118.add_attribute("Mult", "11709535.360000"); // 1
    Undly_118_set.insert("11709535.360000");
    Undly_118.add_attribute("MultTyp", "2"); // 1
    Undly_118_set.insert("2");
    Undly_118.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_118_set.insert("0");
    Undly_118.add_attribute("UOM", "Gal"); // 1
    Undly_118_set.insert("Gal");
    Undly_118.add_attribute("UOMQty", "3693623.240000"); // 1
    Undly_118_set.insert("3693623.240000");
    Undly_118.add_attribute("PxUOM", "tn"); // 1
    Undly_118_set.insert("tn");
    Undly_118.add_attribute("PxUOMQty", "2948713.600000"); // 1
    Undly_118_set.insert("2948713.600000");
    Undly_118.add_attribute("TmUnit", "D"); // 1
    Undly_118_set.insert("D");
    Undly_118.add_attribute("ExerStyle", "2"); // 1
    Undly_118_set.insert("2");
    Undly_118.add_attribute("CpnRt", "20893593.180000"); // 1
    Undly_118_set.insert("20893593.180000");
    Undly_118.add_attribute("Exch", "UnderlyingSecurityExchange_t_1684297330"); // 1
    Undly_118_set.insert("UnderlyingSecurityExchange_t_1684297330");
    Undly_118.add_attribute("Issr", "UnderlyingIssuer_t_1661742171"); // 1
    Undly_118_set.insert("UnderlyingIssuer_t_1661742171");
    Undly_118.add_attribute("EncUndIssrLen", "164183305"); // 1
    Undly_118_set.insert("164183305");
    Undly_118.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_100313685"); // 1
    Undly_118_set.insert("EncodedUnderlyingIssuer_t_100313685");
    Undly_118.add_attribute("Desc", "UnderlyingSecurityDesc_t_354450578"); // 1
    Undly_118_set.insert("UnderlyingSecurityDesc_t_354450578");
    Undly_118.add_attribute("EncUndSecDescLen", "1704757376"); // 1
    Undly_118_set.insert("1704757376");
    Undly_118.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_652044906"); // 1
    Undly_118_set.insert("EncodedUnderlyingSecurityDesc_t_652044906");
    Undly_118.add_attribute("CPPgm", "UnderlyingCPProgram_t_770801427"); // 1
    Undly_118_set.insert("UnderlyingCPProgram_t_770801427");
    Undly_118.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1226553651"); // 1
    Undly_118_set.insert("UnderlyingCPRegType_t_1226553651");
    Undly_118.add_attribute("AllocPct", "9077655.720000"); // 1
    Undly_118_set.insert("9077655.720000");
    Undly_118.add_attribute("Ccy", "GBP"); // 1
    Undly_118_set.insert("GBP");
    Undly_118.add_attribute("Qty", "13591838.770000"); // 1
    Undly_118_set.insert("13591838.770000");
    Undly_118.add_attribute("SettlTyp", "4"); // 1
    Undly_118_set.insert("4");
    Undly_118.add_attribute("CashAmt", "UnderlyingCashAmount_t_2113534570"); // 1
    Undly_118_set.insert("UnderlyingCashAmount_t_2113534570");
    Undly_118.add_attribute("CashTyp", "DIFF"); // 1
    Undly_118_set.insert("DIFF");
    Undly_118.add_attribute("Px", "11780365.830000"); // 1
    Undly_118_set.insert("11780365.830000");
    Undly_118.add_attribute("DirtPx", "4781604.800000"); // 1
    Undly_118_set.insert("4781604.800000");
    Undly_118.add_attribute("EndPx", "763013.580000"); // 1
    Undly_118_set.insert("763013.580000");
    Undly_118.add_attribute("StartVal", "UnderlyingStartValue_t_1045447930"); // 1
    Undly_118_set.insert("UnderlyingStartValue_t_1045447930");
    Undly_118.add_attribute("CurVal", "UnderlyingCurrentValue_t_1770794744"); // 1
    Undly_118_set.insert("UnderlyingCurrentValue_t_1770794744");
    Undly_118.add_attribute("EndVal", "UnderlyingEndValue_t_1247254894"); // 1
    Undly_118_set.insert("UnderlyingEndValue_t_1247254894");
    Undly_118.add_attribute("AdjQty", "21311657.760000"); // 1
    Undly_118_set.insert("21311657.760000");
    Undly_118.add_attribute("FxRate", "6710811.910000"); // 1
    Undly_118_set.insert("6710811.910000");
    Undly_118.add_attribute("FxRateCalc", "D"); // 1
    Undly_118_set.insert("D");
    Undly_118.add_attribute("CapValu", "UnderlyingCapValue_t_353044452"); // 1
    Undly_118_set.insert("UnderlyingCapValue_t_353044452");
    Undly_118.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1553190113"); // 1
    Undly_118_set.insert("UnderlyingSettlMethod_t_1553190113");
    Undly_118.add_attribute("PutCall", "1792453945"); // 1
    Undly_118_set.insert("1792453945");
    all_values.push_back(Undly_118_set);
    all_compo_names.insert("Undly_118_set");

    {
      xml_element UndAID_118{"UndAID"};
      multiset<string> UndAID_118_set;
      UndAID_118.add_attribute("AltID", "UnderlyingSecurityAltID_t_441385120"); // 2
      UndAID_118_set.insert("UnderlyingSecurityAltID_t_441385120");
      UndAID_118.add_attribute("AltIDSrc", "A"); // 2
      UndAID_118_set.insert("A");
      all_values.push_back(UndAID_118_set);
      all_compo_names.insert("UndAID_118_set");

      Undly_118.add_element(UndAID_118);
    }
    {
      xml_element Stip_189{"Stip"};
      multiset<string> Stip_189_set;
      Stip_189.add_attribute("Typ", "ISSUE"); // 2
      Stip_189_set.insert("ISSUE");
      Stip_189.add_attribute("Val", "UnderlyingStipValue_t_2125682450"); // 2
      Stip_189_set.insert("UnderlyingStipValue_t_2125682450");
      all_values.push_back(Stip_189_set);
      all_compo_names.insert("Stip_189_set");

      Undly_118.add_element(Stip_189);
    }
    {
      xml_element Pty_417{"Pty"};
      multiset<string> Pty_417_set;
      Pty_417.add_attribute("ID", "UnderlyingInstrumentPartyID_t_972164058"); // 2
      Pty_417_set.insert("UnderlyingInstrumentPartyID_t_972164058");
      Pty_417.add_attribute("Src", "1"); // 2
      Pty_417_set.insert("1");
      Pty_417.add_attribute("R", "42"); // 2
      Pty_417_set.insert("42");
      all_values.push_back(Pty_417_set);
      all_compo_names.insert("Pty_417_set");

      {
        xml_element Sub_417{"Sub"};
        multiset<string> Sub_417_set;
        Sub_417.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1326614637"); // 3
        Sub_417_set.insert("UnderlyingInstrumentPartySubID_t_1326614637");
        Sub_417.add_attribute("Typ", "32"); // 3
        Sub_417_set.insert("32");
        all_values.push_back(Sub_417_set);
        all_compo_names.insert("Sub_417_set");

        Pty_417.add_element(Sub_417);
      }
      Undly_118.add_element(Pty_417);
    }
    elt.add_element(Undly_118);
  } // end Undly
  { // Undly
    xml_element Undly_119{"Undly"};
    multiset<string> Undly_119_set;
    Undly_119.add_attribute("Sym", "UnderlyingSymbol_t_730557393"); // 1
    Undly_119_set.insert("UnderlyingSymbol_t_730557393");
    Undly_119.add_attribute("Sfx", "CD"); // 1
    Undly_119_set.insert("CD");
    Undly_119.add_attribute("ID", "UnderlyingSecurityID_t_534856652"); // 1
    Undly_119_set.insert("UnderlyingSecurityID_t_534856652");
    Undly_119.add_attribute("Src", "H"); // 1
    Undly_119_set.insert("H");
    Undly_119.add_attribute("Prod", "7"); // 1
    Undly_119_set.insert("7");
    Undly_119.add_attribute("CFI", "UnderlyingCFICode_t_1423633228"); // 1
    Undly_119_set.insert("UnderlyingCFICode_t_1423633228");
    Undly_119.add_attribute("SecTyp", "MTN"); // 1
    Undly_119_set.insert("MTN");
    Undly_119.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1638029283"); // 1
    Undly_119_set.insert("UnderlyingSecuritySubType_t_1638029283");
    Undly_119.add_attribute("MMY", "1389684151"); // 1
    Undly_119_set.insert("1389684151");
    Undly_119.add_attribute("Mat", "UnderlyingMaturityDate_t_1228337860"); // 1
    Undly_119_set.insert("UnderlyingMaturityDate_t_1228337860");
    Undly_119.add_attribute("MatTm", "668582218"); // 1
    Undly_119_set.insert("668582218");
    Undly_119.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1867844631"); // 1
    Undly_119_set.insert("UnderlyingCouponPaymentDate_t_1867844631");
    Undly_119.add_attribute("RestrctTyp", "XR"); // 1
    Undly_119_set.insert("XR");
    Undly_119.add_attribute("Snrty", "SB"); // 1
    Undly_119_set.insert("SB");
    Undly_119.add_attribute("NotlPctOut", "14911557.270000"); // 1
    Undly_119_set.insert("14911557.270000");
    Undly_119.add_attribute("OrigNotlPctOut", "4044104.650000"); // 1
    Undly_119_set.insert("4044104.650000");
    Undly_119.add_attribute("AttchPnt", "16977122.760000"); // 1
    Undly_119_set.insert("16977122.760000");
    Undly_119.add_attribute("DetchPnt", "147532.710000"); // 1
    Undly_119_set.insert("147532.710000");
    Undly_119.add_attribute("Issued", "UnderlyingIssueDate_t_1901993051"); // 1
    Undly_119_set.insert("UnderlyingIssueDate_t_1901993051");
    Undly_119.add_attribute("RepoCollSecTyp", "2050756728"); // 1
    Undly_119_set.insert("2050756728");
    Undly_119.add_attribute("RepoTrm", "1567943384"); // 1
    Undly_119_set.insert("1567943384");
    Undly_119.add_attribute("RepoRt", "15469633.480000"); // 1
    Undly_119_set.insert("15469633.480000");
    Undly_119.add_attribute("Fctr", "3446582.000000"); // 1
    Undly_119_set.insert("3446582.000000");
    Undly_119.add_attribute("CrdRtg", "UnderlyingCreditRating_t_878365271"); // 1
    Undly_119_set.insert("UnderlyingCreditRating_t_878365271");
    Undly_119.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1133809316"); // 1
    Undly_119_set.insert("UnderlyingInstrRegistry_t_1133809316");
    Undly_119.add_attribute("Ctry", "322857002"); // 1
    Undly_119_set.insert("322857002");
    Undly_119.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1850529329"); // 1
    Undly_119_set.insert("UnderlyingStateOrProvinceOfIssue_t_1850529329");
    Undly_119.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_884838588"); // 1
    Undly_119_set.insert("UnderlyingLocaleOfIssue_t_884838588");
    Undly_119.add_attribute("Redeem", "UnderlyingRedemptionDate_t_401369489"); // 1
    Undly_119_set.insert("UnderlyingRedemptionDate_t_401369489");
    Undly_119.add_attribute("StrkPx", "10296603.180000"); // 1
    Undly_119_set.insert("10296603.180000");
    Undly_119.add_attribute("StrkCcy", "CHF"); // 1
    Undly_119_set.insert("CHF");
    Undly_119.add_attribute("OptA", "979592734"); // 1
    Undly_119_set.insert("979592734");
    Undly_119.add_attribute("Mult", "7279982.420000"); // 1
    Undly_119_set.insert("7279982.420000");
    Undly_119.add_attribute("MultTyp", "2"); // 1
    Undly_119_set.insert("2");
    Undly_119.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_119_set.insert("0");
    Undly_119.add_attribute("UOM", "Gal"); // 1
    Undly_119_set.insert("Gal");
    Undly_119.add_attribute("UOMQty", "14727893.960000"); // 1
    Undly_119_set.insert("14727893.960000");
    Undly_119.add_attribute("PxUOM", "Bcf"); // 1
    Undly_119_set.insert("Bcf");
    Undly_119.add_attribute("PxUOMQty", "13938319.730000"); // 1
    Undly_119_set.insert("13938319.730000");
    Undly_119.add_attribute("TmUnit", "S"); // 1
    Undly_119_set.insert("S");
    Undly_119.add_attribute("ExerStyle", "1"); // 1
    Undly_119_set.insert("1");
    Undly_119.add_attribute("CpnRt", "11141929.560000"); // 1
    Undly_119_set.insert("11141929.560000");
    Undly_119.add_attribute("Exch", "UnderlyingSecurityExchange_t_1858282827"); // 1
    Undly_119_set.insert("UnderlyingSecurityExchange_t_1858282827");
    Undly_119.add_attribute("Issr", "UnderlyingIssuer_t_1431546289"); // 1
    Undly_119_set.insert("UnderlyingIssuer_t_1431546289");
    Undly_119.add_attribute("EncUndIssrLen", "457865036"); // 1
    Undly_119_set.insert("457865036");
    Undly_119.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_115209645"); // 1
    Undly_119_set.insert("EncodedUnderlyingIssuer_t_115209645");
    Undly_119.add_attribute("Desc", "UnderlyingSecurityDesc_t_981774918"); // 1
    Undly_119_set.insert("UnderlyingSecurityDesc_t_981774918");
    Undly_119.add_attribute("EncUndSecDescLen", "472618307"); // 1
    Undly_119_set.insert("472618307");
    Undly_119.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2017202696"); // 1
    Undly_119_set.insert("EncodedUnderlyingSecurityDesc_t_2017202696");
    Undly_119.add_attribute("CPPgm", "UnderlyingCPProgram_t_885047998"); // 1
    Undly_119_set.insert("UnderlyingCPProgram_t_885047998");
    Undly_119.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2040561691"); // 1
    Undly_119_set.insert("UnderlyingCPRegType_t_2040561691");
    Undly_119.add_attribute("AllocPct", "14166823.960000"); // 1
    Undly_119_set.insert("14166823.960000");
    Undly_119.add_attribute("Ccy", "JPY"); // 1
    Undly_119_set.insert("JPY");
    Undly_119.add_attribute("Qty", "4030080.640000"); // 1
    Undly_119_set.insert("4030080.640000");
    Undly_119.add_attribute("SettlTyp", "2"); // 1
    Undly_119_set.insert("2");
    Undly_119.add_attribute("CashAmt", "UnderlyingCashAmount_t_474488995"); // 1
    Undly_119_set.insert("UnderlyingCashAmount_t_474488995");
    Undly_119.add_attribute("CashTyp", "DIFF"); // 1
    Undly_119_set.insert("DIFF");
    Undly_119.add_attribute("Px", "19539326.910000"); // 1
    Undly_119_set.insert("19539326.910000");
    Undly_119.add_attribute("DirtPx", "15041493.140000"); // 1
    Undly_119_set.insert("15041493.140000");
    Undly_119.add_attribute("EndPx", "14809882.420000"); // 1
    Undly_119_set.insert("14809882.420000");
    Undly_119.add_attribute("StartVal", "UnderlyingStartValue_t_938375926"); // 1
    Undly_119_set.insert("UnderlyingStartValue_t_938375926");
    Undly_119.add_attribute("CurVal", "UnderlyingCurrentValue_t_336258400"); // 1
    Undly_119_set.insert("UnderlyingCurrentValue_t_336258400");
    Undly_119.add_attribute("EndVal", "UnderlyingEndValue_t_61502836"); // 1
    Undly_119_set.insert("UnderlyingEndValue_t_61502836");
    Undly_119.add_attribute("AdjQty", "15611421.270000"); // 1
    Undly_119_set.insert("15611421.270000");
    Undly_119.add_attribute("FxRate", "20421303.350000"); // 1
    Undly_119_set.insert("20421303.350000");
    Undly_119.add_attribute("FxRateCalc", "D"); // 1
    Undly_119_set.insert("D");
    Undly_119.add_attribute("CapValu", "UnderlyingCapValue_t_886447875"); // 1
    Undly_119_set.insert("UnderlyingCapValue_t_886447875");
    Undly_119.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1091064258"); // 1
    Undly_119_set.insert("UnderlyingSettlMethod_t_1091064258");
    Undly_119.add_attribute("PutCall", "1459482632"); // 1
    Undly_119_set.insert("1459482632");
    all_values.push_back(Undly_119_set);
    all_compo_names.insert("Undly_119_set");

    {
      xml_element UndAID_119{"UndAID"};
      multiset<string> UndAID_119_set;
      UndAID_119.add_attribute("AltID", "UnderlyingSecurityAltID_t_1440091483"); // 2
      UndAID_119_set.insert("UnderlyingSecurityAltID_t_1440091483");
      UndAID_119.add_attribute("AltIDSrc", "C"); // 2
      UndAID_119_set.insert("C");
      all_values.push_back(UndAID_119_set);
      all_compo_names.insert("UndAID_119_set");

      Undly_119.add_element(UndAID_119);
    }
    {
      xml_element Stip_190{"Stip"};
      multiset<string> Stip_190_set;
      Stip_190.add_attribute("Typ", "MAT"); // 2
      Stip_190_set.insert("MAT");
      Stip_190.add_attribute("Val", "UnderlyingStipValue_t_1150890663"); // 2
      Stip_190_set.insert("UnderlyingStipValue_t_1150890663");
      all_values.push_back(Stip_190_set);
      all_compo_names.insert("Stip_190_set");

      Undly_119.add_element(Stip_190);
    }
    {
      xml_element Pty_418{"Pty"};
      multiset<string> Pty_418_set;
      Pty_418.add_attribute("ID", "UnderlyingInstrumentPartyID_t_92643040"); // 2
      Pty_418_set.insert("UnderlyingInstrumentPartyID_t_92643040");
      Pty_418.add_attribute("Src", "A"); // 2
      Pty_418_set.insert("A");
      Pty_418.add_attribute("R", "62"); // 2
      Pty_418_set.insert("62");
      all_values.push_back(Pty_418_set);
      all_compo_names.insert("Pty_418_set");

      {
        xml_element Sub_418{"Sub"};
        multiset<string> Sub_418_set;
        Sub_418.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1074417958"); // 3
        Sub_418_set.insert("UnderlyingInstrumentPartySubID_t_1074417958");
        Sub_418.add_attribute("Typ", "17"); // 3
        Sub_418_set.insert("17");
        all_values.push_back(Sub_418_set);
        all_compo_names.insert("Sub_418_set");

        Pty_418.add_element(Sub_418);
      }
      Undly_119.add_element(Pty_418);
    }
    elt.add_element(Undly_119);
  } // end Undly
  { // Leg
    xml_element Leg_100{"Leg"};
    multiset<string> Leg_100_set;
    Leg_100.add_attribute("Sym", "LegSymbol_t_1959465957"); // 1
    Leg_100_set.insert("LegSymbol_t_1959465957");
    Leg_100.add_attribute("Sfx", "WI"); // 1
    Leg_100_set.insert("WI");
    Leg_100.add_attribute("ID", "LegSecurityID_t_405018104"); // 1
    Leg_100_set.insert("LegSecurityID_t_405018104");
    Leg_100.add_attribute("Src", "F"); // 1
    Leg_100_set.insert("F");
    Leg_100.add_attribute("Prod", "6"); // 1
    Leg_100_set.insert("6");
    Leg_100.add_attribute("CFI", "LegCFICode_t_808026169"); // 1
    Leg_100_set.insert("LegCFICode_t_808026169");
    Leg_100.add_attribute("SecTyp", "AMENDED"); // 1
    Leg_100_set.insert("AMENDED");
    Leg_100.add_attribute("SecSubTyp", "LegSecuritySubType_t_348201988"); // 1
    Leg_100_set.insert("LegSecuritySubType_t_348201988");
    Leg_100.add_attribute("MMY", "2095872822"); // 1
    Leg_100_set.insert("2095872822");
    Leg_100.add_attribute("Mat", "LegMaturityDate_t_253217104"); // 1
    Leg_100_set.insert("LegMaturityDate_t_253217104");
    Leg_100.add_attribute("MatTm", "1852351302"); // 1
    Leg_100_set.insert("1852351302");
    Leg_100.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1429377416"); // 1
    Leg_100_set.insert("LegCouponPaymentDate_t_1429377416");
    Leg_100.add_attribute("Issued", "LegIssueDate_t_1191593030"); // 1
    Leg_100_set.insert("LegIssueDate_t_1191593030");
    Leg_100.add_attribute("RepoCollSecTyp", "41126055"); // 1
    Leg_100_set.insert("41126055");
    Leg_100.add_attribute("RepoTrm", "1490880253"); // 1
    Leg_100_set.insert("1490880253");
    Leg_100.add_attribute("RepoRt", "6052515.090000"); // 1
    Leg_100_set.insert("6052515.090000");
    Leg_100.add_attribute("Fctr", "20832563.900000"); // 1
    Leg_100_set.insert("20832563.900000");
    Leg_100.add_attribute("CrdRtg", "LegCreditRating_t_1556530912"); // 1
    Leg_100_set.insert("LegCreditRating_t_1556530912");
    Leg_100.add_attribute("Rgstry", "LegInstrRegistry_t_1491699384"); // 1
    Leg_100_set.insert("LegInstrRegistry_t_1491699384");
    Leg_100.add_attribute("Ctry", "1026837000"); // 1
    Leg_100_set.insert("1026837000");
    Leg_100.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_868529896"); // 1
    Leg_100_set.insert("LegStateOrProvinceOfIssue_t_868529896");
    Leg_100.add_attribute("Lcl", "LegLocaleOfIssue_t_784307220"); // 1
    Leg_100_set.insert("LegLocaleOfIssue_t_784307220");
    Leg_100.add_attribute("Redeem", "LegRedemptionDate_t_1835417399"); // 1
    Leg_100_set.insert("LegRedemptionDate_t_1835417399");
    Leg_100.add_attribute("Strk", "12947218.370000"); // 1
    Leg_100_set.insert("12947218.370000");
    Leg_100.add_attribute("StrkCcy", "JPY"); // 1
    Leg_100_set.insert("JPY");
    Leg_100.add_attribute("OptA", "31295166"); // 1
    Leg_100_set.insert("31295166");
    Leg_100.add_attribute("Cmult", "10538145.430000"); // 1
    Leg_100_set.insert("10538145.430000");
    Leg_100.add_attribute("MultTyp", "0"); // 1
    Leg_100_set.insert("0");
    Leg_100.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_100_set.insert("0");
    Leg_100.add_attribute("UOM", "MWh"); // 1
    Leg_100_set.insert("MWh");
    Leg_100.add_attribute("UOMQty", "6669770.590000"); // 1
    Leg_100_set.insert("6669770.590000");
    Leg_100.add_attribute("PxUOM", "Bbl"); // 1
    Leg_100_set.insert("Bbl");
    Leg_100.add_attribute("PxUOMQty", "4471683.550000"); // 1
    Leg_100_set.insert("4471683.550000");
    Leg_100.add_attribute("TmUnit", "S"); // 1
    Leg_100_set.insert("S");
    Leg_100.add_attribute("ExerStyle", "1"); // 1
    Leg_100_set.insert("1");
    Leg_100.add_attribute("CpnRt", "12551945.240000"); // 1
    Leg_100_set.insert("12551945.240000");
    Leg_100.add_attribute("Exch", "LegSecurityExchange_t_7949981"); // 1
    Leg_100_set.insert("LegSecurityExchange_t_7949981");
    Leg_100.add_attribute("Issr", "LegIssuer_t_712155111"); // 1
    Leg_100_set.insert("LegIssuer_t_712155111");
    Leg_100.add_attribute("EncLegIssrLen", "1203583698"); // 1
    Leg_100_set.insert("1203583698");
    Leg_100.add_attribute("EncLegIssr", "EncodedLegIssuer_t_261167085"); // 1
    Leg_100_set.insert("EncodedLegIssuer_t_261167085");
    Leg_100.add_attribute("Desc", "LegSecurityDesc_t_417022765"); // 1
    Leg_100_set.insert("LegSecurityDesc_t_417022765");
    Leg_100.add_attribute("EncLegSecDescLen", "485477467"); // 1
    Leg_100_set.insert("485477467");
    Leg_100.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1452760116"); // 1
    Leg_100_set.insert("EncodedLegSecurityDesc_t_1452760116");
    Leg_100.add_attribute("RatioQty", "4581488.200000"); // 1
    Leg_100_set.insert("4581488.200000");
    Leg_100.add_attribute("Side", "9"); // 1
    Leg_100_set.insert("9");
    Leg_100.add_attribute("Ccy", "CAN"); // 1
    Leg_100_set.insert("CAN");
    Leg_100.add_attribute("Pool", "LegPool_t_1385404984"); // 1
    Leg_100_set.insert("LegPool_t_1385404984");
    Leg_100.add_attribute("Dated", "LegDatedDate_t_1402227362"); // 1
    Leg_100_set.insert("LegDatedDate_t_1402227362");
    Leg_100.add_attribute("CSetMo", "1420758563"); // 1
    Leg_100_set.insert("1420758563");
    Leg_100.add_attribute("IntAcrl", "LegInterestAccrualDate_t_106451232"); // 1
    Leg_100_set.insert("LegInterestAccrualDate_t_106451232");
    Leg_100.add_attribute("PutCall", "39050934"); // 1
    Leg_100_set.insert("39050934");
    Leg_100.add_attribute("LegOptionRatio", "11086923.150000"); // 1
    Leg_100_set.insert("11086923.150000");
    Leg_100.add_attribute("Px", "14011730.700000"); // 1
    Leg_100_set.insert("14011730.700000");
    all_values.push_back(Leg_100_set);
    all_compo_names.insert("Leg_100_set");

    {
      xml_element LegAID_95{"LegAID"};
      multiset<string> LegAID_95_set;
      LegAID_95.add_attribute("SecAltID", "LegSecurityAltID_t_1974248817"); // 2
      LegAID_95_set.insert("LegSecurityAltID_t_1974248817");
      LegAID_95.add_attribute("SecAltIDSrc", "2"); // 2
      LegAID_95_set.insert("2");
      all_values.push_back(LegAID_95_set);
      all_compo_names.insert("LegAID_95_set");

      Leg_100.add_element(LegAID_95);
    }
    elt.add_element(Leg_100);
  } // end Leg
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
  msg_to_list(fix_msg, quickfix_dico, fix_s, fix_ls);
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
