#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassStatusRequest_message_t_0;
  elt.add_attribute("ReqID", "MassStatusReqID_t_666862177"); // 0
  OrderMassStatusRequest_message_t_0.insert("MassStatusReqID_t_666862177");
  elt.add_attribute("MassStatReqTyp", "8"); // 0
  OrderMassStatusRequest_message_t_0.insert("8");
  elt.add_attribute("Acct", "Account_t_1327518047"); // 0
  OrderMassStatusRequest_message_t_0.insert("Account_t_1327518047");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  OrderMassStatusRequest_message_t_0.insert("99");
  elt.add_attribute("SesID", "6"); // 0
  OrderMassStatusRequest_message_t_0.insert("6");
  elt.add_attribute("SesSub", "1"); // 0
  OrderMassStatusRequest_message_t_0.insert("1");
  elt.add_attribute("Side", "C"); // 0
  OrderMassStatusRequest_message_t_0.insert("C");
  all_values.push_back(OrderMassStatusRequest_message_t_0);
  all_compo_names.insert("OrderMassStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_63{"Hdr"};
    multiset<string> Hdr_63_set;
    Hdr_63.add_attribute("SeqNum", "306321955"); // 1
    Hdr_63_set.insert("306321955");
    Hdr_63.add_attribute("SID", "SenderCompID_t_61345482"); // 1
    Hdr_63_set.insert("SenderCompID_t_61345482");
    Hdr_63.add_attribute("TID", "TargetCompID_t_1984167246"); // 1
    Hdr_63_set.insert("TargetCompID_t_1984167246");
    Hdr_63.add_attribute("OBID", "OnBehalfOfCompID_t_2052399183"); // 1
    Hdr_63_set.insert("OnBehalfOfCompID_t_2052399183");
    Hdr_63.add_attribute("D2ID", "DeliverToCompID_t_1668554999"); // 1
    Hdr_63_set.insert("DeliverToCompID_t_1668554999");
    Hdr_63.add_attribute("SSub", "SenderSubID_t_437474848"); // 1
    Hdr_63_set.insert("SenderSubID_t_437474848");
    Hdr_63.add_attribute("SLoc", "SenderLocationID_t_1298281392"); // 1
    Hdr_63_set.insert("SenderLocationID_t_1298281392");
    Hdr_63.add_attribute("TSub", "TargetSubID_t_94189608"); // 1
    Hdr_63_set.insert("TargetSubID_t_94189608");
    Hdr_63.add_attribute("TLoc", "TargetLocationID_t_1827769269"); // 1
    Hdr_63_set.insert("TargetLocationID_t_1827769269");
    Hdr_63.add_attribute("OBSub", "OnBehalfOfSubID_t_1893105736"); // 1
    Hdr_63_set.insert("OnBehalfOfSubID_t_1893105736");
    Hdr_63.add_attribute("OBLoc", "OnBehalfOfLocationID_t_340953159"); // 1
    Hdr_63_set.insert("OnBehalfOfLocationID_t_340953159");
    Hdr_63.add_attribute("D2Sub", "DeliverToSubID_t_567269236"); // 1
    Hdr_63_set.insert("DeliverToSubID_t_567269236");
    Hdr_63.add_attribute("D2Loc", "DeliverToLocationID_t_2056472098"); // 1
    Hdr_63_set.insert("DeliverToLocationID_t_2056472098");
    Hdr_63.add_attribute("PosDup", "Y"); // 1
    Hdr_63_set.insert("Y");
    Hdr_63.add_attribute("PosRsnd", "Y"); // 1
    Hdr_63_set.insert("Y");
    Hdr_63.add_attribute("Snt", "SendingTime_t_1133058235"); // 1
    Hdr_63_set.insert("SendingTime_t_1133058235");
    Hdr_63.add_attribute("OrigSnt", "OrigSendingTime_t_298638105"); // 1
    Hdr_63_set.insert("OrigSendingTime_t_298638105");
    Hdr_63.add_attribute("MsgEncd", "MessageEncoding_t_267430457"); // 1
    Hdr_63_set.insert("MessageEncoding_t_267430457");
    all_values.push_back(Hdr_63_set);
    all_compo_names.insert("Hdr_63_set");

    {
      xml_element Hop_63{"Hop"};
      multiset<string> Hop_63_set;
      Hop_63.add_attribute("ID", "HopCompID_t_2129782179"); // 2
      Hop_63_set.insert("HopCompID_t_2129782179");
      Hop_63.add_attribute("Ref", "1802599834"); // 2
      Hop_63_set.insert("1802599834");
      Hop_63.add_attribute("Snt", "HopSendingTime_t_423797751"); // 2
      Hop_63_set.insert("HopSendingTime_t_423797751");
      all_values.push_back(Hop_63_set);
      all_compo_names.insert("Hop_63_set");

      Hdr_63.add_element(Hop_63);
    }
    elt.add_element(Hdr_63);
  } // end Hdr
  { // Pty
    xml_element Pty_284{"Pty"};
    multiset<string> Pty_284_set;
    Pty_284.add_attribute("ID", "PartyID_t_590490653"); // 1
    Pty_284_set.insert("PartyID_t_590490653");
    Pty_284.add_attribute("Src", "2"); // 1
    Pty_284_set.insert("2");
    Pty_284.add_attribute("R", "27"); // 1
    Pty_284_set.insert("27");
    all_values.push_back(Pty_284_set);
    all_compo_names.insert("Pty_284_set");

    {
      xml_element Sub_284{"Sub"};
      multiset<string> Sub_284_set;
      Sub_284.add_attribute("ID", "PartySubID_t_557092782"); // 2
      Sub_284_set.insert("PartySubID_t_557092782");
      Sub_284.add_attribute("Typ", "6"); // 2
      Sub_284_set.insert("6");
      all_values.push_back(Sub_284_set);
      all_compo_names.insert("Sub_284_set");

      Pty_284.add_element(Sub_284);
    }
    elt.add_element(Pty_284);
  } // end Pty
  { // Pty
    xml_element Pty_285{"Pty"};
    multiset<string> Pty_285_set;
    Pty_285.add_attribute("ID", "PartyID_t_670439559"); // 1
    Pty_285_set.insert("PartyID_t_670439559");
    Pty_285.add_attribute("Src", "1"); // 1
    Pty_285_set.insert("1");
    Pty_285.add_attribute("R", "5"); // 1
    Pty_285_set.insert("5");
    all_values.push_back(Pty_285_set);
    all_compo_names.insert("Pty_285_set");

    {
      xml_element Sub_285{"Sub"};
      multiset<string> Sub_285_set;
      Sub_285.add_attribute("ID", "PartySubID_t_530227571"); // 2
      Sub_285_set.insert("PartySubID_t_530227571");
      Sub_285.add_attribute("Typ", "24"); // 2
      Sub_285_set.insert("24");
      all_values.push_back(Sub_285_set);
      all_compo_names.insert("Sub_285_set");

      Pty_285.add_element(Sub_285);
    }
    elt.add_element(Pty_285);
  } // end Pty
  { // Pty
    xml_element Pty_286{"Pty"};
    multiset<string> Pty_286_set;
    Pty_286.add_attribute("ID", "PartyID_t_551228054"); // 1
    Pty_286_set.insert("PartyID_t_551228054");
    Pty_286.add_attribute("Src", "G"); // 1
    Pty_286_set.insert("G");
    Pty_286.add_attribute("R", "22"); // 1
    Pty_286_set.insert("22");
    all_values.push_back(Pty_286_set);
    all_compo_names.insert("Pty_286_set");

    {
      xml_element Sub_286{"Sub"};
      multiset<string> Sub_286_set;
      Sub_286.add_attribute("ID", "PartySubID_t_72299405"); // 2
      Sub_286_set.insert("PartySubID_t_72299405");
      Sub_286.add_attribute("Typ", "30"); // 2
      Sub_286_set.insert("30");
      all_values.push_back(Sub_286_set);
      all_compo_names.insert("Sub_286_set");

      Pty_286.add_element(Sub_286);
    }
    elt.add_element(Pty_286);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_11{"TgtPty"};
    multiset<string> TgtPty_11_set;
    TgtPty_11.add_attribute("ID", "TargetPartyID_t_166489013"); // 1
    TgtPty_11_set.insert("TargetPartyID_t_166489013");
    TgtPty_11.add_attribute("Src", "4"); // 1
    TgtPty_11_set.insert("4");
    TgtPty_11.add_attribute("R", "11"); // 1
    TgtPty_11_set.insert("11");
    all_values.push_back(TgtPty_11_set);
    all_compo_names.insert("TgtPty_11_set");

    elt.add_element(TgtPty_11);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_53{"Instrmt"};
    multiset<string> Instrmt_53_set;
    Instrmt_53.add_attribute("Sym", "Symbol_t_507442172"); // 1
    Instrmt_53_set.insert("Symbol_t_507442172");
    Instrmt_53.add_attribute("Sfx", "WI"); // 1
    Instrmt_53_set.insert("WI");
    Instrmt_53.add_attribute("ID", "SecurityID_t_303065632"); // 1
    Instrmt_53_set.insert("SecurityID_t_303065632");
    Instrmt_53.add_attribute("Src", "1"); // 1
    Instrmt_53_set.insert("1");
    Instrmt_53.add_attribute("Prod", "4"); // 1
    Instrmt_53_set.insert("4");
    Instrmt_53.add_attribute("ProdCmplx", "ProductComplex_t_1436123868"); // 1
    Instrmt_53_set.insert("ProductComplex_t_1436123868");
    Instrmt_53.add_attribute("SecGrp", "SecurityGroup_t_800573055"); // 1
    Instrmt_53_set.insert("SecurityGroup_t_800573055");
    Instrmt_53.add_attribute("CFI", "CFICode_t_676562759"); // 1
    Instrmt_53_set.insert("CFICode_t_676562759");
    Instrmt_53.add_attribute("SecTyp", "YCD"); // 1
    Instrmt_53_set.insert("YCD");
    Instrmt_53.add_attribute("SubTyp", "SecuritySubType_t_455689241"); // 1
    Instrmt_53_set.insert("SecuritySubType_t_455689241");
    Instrmt_53.add_attribute("MMY", "1100360510"); // 1
    Instrmt_53_set.insert("1100360510");
    Instrmt_53.add_attribute("MatDt", "MaturityDate_t_2037942288"); // 1
    Instrmt_53_set.insert("MaturityDate_t_2037942288");
    Instrmt_53.add_attribute("MatTm", "1046179894"); // 1
    Instrmt_53_set.insert("1046179894");
    Instrmt_53.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_493282448"); // 1
    Instrmt_53_set.insert("SettleOnOpenFlag_t_493282448");
    Instrmt_53.add_attribute("AsgnMeth", "1176840706"); // 1
    Instrmt_53_set.insert("1176840706");
    Instrmt_53.add_attribute("Status", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("CpnPmt", "CouponPaymentDate_t_1213722432"); // 1
    Instrmt_53_set.insert("CouponPaymentDate_t_1213722432");
    Instrmt_53.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_53_set.insert("MM");
    Instrmt_53.add_attribute("Snrty", "SD"); // 1
    Instrmt_53_set.insert("SD");
    Instrmt_53.add_attribute("NotlPctOut", "17036050.040000"); // 1
    Instrmt_53_set.insert("17036050.040000");
    Instrmt_53.add_attribute("OrigNotlPctOut", "2300241.890000"); // 1
    Instrmt_53_set.insert("2300241.890000");
    Instrmt_53.add_attribute("AttchPnt", "1874670.560000"); // 1
    Instrmt_53_set.insert("1874670.560000");
    Instrmt_53.add_attribute("DetchPnt", "1073494.100000"); // 1
    Instrmt_53_set.insert("1073494.100000");
    Instrmt_53.add_attribute("Issued", "IssueDate_t_596935358"); // 1
    Instrmt_53_set.insert("IssueDate_t_596935358");
    Instrmt_53.add_attribute("RepoCollSecTyp", "1685124406"); // 1
    Instrmt_53_set.insert("1685124406");
    Instrmt_53.add_attribute("RepoTrm", "179648816"); // 1
    Instrmt_53_set.insert("179648816");
    Instrmt_53.add_attribute("RepoRt", "14013213.760000"); // 1
    Instrmt_53_set.insert("14013213.760000");
    Instrmt_53.add_attribute("Fctr", "1860958.530000"); // 1
    Instrmt_53_set.insert("1860958.530000");
    Instrmt_53.add_attribute("CrdRtg", "CreditRating_t_346137829"); // 1
    Instrmt_53_set.insert("CreditRating_t_346137829");
    Instrmt_53.add_attribute("Rgstry", "InstrRegistry_t_1885993015"); // 1
    Instrmt_53_set.insert("InstrRegistry_t_1885993015");
    Instrmt_53.add_attribute("IssuCtry", "580173035"); // 1
    Instrmt_53_set.insert("580173035");
    Instrmt_53.add_attribute("StPrv", "StateOrProvinceOfIssue_t_853580002"); // 1
    Instrmt_53_set.insert("StateOrProvinceOfIssue_t_853580002");
    Instrmt_53.add_attribute("Lcl", "LocaleOfIssue_t_790450243"); // 1
    Instrmt_53_set.insert("LocaleOfIssue_t_790450243");
    Instrmt_53.add_attribute("Redeem", "RedemptionDate_t_883238668"); // 1
    Instrmt_53_set.insert("RedemptionDate_t_883238668");
    Instrmt_53.add_attribute("StrkPx", "13555149.520000"); // 1
    Instrmt_53_set.insert("13555149.520000");
    Instrmt_53.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_53_set.insert("GBP");
    Instrmt_53.add_attribute("StrkMult", "86043.590000"); // 1
    Instrmt_53_set.insert("86043.590000");
    Instrmt_53.add_attribute("StrkValu", "18761453.050000"); // 1
    Instrmt_53_set.insert("18761453.050000");
    Instrmt_53.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_53_set.insert("4");
    Instrmt_53.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_53_set.insert("1");
    Instrmt_53.add_attribute("StrkPxBndryPrcsn", "8290221.670000"); // 1
    Instrmt_53_set.insert("8290221.670000");
    Instrmt_53.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_53_set.insert("4");
    Instrmt_53.add_attribute("OptAt", "1510473495"); // 1
    Instrmt_53_set.insert("1510473495");
    Instrmt_53.add_attribute("Mult", "13223046.150000"); // 1
    Instrmt_53_set.insert("13223046.150000");
    Instrmt_53.add_attribute("MultTyp", "0"); // 1
    Instrmt_53_set.insert("0");
    Instrmt_53.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_53_set.insert("4");
    Instrmt_53.add_attribute("MinPxIncr", "3885434.000000"); // 1
    Instrmt_53_set.insert("3885434.000000");
    Instrmt_53.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_209913603"); // 1
    Instrmt_53_set.insert("MinPriceIncrementAmount_t_209913603");
    Instrmt_53.add_attribute("UOM", "Alw"); // 1
    Instrmt_53_set.insert("Alw");
    Instrmt_53.add_attribute("UOMQty", "20921484.040000"); // 1
    Instrmt_53_set.insert("20921484.040000");
    Instrmt_53.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_53_set.insert("oz_tr");
    Instrmt_53.add_attribute("PxUOMQty", "18959384.690000"); // 1
    Instrmt_53_set.insert("18959384.690000");
    Instrmt_53.add_attribute("SettlMeth", "P"); // 1
    Instrmt_53_set.insert("P");
    Instrmt_53.add_attribute("ExerStyle", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("OptPayAmt", "OptPayoutAmount_t_231662983"); // 1
    Instrmt_53_set.insert("OptPayoutAmount_t_231662983");
    Instrmt_53.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_53_set.insert("PCTPAR");
    Instrmt_53.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_53_set.insert("EQTY");
    Instrmt_53.add_attribute("ListMeth", "0"); // 1
    Instrmt_53_set.insert("0");
    Instrmt_53.add_attribute("CapPx", "292202.470000"); // 1
    Instrmt_53_set.insert("292202.470000");
    Instrmt_53.add_attribute("FlrPx", "523644.680000"); // 1
    Instrmt_53_set.insert("523644.680000");
    Instrmt_53.add_attribute("PutCall", "0"); // 1
    Instrmt_53_set.insert("0");
    Instrmt_53.add_attribute("FlexInd", "true"); // 1
    Instrmt_53_set.insert("true");
    Instrmt_53.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_53_set.insert("true");
    Instrmt_53.add_attribute("TmUnit", "H"); // 1
    Instrmt_53_set.insert("H");
    Instrmt_53.add_attribute("CpnRt", "20192530.350000"); // 1
    Instrmt_53_set.insert("20192530.350000");
    Instrmt_53.add_attribute("Exch", "SecurityExchange_t_1107482024"); // 1
    Instrmt_53_set.insert("SecurityExchange_t_1107482024");
    Instrmt_53.add_attribute("PosLmt", "648016477"); // 1
    Instrmt_53_set.insert("648016477");
    Instrmt_53.add_attribute("NTPosLmt", "1747914692"); // 1
    Instrmt_53_set.insert("1747914692");
    Instrmt_53.add_attribute("Issr", "Issuer_t_550299663"); // 1
    Instrmt_53_set.insert("Issuer_t_550299663");
    Instrmt_53.add_attribute("EncIssrLen", "1112310078"); // 1
    Instrmt_53_set.insert("1112310078");
    Instrmt_53.add_attribute("EncIssr", "EncodedIssuer_t_429453212"); // 1
    Instrmt_53_set.insert("EncodedIssuer_t_429453212");
    Instrmt_53.add_attribute("Desc", "SecurityDesc_t_2031059590"); // 1
    Instrmt_53_set.insert("SecurityDesc_t_2031059590");
    Instrmt_53.add_attribute("EncSecDescLen", "475299925"); // 1
    Instrmt_53_set.insert("475299925");
    Instrmt_53.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1751757827"); // 1
    Instrmt_53_set.insert("EncodedSecurityDesc_t_1751757827");
    Instrmt_53.add_attribute("Pool", "Pool_t_393692927"); // 1
    Instrmt_53_set.insert("Pool_t_393692927");
    Instrmt_53.add_attribute("CSetMo", "1441562449"); // 1
    Instrmt_53_set.insert("1441562449");
    Instrmt_53.add_attribute("CPPgm", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("CPRegT", "CPRegType_t_603606531"); // 1
    Instrmt_53_set.insert("CPRegType_t_603606531");
    Instrmt_53.add_attribute("Dated", "DatedDate_t_1002550214"); // 1
    Instrmt_53_set.insert("DatedDate_t_1002550214");
    Instrmt_53.add_attribute("IntAcrl", "InterestAccrualDate_t_2084965984"); // 1
    Instrmt_53_set.insert("InterestAccrualDate_t_2084965984");
    all_values.push_back(Instrmt_53_set);
    all_compo_names.insert("Instrmt_53_set");

    {
      xml_element AID_56{"AID"};
      multiset<string> AID_56_set;
      AID_56.add_attribute("AltID", "SecurityAltID_t_1043544323"); // 2
      AID_56_set.insert("SecurityAltID_t_1043544323");
      AID_56.add_attribute("AltIDSrc", "C"); // 2
      AID_56_set.insert("C");
      all_values.push_back(AID_56_set);
      all_compo_names.insert("AID_56_set");

      Instrmt_53.add_element(AID_56);
    }
    {
      xml_element SecXML_56{"SecXML"};
      multiset<string> SecXML_56_set;
      SecXML_56.add_attribute("Schema", "SecurityXMLSchema_t_2136980151"); // 2
      SecXML_56_set.insert("SecurityXMLSchema_t_2136980151");
      all_values.push_back(SecXML_56_set);
      all_compo_names.insert("SecXML_56_set");

      Instrmt_53.add_element(SecXML_56);
    }
    {
      xml_element Evnt_56{"Evnt"};
      multiset<string> Evnt_56_set;
      Evnt_56.add_attribute("EventTyp", "14"); // 2
      Evnt_56_set.insert("14");
      Evnt_56.add_attribute("Dt", "EventDate_t_37100614"); // 2
      Evnt_56_set.insert("EventDate_t_37100614");
      Evnt_56.add_attribute("Tm", "EventTime_t_221159486"); // 2
      Evnt_56_set.insert("EventTime_t_221159486");
      Evnt_56.add_attribute("Px", "2236447.060000"); // 2
      Evnt_56_set.insert("2236447.060000");
      Evnt_56.add_attribute("Txt", "EventText_t_1656775695"); // 2
      Evnt_56_set.insert("EventText_t_1656775695");
      all_values.push_back(Evnt_56_set);
      all_compo_names.insert("Evnt_56_set");

      Instrmt_53.add_element(Evnt_56);
    }
    {
      xml_element Pty_287{"Pty"};
      multiset<string> Pty_287_set;
      Pty_287.add_attribute("ID", "InstrumentPartyID_t_798960298"); // 2
      Pty_287_set.insert("InstrumentPartyID_t_798960298");
      Pty_287.add_attribute("Src", "I"); // 2
      Pty_287_set.insert("I");
      Pty_287.add_attribute("R", "61"); // 2
      Pty_287_set.insert("61");
      all_values.push_back(Pty_287_set);
      all_compo_names.insert("Pty_287_set");

      {
        xml_element Sub_287{"Sub"};
        multiset<string> Sub_287_set;
        Sub_287.add_attribute("ID", "InstrumentPartySubID_t_82857465"); // 3
        Sub_287_set.insert("InstrumentPartySubID_t_82857465");
        Sub_287.add_attribute("Typ", "10"); // 3
        Sub_287_set.insert("10");
        all_values.push_back(Sub_287_set);
        all_compo_names.insert("Sub_287_set");

        Pty_287.add_element(Sub_287);
      }
      Instrmt_53.add_element(Pty_287);
    }
    {
      xml_element CmplxEvnt_53{"CmplxEvnt"};
      multiset<string> CmplxEvnt_53_set;
      CmplxEvnt_53.add_attribute("Typ", "4"); // 2
      CmplxEvnt_53_set.insert("4");
      CmplxEvnt_53.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_722269583"); // 2
      CmplxEvnt_53_set.insert("ComplexOptPayoutAmount_t_722269583");
      CmplxEvnt_53.add_attribute("Px", "9443048.300000"); // 2
      CmplxEvnt_53_set.insert("9443048.300000");
      CmplxEvnt_53.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_53_set.insert("1");
      CmplxEvnt_53.add_attribute("PxBndryPrcsn", "13702860.610000"); // 2
      CmplxEvnt_53_set.insert("13702860.610000");
      CmplxEvnt_53.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_53_set.insert("1");
      CmplxEvnt_53.add_attribute("Cond", "1"); // 2
      CmplxEvnt_53_set.insert("1");
      all_values.push_back(CmplxEvnt_53_set);
      all_compo_names.insert("CmplxEvnt_53_set");

      {
        xml_element EvntDts_53{"EvntDts"};
        multiset<string> EvntDts_53_set;
        EvntDts_53.add_attribute("StartDt", "ComplexEventStartDate_t_335112491"); // 3
        EvntDts_53_set.insert("ComplexEventStartDate_t_335112491");
        EvntDts_53.add_attribute("EndDt", "ComplexEventEndDate_t_974189087"); // 3
        EvntDts_53_set.insert("ComplexEventEndDate_t_974189087");
        all_values.push_back(EvntDts_53_set);
        all_compo_names.insert("EvntDts_53_set");

        {
          xml_element EvntTms_53{"EvntTms"};
          multiset<string> EvntTms_53_set;
          EvntTms_53.add_attribute("StartTm", "2038617280"); // 4
          EvntTms_53_set.insert("2038617280");
          EvntTms_53.add_attribute("EndTm", "810412416"); // 4
          EvntTms_53_set.insert("810412416");
          all_values.push_back(EvntTms_53_set);
          all_compo_names.insert("EvntTms_53_set");

          EvntDts_53.add_element(EvntTms_53);
        }
        CmplxEvnt_53.add_element(EvntDts_53);
      }
      Instrmt_53.add_element(CmplxEvnt_53);
    }
    elt.add_element(Instrmt_53);
  } // end Instrmt
  { // Undly
    xml_element Undly_73{"Undly"};
    multiset<string> Undly_73_set;
    Undly_73.add_attribute("Sym", "UnderlyingSymbol_t_578463266"); // 1
    Undly_73_set.insert("UnderlyingSymbol_t_578463266");
    Undly_73.add_attribute("Sfx", "WI"); // 1
    Undly_73_set.insert("WI");
    Undly_73.add_attribute("ID", "UnderlyingSecurityID_t_104491217"); // 1
    Undly_73_set.insert("UnderlyingSecurityID_t_104491217");
    Undly_73.add_attribute("Src", "5"); // 1
    Undly_73_set.insert("5");
    Undly_73.add_attribute("Prod", "9"); // 1
    Undly_73_set.insert("9");
    Undly_73.add_attribute("CFI", "UnderlyingCFICode_t_1107041431"); // 1
    Undly_73_set.insert("UnderlyingCFICode_t_1107041431");
    Undly_73.add_attribute("SecTyp", "MT"); // 1
    Undly_73_set.insert("MT");
    Undly_73.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1931977414"); // 1
    Undly_73_set.insert("UnderlyingSecuritySubType_t_1931977414");
    Undly_73.add_attribute("MMY", "1858046466"); // 1
    Undly_73_set.insert("1858046466");
    Undly_73.add_attribute("Mat", "UnderlyingMaturityDate_t_498259685"); // 1
    Undly_73_set.insert("UnderlyingMaturityDate_t_498259685");
    Undly_73.add_attribute("MatTm", "1864911240"); // 1
    Undly_73_set.insert("1864911240");
    Undly_73.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1895147080"); // 1
    Undly_73_set.insert("UnderlyingCouponPaymentDate_t_1895147080");
    Undly_73.add_attribute("RestrctTyp", "XR"); // 1
    Undly_73_set.insert("XR");
    Undly_73.add_attribute("Snrty", "SR"); // 1
    Undly_73_set.insert("SR");
    Undly_73.add_attribute("NotlPctOut", "14044391.270000"); // 1
    Undly_73_set.insert("14044391.270000");
    Undly_73.add_attribute("OrigNotlPctOut", "15183794.690000"); // 1
    Undly_73_set.insert("15183794.690000");
    Undly_73.add_attribute("AttchPnt", "1939372.510000"); // 1
    Undly_73_set.insert("1939372.510000");
    Undly_73.add_attribute("DetchPnt", "9660956.420000"); // 1
    Undly_73_set.insert("9660956.420000");
    Undly_73.add_attribute("Issued", "UnderlyingIssueDate_t_1601236934"); // 1
    Undly_73_set.insert("UnderlyingIssueDate_t_1601236934");
    Undly_73.add_attribute("RepoCollSecTyp", "1266472694"); // 1
    Undly_73_set.insert("1266472694");
    Undly_73.add_attribute("RepoTrm", "1463355293"); // 1
    Undly_73_set.insert("1463355293");
    Undly_73.add_attribute("RepoRt", "1760228.700000"); // 1
    Undly_73_set.insert("1760228.700000");
    Undly_73.add_attribute("Fctr", "632938.770000"); // 1
    Undly_73_set.insert("632938.770000");
    Undly_73.add_attribute("CrdRtg", "UnderlyingCreditRating_t_920613320"); // 1
    Undly_73_set.insert("UnderlyingCreditRating_t_920613320");
    Undly_73.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1546308931"); // 1
    Undly_73_set.insert("UnderlyingInstrRegistry_t_1546308931");
    Undly_73.add_attribute("Ctry", "608029752"); // 1
    Undly_73_set.insert("608029752");
    Undly_73.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_928171010"); // 1
    Undly_73_set.insert("UnderlyingStateOrProvinceOfIssue_t_928171010");
    Undly_73.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1881421422"); // 1
    Undly_73_set.insert("UnderlyingLocaleOfIssue_t_1881421422");
    Undly_73.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1582218839"); // 1
    Undly_73_set.insert("UnderlyingRedemptionDate_t_1582218839");
    Undly_73.add_attribute("StrkPx", "8193046.420000"); // 1
    Undly_73_set.insert("8193046.420000");
    Undly_73.add_attribute("StrkCcy", "CAN"); // 1
    Undly_73_set.insert("CAN");
    Undly_73.add_attribute("OptA", "1104131202"); // 1
    Undly_73_set.insert("1104131202");
    Undly_73.add_attribute("Mult", "6488414.070000"); // 1
    Undly_73_set.insert("6488414.070000");
    Undly_73.add_attribute("MultTyp", "1"); // 1
    Undly_73_set.insert("1");
    Undly_73.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_73_set.insert("2");
    Undly_73.add_attribute("UOM", "oz_tr"); // 1
    Undly_73_set.insert("oz_tr");
    Undly_73.add_attribute("UOMQty", "10932424.850000"); // 1
    Undly_73_set.insert("10932424.850000");
    Undly_73.add_attribute("PxUOM", "USD"); // 1
    Undly_73_set.insert("USD");
    Undly_73.add_attribute("PxUOMQty", "14664456.560000"); // 1
    Undly_73_set.insert("14664456.560000");
    Undly_73.add_attribute("TmUnit", "Yr"); // 1
    Undly_73_set.insert("Yr");
    Undly_73.add_attribute("ExerStyle", "2"); // 1
    Undly_73_set.insert("2");
    Undly_73.add_attribute("CpnRt", "12141090.880000"); // 1
    Undly_73_set.insert("12141090.880000");
    Undly_73.add_attribute("Exch", "UnderlyingSecurityExchange_t_163437693"); // 1
    Undly_73_set.insert("UnderlyingSecurityExchange_t_163437693");
    Undly_73.add_attribute("Issr", "UnderlyingIssuer_t_1435557949"); // 1
    Undly_73_set.insert("UnderlyingIssuer_t_1435557949");
    Undly_73.add_attribute("EncUndIssrLen", "471064568"); // 1
    Undly_73_set.insert("471064568");
    Undly_73.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1681817163"); // 1
    Undly_73_set.insert("EncodedUnderlyingIssuer_t_1681817163");
    Undly_73.add_attribute("Desc", "UnderlyingSecurityDesc_t_1629495201"); // 1
    Undly_73_set.insert("UnderlyingSecurityDesc_t_1629495201");
    Undly_73.add_attribute("EncUndSecDescLen", "1437160210"); // 1
    Undly_73_set.insert("1437160210");
    Undly_73.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1135570449"); // 1
    Undly_73_set.insert("EncodedUnderlyingSecurityDesc_t_1135570449");
    Undly_73.add_attribute("CPPgm", "UnderlyingCPProgram_t_748484247"); // 1
    Undly_73_set.insert("UnderlyingCPProgram_t_748484247");
    Undly_73.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_753031856"); // 1
    Undly_73_set.insert("UnderlyingCPRegType_t_753031856");
    Undly_73.add_attribute("AllocPct", "13115933.190000"); // 1
    Undly_73_set.insert("13115933.190000");
    Undly_73.add_attribute("Ccy", "JPY"); // 1
    Undly_73_set.insert("JPY");
    Undly_73.add_attribute("Qty", "7104186.020000"); // 1
    Undly_73_set.insert("7104186.020000");
    Undly_73.add_attribute("SettlTyp", "2"); // 1
    Undly_73_set.insert("2");
    Undly_73.add_attribute("CashAmt", "UnderlyingCashAmount_t_454332539"); // 1
    Undly_73_set.insert("UnderlyingCashAmount_t_454332539");
    Undly_73.add_attribute("CashTyp", "FIXED"); // 1
    Undly_73_set.insert("FIXED");
    Undly_73.add_attribute("Px", "8545430.670000"); // 1
    Undly_73_set.insert("8545430.670000");
    Undly_73.add_attribute("DirtPx", "12736371.810000"); // 1
    Undly_73_set.insert("12736371.810000");
    Undly_73.add_attribute("EndPx", "9887065.660000"); // 1
    Undly_73_set.insert("9887065.660000");
    Undly_73.add_attribute("StartVal", "UnderlyingStartValue_t_867741525"); // 1
    Undly_73_set.insert("UnderlyingStartValue_t_867741525");
    Undly_73.add_attribute("CurVal", "UnderlyingCurrentValue_t_230284735"); // 1
    Undly_73_set.insert("UnderlyingCurrentValue_t_230284735");
    Undly_73.add_attribute("EndVal", "UnderlyingEndValue_t_1637547973"); // 1
    Undly_73_set.insert("UnderlyingEndValue_t_1637547973");
    Undly_73.add_attribute("AdjQty", "14522208.280000"); // 1
    Undly_73_set.insert("14522208.280000");
    Undly_73.add_attribute("FxRate", "753653.800000"); // 1
    Undly_73_set.insert("753653.800000");
    Undly_73.add_attribute("FxRateCalc", "D"); // 1
    Undly_73_set.insert("D");
    Undly_73.add_attribute("CapValu", "UnderlyingCapValue_t_397979666"); // 1
    Undly_73_set.insert("UnderlyingCapValue_t_397979666");
    Undly_73.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1852423438"); // 1
    Undly_73_set.insert("UnderlyingSettlMethod_t_1852423438");
    Undly_73.add_attribute("PutCall", "564909171"); // 1
    Undly_73_set.insert("564909171");
    all_values.push_back(Undly_73_set);
    all_compo_names.insert("Undly_73_set");

    {
      xml_element UndAID_73{"UndAID"};
      multiset<string> UndAID_73_set;
      UndAID_73.add_attribute("AltID", "UnderlyingSecurityAltID_t_1989481836"); // 2
      UndAID_73_set.insert("UnderlyingSecurityAltID_t_1989481836");
      UndAID_73.add_attribute("AltIDSrc", "6"); // 2
      UndAID_73_set.insert("6");
      all_values.push_back(UndAID_73_set);
      all_compo_names.insert("UndAID_73_set");

      Undly_73.add_element(UndAID_73);
    }
    {
      xml_element Stip_111{"Stip"};
      multiset<string> Stip_111_set;
      Stip_111.add_attribute("Typ", "LOTVAR"); // 2
      Stip_111_set.insert("LOTVAR");
      Stip_111.add_attribute("Val", "UnderlyingStipValue_t_5435882"); // 2
      Stip_111_set.insert("UnderlyingStipValue_t_5435882");
      all_values.push_back(Stip_111_set);
      all_compo_names.insert("Stip_111_set");

      Undly_73.add_element(Stip_111);
    }
    {
      xml_element Pty_288{"Pty"};
      multiset<string> Pty_288_set;
      Pty_288.add_attribute("ID", "UnderlyingInstrumentPartyID_t_487499743"); // 2
      Pty_288_set.insert("UnderlyingInstrumentPartyID_t_487499743");
      Pty_288.add_attribute("Src", "9"); // 2
      Pty_288_set.insert("9");
      Pty_288.add_attribute("R", "67"); // 2
      Pty_288_set.insert("67");
      all_values.push_back(Pty_288_set);
      all_compo_names.insert("Pty_288_set");

      {
        xml_element Sub_288{"Sub"};
        multiset<string> Sub_288_set;
        Sub_288.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2116994944"); // 3
        Sub_288_set.insert("UnderlyingInstrumentPartySubID_t_2116994944");
        Sub_288.add_attribute("Typ", "23"); // 3
        Sub_288_set.insert("23");
        all_values.push_back(Sub_288_set);
        all_compo_names.insert("Sub_288_set");

        Pty_288.add_element(Sub_288);
      }
      Undly_73.add_element(Pty_288);
    }
    elt.add_element(Undly_73);
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
