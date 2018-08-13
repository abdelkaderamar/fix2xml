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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SettlObligation" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementObligationReport_message_t_0;
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1770878466"); // 0
  SettlementObligationReport_message_t_0.insert("ClearingBusinessDate_t_1770878466");
  elt.add_attribute("CycleNo", "1750128062"); // 0
  SettlementObligationReport_message_t_0.insert("1750128062");
  elt.add_attribute("SettlMsgID", "SettlObligMsgID_t_20931576"); // 0
  SettlementObligationReport_message_t_0.insert("SettlObligMsgID_t_20931576");
  elt.add_attribute("SettlMode", "2"); // 0
  SettlementObligationReport_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_1864628568"); // 0
  SettlementObligationReport_message_t_0.insert("Text_t_1864628568");
  elt.add_attribute("EncTxtLen", "616040295"); // 0
  SettlementObligationReport_message_t_0.insert("616040295");
  elt.add_attribute("EncTxt", "EncodedText_t_1067490218"); // 0
  SettlementObligationReport_message_t_0.insert("EncodedText_t_1067490218");
  elt.add_attribute("TxnTm", "TransactTime_t_1378061105"); // 0
  SettlementObligationReport_message_t_0.insert("TransactTime_t_1378061105");
  all_values.push_back(SettlementObligationReport_message_t_0);
  all_compo_names.insert("SettlementObligationReport_message_t");

  { // Hdr
    xml_element Hdr_92{"Hdr"};
    multiset<string> Hdr_92_set;
    Hdr_92.add_attribute("SeqNum", "1374304093"); // 1
    Hdr_92_set.insert("1374304093");
    Hdr_92.add_attribute("SID", "SenderCompID_t_370692323"); // 1
    Hdr_92_set.insert("SenderCompID_t_370692323");
    Hdr_92.add_attribute("TID", "TargetCompID_t_2121649966"); // 1
    Hdr_92_set.insert("TargetCompID_t_2121649966");
    Hdr_92.add_attribute("OBID", "OnBehalfOfCompID_t_83284739"); // 1
    Hdr_92_set.insert("OnBehalfOfCompID_t_83284739");
    Hdr_92.add_attribute("D2ID", "DeliverToCompID_t_32231079"); // 1
    Hdr_92_set.insert("DeliverToCompID_t_32231079");
    Hdr_92.add_attribute("SSub", "SenderSubID_t_1402681539"); // 1
    Hdr_92_set.insert("SenderSubID_t_1402681539");
    Hdr_92.add_attribute("SLoc", "SenderLocationID_t_1600706670"); // 1
    Hdr_92_set.insert("SenderLocationID_t_1600706670");
    Hdr_92.add_attribute("TSub", "TargetSubID_t_628787968"); // 1
    Hdr_92_set.insert("TargetSubID_t_628787968");
    Hdr_92.add_attribute("TLoc", "TargetLocationID_t_946049884"); // 1
    Hdr_92_set.insert("TargetLocationID_t_946049884");
    Hdr_92.add_attribute("OBSub", "OnBehalfOfSubID_t_522875422"); // 1
    Hdr_92_set.insert("OnBehalfOfSubID_t_522875422");
    Hdr_92.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1910689392"); // 1
    Hdr_92_set.insert("OnBehalfOfLocationID_t_1910689392");
    Hdr_92.add_attribute("D2Sub", "DeliverToSubID_t_1897822624"); // 1
    Hdr_92_set.insert("DeliverToSubID_t_1897822624");
    Hdr_92.add_attribute("D2Loc", "DeliverToLocationID_t_294072137"); // 1
    Hdr_92_set.insert("DeliverToLocationID_t_294072137");
    Hdr_92.add_attribute("PosDup", "N"); // 1
    Hdr_92_set.insert("N");
    Hdr_92.add_attribute("PosRsnd", "Y"); // 1
    Hdr_92_set.insert("Y");
    Hdr_92.add_attribute("Snt", "SendingTime_t_1718640304"); // 1
    Hdr_92_set.insert("SendingTime_t_1718640304");
    Hdr_92.add_attribute("OrigSnt", "OrigSendingTime_t_1307158043"); // 1
    Hdr_92_set.insert("OrigSendingTime_t_1307158043");
    Hdr_92.add_attribute("MsgEncd", "MessageEncoding_t_1435438696"); // 1
    Hdr_92_set.insert("MessageEncoding_t_1435438696");
    all_values.push_back(Hdr_92_set);
    all_compo_names.insert("Hdr_92_set");

    {
      xml_element Hop_92{"Hop"};
      multiset<string> Hop_92_set;
      Hop_92.add_attribute("ID", "HopCompID_t_1697140751"); // 2
      Hop_92_set.insert("HopCompID_t_1697140751");
      Hop_92.add_attribute("Ref", "1906588037"); // 2
      Hop_92_set.insert("1906588037");
      Hop_92.add_attribute("Snt", "HopSendingTime_t_339544499"); // 2
      Hop_92_set.insert("HopSendingTime_t_339544499");
      all_values.push_back(Hop_92_set);
      all_compo_names.insert("Hop_92_set");

      Hdr_92.add_element(Hop_92);
    }
    elt.add_element(Hdr_92);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_18{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_18_set;
    ApplSeqCtrl_18.add_attribute("ApplID", "ApplID_t_2034635683"); // 1
    ApplSeqCtrl_18_set.insert("ApplID_t_2034635683");
    ApplSeqCtrl_18.add_attribute("ApplSeqNum", "1796089526"); // 1
    ApplSeqCtrl_18_set.insert("1796089526");
    ApplSeqCtrl_18.add_attribute("ApplLastSeqNum", "2110422965"); // 1
    ApplSeqCtrl_18_set.insert("2110422965");
    ApplSeqCtrl_18.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_18_set.insert("false");
    all_values.push_back(ApplSeqCtrl_18_set);
    all_compo_names.insert("ApplSeqCtrl_18_set");

    elt.add_element(ApplSeqCtrl_18);
  } // end ApplSeqCtrl
  { // SettlObligInst
    xml_element SettlObligInst_0{"SettlObligInst"};
    multiset<string> SettlObligInst_0_set;
    SettlObligInst_0.add_attribute("NetGrossInd", "1"); // 1
    SettlObligInst_0_set.insert("1");
    SettlObligInst_0.add_attribute("SettlID", "SettlObligID_t_1354425017"); // 1
    SettlObligInst_0_set.insert("SettlObligID_t_1354425017");
    SettlObligInst_0.add_attribute("SettlTransTyp", "R"); // 1
    SettlObligInst_0_set.insert("R");
    SettlObligInst_0.add_attribute("SettlRefID", "SettlObligRefID_t_710971626"); // 1
    SettlObligInst_0_set.insert("SettlObligRefID_t_710971626");
    SettlObligInst_0.add_attribute("CcyAmt", "CcyAmt_t_585002474"); // 1
    SettlObligInst_0_set.insert("CcyAmt_t_585002474");
    SettlObligInst_0.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1659881843"); // 1
    SettlObligInst_0_set.insert("SettlCurrAmt_t_1659881843");
    SettlObligInst_0.add_attribute("Ccy", "JPY"); // 1
    SettlObligInst_0_set.insert("JPY");
    SettlObligInst_0.add_attribute("SettlCcy", "GBP"); // 1
    SettlObligInst_0_set.insert("GBP");
    SettlObligInst_0.add_attribute("SettlCurrFxRt", "19618503.320000"); // 1
    SettlObligInst_0_set.insert("19618503.320000");
    SettlObligInst_0.add_attribute("SettlDt", "SettlDate_t_1196389605"); // 1
    SettlObligInst_0_set.insert("SettlDate_t_1196389605");
    SettlObligInst_0.add_attribute("EfctvTm", "EffectiveTime_t_1742682996"); // 1
    SettlObligInst_0_set.insert("EffectiveTime_t_1742682996");
    SettlObligInst_0.add_attribute("ExpireTm", "ExpireTime_t_760416568"); // 1
    SettlObligInst_0_set.insert("ExpireTime_t_760416568");
    SettlObligInst_0.add_attribute("LastUpdateTm", "LastUpdateTime_t_1719265027"); // 1
    SettlObligInst_0_set.insert("LastUpdateTime_t_1719265027");
    all_values.push_back(SettlObligInst_0_set);
    all_compo_names.insert("SettlObligInst_0_set");

    {
      xml_element Instrmt_82{"Instrmt"};
      multiset<string> Instrmt_82_set;
      Instrmt_82.add_attribute("Sym", "Symbol_t_1505888741"); // 2
      Instrmt_82_set.insert("Symbol_t_1505888741");
      Instrmt_82.add_attribute("Sfx", "CD"); // 2
      Instrmt_82_set.insert("CD");
      Instrmt_82.add_attribute("ID", "SecurityID_t_2013337164"); // 2
      Instrmt_82_set.insert("SecurityID_t_2013337164");
      Instrmt_82.add_attribute("Src", "8"); // 2
      Instrmt_82_set.insert("8");
      Instrmt_82.add_attribute("Prod", "8"); // 2
      Instrmt_82_set.insert("8");
      Instrmt_82.add_attribute("ProdCmplx", "ProductComplex_t_1584493820"); // 2
      Instrmt_82_set.insert("ProductComplex_t_1584493820");
      Instrmt_82.add_attribute("SecGrp", "SecurityGroup_t_214580056"); // 2
      Instrmt_82_set.insert("SecurityGroup_t_214580056");
      Instrmt_82.add_attribute("CFI", "CFICode_t_813743050"); // 2
      Instrmt_82_set.insert("CFICode_t_813743050");
      Instrmt_82.add_attribute("SecTyp", "RETIRED"); // 2
      Instrmt_82_set.insert("RETIRED");
      Instrmt_82.add_attribute("SubTyp", "SecuritySubType_t_2121168093"); // 2
      Instrmt_82_set.insert("SecuritySubType_t_2121168093");
      Instrmt_82.add_attribute("MMY", "1153287550"); // 2
      Instrmt_82_set.insert("1153287550");
      Instrmt_82.add_attribute("MatDt", "MaturityDate_t_1021302958"); // 2
      Instrmt_82_set.insert("MaturityDate_t_1021302958");
      Instrmt_82.add_attribute("MatTm", "1769773972"); // 2
      Instrmt_82_set.insert("1769773972");
      Instrmt_82.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1116226867"); // 2
      Instrmt_82_set.insert("SettleOnOpenFlag_t_1116226867");
      Instrmt_82.add_attribute("AsgnMeth", "511099407"); // 2
      Instrmt_82_set.insert("511099407");
      Instrmt_82.add_attribute("Status", "2"); // 2
      Instrmt_82_set.insert("2");
      Instrmt_82.add_attribute("CpnPmt", "CouponPaymentDate_t_759708276"); // 2
      Instrmt_82_set.insert("CouponPaymentDate_t_759708276");
      Instrmt_82.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_82_set.insert("FR");
      Instrmt_82.add_attribute("Snrty", "SD"); // 2
      Instrmt_82_set.insert("SD");
      Instrmt_82.add_attribute("NotlPctOut", "14706799.020000"); // 2
      Instrmt_82_set.insert("14706799.020000");
      Instrmt_82.add_attribute("OrigNotlPctOut", "3030432.510000"); // 2
      Instrmt_82_set.insert("3030432.510000");
      Instrmt_82.add_attribute("AttchPnt", "12372873.720000"); // 2
      Instrmt_82_set.insert("12372873.720000");
      Instrmt_82.add_attribute("DetchPnt", "4048602.040000"); // 2
      Instrmt_82_set.insert("4048602.040000");
      Instrmt_82.add_attribute("Issued", "IssueDate_t_862212043"); // 2
      Instrmt_82_set.insert("IssueDate_t_862212043");
      Instrmt_82.add_attribute("RepoCollSecTyp", "832970306"); // 2
      Instrmt_82_set.insert("832970306");
      Instrmt_82.add_attribute("RepoTrm", "1518755232"); // 2
      Instrmt_82_set.insert("1518755232");
      Instrmt_82.add_attribute("RepoRt", "6765787.270000"); // 2
      Instrmt_82_set.insert("6765787.270000");
      Instrmt_82.add_attribute("Fctr", "20293599.110000"); // 2
      Instrmt_82_set.insert("20293599.110000");
      Instrmt_82.add_attribute("CrdRtg", "CreditRating_t_1113954581"); // 2
      Instrmt_82_set.insert("CreditRating_t_1113954581");
      Instrmt_82.add_attribute("Rgstry", "InstrRegistry_t_1436995296"); // 2
      Instrmt_82_set.insert("InstrRegistry_t_1436995296");
      Instrmt_82.add_attribute("IssuCtry", "1601141290"); // 2
      Instrmt_82_set.insert("1601141290");
      Instrmt_82.add_attribute("StPrv", "StateOrProvinceOfIssue_t_472359674"); // 2
      Instrmt_82_set.insert("StateOrProvinceOfIssue_t_472359674");
      Instrmt_82.add_attribute("Lcl", "LocaleOfIssue_t_1947750840"); // 2
      Instrmt_82_set.insert("LocaleOfIssue_t_1947750840");
      Instrmt_82.add_attribute("Redeem", "RedemptionDate_t_1466994806"); // 2
      Instrmt_82_set.insert("RedemptionDate_t_1466994806");
      Instrmt_82.add_attribute("StrkPx", "15272653.350000"); // 2
      Instrmt_82_set.insert("15272653.350000");
      Instrmt_82.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_82_set.insert("GBP");
      Instrmt_82.add_attribute("StrkMult", "17418453.910000"); // 2
      Instrmt_82_set.insert("17418453.910000");
      Instrmt_82.add_attribute("StrkValu", "21397982.450000"); // 2
      Instrmt_82_set.insert("21397982.450000");
      Instrmt_82.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_82_set.insert("3");
      Instrmt_82.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_82_set.insert("3");
      Instrmt_82.add_attribute("StrkPxBndryPrcsn", "11456021.470000"); // 2
      Instrmt_82_set.insert("11456021.470000");
      Instrmt_82.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_82_set.insert("1");
      Instrmt_82.add_attribute("OptAt", "1337820161"); // 2
      Instrmt_82_set.insert("1337820161");
      Instrmt_82.add_attribute("Mult", "1143453.660000"); // 2
      Instrmt_82_set.insert("1143453.660000");
      Instrmt_82.add_attribute("MultTyp", "2"); // 2
      Instrmt_82_set.insert("2");
      Instrmt_82.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_82_set.insert("0");
      Instrmt_82.add_attribute("MinPxIncr", "8740536.420000"); // 2
      Instrmt_82_set.insert("8740536.420000");
      Instrmt_82.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1141115396"); // 2
      Instrmt_82_set.insert("MinPriceIncrementAmount_t_1141115396");
      Instrmt_82.add_attribute("UOM", "Alw"); // 2
      Instrmt_82_set.insert("Alw");
      Instrmt_82.add_attribute("UOMQty", "1972498.970000"); // 2
      Instrmt_82_set.insert("1972498.970000");
      Instrmt_82.add_attribute("PxUOM", "USD"); // 2
      Instrmt_82_set.insert("USD");
      Instrmt_82.add_attribute("PxUOMQty", "14443408.410000"); // 2
      Instrmt_82_set.insert("14443408.410000");
      Instrmt_82.add_attribute("SettlMeth", "P"); // 2
      Instrmt_82_set.insert("P");
      Instrmt_82.add_attribute("ExerStyle", "2"); // 2
      Instrmt_82_set.insert("2");
      Instrmt_82.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_82_set.insert("1");
      Instrmt_82.add_attribute("OptPayAmt", "OptPayoutAmount_t_2120865333"); // 2
      Instrmt_82_set.insert("OptPayoutAmount_t_2120865333");
      Instrmt_82.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_82_set.insert("INT");
      Instrmt_82.add_attribute("ValMeth", "CDS"); // 2
      Instrmt_82_set.insert("CDS");
      Instrmt_82.add_attribute("ListMeth", "0"); // 2
      Instrmt_82_set.insert("0");
      Instrmt_82.add_attribute("CapPx", "1249774.180000"); // 2
      Instrmt_82_set.insert("1249774.180000");
      Instrmt_82.add_attribute("FlrPx", "16128450.530000"); // 2
      Instrmt_82_set.insert("16128450.530000");
      Instrmt_82.add_attribute("PutCall", "0"); // 2
      Instrmt_82_set.insert("0");
      Instrmt_82.add_attribute("FlexInd", "false"); // 2
      Instrmt_82_set.insert("false");
      Instrmt_82.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_82_set.insert("true");
      Instrmt_82.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_82_set.insert("Wk");
      Instrmt_82.add_attribute("CpnRt", "12512998.050000"); // 2
      Instrmt_82_set.insert("12512998.050000");
      Instrmt_82.add_attribute("Exch", "SecurityExchange_t_1836361190"); // 2
      Instrmt_82_set.insert("SecurityExchange_t_1836361190");
      Instrmt_82.add_attribute("PosLmt", "533839371"); // 2
      Instrmt_82_set.insert("533839371");
      Instrmt_82.add_attribute("NTPosLmt", "1243614402"); // 2
      Instrmt_82_set.insert("1243614402");
      Instrmt_82.add_attribute("Issr", "Issuer_t_1727033444"); // 2
      Instrmt_82_set.insert("Issuer_t_1727033444");
      Instrmt_82.add_attribute("EncIssrLen", "101885560"); // 2
      Instrmt_82_set.insert("101885560");
      Instrmt_82.add_attribute("EncIssr", "EncodedIssuer_t_241732901"); // 2
      Instrmt_82_set.insert("EncodedIssuer_t_241732901");
      Instrmt_82.add_attribute("Desc", "SecurityDesc_t_491525009"); // 2
      Instrmt_82_set.insert("SecurityDesc_t_491525009");
      Instrmt_82.add_attribute("EncSecDescLen", "1439705721"); // 2
      Instrmt_82_set.insert("1439705721");
      Instrmt_82.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_356078268"); // 2
      Instrmt_82_set.insert("EncodedSecurityDesc_t_356078268");
      Instrmt_82.add_attribute("Pool", "Pool_t_1914599629"); // 2
      Instrmt_82_set.insert("Pool_t_1914599629");
      Instrmt_82.add_attribute("CSetMo", "2069353661"); // 2
      Instrmt_82_set.insert("2069353661");
      Instrmt_82.add_attribute("CPPgm", "1"); // 2
      Instrmt_82_set.insert("1");
      Instrmt_82.add_attribute("CPRegT", "CPRegType_t_908231377"); // 2
      Instrmt_82_set.insert("CPRegType_t_908231377");
      Instrmt_82.add_attribute("Dated", "DatedDate_t_128923482"); // 2
      Instrmt_82_set.insert("DatedDate_t_128923482");
      Instrmt_82.add_attribute("IntAcrl", "InterestAccrualDate_t_1427381807"); // 2
      Instrmt_82_set.insert("InterestAccrualDate_t_1427381807");
      all_values.push_back(Instrmt_82_set);
      all_compo_names.insert("Instrmt_82_set");

      {
        xml_element AID_85{"AID"};
        multiset<string> AID_85_set;
        AID_85.add_attribute("AltID", "SecurityAltID_t_204906377"); // 3
        AID_85_set.insert("SecurityAltID_t_204906377");
        AID_85.add_attribute("AltIDSrc", "G"); // 3
        AID_85_set.insert("G");
        all_values.push_back(AID_85_set);
        all_compo_names.insert("AID_85_set");

        Instrmt_82.add_element(AID_85);
      }
      {
        xml_element SecXML_85{"SecXML"};
        multiset<string> SecXML_85_set;
        SecXML_85.add_attribute("Schema", "SecurityXMLSchema_t_2029491908"); // 3
        SecXML_85_set.insert("SecurityXMLSchema_t_2029491908");
        all_values.push_back(SecXML_85_set);
        all_compo_names.insert("SecXML_85_set");

        Instrmt_82.add_element(SecXML_85);
      }
      {
        xml_element Evnt_85{"Evnt"};
        multiset<string> Evnt_85_set;
        Evnt_85.add_attribute("EventTyp", "1"); // 3
        Evnt_85_set.insert("1");
        Evnt_85.add_attribute("Dt", "EventDate_t_1703091822"); // 3
        Evnt_85_set.insert("EventDate_t_1703091822");
        Evnt_85.add_attribute("Tm", "EventTime_t_2002873594"); // 3
        Evnt_85_set.insert("EventTime_t_2002873594");
        Evnt_85.add_attribute("Px", "11992591.900000"); // 3
        Evnt_85_set.insert("11992591.900000");
        Evnt_85.add_attribute("Txt", "EventText_t_1714795585"); // 3
        Evnt_85_set.insert("EventText_t_1714795585");
        all_values.push_back(Evnt_85_set);
        all_compo_names.insert("Evnt_85_set");

        Instrmt_82.add_element(Evnt_85);
      }
      {
        xml_element Pty_424{"Pty"};
        multiset<string> Pty_424_set;
        Pty_424.add_attribute("ID", "InstrumentPartyID_t_942726212"); // 3
        Pty_424_set.insert("InstrumentPartyID_t_942726212");
        Pty_424.add_attribute("Src", "A"); // 3
        Pty_424_set.insert("A");
        Pty_424.add_attribute("R", "85"); // 3
        Pty_424_set.insert("85");
        all_values.push_back(Pty_424_set);
        all_compo_names.insert("Pty_424_set");

        {
          xml_element Sub_424{"Sub"};
          multiset<string> Sub_424_set;
          Sub_424.add_attribute("ID", "InstrumentPartySubID_t_354938505"); // 4
          Sub_424_set.insert("InstrumentPartySubID_t_354938505");
          Sub_424.add_attribute("Typ", "18"); // 4
          Sub_424_set.insert("18");
          all_values.push_back(Sub_424_set);
          all_compo_names.insert("Sub_424_set");

          Pty_424.add_element(Sub_424);
        }
        Instrmt_82.add_element(Pty_424);
      }
      {
        xml_element CmplxEvnt_82{"CmplxEvnt"};
        multiset<string> CmplxEvnt_82_set;
        CmplxEvnt_82.add_attribute("Typ", "3"); // 3
        CmplxEvnt_82_set.insert("3");
        CmplxEvnt_82.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1294416132"); // 3
        CmplxEvnt_82_set.insert("ComplexOptPayoutAmount_t_1294416132");
        CmplxEvnt_82.add_attribute("Px", "3532973.770000"); // 3
        CmplxEvnt_82_set.insert("3532973.770000");
        CmplxEvnt_82.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_82_set.insert("1");
        CmplxEvnt_82.add_attribute("PxBndryPrcsn", "18282555.030000"); // 3
        CmplxEvnt_82_set.insert("18282555.030000");
        CmplxEvnt_82.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_82_set.insert("3");
        CmplxEvnt_82.add_attribute("Cond", "1"); // 3
        CmplxEvnt_82_set.insert("1");
        all_values.push_back(CmplxEvnt_82_set);
        all_compo_names.insert("CmplxEvnt_82_set");

        {
          xml_element EvntDts_82{"EvntDts"};
          multiset<string> EvntDts_82_set;
          EvntDts_82.add_attribute("StartDt", "ComplexEventStartDate_t_1930141063"); // 4
          EvntDts_82_set.insert("ComplexEventStartDate_t_1930141063");
          EvntDts_82.add_attribute("EndDt", "ComplexEventEndDate_t_1838644681"); // 4
          EvntDts_82_set.insert("ComplexEventEndDate_t_1838644681");
          all_values.push_back(EvntDts_82_set);
          all_compo_names.insert("EvntDts_82_set");

          {
            xml_element EvntTms_82{"EvntTms"};
            multiset<string> EvntTms_82_set;
            EvntTms_82.add_attribute("StartTm", "1872465551"); // 5
            EvntTms_82_set.insert("1872465551");
            EvntTms_82.add_attribute("EndTm", "1222363136"); // 5
            EvntTms_82_set.insert("1222363136");
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
      xml_element Pty_425{"Pty"};
      multiset<string> Pty_425_set;
      Pty_425.add_attribute("ID", "PartyID_t_47239301"); // 2
      Pty_425_set.insert("PartyID_t_47239301");
      Pty_425.add_attribute("Src", "H"); // 2
      Pty_425_set.insert("H");
      Pty_425.add_attribute("R", "26"); // 2
      Pty_425_set.insert("26");
      all_values.push_back(Pty_425_set);
      all_compo_names.insert("Pty_425_set");

      {
        xml_element Sub_425{"Sub"};
        multiset<string> Sub_425_set;
        Sub_425.add_attribute("ID", "PartySubID_t_1277371212"); // 3
        Sub_425_set.insert("PartySubID_t_1277371212");
        Sub_425.add_attribute("Typ", "8"); // 3
        Sub_425_set.insert("8");
        all_values.push_back(Sub_425_set);
        all_compo_names.insert("Sub_425_set");

        Pty_425.add_element(Sub_425);
      }
      SettlObligInst_0.add_element(Pty_425);
    }
    {
      xml_element SettlDetails_0{"SettlDetails"};
      multiset<string> SettlDetails_0_set;
      SettlDetails_0.add_attribute("SettlSrc", "3"); // 2
      SettlDetails_0_set.insert("3");
      all_values.push_back(SettlDetails_0_set);
      all_compo_names.insert("SettlDetails_0_set");

      {
        xml_element Pty_426{"Pty"};
        multiset<string> Pty_426_set;
        Pty_426.add_attribute("ID", "SettlPartyID_t_557269371"); // 3
        Pty_426_set.insert("SettlPartyID_t_557269371");
        Pty_426.add_attribute("Src", "3"); // 3
        Pty_426_set.insert("3");
        Pty_426.add_attribute("R", "27"); // 3
        Pty_426_set.insert("27");
        all_values.push_back(Pty_426_set);
        all_compo_names.insert("Pty_426_set");

        {
          xml_element Sub_426{"Sub"};
          multiset<string> Sub_426_set;
          Sub_426.add_attribute("ID", "SettlPartySubID_t_439277632"); // 4
          Sub_426_set.insert("SettlPartySubID_t_439277632");
          Sub_426.add_attribute("Typ", "31"); // 4
          Sub_426_set.insert("31");
          all_values.push_back(Sub_426_set);
          all_compo_names.insert("Sub_426_set");

          Pty_426.add_element(Sub_426);
        }
        SettlDetails_0.add_element(Pty_426);
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
