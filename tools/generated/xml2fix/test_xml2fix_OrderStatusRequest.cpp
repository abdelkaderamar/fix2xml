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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderStatusRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_675339846"); // 0
  OrderStatusRequest_message_t_0.insert("OrderID_t_675339846");
  elt.add_attribute("ID", "ClOrdID_t_717995543"); // 0
  OrderStatusRequest_message_t_0.insert("ClOrdID_t_717995543");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_145307598"); // 0
  OrderStatusRequest_message_t_0.insert("SecondaryClOrdID_t_145307598");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1986933166"); // 0
  OrderStatusRequest_message_t_0.insert("ClOrdLinkID_t_1986933166");
  elt.add_attribute("StatReqID", "OrdStatusReqID_t_1529773668"); // 0
  OrderStatusRequest_message_t_0.insert("OrdStatusReqID_t_1529773668");
  elt.add_attribute("Acct", "Account_t_1818952775"); // 0
  OrderStatusRequest_message_t_0.insert("Account_t_1818952775");
  elt.add_attribute("AcctIDSrc", "5"); // 0
  OrderStatusRequest_message_t_0.insert("5");
  elt.add_attribute("Side", "9"); // 0
  OrderStatusRequest_message_t_0.insert("9");
  all_values.push_back(OrderStatusRequest_message_t_0);
  all_compo_names.insert("OrderStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_64{"Hdr"};
    multiset<string> Hdr_64_set;
    Hdr_64.add_attribute("SeqNum", "125801666"); // 1
    Hdr_64_set.insert("125801666");
    Hdr_64.add_attribute("SID", "SenderCompID_t_994224497"); // 1
    Hdr_64_set.insert("SenderCompID_t_994224497");
    Hdr_64.add_attribute("TID", "TargetCompID_t_1656640964"); // 1
    Hdr_64_set.insert("TargetCompID_t_1656640964");
    Hdr_64.add_attribute("OBID", "OnBehalfOfCompID_t_1399438847"); // 1
    Hdr_64_set.insert("OnBehalfOfCompID_t_1399438847");
    Hdr_64.add_attribute("D2ID", "DeliverToCompID_t_1982931063"); // 1
    Hdr_64_set.insert("DeliverToCompID_t_1982931063");
    Hdr_64.add_attribute("SSub", "SenderSubID_t_376898841"); // 1
    Hdr_64_set.insert("SenderSubID_t_376898841");
    Hdr_64.add_attribute("SLoc", "SenderLocationID_t_1629723583"); // 1
    Hdr_64_set.insert("SenderLocationID_t_1629723583");
    Hdr_64.add_attribute("TSub", "TargetSubID_t_1472995389"); // 1
    Hdr_64_set.insert("TargetSubID_t_1472995389");
    Hdr_64.add_attribute("TLoc", "TargetLocationID_t_1829119669"); // 1
    Hdr_64_set.insert("TargetLocationID_t_1829119669");
    Hdr_64.add_attribute("OBSub", "OnBehalfOfSubID_t_1705088963"); // 1
    Hdr_64_set.insert("OnBehalfOfSubID_t_1705088963");
    Hdr_64.add_attribute("OBLoc", "OnBehalfOfLocationID_t_571458904"); // 1
    Hdr_64_set.insert("OnBehalfOfLocationID_t_571458904");
    Hdr_64.add_attribute("D2Sub", "DeliverToSubID_t_79615687"); // 1
    Hdr_64_set.insert("DeliverToSubID_t_79615687");
    Hdr_64.add_attribute("D2Loc", "DeliverToLocationID_t_1410028753"); // 1
    Hdr_64_set.insert("DeliverToLocationID_t_1410028753");
    Hdr_64.add_attribute("PosDup", "N"); // 1
    Hdr_64_set.insert("N");
    Hdr_64.add_attribute("PosRsnd", "N"); // 1
    Hdr_64_set.insert("N");
    Hdr_64.add_attribute("Snt", "SendingTime_t_461970547"); // 1
    Hdr_64_set.insert("SendingTime_t_461970547");
    Hdr_64.add_attribute("OrigSnt", "OrigSendingTime_t_767902688"); // 1
    Hdr_64_set.insert("OrigSendingTime_t_767902688");
    Hdr_64.add_attribute("MsgEncd", "MessageEncoding_t_2074533406"); // 1
    Hdr_64_set.insert("MessageEncoding_t_2074533406");
    all_values.push_back(Hdr_64_set);
    all_compo_names.insert("Hdr_64_set");

    {
      xml_element Hop_64{"Hop"};
      multiset<string> Hop_64_set;
      Hop_64.add_attribute("ID", "HopCompID_t_949470290"); // 2
      Hop_64_set.insert("HopCompID_t_949470290");
      Hop_64.add_attribute("Ref", "870501868"); // 2
      Hop_64_set.insert("870501868");
      Hop_64.add_attribute("Snt", "HopSendingTime_t_1614302803"); // 2
      Hop_64_set.insert("HopSendingTime_t_1614302803");
      all_values.push_back(Hop_64_set);
      all_compo_names.insert("Hop_64_set");

      Hdr_64.add_element(Hop_64);
    }
    elt.add_element(Hdr_64);
  } // end Hdr
  { // Pty
    xml_element Pty_289{"Pty"};
    multiset<string> Pty_289_set;
    Pty_289.add_attribute("ID", "PartyID_t_262777610"); // 1
    Pty_289_set.insert("PartyID_t_262777610");
    Pty_289.add_attribute("Src", "6"); // 1
    Pty_289_set.insert("6");
    Pty_289.add_attribute("R", "83"); // 1
    Pty_289_set.insert("83");
    all_values.push_back(Pty_289_set);
    all_compo_names.insert("Pty_289_set");

    {
      xml_element Sub_289{"Sub"};
      multiset<string> Sub_289_set;
      Sub_289.add_attribute("ID", "PartySubID_t_408085209"); // 2
      Sub_289_set.insert("PartySubID_t_408085209");
      Sub_289.add_attribute("Typ", "23"); // 2
      Sub_289_set.insert("23");
      all_values.push_back(Sub_289_set);
      all_compo_names.insert("Sub_289_set");

      Pty_289.add_element(Sub_289);
    }
    elt.add_element(Pty_289);
  } // end Pty
  { // Pty
    xml_element Pty_290{"Pty"};
    multiset<string> Pty_290_set;
    Pty_290.add_attribute("ID", "PartyID_t_1019267149"); // 1
    Pty_290_set.insert("PartyID_t_1019267149");
    Pty_290.add_attribute("Src", "7"); // 1
    Pty_290_set.insert("7");
    Pty_290.add_attribute("R", "74"); // 1
    Pty_290_set.insert("74");
    all_values.push_back(Pty_290_set);
    all_compo_names.insert("Pty_290_set");

    {
      xml_element Sub_290{"Sub"};
      multiset<string> Sub_290_set;
      Sub_290.add_attribute("ID", "PartySubID_t_1821365046"); // 2
      Sub_290_set.insert("PartySubID_t_1821365046");
      Sub_290.add_attribute("Typ", "14"); // 2
      Sub_290_set.insert("14");
      all_values.push_back(Sub_290_set);
      all_compo_names.insert("Sub_290_set");

      Pty_290.add_element(Sub_290);
    }
    elt.add_element(Pty_290);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_54{"Instrmt"};
    multiset<string> Instrmt_54_set;
    Instrmt_54.add_attribute("Sym", "Symbol_t_1525701137"); // 1
    Instrmt_54_set.insert("Symbol_t_1525701137");
    Instrmt_54.add_attribute("Sfx", "CD"); // 1
    Instrmt_54_set.insert("CD");
    Instrmt_54.add_attribute("ID", "SecurityID_t_1604794849"); // 1
    Instrmt_54_set.insert("SecurityID_t_1604794849");
    Instrmt_54.add_attribute("Src", "H"); // 1
    Instrmt_54_set.insert("H");
    Instrmt_54.add_attribute("Prod", "4"); // 1
    Instrmt_54_set.insert("4");
    Instrmt_54.add_attribute("ProdCmplx", "ProductComplex_t_1087034784"); // 1
    Instrmt_54_set.insert("ProductComplex_t_1087034784");
    Instrmt_54.add_attribute("SecGrp", "SecurityGroup_t_686660293"); // 1
    Instrmt_54_set.insert("SecurityGroup_t_686660293");
    Instrmt_54.add_attribute("CFI", "CFICode_t_1389057224"); // 1
    Instrmt_54_set.insert("CFICode_t_1389057224");
    Instrmt_54.add_attribute("SecTyp", "TINT"); // 1
    Instrmt_54_set.insert("TINT");
    Instrmt_54.add_attribute("SubTyp", "SecuritySubType_t_1258119198"); // 1
    Instrmt_54_set.insert("SecuritySubType_t_1258119198");
    Instrmt_54.add_attribute("MMY", "1468672912"); // 1
    Instrmt_54_set.insert("1468672912");
    Instrmt_54.add_attribute("MatDt", "MaturityDate_t_2054668853"); // 1
    Instrmt_54_set.insert("MaturityDate_t_2054668853");
    Instrmt_54.add_attribute("MatTm", "247003626"); // 1
    Instrmt_54_set.insert("247003626");
    Instrmt_54.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1390286788"); // 1
    Instrmt_54_set.insert("SettleOnOpenFlag_t_1390286788");
    Instrmt_54.add_attribute("AsgnMeth", "369155752"); // 1
    Instrmt_54_set.insert("369155752");
    Instrmt_54.add_attribute("Status", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("CpnPmt", "CouponPaymentDate_t_1317336546"); // 1
    Instrmt_54_set.insert("CouponPaymentDate_t_1317336546");
    Instrmt_54.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_54_set.insert("MM");
    Instrmt_54.add_attribute("Snrty", "SD"); // 1
    Instrmt_54_set.insert("SD");
    Instrmt_54.add_attribute("NotlPctOut", "7841557.010000"); // 1
    Instrmt_54_set.insert("7841557.010000");
    Instrmt_54.add_attribute("OrigNotlPctOut", "901239.800000"); // 1
    Instrmt_54_set.insert("901239.800000");
    Instrmt_54.add_attribute("AttchPnt", "7021.440000"); // 1
    Instrmt_54_set.insert("7021.440000");
    Instrmt_54.add_attribute("DetchPnt", "9263147.020000"); // 1
    Instrmt_54_set.insert("9263147.020000");
    Instrmt_54.add_attribute("Issued", "IssueDate_t_1727101109"); // 1
    Instrmt_54_set.insert("IssueDate_t_1727101109");
    Instrmt_54.add_attribute("RepoCollSecTyp", "408787353"); // 1
    Instrmt_54_set.insert("408787353");
    Instrmt_54.add_attribute("RepoTrm", "907923222"); // 1
    Instrmt_54_set.insert("907923222");
    Instrmt_54.add_attribute("RepoRt", "5988846.110000"); // 1
    Instrmt_54_set.insert("5988846.110000");
    Instrmt_54.add_attribute("Fctr", "4883416.890000"); // 1
    Instrmt_54_set.insert("4883416.890000");
    Instrmt_54.add_attribute("CrdRtg", "CreditRating_t_1439399862"); // 1
    Instrmt_54_set.insert("CreditRating_t_1439399862");
    Instrmt_54.add_attribute("Rgstry", "InstrRegistry_t_272766009"); // 1
    Instrmt_54_set.insert("InstrRegistry_t_272766009");
    Instrmt_54.add_attribute("IssuCtry", "693697691"); // 1
    Instrmt_54_set.insert("693697691");
    Instrmt_54.add_attribute("StPrv", "StateOrProvinceOfIssue_t_817617351"); // 1
    Instrmt_54_set.insert("StateOrProvinceOfIssue_t_817617351");
    Instrmt_54.add_attribute("Lcl", "LocaleOfIssue_t_1603288371"); // 1
    Instrmt_54_set.insert("LocaleOfIssue_t_1603288371");
    Instrmt_54.add_attribute("Redeem", "RedemptionDate_t_151008893"); // 1
    Instrmt_54_set.insert("RedemptionDate_t_151008893");
    Instrmt_54.add_attribute("StrkPx", "312822.550000"); // 1
    Instrmt_54_set.insert("312822.550000");
    Instrmt_54.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_54_set.insert("CAN");
    Instrmt_54.add_attribute("StrkMult", "7179425.490000"); // 1
    Instrmt_54_set.insert("7179425.490000");
    Instrmt_54.add_attribute("StrkValu", "4047995.020000"); // 1
    Instrmt_54_set.insert("4047995.020000");
    Instrmt_54.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_54_set.insert("2");
    Instrmt_54.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_54_set.insert("3");
    Instrmt_54.add_attribute("StrkPxBndryPrcsn", "18734724.140000"); // 1
    Instrmt_54_set.insert("18734724.140000");
    Instrmt_54.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_54_set.insert("3");
    Instrmt_54.add_attribute("OptAt", "75581725"); // 1
    Instrmt_54_set.insert("75581725");
    Instrmt_54.add_attribute("Mult", "11162755.540000"); // 1
    Instrmt_54_set.insert("11162755.540000");
    Instrmt_54.add_attribute("MultTyp", "2"); // 1
    Instrmt_54_set.insert("2");
    Instrmt_54.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_54_set.insert("4");
    Instrmt_54.add_attribute("MinPxIncr", "2861284.520000"); // 1
    Instrmt_54_set.insert("2861284.520000");
    Instrmt_54.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1330167128"); // 1
    Instrmt_54_set.insert("MinPriceIncrementAmount_t_1330167128");
    Instrmt_54.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_54_set.insert("MMBtu");
    Instrmt_54.add_attribute("UOMQty", "10702841.530000"); // 1
    Instrmt_54_set.insert("10702841.530000");
    Instrmt_54.add_attribute("PxUOM", "Bbl"); // 1
    Instrmt_54_set.insert("Bbl");
    Instrmt_54.add_attribute("PxUOMQty", "8291147.170000"); // 1
    Instrmt_54_set.insert("8291147.170000");
    Instrmt_54.add_attribute("SettlMeth", "C"); // 1
    Instrmt_54_set.insert("C");
    Instrmt_54.add_attribute("ExerStyle", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_54_set.insert("3");
    Instrmt_54.add_attribute("OptPayAmt", "OptPayoutAmount_t_757038430"); // 1
    Instrmt_54_set.insert("OptPayoutAmount_t_757038430");
    Instrmt_54.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_54_set.insert("STD");
    Instrmt_54.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_54_set.insert("EQTY");
    Instrmt_54.add_attribute("ListMeth", "0"); // 1
    Instrmt_54_set.insert("0");
    Instrmt_54.add_attribute("CapPx", "18715591.890000"); // 1
    Instrmt_54_set.insert("18715591.890000");
    Instrmt_54.add_attribute("FlrPx", "2724578.040000"); // 1
    Instrmt_54_set.insert("2724578.040000");
    Instrmt_54.add_attribute("PutCall", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("FlexInd", "true"); // 1
    Instrmt_54_set.insert("true");
    Instrmt_54.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_54_set.insert("false");
    Instrmt_54.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_54_set.insert("Yr");
    Instrmt_54.add_attribute("CpnRt", "3431061.900000"); // 1
    Instrmt_54_set.insert("3431061.900000");
    Instrmt_54.add_attribute("Exch", "SecurityExchange_t_1661510374"); // 1
    Instrmt_54_set.insert("SecurityExchange_t_1661510374");
    Instrmt_54.add_attribute("PosLmt", "1615796799"); // 1
    Instrmt_54_set.insert("1615796799");
    Instrmt_54.add_attribute("NTPosLmt", "747905693"); // 1
    Instrmt_54_set.insert("747905693");
    Instrmt_54.add_attribute("Issr", "Issuer_t_1396710503"); // 1
    Instrmt_54_set.insert("Issuer_t_1396710503");
    Instrmt_54.add_attribute("EncIssrLen", "1444374898"); // 1
    Instrmt_54_set.insert("1444374898");
    Instrmt_54.add_attribute("EncIssr", "EncodedIssuer_t_473894459"); // 1
    Instrmt_54_set.insert("EncodedIssuer_t_473894459");
    Instrmt_54.add_attribute("Desc", "SecurityDesc_t_1039095837"); // 1
    Instrmt_54_set.insert("SecurityDesc_t_1039095837");
    Instrmt_54.add_attribute("EncSecDescLen", "1519956623"); // 1
    Instrmt_54_set.insert("1519956623");
    Instrmt_54.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1590170014"); // 1
    Instrmt_54_set.insert("EncodedSecurityDesc_t_1590170014");
    Instrmt_54.add_attribute("Pool", "Pool_t_1050636923"); // 1
    Instrmt_54_set.insert("Pool_t_1050636923");
    Instrmt_54.add_attribute("CSetMo", "462961014"); // 1
    Instrmt_54_set.insert("462961014");
    Instrmt_54.add_attribute("CPPgm", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("CPRegT", "CPRegType_t_233320403"); // 1
    Instrmt_54_set.insert("CPRegType_t_233320403");
    Instrmt_54.add_attribute("Dated", "DatedDate_t_1291373587"); // 1
    Instrmt_54_set.insert("DatedDate_t_1291373587");
    Instrmt_54.add_attribute("IntAcrl", "InterestAccrualDate_t_799098972"); // 1
    Instrmt_54_set.insert("InterestAccrualDate_t_799098972");
    all_values.push_back(Instrmt_54_set);
    all_compo_names.insert("Instrmt_54_set");

    {
      xml_element AID_57{"AID"};
      multiset<string> AID_57_set;
      AID_57.add_attribute("AltID", "SecurityAltID_t_1653611511"); // 2
      AID_57_set.insert("SecurityAltID_t_1653611511");
      AID_57.add_attribute("AltIDSrc", "2"); // 2
      AID_57_set.insert("2");
      all_values.push_back(AID_57_set);
      all_compo_names.insert("AID_57_set");

      Instrmt_54.add_element(AID_57);
    }
    {
      xml_element SecXML_57{"SecXML"};
      multiset<string> SecXML_57_set;
      SecXML_57.add_attribute("Schema", "SecurityXMLSchema_t_648214180"); // 2
      SecXML_57_set.insert("SecurityXMLSchema_t_648214180");
      all_values.push_back(SecXML_57_set);
      all_compo_names.insert("SecXML_57_set");

      Instrmt_54.add_element(SecXML_57);
    }
    {
      xml_element Evnt_57{"Evnt"};
      multiset<string> Evnt_57_set;
      Evnt_57.add_attribute("EventTyp", "13"); // 2
      Evnt_57_set.insert("13");
      Evnt_57.add_attribute("Dt", "EventDate_t_1210906728"); // 2
      Evnt_57_set.insert("EventDate_t_1210906728");
      Evnt_57.add_attribute("Tm", "EventTime_t_1405252610"); // 2
      Evnt_57_set.insert("EventTime_t_1405252610");
      Evnt_57.add_attribute("Px", "21048296.130000"); // 2
      Evnt_57_set.insert("21048296.130000");
      Evnt_57.add_attribute("Txt", "EventText_t_789666840"); // 2
      Evnt_57_set.insert("EventText_t_789666840");
      all_values.push_back(Evnt_57_set);
      all_compo_names.insert("Evnt_57_set");

      Instrmt_54.add_element(Evnt_57);
    }
    {
      xml_element Pty_291{"Pty"};
      multiset<string> Pty_291_set;
      Pty_291.add_attribute("ID", "InstrumentPartyID_t_1454207254"); // 2
      Pty_291_set.insert("InstrumentPartyID_t_1454207254");
      Pty_291.add_attribute("Src", "I"); // 2
      Pty_291_set.insert("I");
      Pty_291.add_attribute("R", "1"); // 2
      Pty_291_set.insert("1");
      all_values.push_back(Pty_291_set);
      all_compo_names.insert("Pty_291_set");

      {
        xml_element Sub_291{"Sub"};
        multiset<string> Sub_291_set;
        Sub_291.add_attribute("ID", "InstrumentPartySubID_t_173295601"); // 3
        Sub_291_set.insert("InstrumentPartySubID_t_173295601");
        Sub_291.add_attribute("Typ", "13"); // 3
        Sub_291_set.insert("13");
        all_values.push_back(Sub_291_set);
        all_compo_names.insert("Sub_291_set");

        Pty_291.add_element(Sub_291);
      }
      Instrmt_54.add_element(Pty_291);
    }
    {
      xml_element CmplxEvnt_54{"CmplxEvnt"};
      multiset<string> CmplxEvnt_54_set;
      CmplxEvnt_54.add_attribute("Typ", "6"); // 2
      CmplxEvnt_54_set.insert("6");
      CmplxEvnt_54.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1071149851"); // 2
      CmplxEvnt_54_set.insert("ComplexOptPayoutAmount_t_1071149851");
      CmplxEvnt_54.add_attribute("Px", "13518916.100000"); // 2
      CmplxEvnt_54_set.insert("13518916.100000");
      CmplxEvnt_54.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_54_set.insert("4");
      CmplxEvnt_54.add_attribute("PxBndryPrcsn", "5394630.030000"); // 2
      CmplxEvnt_54_set.insert("5394630.030000");
      CmplxEvnt_54.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_54_set.insert("2");
      CmplxEvnt_54.add_attribute("Cond", "2"); // 2
      CmplxEvnt_54_set.insert("2");
      all_values.push_back(CmplxEvnt_54_set);
      all_compo_names.insert("CmplxEvnt_54_set");

      {
        xml_element EvntDts_54{"EvntDts"};
        multiset<string> EvntDts_54_set;
        EvntDts_54.add_attribute("StartDt", "ComplexEventStartDate_t_1983837901"); // 3
        EvntDts_54_set.insert("ComplexEventStartDate_t_1983837901");
        EvntDts_54.add_attribute("EndDt", "ComplexEventEndDate_t_426208114"); // 3
        EvntDts_54_set.insert("ComplexEventEndDate_t_426208114");
        all_values.push_back(EvntDts_54_set);
        all_compo_names.insert("EvntDts_54_set");

        {
          xml_element EvntTms_54{"EvntTms"};
          multiset<string> EvntTms_54_set;
          EvntTms_54.add_attribute("StartTm", "1287940761"); // 4
          EvntTms_54_set.insert("1287940761");
          EvntTms_54.add_attribute("EndTm", "1356310877"); // 4
          EvntTms_54_set.insert("1356310877");
          all_values.push_back(EvntTms_54_set);
          all_compo_names.insert("EvntTms_54_set");

          EvntDts_54.add_element(EvntTms_54);
        }
        CmplxEvnt_54.add_element(EvntDts_54);
      }
      Instrmt_54.add_element(CmplxEvnt_54);
    }
    elt.add_element(Instrmt_54);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_15{"FinDetls"};
    multiset<string> FinDetls_15_set;
    FinDetls_15.add_attribute("AgmtDesc", "AgreementDesc_t_2016378128"); // 1
    FinDetls_15_set.insert("AgreementDesc_t_2016378128");
    FinDetls_15.add_attribute("AgmtID", "AgreementID_t_191094036"); // 1
    FinDetls_15_set.insert("AgreementID_t_191094036");
    FinDetls_15.add_attribute("AgmtDt", "AgreementDate_t_1819271891"); // 1
    FinDetls_15_set.insert("AgreementDate_t_1819271891");
    FinDetls_15.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_15_set.insert("USD");
    FinDetls_15.add_attribute("TrmTyp", "4"); // 1
    FinDetls_15_set.insert("4");
    FinDetls_15.add_attribute("StartDt", "StartDate_t_396808271"); // 1
    FinDetls_15_set.insert("StartDate_t_396808271");
    FinDetls_15.add_attribute("EndDt", "EndDate_t_2078025951"); // 1
    FinDetls_15_set.insert("EndDate_t_2078025951");
    FinDetls_15.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_15_set.insert("0");
    FinDetls_15.add_attribute("MgnRatio", "10450224.510000"); // 1
    FinDetls_15_set.insert("10450224.510000");
    all_values.push_back(FinDetls_15_set);
    all_compo_names.insert("FinDetls_15_set");

    elt.add_element(FinDetls_15);
  } // end FinDetls
  { // Undly
    xml_element Undly_74{"Undly"};
    multiset<string> Undly_74_set;
    Undly_74.add_attribute("Sym", "UnderlyingSymbol_t_2147073216"); // 1
    Undly_74_set.insert("UnderlyingSymbol_t_2147073216");
    Undly_74.add_attribute("Sfx", "WI"); // 1
    Undly_74_set.insert("WI");
    Undly_74.add_attribute("ID", "UnderlyingSecurityID_t_393924702"); // 1
    Undly_74_set.insert("UnderlyingSecurityID_t_393924702");
    Undly_74.add_attribute("Src", "7"); // 1
    Undly_74_set.insert("7");
    Undly_74.add_attribute("Prod", "5"); // 1
    Undly_74_set.insert("5");
    Undly_74.add_attribute("CFI", "UnderlyingCFICode_t_75346209"); // 1
    Undly_74_set.insert("UnderlyingCFICode_t_75346209");
    Undly_74.add_attribute("SecTyp", "TB"); // 1
    Undly_74_set.insert("TB");
    Undly_74.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1930294268"); // 1
    Undly_74_set.insert("UnderlyingSecuritySubType_t_1930294268");
    Undly_74.add_attribute("MMY", "1084131628"); // 1
    Undly_74_set.insert("1084131628");
    Undly_74.add_attribute("Mat", "UnderlyingMaturityDate_t_1189488746"); // 1
    Undly_74_set.insert("UnderlyingMaturityDate_t_1189488746");
    Undly_74.add_attribute("MatTm", "853960471"); // 1
    Undly_74_set.insert("853960471");
    Undly_74.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_288539590"); // 1
    Undly_74_set.insert("UnderlyingCouponPaymentDate_t_288539590");
    Undly_74.add_attribute("RestrctTyp", "MM"); // 1
    Undly_74_set.insert("MM");
    Undly_74.add_attribute("Snrty", "SR"); // 1
    Undly_74_set.insert("SR");
    Undly_74.add_attribute("NotlPctOut", "2408532.450000"); // 1
    Undly_74_set.insert("2408532.450000");
    Undly_74.add_attribute("OrigNotlPctOut", "2904680.900000"); // 1
    Undly_74_set.insert("2904680.900000");
    Undly_74.add_attribute("AttchPnt", "12297777.280000"); // 1
    Undly_74_set.insert("12297777.280000");
    Undly_74.add_attribute("DetchPnt", "6670613.600000"); // 1
    Undly_74_set.insert("6670613.600000");
    Undly_74.add_attribute("Issued", "UnderlyingIssueDate_t_1578408851"); // 1
    Undly_74_set.insert("UnderlyingIssueDate_t_1578408851");
    Undly_74.add_attribute("RepoCollSecTyp", "438604957"); // 1
    Undly_74_set.insert("438604957");
    Undly_74.add_attribute("RepoTrm", "535955840"); // 1
    Undly_74_set.insert("535955840");
    Undly_74.add_attribute("RepoRt", "17695028.870000"); // 1
    Undly_74_set.insert("17695028.870000");
    Undly_74.add_attribute("Fctr", "1103932.000000"); // 1
    Undly_74_set.insert("1103932.000000");
    Undly_74.add_attribute("CrdRtg", "UnderlyingCreditRating_t_133665139"); // 1
    Undly_74_set.insert("UnderlyingCreditRating_t_133665139");
    Undly_74.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_46433679"); // 1
    Undly_74_set.insert("UnderlyingInstrRegistry_t_46433679");
    Undly_74.add_attribute("Ctry", "1073555031"); // 1
    Undly_74_set.insert("1073555031");
    Undly_74.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_530473410"); // 1
    Undly_74_set.insert("UnderlyingStateOrProvinceOfIssue_t_530473410");
    Undly_74.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2124459631"); // 1
    Undly_74_set.insert("UnderlyingLocaleOfIssue_t_2124459631");
    Undly_74.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2009721519"); // 1
    Undly_74_set.insert("UnderlyingRedemptionDate_t_2009721519");
    Undly_74.add_attribute("StrkPx", "15754958.610000"); // 1
    Undly_74_set.insert("15754958.610000");
    Undly_74.add_attribute("StrkCcy", "EUR"); // 1
    Undly_74_set.insert("EUR");
    Undly_74.add_attribute("OptA", "1878287274"); // 1
    Undly_74_set.insert("1878287274");
    Undly_74.add_attribute("Mult", "8074794.210000"); // 1
    Undly_74_set.insert("8074794.210000");
    Undly_74.add_attribute("MultTyp", "1"); // 1
    Undly_74_set.insert("1");
    Undly_74.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_74_set.insert("3");
    Undly_74.add_attribute("UOM", "Bu"); // 1
    Undly_74_set.insert("Bu");
    Undly_74.add_attribute("UOMQty", "3549812.530000"); // 1
    Undly_74_set.insert("3549812.530000");
    Undly_74.add_attribute("PxUOM", "Bu"); // 1
    Undly_74_set.insert("Bu");
    Undly_74.add_attribute("PxUOMQty", "19669572.590000"); // 1
    Undly_74_set.insert("19669572.590000");
    Undly_74.add_attribute("TmUnit", "H"); // 1
    Undly_74_set.insert("H");
    Undly_74.add_attribute("ExerStyle", "1"); // 1
    Undly_74_set.insert("1");
    Undly_74.add_attribute("CpnRt", "1080132.010000"); // 1
    Undly_74_set.insert("1080132.010000");
    Undly_74.add_attribute("Exch", "UnderlyingSecurityExchange_t_1586093166"); // 1
    Undly_74_set.insert("UnderlyingSecurityExchange_t_1586093166");
    Undly_74.add_attribute("Issr", "UnderlyingIssuer_t_1370513211"); // 1
    Undly_74_set.insert("UnderlyingIssuer_t_1370513211");
    Undly_74.add_attribute("EncUndIssrLen", "348866447"); // 1
    Undly_74_set.insert("348866447");
    Undly_74.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1876561256"); // 1
    Undly_74_set.insert("EncodedUnderlyingIssuer_t_1876561256");
    Undly_74.add_attribute("Desc", "UnderlyingSecurityDesc_t_452807291"); // 1
    Undly_74_set.insert("UnderlyingSecurityDesc_t_452807291");
    Undly_74.add_attribute("EncUndSecDescLen", "1015927807"); // 1
    Undly_74_set.insert("1015927807");
    Undly_74.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1307486459"); // 1
    Undly_74_set.insert("EncodedUnderlyingSecurityDesc_t_1307486459");
    Undly_74.add_attribute("CPPgm", "UnderlyingCPProgram_t_891412248"); // 1
    Undly_74_set.insert("UnderlyingCPProgram_t_891412248");
    Undly_74.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1551883647"); // 1
    Undly_74_set.insert("UnderlyingCPRegType_t_1551883647");
    Undly_74.add_attribute("AllocPct", "9295056.980000"); // 1
    Undly_74_set.insert("9295056.980000");
    Undly_74.add_attribute("Ccy", "CAN"); // 1
    Undly_74_set.insert("CAN");
    Undly_74.add_attribute("Qty", "9759393.780000"); // 1
    Undly_74_set.insert("9759393.780000");
    Undly_74.add_attribute("SettlTyp", "5"); // 1
    Undly_74_set.insert("5");
    Undly_74.add_attribute("CashAmt", "UnderlyingCashAmount_t_68538549"); // 1
    Undly_74_set.insert("UnderlyingCashAmount_t_68538549");
    Undly_74.add_attribute("CashTyp", "DIFF"); // 1
    Undly_74_set.insert("DIFF");
    Undly_74.add_attribute("Px", "19375983.520000"); // 1
    Undly_74_set.insert("19375983.520000");
    Undly_74.add_attribute("DirtPx", "16440344.110000"); // 1
    Undly_74_set.insert("16440344.110000");
    Undly_74.add_attribute("EndPx", "13664700.800000"); // 1
    Undly_74_set.insert("13664700.800000");
    Undly_74.add_attribute("StartVal", "UnderlyingStartValue_t_1799425791"); // 1
    Undly_74_set.insert("UnderlyingStartValue_t_1799425791");
    Undly_74.add_attribute("CurVal", "UnderlyingCurrentValue_t_1374838037"); // 1
    Undly_74_set.insert("UnderlyingCurrentValue_t_1374838037");
    Undly_74.add_attribute("EndVal", "UnderlyingEndValue_t_26465854"); // 1
    Undly_74_set.insert("UnderlyingEndValue_t_26465854");
    Undly_74.add_attribute("AdjQty", "3030259.910000"); // 1
    Undly_74_set.insert("3030259.910000");
    Undly_74.add_attribute("FxRate", "7151566.830000"); // 1
    Undly_74_set.insert("7151566.830000");
    Undly_74.add_attribute("FxRateCalc", "M"); // 1
    Undly_74_set.insert("M");
    Undly_74.add_attribute("CapValu", "UnderlyingCapValue_t_658007244"); // 1
    Undly_74_set.insert("UnderlyingCapValue_t_658007244");
    Undly_74.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1985769596"); // 1
    Undly_74_set.insert("UnderlyingSettlMethod_t_1985769596");
    Undly_74.add_attribute("PutCall", "728765095"); // 1
    Undly_74_set.insert("728765095");
    all_values.push_back(Undly_74_set);
    all_compo_names.insert("Undly_74_set");

    {
      xml_element UndAID_74{"UndAID"};
      multiset<string> UndAID_74_set;
      UndAID_74.add_attribute("AltID", "UnderlyingSecurityAltID_t_54993596"); // 2
      UndAID_74_set.insert("UnderlyingSecurityAltID_t_54993596");
      UndAID_74.add_attribute("AltIDSrc", "I"); // 2
      UndAID_74_set.insert("I");
      all_values.push_back(UndAID_74_set);
      all_compo_names.insert("UndAID_74_set");

      Undly_74.add_element(UndAID_74);
    }
    {
      xml_element Stip_112{"Stip"};
      multiset<string> Stip_112_set;
      Stip_112.add_attribute("Typ", "WAM"); // 2
      Stip_112_set.insert("WAM");
      Stip_112.add_attribute("Val", "UnderlyingStipValue_t_1641086762"); // 2
      Stip_112_set.insert("UnderlyingStipValue_t_1641086762");
      all_values.push_back(Stip_112_set);
      all_compo_names.insert("Stip_112_set");

      Undly_74.add_element(Stip_112);
    }
    {
      xml_element Pty_292{"Pty"};
      multiset<string> Pty_292_set;
      Pty_292.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1185888897"); // 2
      Pty_292_set.insert("UnderlyingInstrumentPartyID_t_1185888897");
      Pty_292.add_attribute("Src", "9"); // 2
      Pty_292_set.insert("9");
      Pty_292.add_attribute("R", "53"); // 2
      Pty_292_set.insert("53");
      all_values.push_back(Pty_292_set);
      all_compo_names.insert("Pty_292_set");

      {
        xml_element Sub_292{"Sub"};
        multiset<string> Sub_292_set;
        Sub_292.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1638696188"); // 3
        Sub_292_set.insert("UnderlyingInstrumentPartySubID_t_1638696188");
        Sub_292.add_attribute("Typ", "6"); // 3
        Sub_292_set.insert("6");
        all_values.push_back(Sub_292_set);
        all_compo_names.insert("Sub_292_set");

        Pty_292.add_element(Sub_292);
      }
      Undly_74.add_element(Pty_292);
    }
    elt.add_element(Undly_74);
  } // end Undly
  { // Undly
    xml_element Undly_75{"Undly"};
    multiset<string> Undly_75_set;
    Undly_75.add_attribute("Sym", "UnderlyingSymbol_t_530167181"); // 1
    Undly_75_set.insert("UnderlyingSymbol_t_530167181");
    Undly_75.add_attribute("Sfx", "WI"); // 1
    Undly_75_set.insert("WI");
    Undly_75.add_attribute("ID", "UnderlyingSecurityID_t_1605972550"); // 1
    Undly_75_set.insert("UnderlyingSecurityID_t_1605972550");
    Undly_75.add_attribute("Src", "6"); // 1
    Undly_75_set.insert("6");
    Undly_75.add_attribute("Prod", "6"); // 1
    Undly_75_set.insert("6");
    Undly_75.add_attribute("CFI", "UnderlyingCFICode_t_1144037689"); // 1
    Undly_75_set.insert("UnderlyingCFICode_t_1144037689");
    Undly_75.add_attribute("SecTyp", "CAN"); // 1
    Undly_75_set.insert("CAN");
    Undly_75.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1312307070"); // 1
    Undly_75_set.insert("UnderlyingSecuritySubType_t_1312307070");
    Undly_75.add_attribute("MMY", "1212576239"); // 1
    Undly_75_set.insert("1212576239");
    Undly_75.add_attribute("Mat", "UnderlyingMaturityDate_t_1241043970"); // 1
    Undly_75_set.insert("UnderlyingMaturityDate_t_1241043970");
    Undly_75.add_attribute("MatTm", "1102421774"); // 1
    Undly_75_set.insert("1102421774");
    Undly_75.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_709127002"); // 1
    Undly_75_set.insert("UnderlyingCouponPaymentDate_t_709127002");
    Undly_75.add_attribute("RestrctTyp", "XR"); // 1
    Undly_75_set.insert("XR");
    Undly_75.add_attribute("Snrty", "SR"); // 1
    Undly_75_set.insert("SR");
    Undly_75.add_attribute("NotlPctOut", "20839650.390000"); // 1
    Undly_75_set.insert("20839650.390000");
    Undly_75.add_attribute("OrigNotlPctOut", "4864962.570000"); // 1
    Undly_75_set.insert("4864962.570000");
    Undly_75.add_attribute("AttchPnt", "10573899.090000"); // 1
    Undly_75_set.insert("10573899.090000");
    Undly_75.add_attribute("DetchPnt", "6516380.740000"); // 1
    Undly_75_set.insert("6516380.740000");
    Undly_75.add_attribute("Issued", "UnderlyingIssueDate_t_1395787741"); // 1
    Undly_75_set.insert("UnderlyingIssueDate_t_1395787741");
    Undly_75.add_attribute("RepoCollSecTyp", "1715397154"); // 1
    Undly_75_set.insert("1715397154");
    Undly_75.add_attribute("RepoTrm", "489924023"); // 1
    Undly_75_set.insert("489924023");
    Undly_75.add_attribute("RepoRt", "21245528.370000"); // 1
    Undly_75_set.insert("21245528.370000");
    Undly_75.add_attribute("Fctr", "17703907.500000"); // 1
    Undly_75_set.insert("17703907.500000");
    Undly_75.add_attribute("CrdRtg", "UnderlyingCreditRating_t_305299708"); // 1
    Undly_75_set.insert("UnderlyingCreditRating_t_305299708");
    Undly_75.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_813847486"); // 1
    Undly_75_set.insert("UnderlyingInstrRegistry_t_813847486");
    Undly_75.add_attribute("Ctry", "1263993864"); // 1
    Undly_75_set.insert("1263993864");
    Undly_75.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1491188605"); // 1
    Undly_75_set.insert("UnderlyingStateOrProvinceOfIssue_t_1491188605");
    Undly_75.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1999492230"); // 1
    Undly_75_set.insert("UnderlyingLocaleOfIssue_t_1999492230");
    Undly_75.add_attribute("Redeem", "UnderlyingRedemptionDate_t_486674586"); // 1
    Undly_75_set.insert("UnderlyingRedemptionDate_t_486674586");
    Undly_75.add_attribute("StrkPx", "9824011.460000"); // 1
    Undly_75_set.insert("9824011.460000");
    Undly_75.add_attribute("StrkCcy", "CAN"); // 1
    Undly_75_set.insert("CAN");
    Undly_75.add_attribute("OptA", "1365025935"); // 1
    Undly_75_set.insert("1365025935");
    Undly_75.add_attribute("Mult", "15120700.350000"); // 1
    Undly_75_set.insert("15120700.350000");
    Undly_75.add_attribute("MultTyp", "1"); // 1
    Undly_75_set.insert("1");
    Undly_75.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_75_set.insert("0");
    Undly_75.add_attribute("UOM", "MWh"); // 1
    Undly_75_set.insert("MWh");
    Undly_75.add_attribute("UOMQty", "6171596.080000"); // 1
    Undly_75_set.insert("6171596.080000");
    Undly_75.add_attribute("PxUOM", "lbs"); // 1
    Undly_75_set.insert("lbs");
    Undly_75.add_attribute("PxUOMQty", "17212003.160000"); // 1
    Undly_75_set.insert("17212003.160000");
    Undly_75.add_attribute("TmUnit", "S"); // 1
    Undly_75_set.insert("S");
    Undly_75.add_attribute("ExerStyle", "2"); // 1
    Undly_75_set.insert("2");
    Undly_75.add_attribute("CpnRt", "2828436.700000"); // 1
    Undly_75_set.insert("2828436.700000");
    Undly_75.add_attribute("Exch", "UnderlyingSecurityExchange_t_170750333"); // 1
    Undly_75_set.insert("UnderlyingSecurityExchange_t_170750333");
    Undly_75.add_attribute("Issr", "UnderlyingIssuer_t_1623581640"); // 1
    Undly_75_set.insert("UnderlyingIssuer_t_1623581640");
    Undly_75.add_attribute("EncUndIssrLen", "219325061"); // 1
    Undly_75_set.insert("219325061");
    Undly_75.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_657246590"); // 1
    Undly_75_set.insert("EncodedUnderlyingIssuer_t_657246590");
    Undly_75.add_attribute("Desc", "UnderlyingSecurityDesc_t_533487901"); // 1
    Undly_75_set.insert("UnderlyingSecurityDesc_t_533487901");
    Undly_75.add_attribute("EncUndSecDescLen", "870963136"); // 1
    Undly_75_set.insert("870963136");
    Undly_75.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2053034332"); // 1
    Undly_75_set.insert("EncodedUnderlyingSecurityDesc_t_2053034332");
    Undly_75.add_attribute("CPPgm", "UnderlyingCPProgram_t_101401407"); // 1
    Undly_75_set.insert("UnderlyingCPProgram_t_101401407");
    Undly_75.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1360887159"); // 1
    Undly_75_set.insert("UnderlyingCPRegType_t_1360887159");
    Undly_75.add_attribute("AllocPct", "20301035.210000"); // 1
    Undly_75_set.insert("20301035.210000");
    Undly_75.add_attribute("Ccy", "EUR"); // 1
    Undly_75_set.insert("EUR");
    Undly_75.add_attribute("Qty", "6964673.590000"); // 1
    Undly_75_set.insert("6964673.590000");
    Undly_75.add_attribute("SettlTyp", "4"); // 1
    Undly_75_set.insert("4");
    Undly_75.add_attribute("CashAmt", "UnderlyingCashAmount_t_1009891825"); // 1
    Undly_75_set.insert("UnderlyingCashAmount_t_1009891825");
    Undly_75.add_attribute("CashTyp", "DIFF"); // 1
    Undly_75_set.insert("DIFF");
    Undly_75.add_attribute("Px", "14749769.590000"); // 1
    Undly_75_set.insert("14749769.590000");
    Undly_75.add_attribute("DirtPx", "19922929.710000"); // 1
    Undly_75_set.insert("19922929.710000");
    Undly_75.add_attribute("EndPx", "4545734.260000"); // 1
    Undly_75_set.insert("4545734.260000");
    Undly_75.add_attribute("StartVal", "UnderlyingStartValue_t_344335078"); // 1
    Undly_75_set.insert("UnderlyingStartValue_t_344335078");
    Undly_75.add_attribute("CurVal", "UnderlyingCurrentValue_t_1209835258"); // 1
    Undly_75_set.insert("UnderlyingCurrentValue_t_1209835258");
    Undly_75.add_attribute("EndVal", "UnderlyingEndValue_t_1966643461"); // 1
    Undly_75_set.insert("UnderlyingEndValue_t_1966643461");
    Undly_75.add_attribute("AdjQty", "6733660.770000"); // 1
    Undly_75_set.insert("6733660.770000");
    Undly_75.add_attribute("FxRate", "18118077.830000"); // 1
    Undly_75_set.insert("18118077.830000");
    Undly_75.add_attribute("FxRateCalc", "M"); // 1
    Undly_75_set.insert("M");
    Undly_75.add_attribute("CapValu", "UnderlyingCapValue_t_1290525685"); // 1
    Undly_75_set.insert("UnderlyingCapValue_t_1290525685");
    Undly_75.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1578603730"); // 1
    Undly_75_set.insert("UnderlyingSettlMethod_t_1578603730");
    Undly_75.add_attribute("PutCall", "2048984206"); // 1
    Undly_75_set.insert("2048984206");
    all_values.push_back(Undly_75_set);
    all_compo_names.insert("Undly_75_set");

    {
      xml_element UndAID_75{"UndAID"};
      multiset<string> UndAID_75_set;
      UndAID_75.add_attribute("AltID", "UnderlyingSecurityAltID_t_1001245615"); // 2
      UndAID_75_set.insert("UnderlyingSecurityAltID_t_1001245615");
      UndAID_75.add_attribute("AltIDSrc", "9"); // 2
      UndAID_75_set.insert("9");
      all_values.push_back(UndAID_75_set);
      all_compo_names.insert("UndAID_75_set");

      Undly_75.add_element(UndAID_75);
    }
    {
      xml_element Stip_113{"Stip"};
      multiset<string> Stip_113_set;
      Stip_113.add_attribute("Typ", "AVAILQTY"); // 2
      Stip_113_set.insert("AVAILQTY");
      Stip_113.add_attribute("Val", "UnderlyingStipValue_t_1171995949"); // 2
      Stip_113_set.insert("UnderlyingStipValue_t_1171995949");
      all_values.push_back(Stip_113_set);
      all_compo_names.insert("Stip_113_set");

      Undly_75.add_element(Stip_113);
    }
    {
      xml_element Pty_293{"Pty"};
      multiset<string> Pty_293_set;
      Pty_293.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1923919444"); // 2
      Pty_293_set.insert("UnderlyingInstrumentPartyID_t_1923919444");
      Pty_293.add_attribute("Src", "D"); // 2
      Pty_293_set.insert("D");
      Pty_293.add_attribute("R", "77"); // 2
      Pty_293_set.insert("77");
      all_values.push_back(Pty_293_set);
      all_compo_names.insert("Pty_293_set");

      {
        xml_element Sub_293{"Sub"};
        multiset<string> Sub_293_set;
        Sub_293.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_309923698"); // 3
        Sub_293_set.insert("UnderlyingInstrumentPartySubID_t_309923698");
        Sub_293.add_attribute("Typ", "10"); // 3
        Sub_293_set.insert("10");
        all_values.push_back(Sub_293_set);
        all_compo_names.insert("Sub_293_set");

        Pty_293.add_element(Sub_293);
      }
      Undly_75.add_element(Pty_293);
    }
    elt.add_element(Undly_75);
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
