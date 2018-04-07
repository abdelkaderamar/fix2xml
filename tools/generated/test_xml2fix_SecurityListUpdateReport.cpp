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
  elt.add_attribute("RptID", "99757208"); // 0
  SecurityListUpdateReport_message_t_0.insert("99757208");
  elt.add_attribute("ListID", "SecurityListID_t_411138471"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityListID_t_411138471");
  elt.add_attribute("ListRefID", "SecurityListRefID_t_1441280585"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityListRefID_t_1441280585");
  elt.add_attribute("ListDesc", "SecurityListDesc_t_1568118201"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityListDesc_t_1568118201");
  elt.add_attribute("ListTyp", "4"); // 0
  SecurityListUpdateReport_message_t_0.insert("4");
  elt.add_attribute("LstTypSrc", "2"); // 0
  SecurityListUpdateReport_message_t_0.insert("2");
  elt.add_attribute("ReqID", "SecurityReqID_t_1641493038"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityReqID_t_1641493038");
  elt.add_attribute("RspID", "SecurityResponseID_t_1967816822"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityResponseID_t_1967816822");
  elt.add_attribute("ReqRslt", "3"); // 0
  SecurityListUpdateReport_message_t_0.insert("3");
  elt.add_attribute("TotNoReltdSym", "789312767"); // 0
  SecurityListUpdateReport_message_t_0.insert("789312767");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1766110245"); // 0
  SecurityListUpdateReport_message_t_0.insert("ClearingBusinessDate_t_1766110245");
  elt.add_attribute("UpdActn", "D"); // 0
  SecurityListUpdateReport_message_t_0.insert("D");
  elt.add_attribute("CorpActn", "H"); // 0
  SecurityListUpdateReport_message_t_0.insert("H");
  elt.add_attribute("MktID", "MarketID_t_289925101"); // 0
  SecurityListUpdateReport_message_t_0.insert("MarketID_t_289925101");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1673637521"); // 0
  SecurityListUpdateReport_message_t_0.insert("MarketSegmentID_t_1673637521");
  elt.add_attribute("TxnTm", "TransactTime_t_1378087284"); // 0
  SecurityListUpdateReport_message_t_0.insert("TransactTime_t_1378087284");
  elt.add_attribute("LastFragment", "Y"); // 0
  SecurityListUpdateReport_message_t_0.insert("Y");
  all_values.push_back(SecurityListUpdateReport_message_t_0);
  all_compo_names.insert("SecurityListUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_85{"Hdr"};
    multiset<string> Hdr_85_set;
    Hdr_85.add_attribute("SeqNum", "1749071932"); // 1
    Hdr_85_set.insert("1749071932");
    Hdr_85.add_attribute("SID", "SenderCompID_t_1100669493"); // 1
    Hdr_85_set.insert("SenderCompID_t_1100669493");
    Hdr_85.add_attribute("TID", "TargetCompID_t_1743247482"); // 1
    Hdr_85_set.insert("TargetCompID_t_1743247482");
    Hdr_85.add_attribute("OBID", "OnBehalfOfCompID_t_1379117704"); // 1
    Hdr_85_set.insert("OnBehalfOfCompID_t_1379117704");
    Hdr_85.add_attribute("D2ID", "DeliverToCompID_t_358255560"); // 1
    Hdr_85_set.insert("DeliverToCompID_t_358255560");
    Hdr_85.add_attribute("SSub", "SenderSubID_t_300292655"); // 1
    Hdr_85_set.insert("SenderSubID_t_300292655");
    Hdr_85.add_attribute("SLoc", "SenderLocationID_t_1684180992"); // 1
    Hdr_85_set.insert("SenderLocationID_t_1684180992");
    Hdr_85.add_attribute("TSub", "TargetSubID_t_1370840697"); // 1
    Hdr_85_set.insert("TargetSubID_t_1370840697");
    Hdr_85.add_attribute("TLoc", "TargetLocationID_t_460107842"); // 1
    Hdr_85_set.insert("TargetLocationID_t_460107842");
    Hdr_85.add_attribute("OBSub", "OnBehalfOfSubID_t_913169177"); // 1
    Hdr_85_set.insert("OnBehalfOfSubID_t_913169177");
    Hdr_85.add_attribute("OBLoc", "OnBehalfOfLocationID_t_130531216"); // 1
    Hdr_85_set.insert("OnBehalfOfLocationID_t_130531216");
    Hdr_85.add_attribute("D2Sub", "DeliverToSubID_t_568307262"); // 1
    Hdr_85_set.insert("DeliverToSubID_t_568307262");
    Hdr_85.add_attribute("D2Loc", "DeliverToLocationID_t_1402126801"); // 1
    Hdr_85_set.insert("DeliverToLocationID_t_1402126801");
    Hdr_85.add_attribute("PosDup", "N"); // 1
    Hdr_85_set.insert("N");
    Hdr_85.add_attribute("PosRsnd", "Y"); // 1
    Hdr_85_set.insert("Y");
    Hdr_85.add_attribute("Snt", "SendingTime_t_1813265272"); // 1
    Hdr_85_set.insert("SendingTime_t_1813265272");
    Hdr_85.add_attribute("OrigSnt", "OrigSendingTime_t_953957777"); // 1
    Hdr_85_set.insert("OrigSendingTime_t_953957777");
    Hdr_85.add_attribute("MsgEncd", "MessageEncoding_t_88699024"); // 1
    Hdr_85_set.insert("MessageEncoding_t_88699024");
    all_values.push_back(Hdr_85_set);
    all_compo_names.insert("Hdr_85_set");

    {
      xml_element Hop_85{"Hop"};
      multiset<string> Hop_85_set;
      Hop_85.add_attribute("ID", "HopCompID_t_383376275"); // 2
      Hop_85_set.insert("HopCompID_t_383376275");
      Hop_85.add_attribute("Ref", "872834021"); // 2
      Hop_85_set.insert("872834021");
      Hop_85.add_attribute("Snt", "HopSendingTime_t_1730192062"); // 2
      Hop_85_set.insert("HopSendingTime_t_1730192062");
      all_values.push_back(Hop_85_set);
      all_compo_names.insert("Hop_85_set");

      Hdr_85.add_element(Hop_85);
    }
    elt.add_element(Hdr_85);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_15{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_15_set;
    ApplSeqCtrl_15.add_attribute("ApplID", "ApplID_t_203709450"); // 1
    ApplSeqCtrl_15_set.insert("ApplID_t_203709450");
    ApplSeqCtrl_15.add_attribute("ApplSeqNum", "460737912"); // 1
    ApplSeqCtrl_15_set.insert("460737912");
    ApplSeqCtrl_15.add_attribute("ApplLastSeqNum", "372021182"); // 1
    ApplSeqCtrl_15_set.insert("372021182");
    ApplSeqCtrl_15.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_15_set.insert("false");
    all_values.push_back(ApplSeqCtrl_15_set);
    all_compo_names.insert("ApplSeqCtrl_15_set");

    elt.add_element(ApplSeqCtrl_15);
  } // end ApplSeqCtrl
  { // SecL
    xml_element SecL_2{"SecL"};
    multiset<string> SecL_2_set;
    SecL_2.add_attribute("ListUpdActn", "M"); // 1
    SecL_2_set.insert("M");
    SecL_2.add_attribute("Ccy", "JPY"); // 1
    SecL_2_set.insert("JPY");
    SecL_2.add_attribute("TxnTm", "RelSymTransactTime_t_593858355"); // 1
    SecL_2_set.insert("RelSymTransactTime_t_593858355");
    SecL_2.add_attribute("Txt", "Text_t_1607982807"); // 1
    SecL_2_set.insert("Text_t_1607982807");
    SecL_2.add_attribute("EncTxtLen", "473651473"); // 1
    SecL_2_set.insert("473651473");
    SecL_2.add_attribute("EncTxt", "EncodedText_t_1694527848"); // 1
    SecL_2_set.insert("EncodedText_t_1694527848");
    all_values.push_back(SecL_2_set);
    all_compo_names.insert("SecL_2_set");

    {
      xml_element Instrmt_78{"Instrmt"};
      multiset<string> Instrmt_78_set;
      Instrmt_78.add_attribute("Sym", "Symbol_t_1203746641"); // 2
      Instrmt_78_set.insert("Symbol_t_1203746641");
      Instrmt_78.add_attribute("Sfx", "WI"); // 2
      Instrmt_78_set.insert("WI");
      Instrmt_78.add_attribute("ID", "SecurityID_t_2052783408"); // 2
      Instrmt_78_set.insert("SecurityID_t_2052783408");
      Instrmt_78.add_attribute("Src", "E"); // 2
      Instrmt_78_set.insert("E");
      Instrmt_78.add_attribute("Prod", "10"); // 2
      Instrmt_78_set.insert("10");
      Instrmt_78.add_attribute("ProdCmplx", "ProductComplex_t_1276140457"); // 2
      Instrmt_78_set.insert("ProductComplex_t_1276140457");
      Instrmt_78.add_attribute("SecGrp", "SecurityGroup_t_1964147139"); // 2
      Instrmt_78_set.insert("SecurityGroup_t_1964147139");
      Instrmt_78.add_attribute("CFI", "CFICode_t_155152051"); // 2
      Instrmt_78_set.insert("CFICode_t_155152051");
      Instrmt_78.add_attribute("SecTyp", "MPT"); // 2
      Instrmt_78_set.insert("MPT");
      Instrmt_78.add_attribute("SubTyp", "SecuritySubType_t_384970754"); // 2
      Instrmt_78_set.insert("SecuritySubType_t_384970754");
      Instrmt_78.add_attribute("MMY", "1557278852"); // 2
      Instrmt_78_set.insert("1557278852");
      Instrmt_78.add_attribute("MatDt", "MaturityDate_t_919348866"); // 2
      Instrmt_78_set.insert("MaturityDate_t_919348866");
      Instrmt_78.add_attribute("MatTm", "1053035225"); // 2
      Instrmt_78_set.insert("1053035225");
      Instrmt_78.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1223060476"); // 2
      Instrmt_78_set.insert("SettleOnOpenFlag_t_1223060476");
      Instrmt_78.add_attribute("AsgnMeth", "1873306643"); // 2
      Instrmt_78_set.insert("1873306643");
      Instrmt_78.add_attribute("Status", "2"); // 2
      Instrmt_78_set.insert("2");
      Instrmt_78.add_attribute("CpnPmt", "CouponPaymentDate_t_1606436752"); // 2
      Instrmt_78_set.insert("CouponPaymentDate_t_1606436752");
      Instrmt_78.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_78_set.insert("FR");
      Instrmt_78.add_attribute("Snrty", "SB"); // 2
      Instrmt_78_set.insert("SB");
      Instrmt_78.add_attribute("NotlPctOut", "18101462.020000"); // 2
      Instrmt_78_set.insert("18101462.020000");
      Instrmt_78.add_attribute("OrigNotlPctOut", "10593949.280000"); // 2
      Instrmt_78_set.insert("10593949.280000");
      Instrmt_78.add_attribute("AttchPnt", "10964638.450000"); // 2
      Instrmt_78_set.insert("10964638.450000");
      Instrmt_78.add_attribute("DetchPnt", "16324822.490000"); // 2
      Instrmt_78_set.insert("16324822.490000");
      Instrmt_78.add_attribute("Issued", "IssueDate_t_257820595"); // 2
      Instrmt_78_set.insert("IssueDate_t_257820595");
      Instrmt_78.add_attribute("RepoCollSecTyp", "312234916"); // 2
      Instrmt_78_set.insert("312234916");
      Instrmt_78.add_attribute("RepoTrm", "1744743397"); // 2
      Instrmt_78_set.insert("1744743397");
      Instrmt_78.add_attribute("RepoRt", "11298837.840000"); // 2
      Instrmt_78_set.insert("11298837.840000");
      Instrmt_78.add_attribute("Fctr", "9060932.710000"); // 2
      Instrmt_78_set.insert("9060932.710000");
      Instrmt_78.add_attribute("CrdRtg", "CreditRating_t_1205242556"); // 2
      Instrmt_78_set.insert("CreditRating_t_1205242556");
      Instrmt_78.add_attribute("Rgstry", "InstrRegistry_t_1603535257"); // 2
      Instrmt_78_set.insert("InstrRegistry_t_1603535257");
      Instrmt_78.add_attribute("IssuCtry", "453137472"); // 2
      Instrmt_78_set.insert("453137472");
      Instrmt_78.add_attribute("StPrv", "StateOrProvinceOfIssue_t_261505550"); // 2
      Instrmt_78_set.insert("StateOrProvinceOfIssue_t_261505550");
      Instrmt_78.add_attribute("Lcl", "LocaleOfIssue_t_1308820786"); // 2
      Instrmt_78_set.insert("LocaleOfIssue_t_1308820786");
      Instrmt_78.add_attribute("Redeem", "RedemptionDate_t_358437232"); // 2
      Instrmt_78_set.insert("RedemptionDate_t_358437232");
      Instrmt_78.add_attribute("StrkPx", "17655448.470000"); // 2
      Instrmt_78_set.insert("17655448.470000");
      Instrmt_78.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_78_set.insert("USD");
      Instrmt_78.add_attribute("StrkMult", "15822083.380000"); // 2
      Instrmt_78_set.insert("15822083.380000");
      Instrmt_78.add_attribute("StrkValu", "7059557.100000"); // 2
      Instrmt_78_set.insert("7059557.100000");
      Instrmt_78.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_78_set.insert("4");
      Instrmt_78.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_78_set.insert("3");
      Instrmt_78.add_attribute("StrkPxBndryPrcsn", "1157509.140000"); // 2
      Instrmt_78_set.insert("1157509.140000");
      Instrmt_78.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_78_set.insert("2");
      Instrmt_78.add_attribute("OptAt", "872730669"); // 2
      Instrmt_78_set.insert("872730669");
      Instrmt_78.add_attribute("Mult", "13388113.910000"); // 2
      Instrmt_78_set.insert("13388113.910000");
      Instrmt_78.add_attribute("MultTyp", "1"); // 2
      Instrmt_78_set.insert("1");
      Instrmt_78.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_78_set.insert("3");
      Instrmt_78.add_attribute("MinPxIncr", "7977644.950000"); // 2
      Instrmt_78_set.insert("7977644.950000");
      Instrmt_78.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2137594593"); // 2
      Instrmt_78_set.insert("MinPriceIncrementAmount_t_2137594593");
      Instrmt_78.add_attribute("UOM", "Bcf"); // 2
      Instrmt_78_set.insert("Bcf");
      Instrmt_78.add_attribute("UOMQty", "4604270.490000"); // 2
      Instrmt_78_set.insert("4604270.490000");
      Instrmt_78.add_attribute("PxUOM", "MMBtu"); // 2
      Instrmt_78_set.insert("MMBtu");
      Instrmt_78.add_attribute("PxUOMQty", "16878877.790000"); // 2
      Instrmt_78_set.insert("16878877.790000");
      Instrmt_78.add_attribute("SettlMeth", "C"); // 2
      Instrmt_78_set.insert("C");
      Instrmt_78.add_attribute("ExerStyle", "2"); // 2
      Instrmt_78_set.insert("2");
      Instrmt_78.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_78_set.insert("2");
      Instrmt_78.add_attribute("OptPayAmt", "OptPayoutAmount_t_1690169047"); // 2
      Instrmt_78_set.insert("OptPayoutAmount_t_1690169047");
      Instrmt_78.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_78_set.insert("INX");
      Instrmt_78.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_78_set.insert("CDSD");
      Instrmt_78.add_attribute("ListMeth", "1"); // 2
      Instrmt_78_set.insert("1");
      Instrmt_78.add_attribute("CapPx", "18932618.620000"); // 2
      Instrmt_78_set.insert("18932618.620000");
      Instrmt_78.add_attribute("FlrPx", "12118697.910000"); // 2
      Instrmt_78_set.insert("12118697.910000");
      Instrmt_78.add_attribute("PutCall", "1"); // 2
      Instrmt_78_set.insert("1");
      Instrmt_78.add_attribute("FlexInd", "true"); // 2
      Instrmt_78_set.insert("true");
      Instrmt_78.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_78_set.insert("true");
      Instrmt_78.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_78_set.insert("Wk");
      Instrmt_78.add_attribute("CpnRt", "16054026.600000"); // 2
      Instrmt_78_set.insert("16054026.600000");
      Instrmt_78.add_attribute("Exch", "SecurityExchange_t_1057401066"); // 2
      Instrmt_78_set.insert("SecurityExchange_t_1057401066");
      Instrmt_78.add_attribute("PosLmt", "62219395"); // 2
      Instrmt_78_set.insert("62219395");
      Instrmt_78.add_attribute("NTPosLmt", "163874722"); // 2
      Instrmt_78_set.insert("163874722");
      Instrmt_78.add_attribute("Issr", "Issuer_t_1951166781"); // 2
      Instrmt_78_set.insert("Issuer_t_1951166781");
      Instrmt_78.add_attribute("EncIssrLen", "2029398487"); // 2
      Instrmt_78_set.insert("2029398487");
      Instrmt_78.add_attribute("EncIssr", "EncodedIssuer_t_279625637"); // 2
      Instrmt_78_set.insert("EncodedIssuer_t_279625637");
      Instrmt_78.add_attribute("Desc", "SecurityDesc_t_1616797715"); // 2
      Instrmt_78_set.insert("SecurityDesc_t_1616797715");
      Instrmt_78.add_attribute("EncSecDescLen", "754645509"); // 2
      Instrmt_78_set.insert("754645509");
      Instrmt_78.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1618437028"); // 2
      Instrmt_78_set.insert("EncodedSecurityDesc_t_1618437028");
      Instrmt_78.add_attribute("Pool", "Pool_t_1008251644"); // 2
      Instrmt_78_set.insert("Pool_t_1008251644");
      Instrmt_78.add_attribute("CSetMo", "621626779"); // 2
      Instrmt_78_set.insert("621626779");
      Instrmt_78.add_attribute("CPPgm", "1"); // 2
      Instrmt_78_set.insert("1");
      Instrmt_78.add_attribute("CPRegT", "CPRegType_t_998362589"); // 2
      Instrmt_78_set.insert("CPRegType_t_998362589");
      Instrmt_78.add_attribute("Dated", "DatedDate_t_1213050713"); // 2
      Instrmt_78_set.insert("DatedDate_t_1213050713");
      Instrmt_78.add_attribute("IntAcrl", "InterestAccrualDate_t_729144924"); // 2
      Instrmt_78_set.insert("InterestAccrualDate_t_729144924");
      all_values.push_back(Instrmt_78_set);
      all_compo_names.insert("Instrmt_78_set");

      {
        xml_element AID_81{"AID"};
        multiset<string> AID_81_set;
        AID_81.add_attribute("AltID", "SecurityAltID_t_2047868463"); // 3
        AID_81_set.insert("SecurityAltID_t_2047868463");
        AID_81.add_attribute("AltIDSrc", "C"); // 3
        AID_81_set.insert("C");
        all_values.push_back(AID_81_set);
        all_compo_names.insert("AID_81_set");

        Instrmt_78.add_element(AID_81);
      }
      {
        xml_element SecXML_81{"SecXML"};
        multiset<string> SecXML_81_set;
        SecXML_81.add_attribute("Schema", "SecurityXMLSchema_t_674570574"); // 3
        SecXML_81_set.insert("SecurityXMLSchema_t_674570574");
        all_values.push_back(SecXML_81_set);
        all_compo_names.insert("SecXML_81_set");

        Instrmt_78.add_element(SecXML_81);
      }
      {
        xml_element Evnt_81{"Evnt"};
        multiset<string> Evnt_81_set;
        Evnt_81.add_attribute("EventTyp", "5"); // 3
        Evnt_81_set.insert("5");
        Evnt_81.add_attribute("Dt", "EventDate_t_606093893"); // 3
        Evnt_81_set.insert("EventDate_t_606093893");
        Evnt_81.add_attribute("Tm", "EventTime_t_217255973"); // 3
        Evnt_81_set.insert("EventTime_t_217255973");
        Evnt_81.add_attribute("Px", "14974378.900000"); // 3
        Evnt_81_set.insert("14974378.900000");
        Evnt_81.add_attribute("Txt", "EventText_t_1364826212"); // 3
        Evnt_81_set.insert("EventText_t_1364826212");
        all_values.push_back(Evnt_81_set);
        all_compo_names.insert("Evnt_81_set");

        Instrmt_78.add_element(Evnt_81);
      }
      {
        xml_element Pty_414{"Pty"};
        multiset<string> Pty_414_set;
        Pty_414.add_attribute("ID", "InstrumentPartyID_t_965183928"); // 3
        Pty_414_set.insert("InstrumentPartyID_t_965183928");
        Pty_414.add_attribute("Src", "8"); // 3
        Pty_414_set.insert("8");
        Pty_414.add_attribute("R", "78"); // 3
        Pty_414_set.insert("78");
        all_values.push_back(Pty_414_set);
        all_compo_names.insert("Pty_414_set");

        {
          xml_element Sub_414{"Sub"};
          multiset<string> Sub_414_set;
          Sub_414.add_attribute("ID", "InstrumentPartySubID_t_1974617434"); // 4
          Sub_414_set.insert("InstrumentPartySubID_t_1974617434");
          Sub_414.add_attribute("Typ", "7"); // 4
          Sub_414_set.insert("7");
          all_values.push_back(Sub_414_set);
          all_compo_names.insert("Sub_414_set");

          Pty_414.add_element(Sub_414);
        }
        Instrmt_78.add_element(Pty_414);
      }
      {
        xml_element CmplxEvnt_78{"CmplxEvnt"};
        multiset<string> CmplxEvnt_78_set;
        CmplxEvnt_78.add_attribute("Typ", "1"); // 3
        CmplxEvnt_78_set.insert("1");
        CmplxEvnt_78.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_454628490"); // 3
        CmplxEvnt_78_set.insert("ComplexOptPayoutAmount_t_454628490");
        CmplxEvnt_78.add_attribute("Px", "17557341.170000"); // 3
        CmplxEvnt_78_set.insert("17557341.170000");
        CmplxEvnt_78.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_78_set.insert("4");
        CmplxEvnt_78.add_attribute("PxBndryPrcsn", "5168478.850000"); // 3
        CmplxEvnt_78_set.insert("5168478.850000");
        CmplxEvnt_78.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_78_set.insert("2");
        CmplxEvnt_78.add_attribute("Cond", "2"); // 3
        CmplxEvnt_78_set.insert("2");
        all_values.push_back(CmplxEvnt_78_set);
        all_compo_names.insert("CmplxEvnt_78_set");

        {
          xml_element EvntDts_78{"EvntDts"};
          multiset<string> EvntDts_78_set;
          EvntDts_78.add_attribute("StartDt", "ComplexEventStartDate_t_398762725"); // 4
          EvntDts_78_set.insert("ComplexEventStartDate_t_398762725");
          EvntDts_78.add_attribute("EndDt", "ComplexEventEndDate_t_51750829"); // 4
          EvntDts_78_set.insert("ComplexEventEndDate_t_51750829");
          all_values.push_back(EvntDts_78_set);
          all_compo_names.insert("EvntDts_78_set");

          {
            xml_element EvntTms_78{"EvntTms"};
            multiset<string> EvntTms_78_set;
            EvntTms_78.add_attribute("StartTm", "182433998"); // 5
            EvntTms_78_set.insert("182433998");
            EvntTms_78.add_attribute("EndTm", "1153408234"); // 5
            EvntTms_78_set.insert("1153408234");
            all_values.push_back(EvntTms_78_set);
            all_compo_names.insert("EvntTms_78_set");

            EvntDts_78.add_element(EvntTms_78);
          }
          CmplxEvnt_78.add_element(EvntDts_78);
        }
        Instrmt_78.add_element(CmplxEvnt_78);
      }
      SecL_2.add_element(Instrmt_78);
    }
    {
      xml_element InstrmtExt_13{"InstrmtExt"};
      multiset<string> InstrmtExt_13_set;
      InstrmtExt_13.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_13_set.insert("2");
      InstrmtExt_13.add_attribute("PctAtRisk", "11906856.420000"); // 2
      InstrmtExt_13_set.insert("11906856.420000");
      all_values.push_back(InstrmtExt_13_set);
      all_compo_names.insert("InstrmtExt_13_set");

      {
        xml_element Attrb_22{"Attrb"};
        multiset<string> Attrb_22_set;
        Attrb_22.add_attribute("Typ", "23"); // 3
        Attrb_22_set.insert("23");
        Attrb_22.add_attribute("Val", "InstrAttribValue_t_1938905732"); // 3
        Attrb_22_set.insert("InstrAttribValue_t_1938905732");
        all_values.push_back(Attrb_22_set);
        all_compo_names.insert("Attrb_22_set");

        InstrmtExt_13.add_element(Attrb_22);
      }
      SecL_2.add_element(InstrmtExt_13);
    }
    {
      xml_element FinDetls_29{"FinDetls"};
      multiset<string> FinDetls_29_set;
      FinDetls_29.add_attribute("AgmtDesc", "AgreementDesc_t_41564584"); // 2
      FinDetls_29_set.insert("AgreementDesc_t_41564584");
      FinDetls_29.add_attribute("AgmtID", "AgreementID_t_840602079"); // 2
      FinDetls_29_set.insert("AgreementID_t_840602079");
      FinDetls_29.add_attribute("AgmtDt", "AgreementDate_t_520567008"); // 2
      FinDetls_29_set.insert("AgreementDate_t_520567008");
      FinDetls_29.add_attribute("AgmtCcy", "USD"); // 2
      FinDetls_29_set.insert("USD");
      FinDetls_29.add_attribute("TrmTyp", "3"); // 2
      FinDetls_29_set.insert("3");
      FinDetls_29.add_attribute("StartDt", "StartDate_t_1149660684"); // 2
      FinDetls_29_set.insert("StartDate_t_1149660684");
      FinDetls_29.add_attribute("EndDt", "EndDate_t_52667169"); // 2
      FinDetls_29_set.insert("EndDate_t_52667169");
      FinDetls_29.add_attribute("DlvryTyp", "3"); // 2
      FinDetls_29_set.insert("3");
      FinDetls_29.add_attribute("MgnRatio", "4996149.270000"); // 2
      FinDetls_29_set.insert("4996149.270000");
      all_values.push_back(FinDetls_29_set);
      all_compo_names.insert("FinDetls_29_set");

      SecL_2.add_element(FinDetls_29);
    }
    {
      xml_element SecTrdgRules_7{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_9{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_9_set;
        BaseTrdgRules_9.add_attribute("ExpirationCycle", "2"); // 3
        BaseTrdgRules_9_set.insert("2");
        BaseTrdgRules_9.add_attribute("MinTrdVol", "2300938.350000"); // 3
        BaseTrdgRules_9_set.insert("2300938.350000");
        BaseTrdgRules_9.add_attribute("MaxTrdVol", "17428310.320000"); // 3
        BaseTrdgRules_9_set.insert("17428310.320000");
        BaseTrdgRules_9.add_attribute("MxPxVar", "18467057.370000"); // 3
        BaseTrdgRules_9_set.insert("18467057.370000");
        BaseTrdgRules_9.add_attribute("ImpldMktInd", "1"); // 3
        BaseTrdgRules_9_set.insert("1");
        BaseTrdgRules_9.add_attribute("TrdCcy", "EUR"); // 3
        BaseTrdgRules_9_set.insert("EUR");
        BaseTrdgRules_9.add_attribute("RndLot", "5118561.120000"); // 3
        BaseTrdgRules_9_set.insert("5118561.120000");
        BaseTrdgRules_9.add_attribute("MlegModel", "1"); // 3
        BaseTrdgRules_9_set.insert("1");
        BaseTrdgRules_9.add_attribute("MlegPxMeth", "3"); // 3
        BaseTrdgRules_9_set.insert("3");
        BaseTrdgRules_9.add_attribute("PxTyp", "10"); // 3
        BaseTrdgRules_9_set.insert("10");
        all_values.push_back(BaseTrdgRules_9_set);
        all_compo_names.insert("BaseTrdgRules_9_set");

        {
          xml_element TickRules_9{"TickRules"};
          multiset<string> TickRules_9_set;
          TickRules_9.add_attribute("StartTickPxRng", "12735381.510000"); // 4
          TickRules_9_set.insert("12735381.510000");
          TickRules_9.add_attribute("EndTickPxRng", "11738145.510000"); // 4
          TickRules_9_set.insert("11738145.510000");
          TickRules_9.add_attribute("TickIncr", "14274667.220000"); // 4
          TickRules_9_set.insert("14274667.220000");
          TickRules_9.add_attribute("TickRuleTyp", "0"); // 4
          TickRules_9_set.insert("0");
          all_values.push_back(TickRules_9_set);
          all_compo_names.insert("TickRules_9_set");

          BaseTrdgRules_9.add_element(TickRules_9);
        }
        {
          xml_element LotTypeRules_9{"LotTypeRules"};
          multiset<string> LotTypeRules_9_set;
          LotTypeRules_9.add_attribute("LotTyp", "2"); // 4
          LotTypeRules_9_set.insert("2");
          LotTypeRules_9.add_attribute("MinLotSz", "4333913.080000"); // 4
          LotTypeRules_9_set.insert("4333913.080000");
          all_values.push_back(LotTypeRules_9_set);
          all_compo_names.insert("LotTypeRules_9_set");

          BaseTrdgRules_9.add_element(LotTypeRules_9);
        }
        {
          xml_element PxLmts_9{"PxLmts"};
          multiset<string> PxLmts_9_set;
          PxLmts_9.add_attribute("PxLmtTyp", "1"); // 4
          PxLmts_9_set.insert("1");
          PxLmts_9.add_attribute("LowLmtPx", "3994505.440000"); // 4
          PxLmts_9_set.insert("3994505.440000");
          PxLmts_9.add_attribute("HiLmtPx", "609426.740000"); // 4
          PxLmts_9_set.insert("609426.740000");
          PxLmts_9.add_attribute("TrdgRefPx", "6394152.730000"); // 4
          PxLmts_9_set.insert("6394152.730000");
          all_values.push_back(PxLmts_9_set);
          all_compo_names.insert("PxLmts_9_set");

          BaseTrdgRules_9.add_element(PxLmts_9);
        }
        SecTrdgRules_7.add_element(BaseTrdgRules_9);
      }
      {
        xml_element TrdgSesRulesGrp_7{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_7_set;
        TrdgSesRulesGrp_7.add_attribute("SesID", "3"); // 3
        TrdgSesRulesGrp_7_set.insert("3");
        TrdgSesRulesGrp_7.add_attribute("SesSub", "5"); // 3
        TrdgSesRulesGrp_7_set.insert("5");
        all_values.push_back(TrdgSesRulesGrp_7_set);
        all_compo_names.insert("TrdgSesRulesGrp_7_set");

        {
          xml_element TrdgSesRules_7{"TrdgSesRules"};
          {
            xml_element OrdTypRules_13{"OrdTypRules"};
            multiset<string> OrdTypRules_13_set;
            OrdTypRules_13.add_attribute("OrdTyp", "2"); // 5
            OrdTypRules_13_set.insert("2");
            all_values.push_back(OrdTypRules_13_set);
            all_compo_names.insert("OrdTypRules_13_set");

            TrdgSesRules_7.add_element(OrdTypRules_13);
          }
          {
            xml_element TmInForceRules_9{"TmInForceRules"};
            multiset<string> TmInForceRules_9_set;
            TmInForceRules_9.add_attribute("TmInForce", "7"); // 5
            TmInForceRules_9_set.insert("7");
            all_values.push_back(TmInForceRules_9_set);
            all_compo_names.insert("TmInForceRules_9_set");

            TrdgSesRules_7.add_element(TmInForceRules_9);
          }
          {
            xml_element ExecInstRules_12{"ExecInstRules"};
            multiset<string> ExecInstRules_12_set;
            ExecInstRules_12.add_attribute("ExecInstValu", "G"); // 5
            ExecInstRules_12_set.insert("G");
            all_values.push_back(ExecInstRules_12_set);
            all_compo_names.insert("ExecInstRules_12_set");

            TrdgSesRules_7.add_element(ExecInstRules_12);
          }
          {
            xml_element MtchRules_7{"MtchRules"};
            multiset<string> MtchRules_7_set;
            MtchRules_7.add_attribute("MtchAlgo", "MatchAlgorithm_t_207636215"); // 5
            MtchRules_7_set.insert("MatchAlgorithm_t_207636215");
            MtchRules_7.add_attribute("MtchTyp", "S2"); // 5
            MtchRules_7_set.insert("S2");
            all_values.push_back(MtchRules_7_set);
            all_compo_names.insert("MtchRules_7_set");

            TrdgSesRules_7.add_element(MtchRules_7);
          }
          {
            xml_element MDFeedTyps_7{"MDFeedTyps"};
            multiset<string> MDFeedTyps_7_set;
            MDFeedTyps_7.add_attribute("MDFeedTyp", "MDFeedType_t_400785198"); // 5
            MDFeedTyps_7_set.insert("MDFeedType_t_400785198");
            MDFeedTyps_7.add_attribute("MktDepth", "1620029770"); // 5
            MDFeedTyps_7_set.insert("1620029770");
            MDFeedTyps_7.add_attribute("MDBkTyp", "3"); // 5
            MDFeedTyps_7_set.insert("3");
            all_values.push_back(MDFeedTyps_7_set);
            all_compo_names.insert("MDFeedTyps_7_set");

            TrdgSesRules_7.add_element(MDFeedTyps_7);
          }
          TrdgSesRulesGrp_7.add_element(TrdgSesRules_7);
        }
        SecTrdgRules_7.add_element(TrdgSesRulesGrp_7);
      }
      {
        xml_element Attrb_23{"Attrb"};
        multiset<string> Attrb_23_set;
        Attrb_23.add_attribute("Typ", "29"); // 3
        Attrb_23_set.insert("29");
        Attrb_23.add_attribute("Val", "NestedInstrAttribValue_t_1850123605"); // 3
        Attrb_23_set.insert("NestedInstrAttribValue_t_1850123605");
        all_values.push_back(Attrb_23_set);
        all_compo_names.insert("Attrb_23_set");

        SecTrdgRules_7.add_element(Attrb_23);
      }
      SecL_2.add_element(SecTrdgRules_7);
    }
    {
      xml_element StrkRules_7{"StrkRules"};
      multiset<string> StrkRules_7_set;
      StrkRules_7.add_attribute("StrkRule", "StrikeRuleID_t_1627587523"); // 2
      StrkRules_7_set.insert("StrikeRuleID_t_1627587523");
      StrkRules_7.add_attribute("StartStrkPxRng", "15175006.690000"); // 2
      StrkRules_7_set.insert("15175006.690000");
      StrkRules_7.add_attribute("EndStrkPxRng", "19073512.270000"); // 2
      StrkRules_7_set.insert("19073512.270000");
      StrkRules_7.add_attribute("StrkIncr", "13732663.640000"); // 2
      StrkRules_7_set.insert("13732663.640000");
      StrkRules_7.add_attribute("StrkExrStyle", "0"); // 2
      StrkRules_7_set.insert("0");
      all_values.push_back(StrkRules_7_set);
      all_compo_names.insert("StrkRules_7_set");

      {
        xml_element MatRules_7{"MatRules"};
        multiset<string> MatRules_7_set;
        MatRules_7.add_attribute("MatRuleID", "MaturityRuleID_t_271723691"); // 3
        MatRules_7_set.insert("MaturityRuleID_t_271723691");
        MatRules_7.add_attribute("MMYFmt", "1"); // 3
        MatRules_7_set.insert("1");
        MatRules_7.add_attribute("MMYIncrUnits", "2"); // 3
        MatRules_7_set.insert("2");
        MatRules_7.add_attribute("StartMMY", "1300427688"); // 3
        MatRules_7_set.insert("1300427688");
        MatRules_7.add_attribute("EndMMY", "2000733826"); // 3
        MatRules_7_set.insert("2000733826");
        MatRules_7.add_attribute("MMYIncr", "555784013"); // 3
        MatRules_7_set.insert("555784013");
        all_values.push_back(MatRules_7_set);
        all_compo_names.insert("MatRules_7_set");

        StrkRules_7.add_element(MatRules_7);
      }
      SecL_2.add_element(StrkRules_7);
    }
    {
      xml_element Undly_112{"Undly"};
      multiset<string> Undly_112_set;
      Undly_112.add_attribute("Sym", "UnderlyingSymbol_t_580410763"); // 2
      Undly_112_set.insert("UnderlyingSymbol_t_580410763");
      Undly_112.add_attribute("Sfx", "CD"); // 2
      Undly_112_set.insert("CD");
      Undly_112.add_attribute("ID", "UnderlyingSecurityID_t_1912032562"); // 2
      Undly_112_set.insert("UnderlyingSecurityID_t_1912032562");
      Undly_112.add_attribute("Src", "8"); // 2
      Undly_112_set.insert("8");
      Undly_112.add_attribute("Prod", "5"); // 2
      Undly_112_set.insert("5");
      Undly_112.add_attribute("CFI", "UnderlyingCFICode_t_163999458"); // 2
      Undly_112_set.insert("UnderlyingCFICode_t_163999458");
      Undly_112.add_attribute("SecTyp", "LQN"); // 2
      Undly_112_set.insert("LQN");
      Undly_112.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_518463972"); // 2
      Undly_112_set.insert("UnderlyingSecuritySubType_t_518463972");
      Undly_112.add_attribute("MMY", "605014586"); // 2
      Undly_112_set.insert("605014586");
      Undly_112.add_attribute("Mat", "UnderlyingMaturityDate_t_1976289498"); // 2
      Undly_112_set.insert("UnderlyingMaturityDate_t_1976289498");
      Undly_112.add_attribute("MatTm", "1678446253"); // 2
      Undly_112_set.insert("1678446253");
      Undly_112.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_987979114"); // 2
      Undly_112_set.insert("UnderlyingCouponPaymentDate_t_987979114");
      Undly_112.add_attribute("RestrctTyp", "XR"); // 2
      Undly_112_set.insert("XR");
      Undly_112.add_attribute("Snrty", "SD"); // 2
      Undly_112_set.insert("SD");
      Undly_112.add_attribute("NotlPctOut", "3731206.780000"); // 2
      Undly_112_set.insert("3731206.780000");
      Undly_112.add_attribute("OrigNotlPctOut", "5777090.770000"); // 2
      Undly_112_set.insert("5777090.770000");
      Undly_112.add_attribute("AttchPnt", "13586285.900000"); // 2
      Undly_112_set.insert("13586285.900000");
      Undly_112.add_attribute("DetchPnt", "2578771.690000"); // 2
      Undly_112_set.insert("2578771.690000");
      Undly_112.add_attribute("Issued", "UnderlyingIssueDate_t_248504009"); // 2
      Undly_112_set.insert("UnderlyingIssueDate_t_248504009");
      Undly_112.add_attribute("RepoCollSecTyp", "1061268548"); // 2
      Undly_112_set.insert("1061268548");
      Undly_112.add_attribute("RepoTrm", "1885464692"); // 2
      Undly_112_set.insert("1885464692");
      Undly_112.add_attribute("RepoRt", "17660046.780000"); // 2
      Undly_112_set.insert("17660046.780000");
      Undly_112.add_attribute("Fctr", "8211361.270000"); // 2
      Undly_112_set.insert("8211361.270000");
      Undly_112.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1111247408"); // 2
      Undly_112_set.insert("UnderlyingCreditRating_t_1111247408");
      Undly_112.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_687279520"); // 2
      Undly_112_set.insert("UnderlyingInstrRegistry_t_687279520");
      Undly_112.add_attribute("Ctry", "1092859818"); // 2
      Undly_112_set.insert("1092859818");
      Undly_112.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1838443084"); // 2
      Undly_112_set.insert("UnderlyingStateOrProvinceOfIssue_t_1838443084");
      Undly_112.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_69248982"); // 2
      Undly_112_set.insert("UnderlyingLocaleOfIssue_t_69248982");
      Undly_112.add_attribute("Redeem", "UnderlyingRedemptionDate_t_245803858"); // 2
      Undly_112_set.insert("UnderlyingRedemptionDate_t_245803858");
      Undly_112.add_attribute("StrkPx", "16916932.620000"); // 2
      Undly_112_set.insert("16916932.620000");
      Undly_112.add_attribute("StrkCcy", "CAN"); // 2
      Undly_112_set.insert("CAN");
      Undly_112.add_attribute("OptA", "722748773"); // 2
      Undly_112_set.insert("722748773");
      Undly_112.add_attribute("Mult", "3895819.100000"); // 2
      Undly_112_set.insert("3895819.100000");
      Undly_112.add_attribute("MultTyp", "2"); // 2
      Undly_112_set.insert("2");
      Undly_112.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_112_set.insert("2");
      Undly_112.add_attribute("UOM", "Bbl"); // 2
      Undly_112_set.insert("Bbl");
      Undly_112.add_attribute("UOMQty", "7672777.900000"); // 2
      Undly_112_set.insert("7672777.900000");
      Undly_112.add_attribute("PxUOM", "t"); // 2
      Undly_112_set.insert("t");
      Undly_112.add_attribute("PxUOMQty", "11585959.550000"); // 2
      Undly_112_set.insert("11585959.550000");
      Undly_112.add_attribute("TmUnit", "Yr"); // 2
      Undly_112_set.insert("Yr");
      Undly_112.add_attribute("ExerStyle", "1"); // 2
      Undly_112_set.insert("1");
      Undly_112.add_attribute("CpnRt", "21465750.690000"); // 2
      Undly_112_set.insert("21465750.690000");
      Undly_112.add_attribute("Exch", "UnderlyingSecurityExchange_t_773007520"); // 2
      Undly_112_set.insert("UnderlyingSecurityExchange_t_773007520");
      Undly_112.add_attribute("Issr", "UnderlyingIssuer_t_389822871"); // 2
      Undly_112_set.insert("UnderlyingIssuer_t_389822871");
      Undly_112.add_attribute("EncUndIssrLen", "372212099"); // 2
      Undly_112_set.insert("372212099");
      Undly_112.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1350716598"); // 2
      Undly_112_set.insert("EncodedUnderlyingIssuer_t_1350716598");
      Undly_112.add_attribute("Desc", "UnderlyingSecurityDesc_t_1748451461"); // 2
      Undly_112_set.insert("UnderlyingSecurityDesc_t_1748451461");
      Undly_112.add_attribute("EncUndSecDescLen", "630089268"); // 2
      Undly_112_set.insert("630089268");
      Undly_112.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1599220607"); // 2
      Undly_112_set.insert("EncodedUnderlyingSecurityDesc_t_1599220607");
      Undly_112.add_attribute("CPPgm", "UnderlyingCPProgram_t_662236361"); // 2
      Undly_112_set.insert("UnderlyingCPProgram_t_662236361");
      Undly_112.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_368070312"); // 2
      Undly_112_set.insert("UnderlyingCPRegType_t_368070312");
      Undly_112.add_attribute("AllocPct", "12177416.370000"); // 2
      Undly_112_set.insert("12177416.370000");
      Undly_112.add_attribute("Ccy", "GBP"); // 2
      Undly_112_set.insert("GBP");
      Undly_112.add_attribute("Qty", "19050211.570000"); // 2
      Undly_112_set.insert("19050211.570000");
      Undly_112.add_attribute("SettlTyp", "4"); // 2
      Undly_112_set.insert("4");
      Undly_112.add_attribute("CashAmt", "UnderlyingCashAmount_t_1170277156"); // 2
      Undly_112_set.insert("UnderlyingCashAmount_t_1170277156");
      Undly_112.add_attribute("CashTyp", "FIXED"); // 2
      Undly_112_set.insert("FIXED");
      Undly_112.add_attribute("Px", "6745525.170000"); // 2
      Undly_112_set.insert("6745525.170000");
      Undly_112.add_attribute("DirtPx", "7144867.710000"); // 2
      Undly_112_set.insert("7144867.710000");
      Undly_112.add_attribute("EndPx", "4518194.870000"); // 2
      Undly_112_set.insert("4518194.870000");
      Undly_112.add_attribute("StartVal", "UnderlyingStartValue_t_1500767138"); // 2
      Undly_112_set.insert("UnderlyingStartValue_t_1500767138");
      Undly_112.add_attribute("CurVal", "UnderlyingCurrentValue_t_1437235544"); // 2
      Undly_112_set.insert("UnderlyingCurrentValue_t_1437235544");
      Undly_112.add_attribute("EndVal", "UnderlyingEndValue_t_841401397"); // 2
      Undly_112_set.insert("UnderlyingEndValue_t_841401397");
      Undly_112.add_attribute("AdjQty", "11933001.830000"); // 2
      Undly_112_set.insert("11933001.830000");
      Undly_112.add_attribute("FxRate", "20390330.160000"); // 2
      Undly_112_set.insert("20390330.160000");
      Undly_112.add_attribute("FxRateCalc", "M"); // 2
      Undly_112_set.insert("M");
      Undly_112.add_attribute("CapValu", "UnderlyingCapValue_t_1960577974"); // 2
      Undly_112_set.insert("UnderlyingCapValue_t_1960577974");
      Undly_112.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1011810813"); // 2
      Undly_112_set.insert("UnderlyingSettlMethod_t_1011810813");
      Undly_112.add_attribute("PutCall", "406095073"); // 2
      Undly_112_set.insert("406095073");
      all_values.push_back(Undly_112_set);
      all_compo_names.insert("Undly_112_set");

      {
        xml_element UndAID_112{"UndAID"};
        multiset<string> UndAID_112_set;
        UndAID_112.add_attribute("AltID", "UnderlyingSecurityAltID_t_409177967"); // 3
        UndAID_112_set.insert("UnderlyingSecurityAltID_t_409177967");
        UndAID_112.add_attribute("AltIDSrc", "J"); // 3
        UndAID_112_set.insert("J");
        all_values.push_back(UndAID_112_set);
        all_compo_names.insert("UndAID_112_set");

        Undly_112.add_element(UndAID_112);
      }
      {
        xml_element Stip_175{"Stip"};
        multiset<string> Stip_175_set;
        Stip_175.add_attribute("Typ", "INSURED"); // 3
        Stip_175_set.insert("INSURED");
        Stip_175.add_attribute("Val", "UnderlyingStipValue_t_1182185487"); // 3
        Stip_175_set.insert("UnderlyingStipValue_t_1182185487");
        all_values.push_back(Stip_175_set);
        all_compo_names.insert("Stip_175_set");

        Undly_112.add_element(Stip_175);
      }
      {
        xml_element Pty_415{"Pty"};
        multiset<string> Pty_415_set;
        Pty_415.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2052857735"); // 3
        Pty_415_set.insert("UnderlyingInstrumentPartyID_t_2052857735");
        Pty_415.add_attribute("Src", "E"); // 3
        Pty_415_set.insert("E");
        Pty_415.add_attribute("R", "63"); // 3
        Pty_415_set.insert("63");
        all_values.push_back(Pty_415_set);
        all_compo_names.insert("Pty_415_set");

        {
          xml_element Sub_415{"Sub"};
          multiset<string> Sub_415_set;
          Sub_415.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1653825548"); // 4
          Sub_415_set.insert("UnderlyingInstrumentPartySubID_t_1653825548");
          Sub_415.add_attribute("Typ", "19"); // 4
          Sub_415_set.insert("19");
          all_values.push_back(Sub_415_set);
          all_compo_names.insert("Sub_415_set");

          Pty_415.add_element(Sub_415);
        }
        Undly_112.add_element(Pty_415);
      }
      SecL_2.add_element(Undly_112);
    }
    {
      xml_element Stip_176{"Stip"};
      multiset<string> Stip_176_set;
      Stip_176.add_attribute("Typ", "BGNCON"); // 2
      Stip_176_set.insert("BGNCON");
      Stip_176.add_attribute("Val", "StipulationValue_t_168578262"); // 2
      Stip_176_set.insert("StipulationValue_t_168578262");
      all_values.push_back(Stip_176_set);
      all_compo_names.insert("Stip_176_set");

      SecL_2.add_element(Stip_176);
    }
    {
      xml_element SecLstUpdRelSymsLegGrp_0{"SecLstUpdRelSymsLegGrp"};
      multiset<string> SecLstUpdRelSymsLegGrp_0_set;
      SecLstUpdRelSymsLegGrp_0.add_attribute("SwapTyp", "2"); // 2
      SecLstUpdRelSymsLegGrp_0_set.insert("2");
      SecLstUpdRelSymsLegGrp_0.add_attribute("SettlTyp", "1"); // 2
      SecLstUpdRelSymsLegGrp_0_set.insert("1");
      all_values.push_back(SecLstUpdRelSymsLegGrp_0_set);
      all_compo_names.insert("SecLstUpdRelSymsLegGrp_0_set");

      {
        xml_element Leg_97{"Leg"};
        multiset<string> Leg_97_set;
        Leg_97.add_attribute("Sym", "LegSymbol_t_1651950750"); // 3
        Leg_97_set.insert("LegSymbol_t_1651950750");
        Leg_97.add_attribute("Sfx", "WI"); // 3
        Leg_97_set.insert("WI");
        Leg_97.add_attribute("ID", "LegSecurityID_t_812434543"); // 3
        Leg_97_set.insert("LegSecurityID_t_812434543");
        Leg_97.add_attribute("Src", "L"); // 3
        Leg_97_set.insert("L");
        Leg_97.add_attribute("Prod", "7"); // 3
        Leg_97_set.insert("7");
        Leg_97.add_attribute("CFI", "LegCFICode_t_639221035"); // 3
        Leg_97_set.insert("LegCFICode_t_639221035");
        Leg_97.add_attribute("SecTyp", "TBA"); // 3
        Leg_97_set.insert("TBA");
        Leg_97.add_attribute("SecSubTyp", "LegSecuritySubType_t_844672525"); // 3
        Leg_97_set.insert("LegSecuritySubType_t_844672525");
        Leg_97.add_attribute("MMY", "1091040522"); // 3
        Leg_97_set.insert("1091040522");
        Leg_97.add_attribute("Mat", "LegMaturityDate_t_2108535416"); // 3
        Leg_97_set.insert("LegMaturityDate_t_2108535416");
        Leg_97.add_attribute("MatTm", "134424421"); // 3
        Leg_97_set.insert("134424421");
        Leg_97.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1932441920"); // 3
        Leg_97_set.insert("LegCouponPaymentDate_t_1932441920");
        Leg_97.add_attribute("Issued", "LegIssueDate_t_1154351952"); // 3
        Leg_97_set.insert("LegIssueDate_t_1154351952");
        Leg_97.add_attribute("RepoCollSecTyp", "25973789"); // 3
        Leg_97_set.insert("25973789");
        Leg_97.add_attribute("RepoTrm", "1179941038"); // 3
        Leg_97_set.insert("1179941038");
        Leg_97.add_attribute("RepoRt", "9674462.780000"); // 3
        Leg_97_set.insert("9674462.780000");
        Leg_97.add_attribute("Fctr", "10377846.030000"); // 3
        Leg_97_set.insert("10377846.030000");
        Leg_97.add_attribute("CrdRtg", "LegCreditRating_t_1586036111"); // 3
        Leg_97_set.insert("LegCreditRating_t_1586036111");
        Leg_97.add_attribute("Rgstry", "LegInstrRegistry_t_1376624245"); // 3
        Leg_97_set.insert("LegInstrRegistry_t_1376624245");
        Leg_97.add_attribute("Ctry", "553335819"); // 3
        Leg_97_set.insert("553335819");
        Leg_97.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1991222605"); // 3
        Leg_97_set.insert("LegStateOrProvinceOfIssue_t_1991222605");
        Leg_97.add_attribute("Lcl", "LegLocaleOfIssue_t_411326084"); // 3
        Leg_97_set.insert("LegLocaleOfIssue_t_411326084");
        Leg_97.add_attribute("Redeem", "LegRedemptionDate_t_458709906"); // 3
        Leg_97_set.insert("LegRedemptionDate_t_458709906");
        Leg_97.add_attribute("Strk", "6211375.500000"); // 3
        Leg_97_set.insert("6211375.500000");
        Leg_97.add_attribute("StrkCcy", "GBP"); // 3
        Leg_97_set.insert("GBP");
        Leg_97.add_attribute("OptA", "2028625411"); // 3
        Leg_97_set.insert("2028625411");
        Leg_97.add_attribute("Cmult", "6338999.180000"); // 3
        Leg_97_set.insert("6338999.180000");
        Leg_97.add_attribute("MultTyp", "0"); // 3
        Leg_97_set.insert("0");
        Leg_97.add_attribute("FlowSchedTyp", "1"); // 3
        Leg_97_set.insert("1");
        Leg_97.add_attribute("UOM", "Bu"); // 3
        Leg_97_set.insert("Bu");
        Leg_97.add_attribute("UOMQty", "17855808.190000"); // 3
        Leg_97_set.insert("17855808.190000");
        Leg_97.add_attribute("PxUOM", "oz_tr"); // 3
        Leg_97_set.insert("oz_tr");
        Leg_97.add_attribute("PxUOMQty", "3537478.470000"); // 3
        Leg_97_set.insert("3537478.470000");
        Leg_97.add_attribute("TmUnit", "Wk"); // 3
        Leg_97_set.insert("Wk");
        Leg_97.add_attribute("ExerStyle", "0"); // 3
        Leg_97_set.insert("0");
        Leg_97.add_attribute("CpnRt", "9929688.820000"); // 3
        Leg_97_set.insert("9929688.820000");
        Leg_97.add_attribute("Exch", "LegSecurityExchange_t_179081210"); // 3
        Leg_97_set.insert("LegSecurityExchange_t_179081210");
        Leg_97.add_attribute("Issr", "LegIssuer_t_1591466812"); // 3
        Leg_97_set.insert("LegIssuer_t_1591466812");
        Leg_97.add_attribute("EncLegIssrLen", "2084009404"); // 3
        Leg_97_set.insert("2084009404");
        Leg_97.add_attribute("EncLegIssr", "EncodedLegIssuer_t_140132978"); // 3
        Leg_97_set.insert("EncodedLegIssuer_t_140132978");
        Leg_97.add_attribute("Desc", "LegSecurityDesc_t_1725891233"); // 3
        Leg_97_set.insert("LegSecurityDesc_t_1725891233");
        Leg_97.add_attribute("EncLegSecDescLen", "1868967676"); // 3
        Leg_97_set.insert("1868967676");
        Leg_97.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1294484930"); // 3
        Leg_97_set.insert("EncodedLegSecurityDesc_t_1294484930");
        Leg_97.add_attribute("RatioQty", "17518650.230000"); // 3
        Leg_97_set.insert("17518650.230000");
        Leg_97.add_attribute("Side", "B"); // 3
        Leg_97_set.insert("B");
        Leg_97.add_attribute("Ccy", "USD"); // 3
        Leg_97_set.insert("USD");
        Leg_97.add_attribute("Pool", "LegPool_t_339977529"); // 3
        Leg_97_set.insert("LegPool_t_339977529");
        Leg_97.add_attribute("Dated", "LegDatedDate_t_1491071805"); // 3
        Leg_97_set.insert("LegDatedDate_t_1491071805");
        Leg_97.add_attribute("CSetMo", "1195501797"); // 3
        Leg_97_set.insert("1195501797");
        Leg_97.add_attribute("IntAcrl", "LegInterestAccrualDate_t_183716486"); // 3
        Leg_97_set.insert("LegInterestAccrualDate_t_183716486");
        Leg_97.add_attribute("PutCall", "1902397890"); // 3
        Leg_97_set.insert("1902397890");
        Leg_97.add_attribute("LegOptionRatio", "16542117.030000"); // 3
        Leg_97_set.insert("16542117.030000");
        Leg_97.add_attribute("Px", "8048540.360000"); // 3
        Leg_97_set.insert("8048540.360000");
        all_values.push_back(Leg_97_set);
        all_compo_names.insert("Leg_97_set");

        {
          xml_element LegAID_92{"LegAID"};
          multiset<string> LegAID_92_set;
          LegAID_92.add_attribute("SecAltID", "LegSecurityAltID_t_551658764"); // 4
          LegAID_92_set.insert("LegSecurityAltID_t_551658764");
          LegAID_92.add_attribute("SecAltIDSrc", "I"); // 4
          LegAID_92_set.insert("I");
          all_values.push_back(LegAID_92_set);
          all_compo_names.insert("LegAID_92_set");

          Leg_97.add_element(LegAID_92);
        }
        SecLstUpdRelSymsLegGrp_0.add_element(Leg_97);
      }
      {
        xml_element Stip_177{"Stip"};
        multiset<string> Stip_177_set;
        Stip_177.add_attribute("StipTyp", "PROTECT"); // 3
        Stip_177_set.insert("PROTECT");
        Stip_177.add_attribute("StipVal", "LegStipulationValue_t_1185558682"); // 3
        Stip_177_set.insert("LegStipulationValue_t_1185558682");
        all_values.push_back(Stip_177_set);
        all_compo_names.insert("Stip_177_set");

        SecLstUpdRelSymsLegGrp_0.add_element(Stip_177);
      }
      {
        xml_element BnchmkCurve_8{"BnchmkCurve"};
        multiset<string> BnchmkCurve_8_set;
        BnchmkCurve_8.add_attribute("Ccy", "CAN"); // 3
        BnchmkCurve_8_set.insert("CAN");
        BnchmkCurve_8.add_attribute("Name", "MuniAAA"); // 3
        BnchmkCurve_8_set.insert("MuniAAA");
        BnchmkCurve_8.add_attribute("Point", "LegBenchmarkCurvePoint_t_1390990749"); // 3
        BnchmkCurve_8_set.insert("LegBenchmarkCurvePoint_t_1390990749");
        BnchmkCurve_8.add_attribute("Px", "8118206.210000"); // 3
        BnchmkCurve_8_set.insert("8118206.210000");
        BnchmkCurve_8.add_attribute("PxTyp", "1080619833"); // 3
        BnchmkCurve_8_set.insert("1080619833");
        all_values.push_back(BnchmkCurve_8_set);
        all_compo_names.insert("BnchmkCurve_8_set");

        SecLstUpdRelSymsLegGrp_0.add_element(BnchmkCurve_8);
      }
      SecL_2.add_element(SecLstUpdRelSymsLegGrp_0);
    }
    {
      xml_element SprdBnchmkCurve_33{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_33_set;
      SprdBnchmkCurve_33.add_attribute("Spread", "9623036.810000"); // 2
      SprdBnchmkCurve_33_set.insert("9623036.810000");
      SprdBnchmkCurve_33.add_attribute("Ccy", "EUR"); // 2
      SprdBnchmkCurve_33_set.insert("EUR");
      SprdBnchmkCurve_33.add_attribute("Name", "OTHER"); // 2
      SprdBnchmkCurve_33_set.insert("OTHER");
      SprdBnchmkCurve_33.add_attribute("Point", "BenchmarkCurvePoint_t_1002598073"); // 2
      SprdBnchmkCurve_33_set.insert("BenchmarkCurvePoint_t_1002598073");
      SprdBnchmkCurve_33.add_attribute("Px", "20101144.720000"); // 2
      SprdBnchmkCurve_33_set.insert("20101144.720000");
      SprdBnchmkCurve_33.add_attribute("PxTyp", "2"); // 2
      SprdBnchmkCurve_33_set.insert("2");
      SprdBnchmkCurve_33.add_attribute("SecID", "BenchmarkSecurityID_t_581005658"); // 2
      SprdBnchmkCurve_33_set.insert("BenchmarkSecurityID_t_581005658");
      SprdBnchmkCurve_33.add_attribute("SecIDSrc", "H"); // 2
      SprdBnchmkCurve_33_set.insert("H");
      all_values.push_back(SprdBnchmkCurve_33_set);
      all_compo_names.insert("SprdBnchmkCurve_33_set");

      SecL_2.add_element(SprdBnchmkCurve_33);
    }
    {
      xml_element Yield_28{"Yield"};
      multiset<string> Yield_28_set;
      Yield_28.add_attribute("Typ", "LASTQUARTER"); // 2
      Yield_28_set.insert("LASTQUARTER");
      Yield_28.add_attribute("Yld", "1853870.330000"); // 2
      Yield_28_set.insert("1853870.330000");
      Yield_28.add_attribute("CalcDt", "YieldCalcDate_t_485539919"); // 2
      Yield_28_set.insert("YieldCalcDate_t_485539919");
      Yield_28.add_attribute("RedDt", "YieldRedemptionDate_t_542966712"); // 2
      Yield_28_set.insert("YieldRedemptionDate_t_542966712");
      Yield_28.add_attribute("RedPx", "8275530.110000"); // 2
      Yield_28_set.insert("8275530.110000");
      Yield_28.add_attribute("RedPxTyp", "7"); // 2
      Yield_28_set.insert("7");
      all_values.push_back(Yield_28_set);
      all_compo_names.insert("Yield_28_set");

      SecL_2.add_element(Yield_28);
    }
    elt.add_element(SecL_2);
  } // end SecL
  { // SecL
    xml_element SecL_3{"SecL"};
    multiset<string> SecL_3_set;
    SecL_3.add_attribute("ListUpdActn", "D"); // 1
    SecL_3_set.insert("D");
    SecL_3.add_attribute("Ccy", "CAN"); // 1
    SecL_3_set.insert("CAN");
    SecL_3.add_attribute("TxnTm", "RelSymTransactTime_t_1788952760"); // 1
    SecL_3_set.insert("RelSymTransactTime_t_1788952760");
    SecL_3.add_attribute("Txt", "Text_t_1529782863"); // 1
    SecL_3_set.insert("Text_t_1529782863");
    SecL_3.add_attribute("EncTxtLen", "1814087971"); // 1
    SecL_3_set.insert("1814087971");
    SecL_3.add_attribute("EncTxt", "EncodedText_t_193127876"); // 1
    SecL_3_set.insert("EncodedText_t_193127876");
    all_values.push_back(SecL_3_set);
    all_compo_names.insert("SecL_3_set");

    {
      xml_element Instrmt_79{"Instrmt"};
      multiset<string> Instrmt_79_set;
      Instrmt_79.add_attribute("Sym", "Symbol_t_1001562725"); // 2
      Instrmt_79_set.insert("Symbol_t_1001562725");
      Instrmt_79.add_attribute("Sfx", "WI"); // 2
      Instrmt_79_set.insert("WI");
      Instrmt_79.add_attribute("ID", "SecurityID_t_1378686558"); // 2
      Instrmt_79_set.insert("SecurityID_t_1378686558");
      Instrmt_79.add_attribute("Src", "4"); // 2
      Instrmt_79_set.insert("4");
      Instrmt_79.add_attribute("Prod", "7"); // 2
      Instrmt_79_set.insert("7");
      Instrmt_79.add_attribute("ProdCmplx", "ProductComplex_t_2105558545"); // 2
      Instrmt_79_set.insert("ProductComplex_t_2105558545");
      Instrmt_79.add_attribute("SecGrp", "SecurityGroup_t_1997963404"); // 2
      Instrmt_79_set.insert("SecurityGroup_t_1997963404");
      Instrmt_79.add_attribute("CFI", "CFICode_t_1359632831"); // 2
      Instrmt_79_set.insert("CFICode_t_1359632831");
      Instrmt_79.add_attribute("SecTyp", "TPRN"); // 2
      Instrmt_79_set.insert("TPRN");
      Instrmt_79.add_attribute("SubTyp", "SecuritySubType_t_812783437"); // 2
      Instrmt_79_set.insert("SecuritySubType_t_812783437");
      Instrmt_79.add_attribute("MMY", "770764092"); // 2
      Instrmt_79_set.insert("770764092");
      Instrmt_79.add_attribute("MatDt", "MaturityDate_t_964799798"); // 2
      Instrmt_79_set.insert("MaturityDate_t_964799798");
      Instrmt_79.add_attribute("MatTm", "1954168328"); // 2
      Instrmt_79_set.insert("1954168328");
      Instrmt_79.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1773362165"); // 2
      Instrmt_79_set.insert("SettleOnOpenFlag_t_1773362165");
      Instrmt_79.add_attribute("AsgnMeth", "827430622"); // 2
      Instrmt_79_set.insert("827430622");
      Instrmt_79.add_attribute("Status", "2"); // 2
      Instrmt_79_set.insert("2");
      Instrmt_79.add_attribute("CpnPmt", "CouponPaymentDate_t_206884175"); // 2
      Instrmt_79_set.insert("CouponPaymentDate_t_206884175");
      Instrmt_79.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_79_set.insert("MM");
      Instrmt_79.add_attribute("Snrty", "SR"); // 2
      Instrmt_79_set.insert("SR");
      Instrmt_79.add_attribute("NotlPctOut", "3922712.090000"); // 2
      Instrmt_79_set.insert("3922712.090000");
      Instrmt_79.add_attribute("OrigNotlPctOut", "8970853.930000"); // 2
      Instrmt_79_set.insert("8970853.930000");
      Instrmt_79.add_attribute("AttchPnt", "20596884.140000"); // 2
      Instrmt_79_set.insert("20596884.140000");
      Instrmt_79.add_attribute("DetchPnt", "12198242.200000"); // 2
      Instrmt_79_set.insert("12198242.200000");
      Instrmt_79.add_attribute("Issued", "IssueDate_t_1722602842"); // 2
      Instrmt_79_set.insert("IssueDate_t_1722602842");
      Instrmt_79.add_attribute("RepoCollSecTyp", "1946243284"); // 2
      Instrmt_79_set.insert("1946243284");
      Instrmt_79.add_attribute("RepoTrm", "1095395381"); // 2
      Instrmt_79_set.insert("1095395381");
      Instrmt_79.add_attribute("RepoRt", "5843531.290000"); // 2
      Instrmt_79_set.insert("5843531.290000");
      Instrmt_79.add_attribute("Fctr", "15877123.960000"); // 2
      Instrmt_79_set.insert("15877123.960000");
      Instrmt_79.add_attribute("CrdRtg", "CreditRating_t_477694596"); // 2
      Instrmt_79_set.insert("CreditRating_t_477694596");
      Instrmt_79.add_attribute("Rgstry", "InstrRegistry_t_250957452"); // 2
      Instrmt_79_set.insert("InstrRegistry_t_250957452");
      Instrmt_79.add_attribute("IssuCtry", "1780840272"); // 2
      Instrmt_79_set.insert("1780840272");
      Instrmt_79.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1479257321"); // 2
      Instrmt_79_set.insert("StateOrProvinceOfIssue_t_1479257321");
      Instrmt_79.add_attribute("Lcl", "LocaleOfIssue_t_603557575"); // 2
      Instrmt_79_set.insert("LocaleOfIssue_t_603557575");
      Instrmt_79.add_attribute("Redeem", "RedemptionDate_t_1012043182"); // 2
      Instrmt_79_set.insert("RedemptionDate_t_1012043182");
      Instrmt_79.add_attribute("StrkPx", "20862299.760000"); // 2
      Instrmt_79_set.insert("20862299.760000");
      Instrmt_79.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_79_set.insert("CHF");
      Instrmt_79.add_attribute("StrkMult", "19367097.320000"); // 2
      Instrmt_79_set.insert("19367097.320000");
      Instrmt_79.add_attribute("StrkValu", "3635189.690000"); // 2
      Instrmt_79_set.insert("3635189.690000");
      Instrmt_79.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_79_set.insert("3");
      Instrmt_79.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_79_set.insert("2");
      Instrmt_79.add_attribute("StrkPxBndryPrcsn", "11342830.610000"); // 2
      Instrmt_79_set.insert("11342830.610000");
      Instrmt_79.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_79_set.insert("1");
      Instrmt_79.add_attribute("OptAt", "408694201"); // 2
      Instrmt_79_set.insert("408694201");
      Instrmt_79.add_attribute("Mult", "7601615.780000"); // 2
      Instrmt_79_set.insert("7601615.780000");
      Instrmt_79.add_attribute("MultTyp", "1"); // 2
      Instrmt_79_set.insert("1");
      Instrmt_79.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_79_set.insert("1");
      Instrmt_79.add_attribute("MinPxIncr", "9670457.540000"); // 2
      Instrmt_79_set.insert("9670457.540000");
      Instrmt_79.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2065105056"); // 2
      Instrmt_79_set.insert("MinPriceIncrementAmount_t_2065105056");
      Instrmt_79.add_attribute("UOM", "Bbl"); // 2
      Instrmt_79_set.insert("Bbl");
      Instrmt_79.add_attribute("UOMQty", "13593169.630000"); // 2
      Instrmt_79_set.insert("13593169.630000");
      Instrmt_79.add_attribute("PxUOM", "MWh"); // 2
      Instrmt_79_set.insert("MWh");
      Instrmt_79.add_attribute("PxUOMQty", "7783395.700000"); // 2
      Instrmt_79_set.insert("7783395.700000");
      Instrmt_79.add_attribute("SettlMeth", "P"); // 2
      Instrmt_79_set.insert("P");
      Instrmt_79.add_attribute("ExerStyle", "2"); // 2
      Instrmt_79_set.insert("2");
      Instrmt_79.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_79_set.insert("1");
      Instrmt_79.add_attribute("OptPayAmt", "OptPayoutAmount_t_1527052916"); // 2
      Instrmt_79_set.insert("OptPayoutAmount_t_1527052916");
      Instrmt_79.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_79_set.insert("INX");
      Instrmt_79.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_79_set.insert("CDSD");
      Instrmt_79.add_attribute("ListMeth", "1"); // 2
      Instrmt_79_set.insert("1");
      Instrmt_79.add_attribute("CapPx", "12251365.770000"); // 2
      Instrmt_79_set.insert("12251365.770000");
      Instrmt_79.add_attribute("FlrPx", "17981682.260000"); // 2
      Instrmt_79_set.insert("17981682.260000");
      Instrmt_79.add_attribute("PutCall", "0"); // 2
      Instrmt_79_set.insert("0");
      Instrmt_79.add_attribute("FlexInd", "false"); // 2
      Instrmt_79_set.insert("false");
      Instrmt_79.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_79_set.insert("false");
      Instrmt_79.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_79_set.insert("Wk");
      Instrmt_79.add_attribute("CpnRt", "8325802.910000"); // 2
      Instrmt_79_set.insert("8325802.910000");
      Instrmt_79.add_attribute("Exch", "SecurityExchange_t_1632845840"); // 2
      Instrmt_79_set.insert("SecurityExchange_t_1632845840");
      Instrmt_79.add_attribute("PosLmt", "1064493599"); // 2
      Instrmt_79_set.insert("1064493599");
      Instrmt_79.add_attribute("NTPosLmt", "1196099260"); // 2
      Instrmt_79_set.insert("1196099260");
      Instrmt_79.add_attribute("Issr", "Issuer_t_1494175002"); // 2
      Instrmt_79_set.insert("Issuer_t_1494175002");
      Instrmt_79.add_attribute("EncIssrLen", "1666503121"); // 2
      Instrmt_79_set.insert("1666503121");
      Instrmt_79.add_attribute("EncIssr", "EncodedIssuer_t_182898674"); // 2
      Instrmt_79_set.insert("EncodedIssuer_t_182898674");
      Instrmt_79.add_attribute("Desc", "SecurityDesc_t_172820314"); // 2
      Instrmt_79_set.insert("SecurityDesc_t_172820314");
      Instrmt_79.add_attribute("EncSecDescLen", "2075197322"); // 2
      Instrmt_79_set.insert("2075197322");
      Instrmt_79.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_943060252"); // 2
      Instrmt_79_set.insert("EncodedSecurityDesc_t_943060252");
      Instrmt_79.add_attribute("Pool", "Pool_t_1826379896"); // 2
      Instrmt_79_set.insert("Pool_t_1826379896");
      Instrmt_79.add_attribute("CSetMo", "1424610425"); // 2
      Instrmt_79_set.insert("1424610425");
      Instrmt_79.add_attribute("CPPgm", "1"); // 2
      Instrmt_79_set.insert("1");
      Instrmt_79.add_attribute("CPRegT", "CPRegType_t_1744001305"); // 2
      Instrmt_79_set.insert("CPRegType_t_1744001305");
      Instrmt_79.add_attribute("Dated", "DatedDate_t_143261582"); // 2
      Instrmt_79_set.insert("DatedDate_t_143261582");
      Instrmt_79.add_attribute("IntAcrl", "InterestAccrualDate_t_1121939321"); // 2
      Instrmt_79_set.insert("InterestAccrualDate_t_1121939321");
      all_values.push_back(Instrmt_79_set);
      all_compo_names.insert("Instrmt_79_set");

      {
        xml_element AID_82{"AID"};
        multiset<string> AID_82_set;
        AID_82.add_attribute("AltID", "SecurityAltID_t_411224459"); // 3
        AID_82_set.insert("SecurityAltID_t_411224459");
        AID_82.add_attribute("AltIDSrc", "B"); // 3
        AID_82_set.insert("B");
        all_values.push_back(AID_82_set);
        all_compo_names.insert("AID_82_set");

        Instrmt_79.add_element(AID_82);
      }
      {
        xml_element SecXML_82{"SecXML"};
        multiset<string> SecXML_82_set;
        SecXML_82.add_attribute("Schema", "SecurityXMLSchema_t_1553596857"); // 3
        SecXML_82_set.insert("SecurityXMLSchema_t_1553596857");
        all_values.push_back(SecXML_82_set);
        all_compo_names.insert("SecXML_82_set");

        Instrmt_79.add_element(SecXML_82);
      }
      {
        xml_element Evnt_82{"Evnt"};
        multiset<string> Evnt_82_set;
        Evnt_82.add_attribute("EventTyp", "15"); // 3
        Evnt_82_set.insert("15");
        Evnt_82.add_attribute("Dt", "EventDate_t_1498700359"); // 3
        Evnt_82_set.insert("EventDate_t_1498700359");
        Evnt_82.add_attribute("Tm", "EventTime_t_933166125"); // 3
        Evnt_82_set.insert("EventTime_t_933166125");
        Evnt_82.add_attribute("Px", "17752295.800000"); // 3
        Evnt_82_set.insert("17752295.800000");
        Evnt_82.add_attribute("Txt", "EventText_t_1516028313"); // 3
        Evnt_82_set.insert("EventText_t_1516028313");
        all_values.push_back(Evnt_82_set);
        all_compo_names.insert("Evnt_82_set");

        Instrmt_79.add_element(Evnt_82);
      }
      {
        xml_element Pty_416{"Pty"};
        multiset<string> Pty_416_set;
        Pty_416.add_attribute("ID", "InstrumentPartyID_t_790429990"); // 3
        Pty_416_set.insert("InstrumentPartyID_t_790429990");
        Pty_416.add_attribute("Src", "C"); // 3
        Pty_416_set.insert("C");
        Pty_416.add_attribute("R", "25"); // 3
        Pty_416_set.insert("25");
        all_values.push_back(Pty_416_set);
        all_compo_names.insert("Pty_416_set");

        {
          xml_element Sub_416{"Sub"};
          multiset<string> Sub_416_set;
          Sub_416.add_attribute("ID", "InstrumentPartySubID_t_2126951177"); // 4
          Sub_416_set.insert("InstrumentPartySubID_t_2126951177");
          Sub_416.add_attribute("Typ", "27"); // 4
          Sub_416_set.insert("27");
          all_values.push_back(Sub_416_set);
          all_compo_names.insert("Sub_416_set");

          Pty_416.add_element(Sub_416);
        }
        Instrmt_79.add_element(Pty_416);
      }
      {
        xml_element CmplxEvnt_79{"CmplxEvnt"};
        multiset<string> CmplxEvnt_79_set;
        CmplxEvnt_79.add_attribute("Typ", "7"); // 3
        CmplxEvnt_79_set.insert("7");
        CmplxEvnt_79.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1254735044"); // 3
        CmplxEvnt_79_set.insert("ComplexOptPayoutAmount_t_1254735044");
        CmplxEvnt_79.add_attribute("Px", "13666733.050000"); // 3
        CmplxEvnt_79_set.insert("13666733.050000");
        CmplxEvnt_79.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_79_set.insert("1");
        CmplxEvnt_79.add_attribute("PxBndryPrcsn", "1717449.950000"); // 3
        CmplxEvnt_79_set.insert("1717449.950000");
        CmplxEvnt_79.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_79_set.insert("2");
        CmplxEvnt_79.add_attribute("Cond", "1"); // 3
        CmplxEvnt_79_set.insert("1");
        all_values.push_back(CmplxEvnt_79_set);
        all_compo_names.insert("CmplxEvnt_79_set");

        {
          xml_element EvntDts_79{"EvntDts"};
          multiset<string> EvntDts_79_set;
          EvntDts_79.add_attribute("StartDt", "ComplexEventStartDate_t_1838248116"); // 4
          EvntDts_79_set.insert("ComplexEventStartDate_t_1838248116");
          EvntDts_79.add_attribute("EndDt", "ComplexEventEndDate_t_598187592"); // 4
          EvntDts_79_set.insert("ComplexEventEndDate_t_598187592");
          all_values.push_back(EvntDts_79_set);
          all_compo_names.insert("EvntDts_79_set");

          {
            xml_element EvntTms_79{"EvntTms"};
            multiset<string> EvntTms_79_set;
            EvntTms_79.add_attribute("StartTm", "834314514"); // 5
            EvntTms_79_set.insert("834314514");
            EvntTms_79.add_attribute("EndTm", "1765961791"); // 5
            EvntTms_79_set.insert("1765961791");
            all_values.push_back(EvntTms_79_set);
            all_compo_names.insert("EvntTms_79_set");

            EvntDts_79.add_element(EvntTms_79);
          }
          CmplxEvnt_79.add_element(EvntDts_79);
        }
        Instrmt_79.add_element(CmplxEvnt_79);
      }
      SecL_3.add_element(Instrmt_79);
    }
    {
      xml_element InstrmtExt_14{"InstrmtExt"};
      multiset<string> InstrmtExt_14_set;
      InstrmtExt_14.add_attribute("DlvryForm", "1"); // 2
      InstrmtExt_14_set.insert("1");
      InstrmtExt_14.add_attribute("PctAtRisk", "5132107.630000"); // 2
      InstrmtExt_14_set.insert("5132107.630000");
      all_values.push_back(InstrmtExt_14_set);
      all_compo_names.insert("InstrmtExt_14_set");

      {
        xml_element Attrb_24{"Attrb"};
        multiset<string> Attrb_24_set;
        Attrb_24.add_attribute("Typ", "28"); // 3
        Attrb_24_set.insert("28");
        Attrb_24.add_attribute("Val", "InstrAttribValue_t_1303870203"); // 3
        Attrb_24_set.insert("InstrAttribValue_t_1303870203");
        all_values.push_back(Attrb_24_set);
        all_compo_names.insert("Attrb_24_set");

        InstrmtExt_14.add_element(Attrb_24);
      }
      SecL_3.add_element(InstrmtExt_14);
    }
    {
      xml_element FinDetls_30{"FinDetls"};
      multiset<string> FinDetls_30_set;
      FinDetls_30.add_attribute("AgmtDesc", "AgreementDesc_t_109728420"); // 2
      FinDetls_30_set.insert("AgreementDesc_t_109728420");
      FinDetls_30.add_attribute("AgmtID", "AgreementID_t_1186350150"); // 2
      FinDetls_30_set.insert("AgreementID_t_1186350150");
      FinDetls_30.add_attribute("AgmtDt", "AgreementDate_t_278325876"); // 2
      FinDetls_30_set.insert("AgreementDate_t_278325876");
      FinDetls_30.add_attribute("AgmtCcy", "EUR"); // 2
      FinDetls_30_set.insert("EUR");
      FinDetls_30.add_attribute("TrmTyp", "2"); // 2
      FinDetls_30_set.insert("2");
      FinDetls_30.add_attribute("StartDt", "StartDate_t_1322003334"); // 2
      FinDetls_30_set.insert("StartDate_t_1322003334");
      FinDetls_30.add_attribute("EndDt", "EndDate_t_1459168014"); // 2
      FinDetls_30_set.insert("EndDate_t_1459168014");
      FinDetls_30.add_attribute("DlvryTyp", "3"); // 2
      FinDetls_30_set.insert("3");
      FinDetls_30.add_attribute("MgnRatio", "9497492.660000"); // 2
      FinDetls_30_set.insert("9497492.660000");
      all_values.push_back(FinDetls_30_set);
      all_compo_names.insert("FinDetls_30_set");

      SecL_3.add_element(FinDetls_30);
    }
    {
      xml_element SecTrdgRules_8{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_10{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_10_set;
        BaseTrdgRules_10.add_attribute("ExpirationCycle", "1"); // 3
        BaseTrdgRules_10_set.insert("1");
        BaseTrdgRules_10.add_attribute("MinTrdVol", "14080352.010000"); // 3
        BaseTrdgRules_10_set.insert("14080352.010000");
        BaseTrdgRules_10.add_attribute("MaxTrdVol", "18026317.750000"); // 3
        BaseTrdgRules_10_set.insert("18026317.750000");
        BaseTrdgRules_10.add_attribute("MxPxVar", "19944255.710000"); // 3
        BaseTrdgRules_10_set.insert("19944255.710000");
        BaseTrdgRules_10.add_attribute("ImpldMktInd", "2"); // 3
        BaseTrdgRules_10_set.insert("2");
        BaseTrdgRules_10.add_attribute("TrdCcy", "USD"); // 3
        BaseTrdgRules_10_set.insert("USD");
        BaseTrdgRules_10.add_attribute("RndLot", "4947541.260000"); // 3
        BaseTrdgRules_10_set.insert("4947541.260000");
        BaseTrdgRules_10.add_attribute("MlegModel", "0"); // 3
        BaseTrdgRules_10_set.insert("0");
        BaseTrdgRules_10.add_attribute("MlegPxMeth", "2"); // 3
        BaseTrdgRules_10_set.insert("2");
        BaseTrdgRules_10.add_attribute("PxTyp", "1"); // 3
        BaseTrdgRules_10_set.insert("1");
        all_values.push_back(BaseTrdgRules_10_set);
        all_compo_names.insert("BaseTrdgRules_10_set");

        {
          xml_element TickRules_10{"TickRules"};
          multiset<string> TickRules_10_set;
          TickRules_10.add_attribute("StartTickPxRng", "19712033.650000"); // 4
          TickRules_10_set.insert("19712033.650000");
          TickRules_10.add_attribute("EndTickPxRng", "15051959.740000"); // 4
          TickRules_10_set.insert("15051959.740000");
          TickRules_10.add_attribute("TickIncr", "3572635.900000"); // 4
          TickRules_10_set.insert("3572635.900000");
          TickRules_10.add_attribute("TickRuleTyp", "4"); // 4
          TickRules_10_set.insert("4");
          all_values.push_back(TickRules_10_set);
          all_compo_names.insert("TickRules_10_set");

          BaseTrdgRules_10.add_element(TickRules_10);
        }
        {
          xml_element LotTypeRules_10{"LotTypeRules"};
          multiset<string> LotTypeRules_10_set;
          LotTypeRules_10.add_attribute("LotTyp", "1"); // 4
          LotTypeRules_10_set.insert("1");
          LotTypeRules_10.add_attribute("MinLotSz", "21232253.810000"); // 4
          LotTypeRules_10_set.insert("21232253.810000");
          all_values.push_back(LotTypeRules_10_set);
          all_compo_names.insert("LotTypeRules_10_set");

          BaseTrdgRules_10.add_element(LotTypeRules_10);
        }
        {
          xml_element PxLmts_10{"PxLmts"};
          multiset<string> PxLmts_10_set;
          PxLmts_10.add_attribute("PxLmtTyp", "1"); // 4
          PxLmts_10_set.insert("1");
          PxLmts_10.add_attribute("LowLmtPx", "7052376.030000"); // 4
          PxLmts_10_set.insert("7052376.030000");
          PxLmts_10.add_attribute("HiLmtPx", "10188303.020000"); // 4
          PxLmts_10_set.insert("10188303.020000");
          PxLmts_10.add_attribute("TrdgRefPx", "11195417.090000"); // 4
          PxLmts_10_set.insert("11195417.090000");
          all_values.push_back(PxLmts_10_set);
          all_compo_names.insert("PxLmts_10_set");

          BaseTrdgRules_10.add_element(PxLmts_10);
        }
        SecTrdgRules_8.add_element(BaseTrdgRules_10);
      }
      {
        xml_element TrdgSesRulesGrp_8{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_8_set;
        TrdgSesRulesGrp_8.add_attribute("SesID", "4"); // 3
        TrdgSesRulesGrp_8_set.insert("4");
        TrdgSesRulesGrp_8.add_attribute("SesSub", "5"); // 3
        TrdgSesRulesGrp_8_set.insert("5");
        all_values.push_back(TrdgSesRulesGrp_8_set);
        all_compo_names.insert("TrdgSesRulesGrp_8_set");

        {
          xml_element TrdgSesRules_8{"TrdgSesRules"};
          {
            xml_element OrdTypRules_14{"OrdTypRules"};
            multiset<string> OrdTypRules_14_set;
            OrdTypRules_14.add_attribute("OrdTyp", "I"); // 5
            OrdTypRules_14_set.insert("I");
            all_values.push_back(OrdTypRules_14_set);
            all_compo_names.insert("OrdTypRules_14_set");

            TrdgSesRules_8.add_element(OrdTypRules_14);
          }
          {
            xml_element TmInForceRules_10{"TmInForceRules"};
            multiset<string> TmInForceRules_10_set;
            TmInForceRules_10.add_attribute("TmInForce", "2"); // 5
            TmInForceRules_10_set.insert("2");
            all_values.push_back(TmInForceRules_10_set);
            all_compo_names.insert("TmInForceRules_10_set");

            TrdgSesRules_8.add_element(TmInForceRules_10);
          }
          {
            xml_element ExecInstRules_13{"ExecInstRules"};
            multiset<string> ExecInstRules_13_set;
            ExecInstRules_13.add_attribute("ExecInstValu", "e"); // 5
            ExecInstRules_13_set.insert("e");
            all_values.push_back(ExecInstRules_13_set);
            all_compo_names.insert("ExecInstRules_13_set");

            TrdgSesRules_8.add_element(ExecInstRules_13);
          }
          {
            xml_element MtchRules_8{"MtchRules"};
            multiset<string> MtchRules_8_set;
            MtchRules_8.add_attribute("MtchAlgo", "MatchAlgorithm_t_1082306671"); // 5
            MtchRules_8_set.insert("MatchAlgorithm_t_1082306671");
            MtchRules_8.add_attribute("MtchTyp", "M1"); // 5
            MtchRules_8_set.insert("M1");
            all_values.push_back(MtchRules_8_set);
            all_compo_names.insert("MtchRules_8_set");

            TrdgSesRules_8.add_element(MtchRules_8);
          }
          {
            xml_element MDFeedTyps_8{"MDFeedTyps"};
            multiset<string> MDFeedTyps_8_set;
            MDFeedTyps_8.add_attribute("MDFeedTyp", "MDFeedType_t_1477332473"); // 5
            MDFeedTyps_8_set.insert("MDFeedType_t_1477332473");
            MDFeedTyps_8.add_attribute("MktDepth", "1699911882"); // 5
            MDFeedTyps_8_set.insert("1699911882");
            MDFeedTyps_8.add_attribute("MDBkTyp", "3"); // 5
            MDFeedTyps_8_set.insert("3");
            all_values.push_back(MDFeedTyps_8_set);
            all_compo_names.insert("MDFeedTyps_8_set");

            TrdgSesRules_8.add_element(MDFeedTyps_8);
          }
          TrdgSesRulesGrp_8.add_element(TrdgSesRules_8);
        }
        SecTrdgRules_8.add_element(TrdgSesRulesGrp_8);
      }
      {
        xml_element Attrb_25{"Attrb"};
        multiset<string> Attrb_25_set;
        Attrb_25.add_attribute("Typ", "14"); // 3
        Attrb_25_set.insert("14");
        Attrb_25.add_attribute("Val", "NestedInstrAttribValue_t_960463435"); // 3
        Attrb_25_set.insert("NestedInstrAttribValue_t_960463435");
        all_values.push_back(Attrb_25_set);
        all_compo_names.insert("Attrb_25_set");

        SecTrdgRules_8.add_element(Attrb_25);
      }
      SecL_3.add_element(SecTrdgRules_8);
    }
    {
      xml_element StrkRules_8{"StrkRules"};
      multiset<string> StrkRules_8_set;
      StrkRules_8.add_attribute("StrkRule", "StrikeRuleID_t_1115335982"); // 2
      StrkRules_8_set.insert("StrikeRuleID_t_1115335982");
      StrkRules_8.add_attribute("StartStrkPxRng", "45034.280000"); // 2
      StrkRules_8_set.insert("45034.280000");
      StrkRules_8.add_attribute("EndStrkPxRng", "2004825.180000"); // 2
      StrkRules_8_set.insert("2004825.180000");
      StrkRules_8.add_attribute("StrkIncr", "13045771.240000"); // 2
      StrkRules_8_set.insert("13045771.240000");
      StrkRules_8.add_attribute("StrkExrStyle", "0"); // 2
      StrkRules_8_set.insert("0");
      all_values.push_back(StrkRules_8_set);
      all_compo_names.insert("StrkRules_8_set");

      {
        xml_element MatRules_8{"MatRules"};
        multiset<string> MatRules_8_set;
        MatRules_8.add_attribute("MatRuleID", "MaturityRuleID_t_695236644"); // 3
        MatRules_8_set.insert("MaturityRuleID_t_695236644");
        MatRules_8.add_attribute("MMYFmt", "2"); // 3
        MatRules_8_set.insert("2");
        MatRules_8.add_attribute("MMYIncrUnits", "3"); // 3
        MatRules_8_set.insert("3");
        MatRules_8.add_attribute("StartMMY", "1361735766"); // 3
        MatRules_8_set.insert("1361735766");
        MatRules_8.add_attribute("EndMMY", "536727641"); // 3
        MatRules_8_set.insert("536727641");
        MatRules_8.add_attribute("MMYIncr", "1882300105"); // 3
        MatRules_8_set.insert("1882300105");
        all_values.push_back(MatRules_8_set);
        all_compo_names.insert("MatRules_8_set");

        StrkRules_8.add_element(MatRules_8);
      }
      SecL_3.add_element(StrkRules_8);
    }
    {
      xml_element Undly_113{"Undly"};
      multiset<string> Undly_113_set;
      Undly_113.add_attribute("Sym", "UnderlyingSymbol_t_1718999357"); // 2
      Undly_113_set.insert("UnderlyingSymbol_t_1718999357");
      Undly_113.add_attribute("Sfx", "CD"); // 2
      Undly_113_set.insert("CD");
      Undly_113.add_attribute("ID", "UnderlyingSecurityID_t_2074326945"); // 2
      Undly_113_set.insert("UnderlyingSecurityID_t_2074326945");
      Undly_113.add_attribute("Src", "K"); // 2
      Undly_113_set.insert("K");
      Undly_113.add_attribute("Prod", "10"); // 2
      Undly_113_set.insert("10");
      Undly_113.add_attribute("CFI", "UnderlyingCFICode_t_632080901"); // 2
      Undly_113_set.insert("UnderlyingCFICode_t_632080901");
      Undly_113.add_attribute("SecTyp", "WITHDRN"); // 2
      Undly_113_set.insert("WITHDRN");
      Undly_113.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1893848165"); // 2
      Undly_113_set.insert("UnderlyingSecuritySubType_t_1893848165");
      Undly_113.add_attribute("MMY", "1447046924"); // 2
      Undly_113_set.insert("1447046924");
      Undly_113.add_attribute("Mat", "UnderlyingMaturityDate_t_623784549"); // 2
      Undly_113_set.insert("UnderlyingMaturityDate_t_623784549");
      Undly_113.add_attribute("MatTm", "1144232103"); // 2
      Undly_113_set.insert("1144232103");
      Undly_113.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_635482179"); // 2
      Undly_113_set.insert("UnderlyingCouponPaymentDate_t_635482179");
      Undly_113.add_attribute("RestrctTyp", "FR"); // 2
      Undly_113_set.insert("FR");
      Undly_113.add_attribute("Snrty", "SB"); // 2
      Undly_113_set.insert("SB");
      Undly_113.add_attribute("NotlPctOut", "11459207.670000"); // 2
      Undly_113_set.insert("11459207.670000");
      Undly_113.add_attribute("OrigNotlPctOut", "21192814.820000"); // 2
      Undly_113_set.insert("21192814.820000");
      Undly_113.add_attribute("AttchPnt", "17789670.080000"); // 2
      Undly_113_set.insert("17789670.080000");
      Undly_113.add_attribute("DetchPnt", "4586249.740000"); // 2
      Undly_113_set.insert("4586249.740000");
      Undly_113.add_attribute("Issued", "UnderlyingIssueDate_t_129359339"); // 2
      Undly_113_set.insert("UnderlyingIssueDate_t_129359339");
      Undly_113.add_attribute("RepoCollSecTyp", "591946795"); // 2
      Undly_113_set.insert("591946795");
      Undly_113.add_attribute("RepoTrm", "1573960956"); // 2
      Undly_113_set.insert("1573960956");
      Undly_113.add_attribute("RepoRt", "1338627.670000"); // 2
      Undly_113_set.insert("1338627.670000");
      Undly_113.add_attribute("Fctr", "7924293.130000"); // 2
      Undly_113_set.insert("7924293.130000");
      Undly_113.add_attribute("CrdRtg", "UnderlyingCreditRating_t_731054432"); // 2
      Undly_113_set.insert("UnderlyingCreditRating_t_731054432");
      Undly_113.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1814748772"); // 2
      Undly_113_set.insert("UnderlyingInstrRegistry_t_1814748772");
      Undly_113.add_attribute("Ctry", "1487665958"); // 2
      Undly_113_set.insert("1487665958");
      Undly_113.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1444062355"); // 2
      Undly_113_set.insert("UnderlyingStateOrProvinceOfIssue_t_1444062355");
      Undly_113.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_44369255"); // 2
      Undly_113_set.insert("UnderlyingLocaleOfIssue_t_44369255");
      Undly_113.add_attribute("Redeem", "UnderlyingRedemptionDate_t_701918076"); // 2
      Undly_113_set.insert("UnderlyingRedemptionDate_t_701918076");
      Undly_113.add_attribute("StrkPx", "19807899.960000"); // 2
      Undly_113_set.insert("19807899.960000");
      Undly_113.add_attribute("StrkCcy", "CHF"); // 2
      Undly_113_set.insert("CHF");
      Undly_113.add_attribute("OptA", "791941299"); // 2
      Undly_113_set.insert("791941299");
      Undly_113.add_attribute("Mult", "18535126.580000"); // 2
      Undly_113_set.insert("18535126.580000");
      Undly_113.add_attribute("MultTyp", "0"); // 2
      Undly_113_set.insert("0");
      Undly_113.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_113_set.insert("0");
      Undly_113.add_attribute("UOM", "USD"); // 2
      Undly_113_set.insert("USD");
      Undly_113.add_attribute("UOMQty", "3867789.720000"); // 2
      Undly_113_set.insert("3867789.720000");
      Undly_113.add_attribute("PxUOM", "Bu"); // 2
      Undly_113_set.insert("Bu");
      Undly_113.add_attribute("PxUOMQty", "17851568.350000"); // 2
      Undly_113_set.insert("17851568.350000");
      Undly_113.add_attribute("TmUnit", "H"); // 2
      Undly_113_set.insert("H");
      Undly_113.add_attribute("ExerStyle", "2"); // 2
      Undly_113_set.insert("2");
      Undly_113.add_attribute("CpnRt", "2731553.660000"); // 2
      Undly_113_set.insert("2731553.660000");
      Undly_113.add_attribute("Exch", "UnderlyingSecurityExchange_t_1652512530"); // 2
      Undly_113_set.insert("UnderlyingSecurityExchange_t_1652512530");
      Undly_113.add_attribute("Issr", "UnderlyingIssuer_t_388415854"); // 2
      Undly_113_set.insert("UnderlyingIssuer_t_388415854");
      Undly_113.add_attribute("EncUndIssrLen", "1419076134"); // 2
      Undly_113_set.insert("1419076134");
      Undly_113.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1624310364"); // 2
      Undly_113_set.insert("EncodedUnderlyingIssuer_t_1624310364");
      Undly_113.add_attribute("Desc", "UnderlyingSecurityDesc_t_19899214"); // 2
      Undly_113_set.insert("UnderlyingSecurityDesc_t_19899214");
      Undly_113.add_attribute("EncUndSecDescLen", "1877701108"); // 2
      Undly_113_set.insert("1877701108");
      Undly_113.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1753669703"); // 2
      Undly_113_set.insert("EncodedUnderlyingSecurityDesc_t_1753669703");
      Undly_113.add_attribute("CPPgm", "UnderlyingCPProgram_t_611846009"); // 2
      Undly_113_set.insert("UnderlyingCPProgram_t_611846009");
      Undly_113.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1304178416"); // 2
      Undly_113_set.insert("UnderlyingCPRegType_t_1304178416");
      Undly_113.add_attribute("AllocPct", "18875324.700000"); // 2
      Undly_113_set.insert("18875324.700000");
      Undly_113.add_attribute("Ccy", "JPY"); // 2
      Undly_113_set.insert("JPY");
      Undly_113.add_attribute("Qty", "15547975.950000"); // 2
      Undly_113_set.insert("15547975.950000");
      Undly_113.add_attribute("SettlTyp", "4"); // 2
      Undly_113_set.insert("4");
      Undly_113.add_attribute("CashAmt", "UnderlyingCashAmount_t_1331811555"); // 2
      Undly_113_set.insert("UnderlyingCashAmount_t_1331811555");
      Undly_113.add_attribute("CashTyp", "FIXED"); // 2
      Undly_113_set.insert("FIXED");
      Undly_113.add_attribute("Px", "14463757.090000"); // 2
      Undly_113_set.insert("14463757.090000");
      Undly_113.add_attribute("DirtPx", "11651179.040000"); // 2
      Undly_113_set.insert("11651179.040000");
      Undly_113.add_attribute("EndPx", "13783525.630000"); // 2
      Undly_113_set.insert("13783525.630000");
      Undly_113.add_attribute("StartVal", "UnderlyingStartValue_t_1719809495"); // 2
      Undly_113_set.insert("UnderlyingStartValue_t_1719809495");
      Undly_113.add_attribute("CurVal", "UnderlyingCurrentValue_t_1957059203"); // 2
      Undly_113_set.insert("UnderlyingCurrentValue_t_1957059203");
      Undly_113.add_attribute("EndVal", "UnderlyingEndValue_t_1084381573"); // 2
      Undly_113_set.insert("UnderlyingEndValue_t_1084381573");
      Undly_113.add_attribute("AdjQty", "15405007.230000"); // 2
      Undly_113_set.insert("15405007.230000");
      Undly_113.add_attribute("FxRate", "13758233.100000"); // 2
      Undly_113_set.insert("13758233.100000");
      Undly_113.add_attribute("FxRateCalc", "M"); // 2
      Undly_113_set.insert("M");
      Undly_113.add_attribute("CapValu", "UnderlyingCapValue_t_1927279695"); // 2
      Undly_113_set.insert("UnderlyingCapValue_t_1927279695");
      Undly_113.add_attribute("SetMeth", "UnderlyingSettlMethod_t_540951935"); // 2
      Undly_113_set.insert("UnderlyingSettlMethod_t_540951935");
      Undly_113.add_attribute("PutCall", "1060164671"); // 2
      Undly_113_set.insert("1060164671");
      all_values.push_back(Undly_113_set);
      all_compo_names.insert("Undly_113_set");

      {
        xml_element UndAID_113{"UndAID"};
        multiset<string> UndAID_113_set;
        UndAID_113.add_attribute("AltID", "UnderlyingSecurityAltID_t_790359569"); // 3
        UndAID_113_set.insert("UnderlyingSecurityAltID_t_790359569");
        UndAID_113.add_attribute("AltIDSrc", "E"); // 3
        UndAID_113_set.insert("E");
        all_values.push_back(UndAID_113_set);
        all_compo_names.insert("UndAID_113_set");

        Undly_113.add_element(UndAID_113);
      }
      {
        xml_element Stip_178{"Stip"};
        multiset<string> Stip_178_set;
        Stip_178.add_attribute("Typ", "PROD"); // 3
        Stip_178_set.insert("PROD");
        Stip_178.add_attribute("Val", "UnderlyingStipValue_t_295388451"); // 3
        Stip_178_set.insert("UnderlyingStipValue_t_295388451");
        all_values.push_back(Stip_178_set);
        all_compo_names.insert("Stip_178_set");

        Undly_113.add_element(Stip_178);
      }
      {
        xml_element Pty_417{"Pty"};
        multiset<string> Pty_417_set;
        Pty_417.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1238728517"); // 3
        Pty_417_set.insert("UnderlyingInstrumentPartyID_t_1238728517");
        Pty_417.add_attribute("Src", "7"); // 3
        Pty_417_set.insert("7");
        Pty_417.add_attribute("R", "35"); // 3
        Pty_417_set.insert("35");
        all_values.push_back(Pty_417_set);
        all_compo_names.insert("Pty_417_set");

        {
          xml_element Sub_417{"Sub"};
          multiset<string> Sub_417_set;
          Sub_417.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1258627731"); // 4
          Sub_417_set.insert("UnderlyingInstrumentPartySubID_t_1258627731");
          Sub_417.add_attribute("Typ", "11"); // 4
          Sub_417_set.insert("11");
          all_values.push_back(Sub_417_set);
          all_compo_names.insert("Sub_417_set");

          Pty_417.add_element(Sub_417);
        }
        Undly_113.add_element(Pty_417);
      }
      SecL_3.add_element(Undly_113);
    }
    {
      xml_element Stip_179{"Stip"};
      multiset<string> Stip_179_set;
      Stip_179.add_attribute("Typ", "INTERNALPX"); // 2
      Stip_179_set.insert("INTERNALPX");
      Stip_179.add_attribute("Val", "StipulationValue_t_1870473741"); // 2
      Stip_179_set.insert("StipulationValue_t_1870473741");
      all_values.push_back(Stip_179_set);
      all_compo_names.insert("Stip_179_set");

      SecL_3.add_element(Stip_179);
    }
    {
      xml_element SecLstUpdRelSymsLegGrp_1{"SecLstUpdRelSymsLegGrp"};
      multiset<string> SecLstUpdRelSymsLegGrp_1_set;
      SecLstUpdRelSymsLegGrp_1.add_attribute("SwapTyp", "1"); // 2
      SecLstUpdRelSymsLegGrp_1_set.insert("1");
      SecLstUpdRelSymsLegGrp_1.add_attribute("SettlTyp", "4"); // 2
      SecLstUpdRelSymsLegGrp_1_set.insert("4");
      all_values.push_back(SecLstUpdRelSymsLegGrp_1_set);
      all_compo_names.insert("SecLstUpdRelSymsLegGrp_1_set");

      {
        xml_element Leg_98{"Leg"};
        multiset<string> Leg_98_set;
        Leg_98.add_attribute("Sym", "LegSymbol_t_1127265416"); // 3
        Leg_98_set.insert("LegSymbol_t_1127265416");
        Leg_98.add_attribute("Sfx", "CD"); // 3
        Leg_98_set.insert("CD");
        Leg_98.add_attribute("ID", "LegSecurityID_t_673247639"); // 3
        Leg_98_set.insert("LegSecurityID_t_673247639");
        Leg_98.add_attribute("Src", "A"); // 3
        Leg_98_set.insert("A");
        Leg_98.add_attribute("Prod", "10"); // 3
        Leg_98_set.insert("10");
        Leg_98.add_attribute("CFI", "LegCFICode_t_124930842"); // 3
        Leg_98_set.insert("LegCFICode_t_124930842");
        Leg_98.add_attribute("SecTyp", "BN"); // 3
        Leg_98_set.insert("BN");
        Leg_98.add_attribute("SecSubTyp", "LegSecuritySubType_t_1876503411"); // 3
        Leg_98_set.insert("LegSecuritySubType_t_1876503411");
        Leg_98.add_attribute("MMY", "1503283405"); // 3
        Leg_98_set.insert("1503283405");
        Leg_98.add_attribute("Mat", "LegMaturityDate_t_742940957"); // 3
        Leg_98_set.insert("LegMaturityDate_t_742940957");
        Leg_98.add_attribute("MatTm", "1686078966"); // 3
        Leg_98_set.insert("1686078966");
        Leg_98.add_attribute("CpnPmt", "LegCouponPaymentDate_t_440181330"); // 3
        Leg_98_set.insert("LegCouponPaymentDate_t_440181330");
        Leg_98.add_attribute("Issued", "LegIssueDate_t_135958032"); // 3
        Leg_98_set.insert("LegIssueDate_t_135958032");
        Leg_98.add_attribute("RepoCollSecTyp", "914418629"); // 3
        Leg_98_set.insert("914418629");
        Leg_98.add_attribute("RepoTrm", "1862672814"); // 3
        Leg_98_set.insert("1862672814");
        Leg_98.add_attribute("RepoRt", "20632377.280000"); // 3
        Leg_98_set.insert("20632377.280000");
        Leg_98.add_attribute("Fctr", "14553705.640000"); // 3
        Leg_98_set.insert("14553705.640000");
        Leg_98.add_attribute("CrdRtg", "LegCreditRating_t_775353837"); // 3
        Leg_98_set.insert("LegCreditRating_t_775353837");
        Leg_98.add_attribute("Rgstry", "LegInstrRegistry_t_706113649"); // 3
        Leg_98_set.insert("LegInstrRegistry_t_706113649");
        Leg_98.add_attribute("Ctry", "158199580"); // 3
        Leg_98_set.insert("158199580");
        Leg_98.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2108673875"); // 3
        Leg_98_set.insert("LegStateOrProvinceOfIssue_t_2108673875");
        Leg_98.add_attribute("Lcl", "LegLocaleOfIssue_t_1001502100"); // 3
        Leg_98_set.insert("LegLocaleOfIssue_t_1001502100");
        Leg_98.add_attribute("Redeem", "LegRedemptionDate_t_1396928097"); // 3
        Leg_98_set.insert("LegRedemptionDate_t_1396928097");
        Leg_98.add_attribute("Strk", "5661027.510000"); // 3
        Leg_98_set.insert("5661027.510000");
        Leg_98.add_attribute("StrkCcy", "CAN"); // 3
        Leg_98_set.insert("CAN");
        Leg_98.add_attribute("OptA", "901232735"); // 3
        Leg_98_set.insert("901232735");
        Leg_98.add_attribute("Cmult", "1521184.890000"); // 3
        Leg_98_set.insert("1521184.890000");
        Leg_98.add_attribute("MultTyp", "0"); // 3
        Leg_98_set.insert("0");
        Leg_98.add_attribute("FlowSchedTyp", "2"); // 3
        Leg_98_set.insert("2");
        Leg_98.add_attribute("UOM", "MWh"); // 3
        Leg_98_set.insert("MWh");
        Leg_98.add_attribute("UOMQty", "13583276.900000"); // 3
        Leg_98_set.insert("13583276.900000");
        Leg_98.add_attribute("PxUOM", "lbs"); // 3
        Leg_98_set.insert("lbs");
        Leg_98.add_attribute("PxUOMQty", "20912998.210000"); // 3
        Leg_98_set.insert("20912998.210000");
        Leg_98.add_attribute("TmUnit", "Wk"); // 3
        Leg_98_set.insert("Wk");
        Leg_98.add_attribute("ExerStyle", "1"); // 3
        Leg_98_set.insert("1");
        Leg_98.add_attribute("CpnRt", "687470.150000"); // 3
        Leg_98_set.insert("687470.150000");
        Leg_98.add_attribute("Exch", "LegSecurityExchange_t_105698553"); // 3
        Leg_98_set.insert("LegSecurityExchange_t_105698553");
        Leg_98.add_attribute("Issr", "LegIssuer_t_213036710"); // 3
        Leg_98_set.insert("LegIssuer_t_213036710");
        Leg_98.add_attribute("EncLegIssrLen", "1572030420"); // 3
        Leg_98_set.insert("1572030420");
        Leg_98.add_attribute("EncLegIssr", "EncodedLegIssuer_t_848639511"); // 3
        Leg_98_set.insert("EncodedLegIssuer_t_848639511");
        Leg_98.add_attribute("Desc", "LegSecurityDesc_t_1899115677"); // 3
        Leg_98_set.insert("LegSecurityDesc_t_1899115677");
        Leg_98.add_attribute("EncLegSecDescLen", "2012211750"); // 3
        Leg_98_set.insert("2012211750");
        Leg_98.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_984597543"); // 3
        Leg_98_set.insert("EncodedLegSecurityDesc_t_984597543");
        Leg_98.add_attribute("RatioQty", "6660506.580000"); // 3
        Leg_98_set.insert("6660506.580000");
        Leg_98.add_attribute("Side", "5"); // 3
        Leg_98_set.insert("5");
        Leg_98.add_attribute("Ccy", "JPY"); // 3
        Leg_98_set.insert("JPY");
        Leg_98.add_attribute("Pool", "LegPool_t_355271105"); // 3
        Leg_98_set.insert("LegPool_t_355271105");
        Leg_98.add_attribute("Dated", "LegDatedDate_t_1606465272"); // 3
        Leg_98_set.insert("LegDatedDate_t_1606465272");
        Leg_98.add_attribute("CSetMo", "132137154"); // 3
        Leg_98_set.insert("132137154");
        Leg_98.add_attribute("IntAcrl", "LegInterestAccrualDate_t_316461333"); // 3
        Leg_98_set.insert("LegInterestAccrualDate_t_316461333");
        Leg_98.add_attribute("PutCall", "460483724"); // 3
        Leg_98_set.insert("460483724");
        Leg_98.add_attribute("LegOptionRatio", "15290652.520000"); // 3
        Leg_98_set.insert("15290652.520000");
        Leg_98.add_attribute("Px", "8825640.840000"); // 3
        Leg_98_set.insert("8825640.840000");
        all_values.push_back(Leg_98_set);
        all_compo_names.insert("Leg_98_set");

        {
          xml_element LegAID_93{"LegAID"};
          multiset<string> LegAID_93_set;
          LegAID_93.add_attribute("SecAltID", "LegSecurityAltID_t_1234200991"); // 4
          LegAID_93_set.insert("LegSecurityAltID_t_1234200991");
          LegAID_93.add_attribute("SecAltIDSrc", "2"); // 4
          LegAID_93_set.insert("2");
          all_values.push_back(LegAID_93_set);
          all_compo_names.insert("LegAID_93_set");

          Leg_98.add_element(LegAID_93);
        }
        SecLstUpdRelSymsLegGrp_1.add_element(Leg_98);
      }
      {
        xml_element Stip_180{"Stip"};
        multiset<string> Stip_180_set;
        Stip_180.add_attribute("StipTyp", "LOTVAR"); // 3
        Stip_180_set.insert("LOTVAR");
        Stip_180.add_attribute("StipVal", "LegStipulationValue_t_1386319480"); // 3
        Stip_180_set.insert("LegStipulationValue_t_1386319480");
        all_values.push_back(Stip_180_set);
        all_compo_names.insert("Stip_180_set");

        SecLstUpdRelSymsLegGrp_1.add_element(Stip_180);
      }
      {
        xml_element BnchmkCurve_9{"BnchmkCurve"};
        multiset<string> BnchmkCurve_9_set;
        BnchmkCurve_9.add_attribute("Ccy", "CAN"); // 3
        BnchmkCurve_9_set.insert("CAN");
        BnchmkCurve_9.add_attribute("Name", "SWAP"); // 3
        BnchmkCurve_9_set.insert("SWAP");
        BnchmkCurve_9.add_attribute("Point", "LegBenchmarkCurvePoint_t_1479043749"); // 3
        BnchmkCurve_9_set.insert("LegBenchmarkCurvePoint_t_1479043749");
        BnchmkCurve_9.add_attribute("Px", "19494857.470000"); // 3
        BnchmkCurve_9_set.insert("19494857.470000");
        BnchmkCurve_9.add_attribute("PxTyp", "600704187"); // 3
        BnchmkCurve_9_set.insert("600704187");
        all_values.push_back(BnchmkCurve_9_set);
        all_compo_names.insert("BnchmkCurve_9_set");

        SecLstUpdRelSymsLegGrp_1.add_element(BnchmkCurve_9);
      }
      SecL_3.add_element(SecLstUpdRelSymsLegGrp_1);
    }
    {
      xml_element SprdBnchmkCurve_34{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_34_set;
      SprdBnchmkCurve_34.add_attribute("Spread", "4141271.920000"); // 2
      SprdBnchmkCurve_34_set.insert("4141271.920000");
      SprdBnchmkCurve_34.add_attribute("Ccy", "GBP"); // 2
      SprdBnchmkCurve_34_set.insert("GBP");
      SprdBnchmkCurve_34.add_attribute("Name", "EUREPO"); // 2
      SprdBnchmkCurve_34_set.insert("EUREPO");
      SprdBnchmkCurve_34.add_attribute("Point", "BenchmarkCurvePoint_t_499055756"); // 2
      SprdBnchmkCurve_34_set.insert("BenchmarkCurvePoint_t_499055756");
      SprdBnchmkCurve_34.add_attribute("Px", "939979.740000"); // 2
      SprdBnchmkCurve_34_set.insert("939979.740000");
      SprdBnchmkCurve_34.add_attribute("PxTyp", "9"); // 2
      SprdBnchmkCurve_34_set.insert("9");
      SprdBnchmkCurve_34.add_attribute("SecID", "BenchmarkSecurityID_t_250687785"); // 2
      SprdBnchmkCurve_34_set.insert("BenchmarkSecurityID_t_250687785");
      SprdBnchmkCurve_34.add_attribute("SecIDSrc", "F"); // 2
      SprdBnchmkCurve_34_set.insert("F");
      all_values.push_back(SprdBnchmkCurve_34_set);
      all_compo_names.insert("SprdBnchmkCurve_34_set");

      SecL_3.add_element(SprdBnchmkCurve_34);
    }
    {
      xml_element Yield_29{"Yield"};
      multiset<string> Yield_29_set;
      Yield_29.add_attribute("Typ", "OPENAVG"); // 2
      Yield_29_set.insert("OPENAVG");
      Yield_29.add_attribute("Yld", "9167384.430000"); // 2
      Yield_29_set.insert("9167384.430000");
      Yield_29.add_attribute("CalcDt", "YieldCalcDate_t_1686126992"); // 2
      Yield_29_set.insert("YieldCalcDate_t_1686126992");
      Yield_29.add_attribute("RedDt", "YieldRedemptionDate_t_1105930775"); // 2
      Yield_29_set.insert("YieldRedemptionDate_t_1105930775");
      Yield_29.add_attribute("RedPx", "8906760.180000"); // 2
      Yield_29_set.insert("8906760.180000");
      Yield_29.add_attribute("RedPxTyp", "6"); // 2
      Yield_29_set.insert("6");
      all_values.push_back(Yield_29_set);
      all_compo_names.insert("Yield_29_set");

      SecL_3.add_element(Yield_29);
    }
    elt.add_element(SecL_3);
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
