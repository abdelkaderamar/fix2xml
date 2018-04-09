#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderStatusRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1632732984"); // 0
  OrderStatusRequest_message_t_0.insert("OrderID_t_1632732984");
  elt.add_attribute("ID", "ClOrdID_t_1589081123"); // 0
  OrderStatusRequest_message_t_0.insert("ClOrdID_t_1589081123");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_1924583799"); // 0
  OrderStatusRequest_message_t_0.insert("SecondaryClOrdID_t_1924583799");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1650096495"); // 0
  OrderStatusRequest_message_t_0.insert("ClOrdLinkID_t_1650096495");
  elt.add_attribute("StatReqID", "OrdStatusReqID_t_1872521281"); // 0
  OrderStatusRequest_message_t_0.insert("OrdStatusReqID_t_1872521281");
  elt.add_attribute("Acct", "Account_t_1008265478"); // 0
  OrderStatusRequest_message_t_0.insert("Account_t_1008265478");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  OrderStatusRequest_message_t_0.insert("3");
  elt.add_attribute("Side", "3"); // 0
  OrderStatusRequest_message_t_0.insert("3");
  all_values.push_back(OrderStatusRequest_message_t_0);
  all_compo_names.insert("OrderStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_64{"Hdr"};
    multiset<string> Hdr_64_set;
    Hdr_64.add_attribute("SeqNum", "419727496"); // 1
    Hdr_64_set.insert("419727496");
    Hdr_64.add_attribute("SID", "SenderCompID_t_1162301122"); // 1
    Hdr_64_set.insert("SenderCompID_t_1162301122");
    Hdr_64.add_attribute("TID", "TargetCompID_t_368195399"); // 1
    Hdr_64_set.insert("TargetCompID_t_368195399");
    Hdr_64.add_attribute("OBID", "OnBehalfOfCompID_t_35301382"); // 1
    Hdr_64_set.insert("OnBehalfOfCompID_t_35301382");
    Hdr_64.add_attribute("D2ID", "DeliverToCompID_t_459038731"); // 1
    Hdr_64_set.insert("DeliverToCompID_t_459038731");
    Hdr_64.add_attribute("SSub", "SenderSubID_t_1453531659"); // 1
    Hdr_64_set.insert("SenderSubID_t_1453531659");
    Hdr_64.add_attribute("SLoc", "SenderLocationID_t_210373716"); // 1
    Hdr_64_set.insert("SenderLocationID_t_210373716");
    Hdr_64.add_attribute("TSub", "TargetSubID_t_1214755253"); // 1
    Hdr_64_set.insert("TargetSubID_t_1214755253");
    Hdr_64.add_attribute("TLoc", "TargetLocationID_t_102371803"); // 1
    Hdr_64_set.insert("TargetLocationID_t_102371803");
    Hdr_64.add_attribute("OBSub", "OnBehalfOfSubID_t_473560384"); // 1
    Hdr_64_set.insert("OnBehalfOfSubID_t_473560384");
    Hdr_64.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1390343948"); // 1
    Hdr_64_set.insert("OnBehalfOfLocationID_t_1390343948");
    Hdr_64.add_attribute("D2Sub", "DeliverToSubID_t_369185138"); // 1
    Hdr_64_set.insert("DeliverToSubID_t_369185138");
    Hdr_64.add_attribute("D2Loc", "DeliverToLocationID_t_2073616145"); // 1
    Hdr_64_set.insert("DeliverToLocationID_t_2073616145");
    Hdr_64.add_attribute("PosDup", "N"); // 1
    Hdr_64_set.insert("N");
    Hdr_64.add_attribute("PosRsnd", "Y"); // 1
    Hdr_64_set.insert("Y");
    Hdr_64.add_attribute("Snt", "SendingTime_t_808063008"); // 1
    Hdr_64_set.insert("SendingTime_t_808063008");
    Hdr_64.add_attribute("OrigSnt", "OrigSendingTime_t_1720903431"); // 1
    Hdr_64_set.insert("OrigSendingTime_t_1720903431");
    Hdr_64.add_attribute("MsgEncd", "MessageEncoding_t_524434499"); // 1
    Hdr_64_set.insert("MessageEncoding_t_524434499");
    all_values.push_back(Hdr_64_set);
    all_compo_names.insert("Hdr_64_set");

    {
      xml_element Hop_64{"Hop"};
      multiset<string> Hop_64_set;
      Hop_64.add_attribute("ID", "HopCompID_t_1570034043"); // 2
      Hop_64_set.insert("HopCompID_t_1570034043");
      Hop_64.add_attribute("Ref", "1853758700"); // 2
      Hop_64_set.insert("1853758700");
      Hop_64.add_attribute("Snt", "HopSendingTime_t_296612098"); // 2
      Hop_64_set.insert("HopSendingTime_t_296612098");
      all_values.push_back(Hop_64_set);
      all_compo_names.insert("Hop_64_set");

      Hdr_64.add_element(Hop_64);
    }
    elt.add_element(Hdr_64);
  } // end Hdr
  { // Pty
    xml_element Pty_269{"Pty"};
    multiset<string> Pty_269_set;
    Pty_269.add_attribute("ID", "PartyID_t_1943306696"); // 1
    Pty_269_set.insert("PartyID_t_1943306696");
    Pty_269.add_attribute("Src", "H"); // 1
    Pty_269_set.insert("H");
    Pty_269.add_attribute("R", "56"); // 1
    Pty_269_set.insert("56");
    all_values.push_back(Pty_269_set);
    all_compo_names.insert("Pty_269_set");

    {
      xml_element Sub_269{"Sub"};
      multiset<string> Sub_269_set;
      Sub_269.add_attribute("ID", "PartySubID_t_1720406847"); // 2
      Sub_269_set.insert("PartySubID_t_1720406847");
      Sub_269.add_attribute("Typ", "25"); // 2
      Sub_269_set.insert("25");
      all_values.push_back(Sub_269_set);
      all_compo_names.insert("Sub_269_set");

      Pty_269.add_element(Sub_269);
    }
    elt.add_element(Pty_269);
  } // end Pty
  { // Pty
    xml_element Pty_270{"Pty"};
    multiset<string> Pty_270_set;
    Pty_270.add_attribute("ID", "PartyID_t_1038318550"); // 1
    Pty_270_set.insert("PartyID_t_1038318550");
    Pty_270.add_attribute("Src", "G"); // 1
    Pty_270_set.insert("G");
    Pty_270.add_attribute("R", "32"); // 1
    Pty_270_set.insert("32");
    all_values.push_back(Pty_270_set);
    all_compo_names.insert("Pty_270_set");

    {
      xml_element Sub_270{"Sub"};
      multiset<string> Sub_270_set;
      Sub_270.add_attribute("ID", "PartySubID_t_1820951224"); // 2
      Sub_270_set.insert("PartySubID_t_1820951224");
      Sub_270.add_attribute("Typ", "13"); // 2
      Sub_270_set.insert("13");
      all_values.push_back(Sub_270_set);
      all_compo_names.insert("Sub_270_set");

      Pty_270.add_element(Sub_270);
    }
    elt.add_element(Pty_270);
  } // end Pty
  { // Pty
    xml_element Pty_271{"Pty"};
    multiset<string> Pty_271_set;
    Pty_271.add_attribute("ID", "PartyID_t_424477358"); // 1
    Pty_271_set.insert("PartyID_t_424477358");
    Pty_271.add_attribute("Src", "F"); // 1
    Pty_271_set.insert("F");
    Pty_271.add_attribute("R", "32"); // 1
    Pty_271_set.insert("32");
    all_values.push_back(Pty_271_set);
    all_compo_names.insert("Pty_271_set");

    {
      xml_element Sub_271{"Sub"};
      multiset<string> Sub_271_set;
      Sub_271.add_attribute("ID", "PartySubID_t_883516090"); // 2
      Sub_271_set.insert("PartySubID_t_883516090");
      Sub_271.add_attribute("Typ", "2"); // 2
      Sub_271_set.insert("2");
      all_values.push_back(Sub_271_set);
      all_compo_names.insert("Sub_271_set");

      Pty_271.add_element(Sub_271);
    }
    elt.add_element(Pty_271);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_52{"Instrmt"};
    multiset<string> Instrmt_52_set;
    Instrmt_52.add_attribute("Sym", "Symbol_t_1246591272"); // 1
    Instrmt_52_set.insert("Symbol_t_1246591272");
    Instrmt_52.add_attribute("Sfx", "WI"); // 1
    Instrmt_52_set.insert("WI");
    Instrmt_52.add_attribute("ID", "SecurityID_t_1597566439"); // 1
    Instrmt_52_set.insert("SecurityID_t_1597566439");
    Instrmt_52.add_attribute("Src", "G"); // 1
    Instrmt_52_set.insert("G");
    Instrmt_52.add_attribute("Prod", "4"); // 1
    Instrmt_52_set.insert("4");
    Instrmt_52.add_attribute("ProdCmplx", "ProductComplex_t_1966751577"); // 1
    Instrmt_52_set.insert("ProductComplex_t_1966751577");
    Instrmt_52.add_attribute("SecGrp", "SecurityGroup_t_1646284154"); // 1
    Instrmt_52_set.insert("SecurityGroup_t_1646284154");
    Instrmt_52.add_attribute("CFI", "CFICode_t_475854503"); // 1
    Instrmt_52_set.insert("CFICode_t_475854503");
    Instrmt_52.add_attribute("SecTyp", "USTB"); // 1
    Instrmt_52_set.insert("USTB");
    Instrmt_52.add_attribute("SubTyp", "SecuritySubType_t_306863514"); // 1
    Instrmt_52_set.insert("SecuritySubType_t_306863514");
    Instrmt_52.add_attribute("MMY", "49274286"); // 1
    Instrmt_52_set.insert("49274286");
    Instrmt_52.add_attribute("MatDt", "MaturityDate_t_1913570706"); // 1
    Instrmt_52_set.insert("MaturityDate_t_1913570706");
    Instrmt_52.add_attribute("MatTm", "1876897557"); // 1
    Instrmt_52_set.insert("1876897557");
    Instrmt_52.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1903032987"); // 1
    Instrmt_52_set.insert("SettleOnOpenFlag_t_1903032987");
    Instrmt_52.add_attribute("AsgnMeth", "62699156"); // 1
    Instrmt_52_set.insert("62699156");
    Instrmt_52.add_attribute("Status", "1"); // 1
    Instrmt_52_set.insert("1");
    Instrmt_52.add_attribute("CpnPmt", "CouponPaymentDate_t_1698856035"); // 1
    Instrmt_52_set.insert("CouponPaymentDate_t_1698856035");
    Instrmt_52.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_52_set.insert("MM");
    Instrmt_52.add_attribute("Snrty", "SR"); // 1
    Instrmt_52_set.insert("SR");
    Instrmt_52.add_attribute("NotlPctOut", "12717792.340000"); // 1
    Instrmt_52_set.insert("12717792.340000");
    Instrmt_52.add_attribute("OrigNotlPctOut", "12765185.190000"); // 1
    Instrmt_52_set.insert("12765185.190000");
    Instrmt_52.add_attribute("AttchPnt", "18052131.720000"); // 1
    Instrmt_52_set.insert("18052131.720000");
    Instrmt_52.add_attribute("DetchPnt", "18529679.110000"); // 1
    Instrmt_52_set.insert("18529679.110000");
    Instrmt_52.add_attribute("Issued", "IssueDate_t_538694755"); // 1
    Instrmt_52_set.insert("IssueDate_t_538694755");
    Instrmt_52.add_attribute("RepoCollSecTyp", "1478680748"); // 1
    Instrmt_52_set.insert("1478680748");
    Instrmt_52.add_attribute("RepoTrm", "706400437"); // 1
    Instrmt_52_set.insert("706400437");
    Instrmt_52.add_attribute("RepoRt", "9631721.140000"); // 1
    Instrmt_52_set.insert("9631721.140000");
    Instrmt_52.add_attribute("Fctr", "15203437.240000"); // 1
    Instrmt_52_set.insert("15203437.240000");
    Instrmt_52.add_attribute("CrdRtg", "CreditRating_t_1742617993"); // 1
    Instrmt_52_set.insert("CreditRating_t_1742617993");
    Instrmt_52.add_attribute("Rgstry", "InstrRegistry_t_1846688204"); // 1
    Instrmt_52_set.insert("InstrRegistry_t_1846688204");
    Instrmt_52.add_attribute("IssuCtry", "868054712"); // 1
    Instrmt_52_set.insert("868054712");
    Instrmt_52.add_attribute("StPrv", "StateOrProvinceOfIssue_t_841725617"); // 1
    Instrmt_52_set.insert("StateOrProvinceOfIssue_t_841725617");
    Instrmt_52.add_attribute("Lcl", "LocaleOfIssue_t_1797475899"); // 1
    Instrmt_52_set.insert("LocaleOfIssue_t_1797475899");
    Instrmt_52.add_attribute("Redeem", "RedemptionDate_t_318137503"); // 1
    Instrmt_52_set.insert("RedemptionDate_t_318137503");
    Instrmt_52.add_attribute("StrkPx", "4143936.260000"); // 1
    Instrmt_52_set.insert("4143936.260000");
    Instrmt_52.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_52_set.insert("GBP");
    Instrmt_52.add_attribute("StrkMult", "20606777.800000"); // 1
    Instrmt_52_set.insert("20606777.800000");
    Instrmt_52.add_attribute("StrkValu", "14669783.980000"); // 1
    Instrmt_52_set.insert("14669783.980000");
    Instrmt_52.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_52_set.insert("4");
    Instrmt_52.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_52_set.insert("3");
    Instrmt_52.add_attribute("StrkPxBndryPrcsn", "15162526.850000"); // 1
    Instrmt_52_set.insert("15162526.850000");
    Instrmt_52.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_52_set.insert("2");
    Instrmt_52.add_attribute("OptAt", "2096955204"); // 1
    Instrmt_52_set.insert("2096955204");
    Instrmt_52.add_attribute("Mult", "12718020.240000"); // 1
    Instrmt_52_set.insert("12718020.240000");
    Instrmt_52.add_attribute("MultTyp", "0"); // 1
    Instrmt_52_set.insert("0");
    Instrmt_52.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_52_set.insert("3");
    Instrmt_52.add_attribute("MinPxIncr", "8231744.110000"); // 1
    Instrmt_52_set.insert("8231744.110000");
    Instrmt_52.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1199888443"); // 1
    Instrmt_52_set.insert("MinPriceIncrementAmount_t_1199888443");
    Instrmt_52.add_attribute("UOM", "lbs"); // 1
    Instrmt_52_set.insert("lbs");
    Instrmt_52.add_attribute("UOMQty", "20949536.450000"); // 1
    Instrmt_52_set.insert("20949536.450000");
    Instrmt_52.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_52_set.insert("MMbbl");
    Instrmt_52.add_attribute("PxUOMQty", "19751930.540000"); // 1
    Instrmt_52_set.insert("19751930.540000");
    Instrmt_52.add_attribute("SettlMeth", "C"); // 1
    Instrmt_52_set.insert("C");
    Instrmt_52.add_attribute("ExerStyle", "1"); // 1
    Instrmt_52_set.insert("1");
    Instrmt_52.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_52_set.insert("3");
    Instrmt_52.add_attribute("OptPayAmt", "OptPayoutAmount_t_359354697"); // 1
    Instrmt_52_set.insert("OptPayoutAmount_t_359354697");
    Instrmt_52.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_52_set.insert("STD");
    Instrmt_52.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_52_set.insert("FUT");
    Instrmt_52.add_attribute("ListMeth", "0"); // 1
    Instrmt_52_set.insert("0");
    Instrmt_52.add_attribute("CapPx", "15299947.400000"); // 1
    Instrmt_52_set.insert("15299947.400000");
    Instrmt_52.add_attribute("FlrPx", "15473049.430000"); // 1
    Instrmt_52_set.insert("15473049.430000");
    Instrmt_52.add_attribute("PutCall", "0"); // 1
    Instrmt_52_set.insert("0");
    Instrmt_52.add_attribute("FlexInd", "true"); // 1
    Instrmt_52_set.insert("true");
    Instrmt_52.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_52_set.insert("true");
    Instrmt_52.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_52_set.insert("Yr");
    Instrmt_52.add_attribute("CpnRt", "236272.390000"); // 1
    Instrmt_52_set.insert("236272.390000");
    Instrmt_52.add_attribute("Exch", "SecurityExchange_t_2002847878"); // 1
    Instrmt_52_set.insert("SecurityExchange_t_2002847878");
    Instrmt_52.add_attribute("PosLmt", "1123802419"); // 1
    Instrmt_52_set.insert("1123802419");
    Instrmt_52.add_attribute("NTPosLmt", "1490605637"); // 1
    Instrmt_52_set.insert("1490605637");
    Instrmt_52.add_attribute("Issr", "Issuer_t_1381905870"); // 1
    Instrmt_52_set.insert("Issuer_t_1381905870");
    Instrmt_52.add_attribute("EncIssrLen", "1343860066"); // 1
    Instrmt_52_set.insert("1343860066");
    Instrmt_52.add_attribute("EncIssr", "EncodedIssuer_t_859374674"); // 1
    Instrmt_52_set.insert("EncodedIssuer_t_859374674");
    Instrmt_52.add_attribute("Desc", "SecurityDesc_t_527050919"); // 1
    Instrmt_52_set.insert("SecurityDesc_t_527050919");
    Instrmt_52.add_attribute("EncSecDescLen", "1293331622"); // 1
    Instrmt_52_set.insert("1293331622");
    Instrmt_52.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2131176698"); // 1
    Instrmt_52_set.insert("EncodedSecurityDesc_t_2131176698");
    Instrmt_52.add_attribute("Pool", "Pool_t_1882378773"); // 1
    Instrmt_52_set.insert("Pool_t_1882378773");
    Instrmt_52.add_attribute("CSetMo", "696416883"); // 1
    Instrmt_52_set.insert("696416883");
    Instrmt_52.add_attribute("CPPgm", "2"); // 1
    Instrmt_52_set.insert("2");
    Instrmt_52.add_attribute("CPRegT", "CPRegType_t_934783568"); // 1
    Instrmt_52_set.insert("CPRegType_t_934783568");
    Instrmt_52.add_attribute("Dated", "DatedDate_t_866396765"); // 1
    Instrmt_52_set.insert("DatedDate_t_866396765");
    Instrmt_52.add_attribute("IntAcrl", "InterestAccrualDate_t_754337458"); // 1
    Instrmt_52_set.insert("InterestAccrualDate_t_754337458");
    all_values.push_back(Instrmt_52_set);
    all_compo_names.insert("Instrmt_52_set");

    {
      xml_element AID_55{"AID"};
      multiset<string> AID_55_set;
      AID_55.add_attribute("AltID", "SecurityAltID_t_1263706883"); // 2
      AID_55_set.insert("SecurityAltID_t_1263706883");
      AID_55.add_attribute("AltIDSrc", "C"); // 2
      AID_55_set.insert("C");
      all_values.push_back(AID_55_set);
      all_compo_names.insert("AID_55_set");

      Instrmt_52.add_element(AID_55);
    }
    {
      xml_element SecXML_55{"SecXML"};
      multiset<string> SecXML_55_set;
      SecXML_55.add_attribute("Schema", "SecurityXMLSchema_t_407291719"); // 2
      SecXML_55_set.insert("SecurityXMLSchema_t_407291719");
      all_values.push_back(SecXML_55_set);
      all_compo_names.insert("SecXML_55_set");

      Instrmt_52.add_element(SecXML_55);
    }
    {
      xml_element Evnt_55{"Evnt"};
      multiset<string> Evnt_55_set;
      Evnt_55.add_attribute("EventTyp", "14"); // 2
      Evnt_55_set.insert("14");
      Evnt_55.add_attribute("Dt", "EventDate_t_2000496325"); // 2
      Evnt_55_set.insert("EventDate_t_2000496325");
      Evnt_55.add_attribute("Tm", "EventTime_t_766646416"); // 2
      Evnt_55_set.insert("EventTime_t_766646416");
      Evnt_55.add_attribute("Px", "18146314.900000"); // 2
      Evnt_55_set.insert("18146314.900000");
      Evnt_55.add_attribute("Txt", "EventText_t_532262908"); // 2
      Evnt_55_set.insert("EventText_t_532262908");
      all_values.push_back(Evnt_55_set);
      all_compo_names.insert("Evnt_55_set");

      Instrmt_52.add_element(Evnt_55);
    }
    {
      xml_element Pty_272{"Pty"};
      multiset<string> Pty_272_set;
      Pty_272.add_attribute("ID", "InstrumentPartyID_t_721135459"); // 2
      Pty_272_set.insert("InstrumentPartyID_t_721135459");
      Pty_272.add_attribute("Src", "6"); // 2
      Pty_272_set.insert("6");
      Pty_272.add_attribute("R", "2"); // 2
      Pty_272_set.insert("2");
      all_values.push_back(Pty_272_set);
      all_compo_names.insert("Pty_272_set");

      {
        xml_element Sub_272{"Sub"};
        multiset<string> Sub_272_set;
        Sub_272.add_attribute("ID", "InstrumentPartySubID_t_1517350119"); // 3
        Sub_272_set.insert("InstrumentPartySubID_t_1517350119");
        Sub_272.add_attribute("Typ", "24"); // 3
        Sub_272_set.insert("24");
        all_values.push_back(Sub_272_set);
        all_compo_names.insert("Sub_272_set");

        Pty_272.add_element(Sub_272);
      }
      Instrmt_52.add_element(Pty_272);
    }
    {
      xml_element CmplxEvnt_52{"CmplxEvnt"};
      multiset<string> CmplxEvnt_52_set;
      CmplxEvnt_52.add_attribute("Typ", "3"); // 2
      CmplxEvnt_52_set.insert("3");
      CmplxEvnt_52.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_580474757"); // 2
      CmplxEvnt_52_set.insert("ComplexOptPayoutAmount_t_580474757");
      CmplxEvnt_52.add_attribute("Px", "2532731.660000"); // 2
      CmplxEvnt_52_set.insert("2532731.660000");
      CmplxEvnt_52.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_52_set.insert("1");
      CmplxEvnt_52.add_attribute("PxBndryPrcsn", "17042771.760000"); // 2
      CmplxEvnt_52_set.insert("17042771.760000");
      CmplxEvnt_52.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_52_set.insert("2");
      CmplxEvnt_52.add_attribute("Cond", "1"); // 2
      CmplxEvnt_52_set.insert("1");
      all_values.push_back(CmplxEvnt_52_set);
      all_compo_names.insert("CmplxEvnt_52_set");

      {
        xml_element EvntDts_52{"EvntDts"};
        multiset<string> EvntDts_52_set;
        EvntDts_52.add_attribute("StartDt", "ComplexEventStartDate_t_900653594"); // 3
        EvntDts_52_set.insert("ComplexEventStartDate_t_900653594");
        EvntDts_52.add_attribute("EndDt", "ComplexEventEndDate_t_455769830"); // 3
        EvntDts_52_set.insert("ComplexEventEndDate_t_455769830");
        all_values.push_back(EvntDts_52_set);
        all_compo_names.insert("EvntDts_52_set");

        {
          xml_element EvntTms_52{"EvntTms"};
          multiset<string> EvntTms_52_set;
          EvntTms_52.add_attribute("StartTm", "1414364021"); // 4
          EvntTms_52_set.insert("1414364021");
          EvntTms_52.add_attribute("EndTm", "46501569"); // 4
          EvntTms_52_set.insert("46501569");
          all_values.push_back(EvntTms_52_set);
          all_compo_names.insert("EvntTms_52_set");

          EvntDts_52.add_element(EvntTms_52);
        }
        CmplxEvnt_52.add_element(EvntDts_52);
      }
      Instrmt_52.add_element(CmplxEvnt_52);
    }
    elt.add_element(Instrmt_52);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_15{"FinDetls"};
    multiset<string> FinDetls_15_set;
    FinDetls_15.add_attribute("AgmtDesc", "AgreementDesc_t_439462880"); // 1
    FinDetls_15_set.insert("AgreementDesc_t_439462880");
    FinDetls_15.add_attribute("AgmtID", "AgreementID_t_1149259146"); // 1
    FinDetls_15_set.insert("AgreementID_t_1149259146");
    FinDetls_15.add_attribute("AgmtDt", "AgreementDate_t_742918452"); // 1
    FinDetls_15_set.insert("AgreementDate_t_742918452");
    FinDetls_15.add_attribute("AgmtCcy", "CHF"); // 1
    FinDetls_15_set.insert("CHF");
    FinDetls_15.add_attribute("TrmTyp", "2"); // 1
    FinDetls_15_set.insert("2");
    FinDetls_15.add_attribute("StartDt", "StartDate_t_2000667800"); // 1
    FinDetls_15_set.insert("StartDate_t_2000667800");
    FinDetls_15.add_attribute("EndDt", "EndDate_t_1200265950"); // 1
    FinDetls_15_set.insert("EndDate_t_1200265950");
    FinDetls_15.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_15_set.insert("0");
    FinDetls_15.add_attribute("MgnRatio", "2604758.710000"); // 1
    FinDetls_15_set.insert("2604758.710000");
    all_values.push_back(FinDetls_15_set);
    all_compo_names.insert("FinDetls_15_set");

    elt.add_element(FinDetls_15);
  } // end FinDetls
  { // Undly
    xml_element Undly_69{"Undly"};
    multiset<string> Undly_69_set;
    Undly_69.add_attribute("Sym", "UnderlyingSymbol_t_8950417"); // 1
    Undly_69_set.insert("UnderlyingSymbol_t_8950417");
    Undly_69.add_attribute("Sfx", "CD"); // 1
    Undly_69_set.insert("CD");
    Undly_69.add_attribute("ID", "UnderlyingSecurityID_t_851255099"); // 1
    Undly_69_set.insert("UnderlyingSecurityID_t_851255099");
    Undly_69.add_attribute("Src", "H"); // 1
    Undly_69_set.insert("H");
    Undly_69.add_attribute("Prod", "11"); // 1
    Undly_69_set.insert("11");
    Undly_69.add_attribute("CFI", "UnderlyingCFICode_t_2048397682"); // 1
    Undly_69_set.insert("UnderlyingCFICode_t_2048397682");
    Undly_69.add_attribute("SecTyp", "AMENDED"); // 1
    Undly_69_set.insert("AMENDED");
    Undly_69.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1118124218"); // 1
    Undly_69_set.insert("UnderlyingSecuritySubType_t_1118124218");
    Undly_69.add_attribute("MMY", "130559961"); // 1
    Undly_69_set.insert("130559961");
    Undly_69.add_attribute("Mat", "UnderlyingMaturityDate_t_123340531"); // 1
    Undly_69_set.insert("UnderlyingMaturityDate_t_123340531");
    Undly_69.add_attribute("MatTm", "1698598975"); // 1
    Undly_69_set.insert("1698598975");
    Undly_69.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_383833127"); // 1
    Undly_69_set.insert("UnderlyingCouponPaymentDate_t_383833127");
    Undly_69.add_attribute("RestrctTyp", "XR"); // 1
    Undly_69_set.insert("XR");
    Undly_69.add_attribute("Snrty", "SD"); // 1
    Undly_69_set.insert("SD");
    Undly_69.add_attribute("NotlPctOut", "21277119.300000"); // 1
    Undly_69_set.insert("21277119.300000");
    Undly_69.add_attribute("OrigNotlPctOut", "5160608.650000"); // 1
    Undly_69_set.insert("5160608.650000");
    Undly_69.add_attribute("AttchPnt", "85624.500000"); // 1
    Undly_69_set.insert("85624.500000");
    Undly_69.add_attribute("DetchPnt", "4359981.120000"); // 1
    Undly_69_set.insert("4359981.120000");
    Undly_69.add_attribute("Issued", "UnderlyingIssueDate_t_1930424886"); // 1
    Undly_69_set.insert("UnderlyingIssueDate_t_1930424886");
    Undly_69.add_attribute("RepoCollSecTyp", "55064019"); // 1
    Undly_69_set.insert("55064019");
    Undly_69.add_attribute("RepoTrm", "875460993"); // 1
    Undly_69_set.insert("875460993");
    Undly_69.add_attribute("RepoRt", "9322003.850000"); // 1
    Undly_69_set.insert("9322003.850000");
    Undly_69.add_attribute("Fctr", "7979824.710000"); // 1
    Undly_69_set.insert("7979824.710000");
    Undly_69.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2121791335"); // 1
    Undly_69_set.insert("UnderlyingCreditRating_t_2121791335");
    Undly_69.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_868759452"); // 1
    Undly_69_set.insert("UnderlyingInstrRegistry_t_868759452");
    Undly_69.add_attribute("Ctry", "259814040"); // 1
    Undly_69_set.insert("259814040");
    Undly_69.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1974975487"); // 1
    Undly_69_set.insert("UnderlyingStateOrProvinceOfIssue_t_1974975487");
    Undly_69.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2069025402"); // 1
    Undly_69_set.insert("UnderlyingLocaleOfIssue_t_2069025402");
    Undly_69.add_attribute("Redeem", "UnderlyingRedemptionDate_t_415751780"); // 1
    Undly_69_set.insert("UnderlyingRedemptionDate_t_415751780");
    Undly_69.add_attribute("StrkPx", "879677.110000"); // 1
    Undly_69_set.insert("879677.110000");
    Undly_69.add_attribute("StrkCcy", "JPY"); // 1
    Undly_69_set.insert("JPY");
    Undly_69.add_attribute("OptA", "1115089999"); // 1
    Undly_69_set.insert("1115089999");
    Undly_69.add_attribute("Mult", "19569041.100000"); // 1
    Undly_69_set.insert("19569041.100000");
    Undly_69.add_attribute("MultTyp", "1"); // 1
    Undly_69_set.insert("1");
    Undly_69.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_69_set.insert("3");
    Undly_69.add_attribute("UOM", "MWh"); // 1
    Undly_69_set.insert("MWh");
    Undly_69.add_attribute("UOMQty", "14392130.530000"); // 1
    Undly_69_set.insert("14392130.530000");
    Undly_69.add_attribute("PxUOM", "t"); // 1
    Undly_69_set.insert("t");
    Undly_69.add_attribute("PxUOMQty", "19883781.050000"); // 1
    Undly_69_set.insert("19883781.050000");
    Undly_69.add_attribute("TmUnit", "Wk"); // 1
    Undly_69_set.insert("Wk");
    Undly_69.add_attribute("ExerStyle", "1"); // 1
    Undly_69_set.insert("1");
    Undly_69.add_attribute("CpnRt", "2247275.840000"); // 1
    Undly_69_set.insert("2247275.840000");
    Undly_69.add_attribute("Exch", "UnderlyingSecurityExchange_t_1191301347"); // 1
    Undly_69_set.insert("UnderlyingSecurityExchange_t_1191301347");
    Undly_69.add_attribute("Issr", "UnderlyingIssuer_t_493012499"); // 1
    Undly_69_set.insert("UnderlyingIssuer_t_493012499");
    Undly_69.add_attribute("EncUndIssrLen", "204955866"); // 1
    Undly_69_set.insert("204955866");
    Undly_69.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1707362212"); // 1
    Undly_69_set.insert("EncodedUnderlyingIssuer_t_1707362212");
    Undly_69.add_attribute("Desc", "UnderlyingSecurityDesc_t_501574950"); // 1
    Undly_69_set.insert("UnderlyingSecurityDesc_t_501574950");
    Undly_69.add_attribute("EncUndSecDescLen", "640953979"); // 1
    Undly_69_set.insert("640953979");
    Undly_69.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1490303451"); // 1
    Undly_69_set.insert("EncodedUnderlyingSecurityDesc_t_1490303451");
    Undly_69.add_attribute("CPPgm", "UnderlyingCPProgram_t_556638969"); // 1
    Undly_69_set.insert("UnderlyingCPProgram_t_556638969");
    Undly_69.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1516414972"); // 1
    Undly_69_set.insert("UnderlyingCPRegType_t_1516414972");
    Undly_69.add_attribute("AllocPct", "2750201.880000"); // 1
    Undly_69_set.insert("2750201.880000");
    Undly_69.add_attribute("Ccy", "CHF"); // 1
    Undly_69_set.insert("CHF");
    Undly_69.add_attribute("Qty", "11437796.400000"); // 1
    Undly_69_set.insert("11437796.400000");
    Undly_69.add_attribute("SettlTyp", "4"); // 1
    Undly_69_set.insert("4");
    Undly_69.add_attribute("CashAmt", "UnderlyingCashAmount_t_1318214498"); // 1
    Undly_69_set.insert("UnderlyingCashAmount_t_1318214498");
    Undly_69.add_attribute("CashTyp", "FIXED"); // 1
    Undly_69_set.insert("FIXED");
    Undly_69.add_attribute("Px", "20301872.620000"); // 1
    Undly_69_set.insert("20301872.620000");
    Undly_69.add_attribute("DirtPx", "14061822.090000"); // 1
    Undly_69_set.insert("14061822.090000");
    Undly_69.add_attribute("EndPx", "234867.570000"); // 1
    Undly_69_set.insert("234867.570000");
    Undly_69.add_attribute("StartVal", "UnderlyingStartValue_t_307405812"); // 1
    Undly_69_set.insert("UnderlyingStartValue_t_307405812");
    Undly_69.add_attribute("CurVal", "UnderlyingCurrentValue_t_373788560"); // 1
    Undly_69_set.insert("UnderlyingCurrentValue_t_373788560");
    Undly_69.add_attribute("EndVal", "UnderlyingEndValue_t_1980390867"); // 1
    Undly_69_set.insert("UnderlyingEndValue_t_1980390867");
    Undly_69.add_attribute("AdjQty", "12733213.360000"); // 1
    Undly_69_set.insert("12733213.360000");
    Undly_69.add_attribute("FxRate", "10896526.580000"); // 1
    Undly_69_set.insert("10896526.580000");
    Undly_69.add_attribute("FxRateCalc", "D"); // 1
    Undly_69_set.insert("D");
    Undly_69.add_attribute("CapValu", "UnderlyingCapValue_t_565050741"); // 1
    Undly_69_set.insert("UnderlyingCapValue_t_565050741");
    Undly_69.add_attribute("SetMeth", "UnderlyingSettlMethod_t_776157326"); // 1
    Undly_69_set.insert("UnderlyingSettlMethod_t_776157326");
    Undly_69.add_attribute("PutCall", "1531619820"); // 1
    Undly_69_set.insert("1531619820");
    all_values.push_back(Undly_69_set);
    all_compo_names.insert("Undly_69_set");

    {
      xml_element UndAID_69{"UndAID"};
      multiset<string> UndAID_69_set;
      UndAID_69.add_attribute("AltID", "UnderlyingSecurityAltID_t_2127604326"); // 2
      UndAID_69_set.insert("UnderlyingSecurityAltID_t_2127604326");
      UndAID_69.add_attribute("AltIDSrc", "K"); // 2
      UndAID_69_set.insert("K");
      all_values.push_back(UndAID_69_set);
      all_compo_names.insert("UndAID_69_set");

      Undly_69.add_element(UndAID_69);
    }
    {
      xml_element Stip_106{"Stip"};
      multiset<string> Stip_106_set;
      Stip_106.add_attribute("Typ", "REDEMPTION"); // 2
      Stip_106_set.insert("REDEMPTION");
      Stip_106.add_attribute("Val", "UnderlyingStipValue_t_1171422025"); // 2
      Stip_106_set.insert("UnderlyingStipValue_t_1171422025");
      all_values.push_back(Stip_106_set);
      all_compo_names.insert("Stip_106_set");

      Undly_69.add_element(Stip_106);
    }
    {
      xml_element Pty_273{"Pty"};
      multiset<string> Pty_273_set;
      Pty_273.add_attribute("ID", "UnderlyingInstrumentPartyID_t_506789821"); // 2
      Pty_273_set.insert("UnderlyingInstrumentPartyID_t_506789821");
      Pty_273.add_attribute("Src", "G"); // 2
      Pty_273_set.insert("G");
      Pty_273.add_attribute("R", "7"); // 2
      Pty_273_set.insert("7");
      all_values.push_back(Pty_273_set);
      all_compo_names.insert("Pty_273_set");

      {
        xml_element Sub_273{"Sub"};
        multiset<string> Sub_273_set;
        Sub_273.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1008364771"); // 3
        Sub_273_set.insert("UnderlyingInstrumentPartySubID_t_1008364771");
        Sub_273.add_attribute("Typ", "17"); // 3
        Sub_273_set.insert("17");
        all_values.push_back(Sub_273_set);
        all_compo_names.insert("Sub_273_set");

        Pty_273.add_element(Sub_273);
      }
      Undly_69.add_element(Pty_273);
    }
    elt.add_element(Undly_69);
  } // end Undly
  { // Undly
    xml_element Undly_70{"Undly"};
    multiset<string> Undly_70_set;
    Undly_70.add_attribute("Sym", "UnderlyingSymbol_t_74120393"); // 1
    Undly_70_set.insert("UnderlyingSymbol_t_74120393");
    Undly_70.add_attribute("Sfx", "WI"); // 1
    Undly_70_set.insert("WI");
    Undly_70.add_attribute("ID", "UnderlyingSecurityID_t_1971188574"); // 1
    Undly_70_set.insert("UnderlyingSecurityID_t_1971188574");
    Undly_70.add_attribute("Src", "A"); // 1
    Undly_70_set.insert("A");
    Undly_70.add_attribute("Prod", "5"); // 1
    Undly_70_set.insert("5");
    Undly_70.add_attribute("CFI", "UnderlyingCFICode_t_1314427585"); // 1
    Undly_70_set.insert("UnderlyingCFICode_t_1314427585");
    Undly_70.add_attribute("SecTyp", "FUT"); // 1
    Undly_70_set.insert("FUT");
    Undly_70.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_239093367"); // 1
    Undly_70_set.insert("UnderlyingSecuritySubType_t_239093367");
    Undly_70.add_attribute("MMY", "485158435"); // 1
    Undly_70_set.insert("485158435");
    Undly_70.add_attribute("Mat", "UnderlyingMaturityDate_t_410757967"); // 1
    Undly_70_set.insert("UnderlyingMaturityDate_t_410757967");
    Undly_70.add_attribute("MatTm", "121796981"); // 1
    Undly_70_set.insert("121796981");
    Undly_70.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1891340645"); // 1
    Undly_70_set.insert("UnderlyingCouponPaymentDate_t_1891340645");
    Undly_70.add_attribute("RestrctTyp", "MR"); // 1
    Undly_70_set.insert("MR");
    Undly_70.add_attribute("Snrty", "SB"); // 1
    Undly_70_set.insert("SB");
    Undly_70.add_attribute("NotlPctOut", "1176455.570000"); // 1
    Undly_70_set.insert("1176455.570000");
    Undly_70.add_attribute("OrigNotlPctOut", "2671519.440000"); // 1
    Undly_70_set.insert("2671519.440000");
    Undly_70.add_attribute("AttchPnt", "17025241.290000"); // 1
    Undly_70_set.insert("17025241.290000");
    Undly_70.add_attribute("DetchPnt", "12072982.160000"); // 1
    Undly_70_set.insert("12072982.160000");
    Undly_70.add_attribute("Issued", "UnderlyingIssueDate_t_1957877308"); // 1
    Undly_70_set.insert("UnderlyingIssueDate_t_1957877308");
    Undly_70.add_attribute("RepoCollSecTyp", "120091223"); // 1
    Undly_70_set.insert("120091223");
    Undly_70.add_attribute("RepoTrm", "1983455542"); // 1
    Undly_70_set.insert("1983455542");
    Undly_70.add_attribute("RepoRt", "13420134.800000"); // 1
    Undly_70_set.insert("13420134.800000");
    Undly_70.add_attribute("Fctr", "1002119.010000"); // 1
    Undly_70_set.insert("1002119.010000");
    Undly_70.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1997232864"); // 1
    Undly_70_set.insert("UnderlyingCreditRating_t_1997232864");
    Undly_70.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_950877237"); // 1
    Undly_70_set.insert("UnderlyingInstrRegistry_t_950877237");
    Undly_70.add_attribute("Ctry", "1271633926"); // 1
    Undly_70_set.insert("1271633926");
    Undly_70.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_356539038"); // 1
    Undly_70_set.insert("UnderlyingStateOrProvinceOfIssue_t_356539038");
    Undly_70.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_764696860"); // 1
    Undly_70_set.insert("UnderlyingLocaleOfIssue_t_764696860");
    Undly_70.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2002934516"); // 1
    Undly_70_set.insert("UnderlyingRedemptionDate_t_2002934516");
    Undly_70.add_attribute("StrkPx", "13649038.090000"); // 1
    Undly_70_set.insert("13649038.090000");
    Undly_70.add_attribute("StrkCcy", "EUR"); // 1
    Undly_70_set.insert("EUR");
    Undly_70.add_attribute("OptA", "782423902"); // 1
    Undly_70_set.insert("782423902");
    Undly_70.add_attribute("Mult", "10431753.880000"); // 1
    Undly_70_set.insert("10431753.880000");
    Undly_70.add_attribute("MultTyp", "1"); // 1
    Undly_70_set.insert("1");
    Undly_70.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_70_set.insert("1");
    Undly_70.add_attribute("UOM", "MWh"); // 1
    Undly_70_set.insert("MWh");
    Undly_70.add_attribute("UOMQty", "17716320.630000"); // 1
    Undly_70_set.insert("17716320.630000");
    Undly_70.add_attribute("PxUOM", "Bbl"); // 1
    Undly_70_set.insert("Bbl");
    Undly_70.add_attribute("PxUOMQty", "6952777.600000"); // 1
    Undly_70_set.insert("6952777.600000");
    Undly_70.add_attribute("TmUnit", "Min"); // 1
    Undly_70_set.insert("Min");
    Undly_70.add_attribute("ExerStyle", "2"); // 1
    Undly_70_set.insert("2");
    Undly_70.add_attribute("CpnRt", "4391347.570000"); // 1
    Undly_70_set.insert("4391347.570000");
    Undly_70.add_attribute("Exch", "UnderlyingSecurityExchange_t_469151108"); // 1
    Undly_70_set.insert("UnderlyingSecurityExchange_t_469151108");
    Undly_70.add_attribute("Issr", "UnderlyingIssuer_t_197174931"); // 1
    Undly_70_set.insert("UnderlyingIssuer_t_197174931");
    Undly_70.add_attribute("EncUndIssrLen", "556780315"); // 1
    Undly_70_set.insert("556780315");
    Undly_70.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_736303052"); // 1
    Undly_70_set.insert("EncodedUnderlyingIssuer_t_736303052");
    Undly_70.add_attribute("Desc", "UnderlyingSecurityDesc_t_1899699060"); // 1
    Undly_70_set.insert("UnderlyingSecurityDesc_t_1899699060");
    Undly_70.add_attribute("EncUndSecDescLen", "1764078531"); // 1
    Undly_70_set.insert("1764078531");
    Undly_70.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_546696712"); // 1
    Undly_70_set.insert("EncodedUnderlyingSecurityDesc_t_546696712");
    Undly_70.add_attribute("CPPgm", "UnderlyingCPProgram_t_2019790283"); // 1
    Undly_70_set.insert("UnderlyingCPProgram_t_2019790283");
    Undly_70.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1600050425"); // 1
    Undly_70_set.insert("UnderlyingCPRegType_t_1600050425");
    Undly_70.add_attribute("AllocPct", "18887101.930000"); // 1
    Undly_70_set.insert("18887101.930000");
    Undly_70.add_attribute("Ccy", "JPY"); // 1
    Undly_70_set.insert("JPY");
    Undly_70.add_attribute("Qty", "6921037.820000"); // 1
    Undly_70_set.insert("6921037.820000");
    Undly_70.add_attribute("SettlTyp", "5"); // 1
    Undly_70_set.insert("5");
    Undly_70.add_attribute("CashAmt", "UnderlyingCashAmount_t_1806338680"); // 1
    Undly_70_set.insert("UnderlyingCashAmount_t_1806338680");
    Undly_70.add_attribute("CashTyp", "FIXED"); // 1
    Undly_70_set.insert("FIXED");
    Undly_70.add_attribute("Px", "10996033.310000"); // 1
    Undly_70_set.insert("10996033.310000");
    Undly_70.add_attribute("DirtPx", "10237588.410000"); // 1
    Undly_70_set.insert("10237588.410000");
    Undly_70.add_attribute("EndPx", "5287874.560000"); // 1
    Undly_70_set.insert("5287874.560000");
    Undly_70.add_attribute("StartVal", "UnderlyingStartValue_t_1029174593"); // 1
    Undly_70_set.insert("UnderlyingStartValue_t_1029174593");
    Undly_70.add_attribute("CurVal", "UnderlyingCurrentValue_t_1806182744"); // 1
    Undly_70_set.insert("UnderlyingCurrentValue_t_1806182744");
    Undly_70.add_attribute("EndVal", "UnderlyingEndValue_t_1571962844"); // 1
    Undly_70_set.insert("UnderlyingEndValue_t_1571962844");
    Undly_70.add_attribute("AdjQty", "13078864.350000"); // 1
    Undly_70_set.insert("13078864.350000");
    Undly_70.add_attribute("FxRate", "12132645.320000"); // 1
    Undly_70_set.insert("12132645.320000");
    Undly_70.add_attribute("FxRateCalc", "D"); // 1
    Undly_70_set.insert("D");
    Undly_70.add_attribute("CapValu", "UnderlyingCapValue_t_932034851"); // 1
    Undly_70_set.insert("UnderlyingCapValue_t_932034851");
    Undly_70.add_attribute("SetMeth", "UnderlyingSettlMethod_t_859439688"); // 1
    Undly_70_set.insert("UnderlyingSettlMethod_t_859439688");
    Undly_70.add_attribute("PutCall", "329876281"); // 1
    Undly_70_set.insert("329876281");
    all_values.push_back(Undly_70_set);
    all_compo_names.insert("Undly_70_set");

    {
      xml_element UndAID_70{"UndAID"};
      multiset<string> UndAID_70_set;
      UndAID_70.add_attribute("AltID", "UnderlyingSecurityAltID_t_966941234"); // 2
      UndAID_70_set.insert("UnderlyingSecurityAltID_t_966941234");
      UndAID_70.add_attribute("AltIDSrc", "9"); // 2
      UndAID_70_set.insert("9");
      all_values.push_back(UndAID_70_set);
      all_compo_names.insert("UndAID_70_set");

      Undly_70.add_element(UndAID_70);
    }
    {
      xml_element Stip_107{"Stip"};
      multiset<string> Stip_107_set;
      Stip_107.add_attribute("Typ", "YTM"); // 2
      Stip_107_set.insert("YTM");
      Stip_107.add_attribute("Val", "UnderlyingStipValue_t_1436092342"); // 2
      Stip_107_set.insert("UnderlyingStipValue_t_1436092342");
      all_values.push_back(Stip_107_set);
      all_compo_names.insert("Stip_107_set");

      Undly_70.add_element(Stip_107);
    }
    {
      xml_element Pty_274{"Pty"};
      multiset<string> Pty_274_set;
      Pty_274.add_attribute("ID", "UnderlyingInstrumentPartyID_t_824586757"); // 2
      Pty_274_set.insert("UnderlyingInstrumentPartyID_t_824586757");
      Pty_274.add_attribute("Src", "5"); // 2
      Pty_274_set.insert("5");
      Pty_274.add_attribute("R", "7"); // 2
      Pty_274_set.insert("7");
      all_values.push_back(Pty_274_set);
      all_compo_names.insert("Pty_274_set");

      {
        xml_element Sub_274{"Sub"};
        multiset<string> Sub_274_set;
        Sub_274.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_576802169"); // 3
        Sub_274_set.insert("UnderlyingInstrumentPartySubID_t_576802169");
        Sub_274.add_attribute("Typ", "7"); // 3
        Sub_274_set.insert("7");
        all_values.push_back(Sub_274_set);
        all_compo_names.insert("Sub_274_set");

        Pty_274.add_element(Sub_274);
      }
      Undly_70.add_element(Pty_274);
    }
    elt.add_element(Undly_70);
  } // end Undly
  { // Undly
    xml_element Undly_71{"Undly"};
    multiset<string> Undly_71_set;
    Undly_71.add_attribute("Sym", "UnderlyingSymbol_t_571608459"); // 1
    Undly_71_set.insert("UnderlyingSymbol_t_571608459");
    Undly_71.add_attribute("Sfx", "WI"); // 1
    Undly_71_set.insert("WI");
    Undly_71.add_attribute("ID", "UnderlyingSecurityID_t_394953014"); // 1
    Undly_71_set.insert("UnderlyingSecurityID_t_394953014");
    Undly_71.add_attribute("Src", "K"); // 1
    Undly_71_set.insert("K");
    Undly_71.add_attribute("Prod", "2"); // 1
    Undly_71_set.insert("2");
    Undly_71.add_attribute("CFI", "UnderlyingCFICode_t_1844752656"); // 1
    Undly_71_set.insert("UnderlyingCFICode_t_1844752656");
    Undly_71.add_attribute("SecTyp", "MT"); // 1
    Undly_71_set.insert("MT");
    Undly_71.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1665779804"); // 1
    Undly_71_set.insert("UnderlyingSecuritySubType_t_1665779804");
    Undly_71.add_attribute("MMY", "1503607688"); // 1
    Undly_71_set.insert("1503607688");
    Undly_71.add_attribute("Mat", "UnderlyingMaturityDate_t_314255780"); // 1
    Undly_71_set.insert("UnderlyingMaturityDate_t_314255780");
    Undly_71.add_attribute("MatTm", "617899488"); // 1
    Undly_71_set.insert("617899488");
    Undly_71.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_379882882"); // 1
    Undly_71_set.insert("UnderlyingCouponPaymentDate_t_379882882");
    Undly_71.add_attribute("RestrctTyp", "FR"); // 1
    Undly_71_set.insert("FR");
    Undly_71.add_attribute("Snrty", "SB"); // 1
    Undly_71_set.insert("SB");
    Undly_71.add_attribute("NotlPctOut", "385819.780000"); // 1
    Undly_71_set.insert("385819.780000");
    Undly_71.add_attribute("OrigNotlPctOut", "2675224.320000"); // 1
    Undly_71_set.insert("2675224.320000");
    Undly_71.add_attribute("AttchPnt", "8074768.680000"); // 1
    Undly_71_set.insert("8074768.680000");
    Undly_71.add_attribute("DetchPnt", "12518465.100000"); // 1
    Undly_71_set.insert("12518465.100000");
    Undly_71.add_attribute("Issued", "UnderlyingIssueDate_t_2049604601"); // 1
    Undly_71_set.insert("UnderlyingIssueDate_t_2049604601");
    Undly_71.add_attribute("RepoCollSecTyp", "1739511719"); // 1
    Undly_71_set.insert("1739511719");
    Undly_71.add_attribute("RepoTrm", "2111286199"); // 1
    Undly_71_set.insert("2111286199");
    Undly_71.add_attribute("RepoRt", "2319972.340000"); // 1
    Undly_71_set.insert("2319972.340000");
    Undly_71.add_attribute("Fctr", "5589693.050000"); // 1
    Undly_71_set.insert("5589693.050000");
    Undly_71.add_attribute("CrdRtg", "UnderlyingCreditRating_t_591214377"); // 1
    Undly_71_set.insert("UnderlyingCreditRating_t_591214377");
    Undly_71.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1001008273"); // 1
    Undly_71_set.insert("UnderlyingInstrRegistry_t_1001008273");
    Undly_71.add_attribute("Ctry", "1995061647"); // 1
    Undly_71_set.insert("1995061647");
    Undly_71.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1415801134"); // 1
    Undly_71_set.insert("UnderlyingStateOrProvinceOfIssue_t_1415801134");
    Undly_71.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_179315979"); // 1
    Undly_71_set.insert("UnderlyingLocaleOfIssue_t_179315979");
    Undly_71.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2019973394"); // 1
    Undly_71_set.insert("UnderlyingRedemptionDate_t_2019973394");
    Undly_71.add_attribute("StrkPx", "19926033.030000"); // 1
    Undly_71_set.insert("19926033.030000");
    Undly_71.add_attribute("StrkCcy", "CHF"); // 1
    Undly_71_set.insert("CHF");
    Undly_71.add_attribute("OptA", "294228460"); // 1
    Undly_71_set.insert("294228460");
    Undly_71.add_attribute("Mult", "15166552.310000"); // 1
    Undly_71_set.insert("15166552.310000");
    Undly_71.add_attribute("MultTyp", "2"); // 1
    Undly_71_set.insert("2");
    Undly_71.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_71_set.insert("2");
    Undly_71.add_attribute("UOM", "oz_tr"); // 1
    Undly_71_set.insert("oz_tr");
    Undly_71.add_attribute("UOMQty", "17618719.950000"); // 1
    Undly_71_set.insert("17618719.950000");
    Undly_71.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_71_set.insert("MMBtu");
    Undly_71.add_attribute("PxUOMQty", "5700482.800000"); // 1
    Undly_71_set.insert("5700482.800000");
    Undly_71.add_attribute("TmUnit", "Min"); // 1
    Undly_71_set.insert("Min");
    Undly_71.add_attribute("ExerStyle", "2"); // 1
    Undly_71_set.insert("2");
    Undly_71.add_attribute("CpnRt", "9499311.620000"); // 1
    Undly_71_set.insert("9499311.620000");
    Undly_71.add_attribute("Exch", "UnderlyingSecurityExchange_t_771687363"); // 1
    Undly_71_set.insert("UnderlyingSecurityExchange_t_771687363");
    Undly_71.add_attribute("Issr", "UnderlyingIssuer_t_351641879"); // 1
    Undly_71_set.insert("UnderlyingIssuer_t_351641879");
    Undly_71.add_attribute("EncUndIssrLen", "988513140"); // 1
    Undly_71_set.insert("988513140");
    Undly_71.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1039209795"); // 1
    Undly_71_set.insert("EncodedUnderlyingIssuer_t_1039209795");
    Undly_71.add_attribute("Desc", "UnderlyingSecurityDesc_t_1159118748"); // 1
    Undly_71_set.insert("UnderlyingSecurityDesc_t_1159118748");
    Undly_71.add_attribute("EncUndSecDescLen", "92876002"); // 1
    Undly_71_set.insert("92876002");
    Undly_71.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_941330748"); // 1
    Undly_71_set.insert("EncodedUnderlyingSecurityDesc_t_941330748");
    Undly_71.add_attribute("CPPgm", "UnderlyingCPProgram_t_751146819"); // 1
    Undly_71_set.insert("UnderlyingCPProgram_t_751146819");
    Undly_71.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_56678553"); // 1
    Undly_71_set.insert("UnderlyingCPRegType_t_56678553");
    Undly_71.add_attribute("AllocPct", "11733279.820000"); // 1
    Undly_71_set.insert("11733279.820000");
    Undly_71.add_attribute("Ccy", "USD"); // 1
    Undly_71_set.insert("USD");
    Undly_71.add_attribute("Qty", "268526.080000"); // 1
    Undly_71_set.insert("268526.080000");
    Undly_71.add_attribute("SettlTyp", "4"); // 1
    Undly_71_set.insert("4");
    Undly_71.add_attribute("CashAmt", "UnderlyingCashAmount_t_2063694064"); // 1
    Undly_71_set.insert("UnderlyingCashAmount_t_2063694064");
    Undly_71.add_attribute("CashTyp", "DIFF"); // 1
    Undly_71_set.insert("DIFF");
    Undly_71.add_attribute("Px", "10301838.700000"); // 1
    Undly_71_set.insert("10301838.700000");
    Undly_71.add_attribute("DirtPx", "19088137.200000"); // 1
    Undly_71_set.insert("19088137.200000");
    Undly_71.add_attribute("EndPx", "13278708.040000"); // 1
    Undly_71_set.insert("13278708.040000");
    Undly_71.add_attribute("StartVal", "UnderlyingStartValue_t_1474282075"); // 1
    Undly_71_set.insert("UnderlyingStartValue_t_1474282075");
    Undly_71.add_attribute("CurVal", "UnderlyingCurrentValue_t_55558532"); // 1
    Undly_71_set.insert("UnderlyingCurrentValue_t_55558532");
    Undly_71.add_attribute("EndVal", "UnderlyingEndValue_t_697042387"); // 1
    Undly_71_set.insert("UnderlyingEndValue_t_697042387");
    Undly_71.add_attribute("AdjQty", "837316.360000"); // 1
    Undly_71_set.insert("837316.360000");
    Undly_71.add_attribute("FxRate", "7714143.340000"); // 1
    Undly_71_set.insert("7714143.340000");
    Undly_71.add_attribute("FxRateCalc", "M"); // 1
    Undly_71_set.insert("M");
    Undly_71.add_attribute("CapValu", "UnderlyingCapValue_t_1845603631"); // 1
    Undly_71_set.insert("UnderlyingCapValue_t_1845603631");
    Undly_71.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1005566293"); // 1
    Undly_71_set.insert("UnderlyingSettlMethod_t_1005566293");
    Undly_71.add_attribute("PutCall", "333531258"); // 1
    Undly_71_set.insert("333531258");
    all_values.push_back(Undly_71_set);
    all_compo_names.insert("Undly_71_set");

    {
      xml_element UndAID_71{"UndAID"};
      multiset<string> UndAID_71_set;
      UndAID_71.add_attribute("AltID", "UnderlyingSecurityAltID_t_1774247758"); // 2
      UndAID_71_set.insert("UnderlyingSecurityAltID_t_1774247758");
      UndAID_71.add_attribute("AltIDSrc", "M"); // 2
      UndAID_71_set.insert("M");
      all_values.push_back(UndAID_71_set);
      all_compo_names.insert("UndAID_71_set");

      Undly_71.add_element(UndAID_71);
    }
    {
      xml_element Stip_108{"Stip"};
      multiset<string> Stip_108_set;
      Stip_108.add_attribute("Typ", "LOTVAR"); // 2
      Stip_108_set.insert("LOTVAR");
      Stip_108.add_attribute("Val", "UnderlyingStipValue_t_398451473"); // 2
      Stip_108_set.insert("UnderlyingStipValue_t_398451473");
      all_values.push_back(Stip_108_set);
      all_compo_names.insert("Stip_108_set");

      Undly_71.add_element(Stip_108);
    }
    {
      xml_element Pty_275{"Pty"};
      multiset<string> Pty_275_set;
      Pty_275.add_attribute("ID", "UnderlyingInstrumentPartyID_t_61775971"); // 2
      Pty_275_set.insert("UnderlyingInstrumentPartyID_t_61775971");
      Pty_275.add_attribute("Src", "7"); // 2
      Pty_275_set.insert("7");
      Pty_275.add_attribute("R", "17"); // 2
      Pty_275_set.insert("17");
      all_values.push_back(Pty_275_set);
      all_compo_names.insert("Pty_275_set");

      {
        xml_element Sub_275{"Sub"};
        multiset<string> Sub_275_set;
        Sub_275.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1220894719"); // 3
        Sub_275_set.insert("UnderlyingInstrumentPartySubID_t_1220894719");
        Sub_275.add_attribute("Typ", "25"); // 3
        Sub_275_set.insert("25");
        all_values.push_back(Sub_275_set);
        all_compo_names.insert("Sub_275_set");

        Pty_275.add_element(Sub_275);
      }
      Undly_71.add_element(Pty_275);
    }
    elt.add_element(Undly_71);
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
