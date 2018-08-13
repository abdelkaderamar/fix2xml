#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RequestForPositions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositions_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ReqForPoss" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositions_message_t_0;
  elt.add_attribute("ReqID", "PosReqID_t_1349011232"); // 0
  RequestForPositions_message_t_0.insert("PosReqID_t_1349011232");
  elt.add_attribute("ReqTyp", "0"); // 0
  RequestForPositions_message_t_0.insert("0");
  elt.add_attribute("MtchStat", "2"); // 0
  RequestForPositions_message_t_0.insert("2");
  elt.add_attribute("SubReqTyp", "0"); // 0
  RequestForPositions_message_t_0.insert("0");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  RequestForPositions_message_t_0.insert("CHF");
  elt.add_attribute("Acct", "Account_t_424320935"); // 0
  RequestForPositions_message_t_0.insert("Account_t_424320935");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  RequestForPositions_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "2"); // 0
  RequestForPositions_message_t_0.insert("2");
  elt.add_attribute("Ccy", "GBP"); // 0
  RequestForPositions_message_t_0.insert("GBP");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_960763491"); // 0
  RequestForPositions_message_t_0.insert("ClearingBusinessDate_t_960763491");
  elt.add_attribute("SetSesID", "ITD"); // 0
  RequestForPositions_message_t_0.insert("ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_973870195"); // 0
  RequestForPositions_message_t_0.insert("SettlSessSubID_t_973870195");
  elt.add_attribute("TxnTm", "TransactTime_t_797849591"); // 0
  RequestForPositions_message_t_0.insert("TransactTime_t_797849591");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  RequestForPositions_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_1153956462"); // 0
  RequestForPositions_message_t_0.insert("ResponseDestination_t_1153956462");
  elt.add_attribute("Txt", "Text_t_742012735"); // 0
  RequestForPositions_message_t_0.insert("Text_t_742012735");
  elt.add_attribute("EncTxtLen", "1606777846"); // 0
  RequestForPositions_message_t_0.insert("1606777846");
  elt.add_attribute("EncTxt", "EncodedText_t_1973553989"); // 0
  RequestForPositions_message_t_0.insert("EncodedText_t_1973553989");
  all_values.push_back(RequestForPositions_message_t_0);
  all_compo_names.insert("RequestForPositions_message_t");

  { // Hdr
    xml_element Hdr_78{"Hdr"};
    multiset<string> Hdr_78_set;
    Hdr_78.add_attribute("SeqNum", "285772270"); // 1
    Hdr_78_set.insert("285772270");
    Hdr_78.add_attribute("SID", "SenderCompID_t_341175961"); // 1
    Hdr_78_set.insert("SenderCompID_t_341175961");
    Hdr_78.add_attribute("TID", "TargetCompID_t_420626513"); // 1
    Hdr_78_set.insert("TargetCompID_t_420626513");
    Hdr_78.add_attribute("OBID", "OnBehalfOfCompID_t_545672946"); // 1
    Hdr_78_set.insert("OnBehalfOfCompID_t_545672946");
    Hdr_78.add_attribute("D2ID", "DeliverToCompID_t_1878619690"); // 1
    Hdr_78_set.insert("DeliverToCompID_t_1878619690");
    Hdr_78.add_attribute("SSub", "SenderSubID_t_424142135"); // 1
    Hdr_78_set.insert("SenderSubID_t_424142135");
    Hdr_78.add_attribute("SLoc", "SenderLocationID_t_1711750124"); // 1
    Hdr_78_set.insert("SenderLocationID_t_1711750124");
    Hdr_78.add_attribute("TSub", "TargetSubID_t_39398843"); // 1
    Hdr_78_set.insert("TargetSubID_t_39398843");
    Hdr_78.add_attribute("TLoc", "TargetLocationID_t_508993925"); // 1
    Hdr_78_set.insert("TargetLocationID_t_508993925");
    Hdr_78.add_attribute("OBSub", "OnBehalfOfSubID_t_1022493723"); // 1
    Hdr_78_set.insert("OnBehalfOfSubID_t_1022493723");
    Hdr_78.add_attribute("OBLoc", "OnBehalfOfLocationID_t_767112810"); // 1
    Hdr_78_set.insert("OnBehalfOfLocationID_t_767112810");
    Hdr_78.add_attribute("D2Sub", "DeliverToSubID_t_1858005157"); // 1
    Hdr_78_set.insert("DeliverToSubID_t_1858005157");
    Hdr_78.add_attribute("D2Loc", "DeliverToLocationID_t_1499730336"); // 1
    Hdr_78_set.insert("DeliverToLocationID_t_1499730336");
    Hdr_78.add_attribute("PosDup", "Y"); // 1
    Hdr_78_set.insert("Y");
    Hdr_78.add_attribute("PosRsnd", "N"); // 1
    Hdr_78_set.insert("N");
    Hdr_78.add_attribute("Snt", "SendingTime_t_1008871917"); // 1
    Hdr_78_set.insert("SendingTime_t_1008871917");
    Hdr_78.add_attribute("OrigSnt", "OrigSendingTime_t_99646633"); // 1
    Hdr_78_set.insert("OrigSendingTime_t_99646633");
    Hdr_78.add_attribute("MsgEncd", "MessageEncoding_t_431314519"); // 1
    Hdr_78_set.insert("MessageEncoding_t_431314519");
    all_values.push_back(Hdr_78_set);
    all_compo_names.insert("Hdr_78_set");

    {
      xml_element Hop_78{"Hop"};
      multiset<string> Hop_78_set;
      Hop_78.add_attribute("ID", "HopCompID_t_1132528919"); // 2
      Hop_78_set.insert("HopCompID_t_1132528919");
      Hop_78.add_attribute("Ref", "1593398530"); // 2
      Hop_78_set.insert("1593398530");
      Hop_78.add_attribute("Snt", "HopSendingTime_t_1964132573"); // 2
      Hop_78_set.insert("HopSendingTime_t_1964132573");
      all_values.push_back(Hop_78_set);
      all_compo_names.insert("Hop_78_set");

      Hdr_78.add_element(Hop_78);
    }
    elt.add_element(Hdr_78);
  } // end Hdr
  { // Pty
    xml_element Pty_385{"Pty"};
    multiset<string> Pty_385_set;
    Pty_385.add_attribute("ID", "PartyID_t_406678373"); // 1
    Pty_385_set.insert("PartyID_t_406678373");
    Pty_385.add_attribute("Src", "I"); // 1
    Pty_385_set.insert("I");
    Pty_385.add_attribute("R", "4"); // 1
    Pty_385_set.insert("4");
    all_values.push_back(Pty_385_set);
    all_compo_names.insert("Pty_385_set");

    {
      xml_element Sub_385{"Sub"};
      multiset<string> Sub_385_set;
      Sub_385.add_attribute("ID", "PartySubID_t_1204527964"); // 2
      Sub_385_set.insert("PartySubID_t_1204527964");
      Sub_385.add_attribute("Typ", "9"); // 2
      Sub_385_set.insert("9");
      all_values.push_back(Sub_385_set);
      all_compo_names.insert("Sub_385_set");

      Pty_385.add_element(Sub_385);
    }
    elt.add_element(Pty_385);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_71{"Instrmt"};
    multiset<string> Instrmt_71_set;
    Instrmt_71.add_attribute("Sym", "Symbol_t_355594074"); // 1
    Instrmt_71_set.insert("Symbol_t_355594074");
    Instrmt_71.add_attribute("Sfx", "WI"); // 1
    Instrmt_71_set.insert("WI");
    Instrmt_71.add_attribute("ID", "SecurityID_t_389597125"); // 1
    Instrmt_71_set.insert("SecurityID_t_389597125");
    Instrmt_71.add_attribute("Src", "A"); // 1
    Instrmt_71_set.insert("A");
    Instrmt_71.add_attribute("Prod", "2"); // 1
    Instrmt_71_set.insert("2");
    Instrmt_71.add_attribute("ProdCmplx", "ProductComplex_t_730773086"); // 1
    Instrmt_71_set.insert("ProductComplex_t_730773086");
    Instrmt_71.add_attribute("SecGrp", "SecurityGroup_t_602290928"); // 1
    Instrmt_71_set.insert("SecurityGroup_t_602290928");
    Instrmt_71.add_attribute("CFI", "CFICode_t_630502267"); // 1
    Instrmt_71_set.insert("CFICode_t_630502267");
    Instrmt_71.add_attribute("SecTyp", "CORP"); // 1
    Instrmt_71_set.insert("CORP");
    Instrmt_71.add_attribute("SubTyp", "SecuritySubType_t_1026433063"); // 1
    Instrmt_71_set.insert("SecuritySubType_t_1026433063");
    Instrmt_71.add_attribute("MMY", "194768743"); // 1
    Instrmt_71_set.insert("194768743");
    Instrmt_71.add_attribute("MatDt", "MaturityDate_t_501307971"); // 1
    Instrmt_71_set.insert("MaturityDate_t_501307971");
    Instrmt_71.add_attribute("MatTm", "1535426988"); // 1
    Instrmt_71_set.insert("1535426988");
    Instrmt_71.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1217262466"); // 1
    Instrmt_71_set.insert("SettleOnOpenFlag_t_1217262466");
    Instrmt_71.add_attribute("AsgnMeth", "1268420781"); // 1
    Instrmt_71_set.insert("1268420781");
    Instrmt_71.add_attribute("Status", "2"); // 1
    Instrmt_71_set.insert("2");
    Instrmt_71.add_attribute("CpnPmt", "CouponPaymentDate_t_569509154"); // 1
    Instrmt_71_set.insert("CouponPaymentDate_t_569509154");
    Instrmt_71.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_71_set.insert("MR");
    Instrmt_71.add_attribute("Snrty", "SB"); // 1
    Instrmt_71_set.insert("SB");
    Instrmt_71.add_attribute("NotlPctOut", "15783810.710000"); // 1
    Instrmt_71_set.insert("15783810.710000");
    Instrmt_71.add_attribute("OrigNotlPctOut", "6634932.620000"); // 1
    Instrmt_71_set.insert("6634932.620000");
    Instrmt_71.add_attribute("AttchPnt", "16842566.010000"); // 1
    Instrmt_71_set.insert("16842566.010000");
    Instrmt_71.add_attribute("DetchPnt", "5634263.420000"); // 1
    Instrmt_71_set.insert("5634263.420000");
    Instrmt_71.add_attribute("Issued", "IssueDate_t_109408144"); // 1
    Instrmt_71_set.insert("IssueDate_t_109408144");
    Instrmt_71.add_attribute("RepoCollSecTyp", "1500905527"); // 1
    Instrmt_71_set.insert("1500905527");
    Instrmt_71.add_attribute("RepoTrm", "938677406"); // 1
    Instrmt_71_set.insert("938677406");
    Instrmt_71.add_attribute("RepoRt", "5160865.170000"); // 1
    Instrmt_71_set.insert("5160865.170000");
    Instrmt_71.add_attribute("Fctr", "15539836.560000"); // 1
    Instrmt_71_set.insert("15539836.560000");
    Instrmt_71.add_attribute("CrdRtg", "CreditRating_t_140315018"); // 1
    Instrmt_71_set.insert("CreditRating_t_140315018");
    Instrmt_71.add_attribute("Rgstry", "InstrRegistry_t_1720614481"); // 1
    Instrmt_71_set.insert("InstrRegistry_t_1720614481");
    Instrmt_71.add_attribute("IssuCtry", "336802935"); // 1
    Instrmt_71_set.insert("336802935");
    Instrmt_71.add_attribute("StPrv", "StateOrProvinceOfIssue_t_495909092"); // 1
    Instrmt_71_set.insert("StateOrProvinceOfIssue_t_495909092");
    Instrmt_71.add_attribute("Lcl", "LocaleOfIssue_t_1519671532"); // 1
    Instrmt_71_set.insert("LocaleOfIssue_t_1519671532");
    Instrmt_71.add_attribute("Redeem", "RedemptionDate_t_726400060"); // 1
    Instrmt_71_set.insert("RedemptionDate_t_726400060");
    Instrmt_71.add_attribute("StrkPx", "6775735.070000"); // 1
    Instrmt_71_set.insert("6775735.070000");
    Instrmt_71.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_71_set.insert("USD");
    Instrmt_71.add_attribute("StrkMult", "12798644.360000"); // 1
    Instrmt_71_set.insert("12798644.360000");
    Instrmt_71.add_attribute("StrkValu", "875194.720000"); // 1
    Instrmt_71_set.insert("875194.720000");
    Instrmt_71.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_71_set.insert("3");
    Instrmt_71.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_71_set.insert("2");
    Instrmt_71.add_attribute("StrkPxBndryPrcsn", "2822882.150000"); // 1
    Instrmt_71_set.insert("2822882.150000");
    Instrmt_71.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_71_set.insert("3");
    Instrmt_71.add_attribute("OptAt", "1694240840"); // 1
    Instrmt_71_set.insert("1694240840");
    Instrmt_71.add_attribute("Mult", "14995506.810000"); // 1
    Instrmt_71_set.insert("14995506.810000");
    Instrmt_71.add_attribute("MultTyp", "0"); // 1
    Instrmt_71_set.insert("0");
    Instrmt_71.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_71_set.insert("4");
    Instrmt_71.add_attribute("MinPxIncr", "20690598.350000"); // 1
    Instrmt_71_set.insert("20690598.350000");
    Instrmt_71.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2105174008"); // 1
    Instrmt_71_set.insert("MinPriceIncrementAmount_t_2105174008");
    Instrmt_71.add_attribute("UOM", "Bu"); // 1
    Instrmt_71_set.insert("Bu");
    Instrmt_71.add_attribute("UOMQty", "14999572.580000"); // 1
    Instrmt_71_set.insert("14999572.580000");
    Instrmt_71.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_71_set.insert("lbs");
    Instrmt_71.add_attribute("PxUOMQty", "15824207.250000"); // 1
    Instrmt_71_set.insert("15824207.250000");
    Instrmt_71.add_attribute("SettlMeth", "C"); // 1
    Instrmt_71_set.insert("C");
    Instrmt_71.add_attribute("ExerStyle", "2"); // 1
    Instrmt_71_set.insert("2");
    Instrmt_71.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_71_set.insert("3");
    Instrmt_71.add_attribute("OptPayAmt", "OptPayoutAmount_t_854577359"); // 1
    Instrmt_71_set.insert("OptPayoutAmount_t_854577359");
    Instrmt_71.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_71_set.insert("PCTPAR");
    Instrmt_71.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_71_set.insert("FUTDA");
    Instrmt_71.add_attribute("ListMeth", "1"); // 1
    Instrmt_71_set.insert("1");
    Instrmt_71.add_attribute("CapPx", "8198091.160000"); // 1
    Instrmt_71_set.insert("8198091.160000");
    Instrmt_71.add_attribute("FlrPx", "6791455.470000"); // 1
    Instrmt_71_set.insert("6791455.470000");
    Instrmt_71.add_attribute("PutCall", "1"); // 1
    Instrmt_71_set.insert("1");
    Instrmt_71.add_attribute("FlexInd", "true"); // 1
    Instrmt_71_set.insert("true");
    Instrmt_71.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_71_set.insert("false");
    Instrmt_71.add_attribute("TmUnit", "D"); // 1
    Instrmt_71_set.insert("D");
    Instrmt_71.add_attribute("CpnRt", "17964978.530000"); // 1
    Instrmt_71_set.insert("17964978.530000");
    Instrmt_71.add_attribute("Exch", "SecurityExchange_t_715235105"); // 1
    Instrmt_71_set.insert("SecurityExchange_t_715235105");
    Instrmt_71.add_attribute("PosLmt", "1300755764"); // 1
    Instrmt_71_set.insert("1300755764");
    Instrmt_71.add_attribute("NTPosLmt", "1884017325"); // 1
    Instrmt_71_set.insert("1884017325");
    Instrmt_71.add_attribute("Issr", "Issuer_t_486833732"); // 1
    Instrmt_71_set.insert("Issuer_t_486833732");
    Instrmt_71.add_attribute("EncIssrLen", "1459569616"); // 1
    Instrmt_71_set.insert("1459569616");
    Instrmt_71.add_attribute("EncIssr", "EncodedIssuer_t_18821892"); // 1
    Instrmt_71_set.insert("EncodedIssuer_t_18821892");
    Instrmt_71.add_attribute("Desc", "SecurityDesc_t_759740330"); // 1
    Instrmt_71_set.insert("SecurityDesc_t_759740330");
    Instrmt_71.add_attribute("EncSecDescLen", "1006326808"); // 1
    Instrmt_71_set.insert("1006326808");
    Instrmt_71.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1518372573"); // 1
    Instrmt_71_set.insert("EncodedSecurityDesc_t_1518372573");
    Instrmt_71.add_attribute("Pool", "Pool_t_153584061"); // 1
    Instrmt_71_set.insert("Pool_t_153584061");
    Instrmt_71.add_attribute("CSetMo", "1799032497"); // 1
    Instrmt_71_set.insert("1799032497");
    Instrmt_71.add_attribute("CPPgm", "1"); // 1
    Instrmt_71_set.insert("1");
    Instrmt_71.add_attribute("CPRegT", "CPRegType_t_111274422"); // 1
    Instrmt_71_set.insert("CPRegType_t_111274422");
    Instrmt_71.add_attribute("Dated", "DatedDate_t_1697196621"); // 1
    Instrmt_71_set.insert("DatedDate_t_1697196621");
    Instrmt_71.add_attribute("IntAcrl", "InterestAccrualDate_t_792422370"); // 1
    Instrmt_71_set.insert("InterestAccrualDate_t_792422370");
    all_values.push_back(Instrmt_71_set);
    all_compo_names.insert("Instrmt_71_set");

    {
      xml_element AID_74{"AID"};
      multiset<string> AID_74_set;
      AID_74.add_attribute("AltID", "SecurityAltID_t_732458044"); // 2
      AID_74_set.insert("SecurityAltID_t_732458044");
      AID_74.add_attribute("AltIDSrc", "F"); // 2
      AID_74_set.insert("F");
      all_values.push_back(AID_74_set);
      all_compo_names.insert("AID_74_set");

      Instrmt_71.add_element(AID_74);
    }
    {
      xml_element SecXML_74{"SecXML"};
      multiset<string> SecXML_74_set;
      SecXML_74.add_attribute("Schema", "SecurityXMLSchema_t_708322323"); // 2
      SecXML_74_set.insert("SecurityXMLSchema_t_708322323");
      all_values.push_back(SecXML_74_set);
      all_compo_names.insert("SecXML_74_set");

      Instrmt_71.add_element(SecXML_74);
    }
    {
      xml_element Evnt_74{"Evnt"};
      multiset<string> Evnt_74_set;
      Evnt_74.add_attribute("EventTyp", "10"); // 2
      Evnt_74_set.insert("10");
      Evnt_74.add_attribute("Dt", "EventDate_t_2067976302"); // 2
      Evnt_74_set.insert("EventDate_t_2067976302");
      Evnt_74.add_attribute("Tm", "EventTime_t_1562899682"); // 2
      Evnt_74_set.insert("EventTime_t_1562899682");
      Evnt_74.add_attribute("Px", "5622444.460000"); // 2
      Evnt_74_set.insert("5622444.460000");
      Evnt_74.add_attribute("Txt", "EventText_t_262835266"); // 2
      Evnt_74_set.insert("EventText_t_262835266");
      all_values.push_back(Evnt_74_set);
      all_compo_names.insert("Evnt_74_set");

      Instrmt_71.add_element(Evnt_74);
    }
    {
      xml_element Pty_386{"Pty"};
      multiset<string> Pty_386_set;
      Pty_386.add_attribute("ID", "InstrumentPartyID_t_410308411"); // 2
      Pty_386_set.insert("InstrumentPartyID_t_410308411");
      Pty_386.add_attribute("Src", "A"); // 2
      Pty_386_set.insert("A");
      Pty_386.add_attribute("R", "34"); // 2
      Pty_386_set.insert("34");
      all_values.push_back(Pty_386_set);
      all_compo_names.insert("Pty_386_set");

      {
        xml_element Sub_386{"Sub"};
        multiset<string> Sub_386_set;
        Sub_386.add_attribute("ID", "InstrumentPartySubID_t_1901109880"); // 3
        Sub_386_set.insert("InstrumentPartySubID_t_1901109880");
        Sub_386.add_attribute("Typ", "31"); // 3
        Sub_386_set.insert("31");
        all_values.push_back(Sub_386_set);
        all_compo_names.insert("Sub_386_set");

        Pty_386.add_element(Sub_386);
      }
      Instrmt_71.add_element(Pty_386);
    }
    {
      xml_element CmplxEvnt_71{"CmplxEvnt"};
      multiset<string> CmplxEvnt_71_set;
      CmplxEvnt_71.add_attribute("Typ", "8"); // 2
      CmplxEvnt_71_set.insert("8");
      CmplxEvnt_71.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1922001208"); // 2
      CmplxEvnt_71_set.insert("ComplexOptPayoutAmount_t_1922001208");
      CmplxEvnt_71.add_attribute("Px", "12230647.690000"); // 2
      CmplxEvnt_71_set.insert("12230647.690000");
      CmplxEvnt_71.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_71_set.insert("5");
      CmplxEvnt_71.add_attribute("PxBndryPrcsn", "10752733.250000"); // 2
      CmplxEvnt_71_set.insert("10752733.250000");
      CmplxEvnt_71.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_71_set.insert("3");
      CmplxEvnt_71.add_attribute("Cond", "2"); // 2
      CmplxEvnt_71_set.insert("2");
      all_values.push_back(CmplxEvnt_71_set);
      all_compo_names.insert("CmplxEvnt_71_set");

      {
        xml_element EvntDts_71{"EvntDts"};
        multiset<string> EvntDts_71_set;
        EvntDts_71.add_attribute("StartDt", "ComplexEventStartDate_t_387359293"); // 3
        EvntDts_71_set.insert("ComplexEventStartDate_t_387359293");
        EvntDts_71.add_attribute("EndDt", "ComplexEventEndDate_t_978420339"); // 3
        EvntDts_71_set.insert("ComplexEventEndDate_t_978420339");
        all_values.push_back(EvntDts_71_set);
        all_compo_names.insert("EvntDts_71_set");

        {
          xml_element EvntTms_71{"EvntTms"};
          multiset<string> EvntTms_71_set;
          EvntTms_71.add_attribute("StartTm", "14368293"); // 4
          EvntTms_71_set.insert("14368293");
          EvntTms_71.add_attribute("EndTm", "1393686101"); // 4
          EvntTms_71_set.insert("1393686101");
          all_values.push_back(EvntTms_71_set);
          all_compo_names.insert("EvntTms_71_set");

          EvntDts_71.add_element(EvntTms_71);
        }
        CmplxEvnt_71.add_element(EvntDts_71);
      }
      Instrmt_71.add_element(CmplxEvnt_71);
    }
    elt.add_element(Instrmt_71);
  } // end Instrmt
  { // Leg
    xml_element Leg_84{"Leg"};
    multiset<string> Leg_84_set;
    Leg_84.add_attribute("Sym", "LegSymbol_t_167952354"); // 1
    Leg_84_set.insert("LegSymbol_t_167952354");
    Leg_84.add_attribute("Sfx", "CD"); // 1
    Leg_84_set.insert("CD");
    Leg_84.add_attribute("ID", "LegSecurityID_t_1789258025"); // 1
    Leg_84_set.insert("LegSecurityID_t_1789258025");
    Leg_84.add_attribute("Src", "5"); // 1
    Leg_84_set.insert("5");
    Leg_84.add_attribute("Prod", "8"); // 1
    Leg_84_set.insert("8");
    Leg_84.add_attribute("CFI", "LegCFICode_t_434196747"); // 1
    Leg_84_set.insert("LegCFICode_t_434196747");
    Leg_84.add_attribute("SecTyp", "DINP"); // 1
    Leg_84_set.insert("DINP");
    Leg_84.add_attribute("SecSubTyp", "LegSecuritySubType_t_1727081621"); // 1
    Leg_84_set.insert("LegSecuritySubType_t_1727081621");
    Leg_84.add_attribute("MMY", "1142519070"); // 1
    Leg_84_set.insert("1142519070");
    Leg_84.add_attribute("Mat", "LegMaturityDate_t_327250984"); // 1
    Leg_84_set.insert("LegMaturityDate_t_327250984");
    Leg_84.add_attribute("MatTm", "1647574275"); // 1
    Leg_84_set.insert("1647574275");
    Leg_84.add_attribute("CpnPmt", "LegCouponPaymentDate_t_557935104"); // 1
    Leg_84_set.insert("LegCouponPaymentDate_t_557935104");
    Leg_84.add_attribute("Issued", "LegIssueDate_t_889495430"); // 1
    Leg_84_set.insert("LegIssueDate_t_889495430");
    Leg_84.add_attribute("RepoCollSecTyp", "1910409542"); // 1
    Leg_84_set.insert("1910409542");
    Leg_84.add_attribute("RepoTrm", "968243515"); // 1
    Leg_84_set.insert("968243515");
    Leg_84.add_attribute("RepoRt", "1240653.450000"); // 1
    Leg_84_set.insert("1240653.450000");
    Leg_84.add_attribute("Fctr", "7049067.080000"); // 1
    Leg_84_set.insert("7049067.080000");
    Leg_84.add_attribute("CrdRtg", "LegCreditRating_t_721869747"); // 1
    Leg_84_set.insert("LegCreditRating_t_721869747");
    Leg_84.add_attribute("Rgstry", "LegInstrRegistry_t_1698115909"); // 1
    Leg_84_set.insert("LegInstrRegistry_t_1698115909");
    Leg_84.add_attribute("Ctry", "904949481"); // 1
    Leg_84_set.insert("904949481");
    Leg_84.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_496387308"); // 1
    Leg_84_set.insert("LegStateOrProvinceOfIssue_t_496387308");
    Leg_84.add_attribute("Lcl", "LegLocaleOfIssue_t_773697030"); // 1
    Leg_84_set.insert("LegLocaleOfIssue_t_773697030");
    Leg_84.add_attribute("Redeem", "LegRedemptionDate_t_1820227360"); // 1
    Leg_84_set.insert("LegRedemptionDate_t_1820227360");
    Leg_84.add_attribute("Strk", "15716606.330000"); // 1
    Leg_84_set.insert("15716606.330000");
    Leg_84.add_attribute("StrkCcy", "CAN"); // 1
    Leg_84_set.insert("CAN");
    Leg_84.add_attribute("OptA", "1959019926"); // 1
    Leg_84_set.insert("1959019926");
    Leg_84.add_attribute("Cmult", "5642321.670000"); // 1
    Leg_84_set.insert("5642321.670000");
    Leg_84.add_attribute("MultTyp", "2"); // 1
    Leg_84_set.insert("2");
    Leg_84.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_84_set.insert("4");
    Leg_84.add_attribute("UOM", "Bu"); // 1
    Leg_84_set.insert("Bu");
    Leg_84.add_attribute("UOMQty", "12571759.710000"); // 1
    Leg_84_set.insert("12571759.710000");
    Leg_84.add_attribute("PxUOM", "tn"); // 1
    Leg_84_set.insert("tn");
    Leg_84.add_attribute("PxUOMQty", "5553158.090000"); // 1
    Leg_84_set.insert("5553158.090000");
    Leg_84.add_attribute("TmUnit", "Mo"); // 1
    Leg_84_set.insert("Mo");
    Leg_84.add_attribute("ExerStyle", "0"); // 1
    Leg_84_set.insert("0");
    Leg_84.add_attribute("CpnRt", "9895125.560000"); // 1
    Leg_84_set.insert("9895125.560000");
    Leg_84.add_attribute("Exch", "LegSecurityExchange_t_400603920"); // 1
    Leg_84_set.insert("LegSecurityExchange_t_400603920");
    Leg_84.add_attribute("Issr", "LegIssuer_t_277519578"); // 1
    Leg_84_set.insert("LegIssuer_t_277519578");
    Leg_84.add_attribute("EncLegIssrLen", "2132031627"); // 1
    Leg_84_set.insert("2132031627");
    Leg_84.add_attribute("EncLegIssr", "EncodedLegIssuer_t_727854904"); // 1
    Leg_84_set.insert("EncodedLegIssuer_t_727854904");
    Leg_84.add_attribute("Desc", "LegSecurityDesc_t_1925093854"); // 1
    Leg_84_set.insert("LegSecurityDesc_t_1925093854");
    Leg_84.add_attribute("EncLegSecDescLen", "542483083"); // 1
    Leg_84_set.insert("542483083");
    Leg_84.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1617350335"); // 1
    Leg_84_set.insert("EncodedLegSecurityDesc_t_1617350335");
    Leg_84.add_attribute("RatioQty", "16880197.480000"); // 1
    Leg_84_set.insert("16880197.480000");
    Leg_84.add_attribute("Side", "8"); // 1
    Leg_84_set.insert("8");
    Leg_84.add_attribute("Ccy", "JPY"); // 1
    Leg_84_set.insert("JPY");
    Leg_84.add_attribute("Pool", "LegPool_t_85112698"); // 1
    Leg_84_set.insert("LegPool_t_85112698");
    Leg_84.add_attribute("Dated", "LegDatedDate_t_1292047941"); // 1
    Leg_84_set.insert("LegDatedDate_t_1292047941");
    Leg_84.add_attribute("CSetMo", "1150392289"); // 1
    Leg_84_set.insert("1150392289");
    Leg_84.add_attribute("IntAcrl", "LegInterestAccrualDate_t_581500006"); // 1
    Leg_84_set.insert("LegInterestAccrualDate_t_581500006");
    Leg_84.add_attribute("PutCall", "2065744971"); // 1
    Leg_84_set.insert("2065744971");
    Leg_84.add_attribute("LegOptionRatio", "8231360.020000"); // 1
    Leg_84_set.insert("8231360.020000");
    Leg_84.add_attribute("Px", "56769.910000"); // 1
    Leg_84_set.insert("56769.910000");
    all_values.push_back(Leg_84_set);
    all_compo_names.insert("Leg_84_set");

    {
      xml_element LegAID_79{"LegAID"};
      multiset<string> LegAID_79_set;
      LegAID_79.add_attribute("SecAltID", "LegSecurityAltID_t_1651556800"); // 2
      LegAID_79_set.insert("LegSecurityAltID_t_1651556800");
      LegAID_79.add_attribute("SecAltIDSrc", "M"); // 2
      LegAID_79_set.insert("M");
      all_values.push_back(LegAID_79_set);
      all_compo_names.insert("LegAID_79_set");

      Leg_84.add_element(LegAID_79);
    }
    elt.add_element(Leg_84);
  } // end Leg
  { // Leg
    xml_element Leg_85{"Leg"};
    multiset<string> Leg_85_set;
    Leg_85.add_attribute("Sym", "LegSymbol_t_1964696917"); // 1
    Leg_85_set.insert("LegSymbol_t_1964696917");
    Leg_85.add_attribute("Sfx", "WI"); // 1
    Leg_85_set.insert("WI");
    Leg_85.add_attribute("ID", "LegSecurityID_t_839731294"); // 1
    Leg_85_set.insert("LegSecurityID_t_839731294");
    Leg_85.add_attribute("Src", "F"); // 1
    Leg_85_set.insert("F");
    Leg_85.add_attribute("Prod", "11"); // 1
    Leg_85_set.insert("11");
    Leg_85.add_attribute("CFI", "LegCFICode_t_2096907265"); // 1
    Leg_85_set.insert("LegCFICode_t_2096907265");
    Leg_85.add_attribute("SecTyp", "EUCD"); // 1
    Leg_85_set.insert("EUCD");
    Leg_85.add_attribute("SecSubTyp", "LegSecuritySubType_t_1537162560"); // 1
    Leg_85_set.insert("LegSecuritySubType_t_1537162560");
    Leg_85.add_attribute("MMY", "1485826364"); // 1
    Leg_85_set.insert("1485826364");
    Leg_85.add_attribute("Mat", "LegMaturityDate_t_1823330935"); // 1
    Leg_85_set.insert("LegMaturityDate_t_1823330935");
    Leg_85.add_attribute("MatTm", "379191469"); // 1
    Leg_85_set.insert("379191469");
    Leg_85.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1886430285"); // 1
    Leg_85_set.insert("LegCouponPaymentDate_t_1886430285");
    Leg_85.add_attribute("Issued", "LegIssueDate_t_2100850513"); // 1
    Leg_85_set.insert("LegIssueDate_t_2100850513");
    Leg_85.add_attribute("RepoCollSecTyp", "363739448"); // 1
    Leg_85_set.insert("363739448");
    Leg_85.add_attribute("RepoTrm", "466801541"); // 1
    Leg_85_set.insert("466801541");
    Leg_85.add_attribute("RepoRt", "18784607.190000"); // 1
    Leg_85_set.insert("18784607.190000");
    Leg_85.add_attribute("Fctr", "9062225.310000"); // 1
    Leg_85_set.insert("9062225.310000");
    Leg_85.add_attribute("CrdRtg", "LegCreditRating_t_2084151876"); // 1
    Leg_85_set.insert("LegCreditRating_t_2084151876");
    Leg_85.add_attribute("Rgstry", "LegInstrRegistry_t_1418996819"); // 1
    Leg_85_set.insert("LegInstrRegistry_t_1418996819");
    Leg_85.add_attribute("Ctry", "269465482"); // 1
    Leg_85_set.insert("269465482");
    Leg_85.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1678083909"); // 1
    Leg_85_set.insert("LegStateOrProvinceOfIssue_t_1678083909");
    Leg_85.add_attribute("Lcl", "LegLocaleOfIssue_t_1664439627"); // 1
    Leg_85_set.insert("LegLocaleOfIssue_t_1664439627");
    Leg_85.add_attribute("Redeem", "LegRedemptionDate_t_354578181"); // 1
    Leg_85_set.insert("LegRedemptionDate_t_354578181");
    Leg_85.add_attribute("Strk", "8226482.020000"); // 1
    Leg_85_set.insert("8226482.020000");
    Leg_85.add_attribute("StrkCcy", "EUR"); // 1
    Leg_85_set.insert("EUR");
    Leg_85.add_attribute("OptA", "740909526"); // 1
    Leg_85_set.insert("740909526");
    Leg_85.add_attribute("Cmult", "14904842.710000"); // 1
    Leg_85_set.insert("14904842.710000");
    Leg_85.add_attribute("MultTyp", "0"); // 1
    Leg_85_set.insert("0");
    Leg_85.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_85_set.insert("3");
    Leg_85.add_attribute("UOM", "MMBtu"); // 1
    Leg_85_set.insert("MMBtu");
    Leg_85.add_attribute("UOMQty", "7589684.480000"); // 1
    Leg_85_set.insert("7589684.480000");
    Leg_85.add_attribute("PxUOM", "USD"); // 1
    Leg_85_set.insert("USD");
    Leg_85.add_attribute("PxUOMQty", "20807232.420000"); // 1
    Leg_85_set.insert("20807232.420000");
    Leg_85.add_attribute("TmUnit", "Wk"); // 1
    Leg_85_set.insert("Wk");
    Leg_85.add_attribute("ExerStyle", "0"); // 1
    Leg_85_set.insert("0");
    Leg_85.add_attribute("CpnRt", "20301468.590000"); // 1
    Leg_85_set.insert("20301468.590000");
    Leg_85.add_attribute("Exch", "LegSecurityExchange_t_759329779"); // 1
    Leg_85_set.insert("LegSecurityExchange_t_759329779");
    Leg_85.add_attribute("Issr", "LegIssuer_t_684813661"); // 1
    Leg_85_set.insert("LegIssuer_t_684813661");
    Leg_85.add_attribute("EncLegIssrLen", "1368489576"); // 1
    Leg_85_set.insert("1368489576");
    Leg_85.add_attribute("EncLegIssr", "EncodedLegIssuer_t_435177066"); // 1
    Leg_85_set.insert("EncodedLegIssuer_t_435177066");
    Leg_85.add_attribute("Desc", "LegSecurityDesc_t_1064005130"); // 1
    Leg_85_set.insert("LegSecurityDesc_t_1064005130");
    Leg_85.add_attribute("EncLegSecDescLen", "1107436213"); // 1
    Leg_85_set.insert("1107436213");
    Leg_85.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_388543931"); // 1
    Leg_85_set.insert("EncodedLegSecurityDesc_t_388543931");
    Leg_85.add_attribute("RatioQty", "14277445.780000"); // 1
    Leg_85_set.insert("14277445.780000");
    Leg_85.add_attribute("Side", "B"); // 1
    Leg_85_set.insert("B");
    Leg_85.add_attribute("Ccy", "USD"); // 1
    Leg_85_set.insert("USD");
    Leg_85.add_attribute("Pool", "LegPool_t_1510905983"); // 1
    Leg_85_set.insert("LegPool_t_1510905983");
    Leg_85.add_attribute("Dated", "LegDatedDate_t_1538517822"); // 1
    Leg_85_set.insert("LegDatedDate_t_1538517822");
    Leg_85.add_attribute("CSetMo", "455948944"); // 1
    Leg_85_set.insert("455948944");
    Leg_85.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1041506244"); // 1
    Leg_85_set.insert("LegInterestAccrualDate_t_1041506244");
    Leg_85.add_attribute("PutCall", "1055473802"); // 1
    Leg_85_set.insert("1055473802");
    Leg_85.add_attribute("LegOptionRatio", "8105271.250000"); // 1
    Leg_85_set.insert("8105271.250000");
    Leg_85.add_attribute("Px", "18641544.460000"); // 1
    Leg_85_set.insert("18641544.460000");
    all_values.push_back(Leg_85_set);
    all_compo_names.insert("Leg_85_set");

    {
      xml_element LegAID_80{"LegAID"};
      multiset<string> LegAID_80_set;
      LegAID_80.add_attribute("SecAltID", "LegSecurityAltID_t_1722822071"); // 2
      LegAID_80_set.insert("LegSecurityAltID_t_1722822071");
      LegAID_80.add_attribute("SecAltIDSrc", "E"); // 2
      LegAID_80_set.insert("E");
      all_values.push_back(LegAID_80_set);
      all_compo_names.insert("LegAID_80_set");

      Leg_85.add_element(LegAID_80);
    }
    elt.add_element(Leg_85);
  } // end Leg
  { // Undly
    xml_element Undly_99{"Undly"};
    multiset<string> Undly_99_set;
    Undly_99.add_attribute("Sym", "UnderlyingSymbol_t_1065822694"); // 1
    Undly_99_set.insert("UnderlyingSymbol_t_1065822694");
    Undly_99.add_attribute("Sfx", "CD"); // 1
    Undly_99_set.insert("CD");
    Undly_99.add_attribute("ID", "UnderlyingSecurityID_t_702563002"); // 1
    Undly_99_set.insert("UnderlyingSecurityID_t_702563002");
    Undly_99.add_attribute("Src", "K"); // 1
    Undly_99_set.insert("K");
    Undly_99.add_attribute("Prod", "2"); // 1
    Undly_99_set.insert("2");
    Undly_99.add_attribute("CFI", "UnderlyingCFICode_t_1015851000"); // 1
    Undly_99_set.insert("UnderlyingCFICode_t_1015851000");
    Undly_99.add_attribute("SecTyp", "RVLV"); // 1
    Undly_99_set.insert("RVLV");
    Undly_99.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_933765741"); // 1
    Undly_99_set.insert("UnderlyingSecuritySubType_t_933765741");
    Undly_99.add_attribute("MMY", "163502101"); // 1
    Undly_99_set.insert("163502101");
    Undly_99.add_attribute("Mat", "UnderlyingMaturityDate_t_2122717448"); // 1
    Undly_99_set.insert("UnderlyingMaturityDate_t_2122717448");
    Undly_99.add_attribute("MatTm", "1693095520"); // 1
    Undly_99_set.insert("1693095520");
    Undly_99.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_848315762"); // 1
    Undly_99_set.insert("UnderlyingCouponPaymentDate_t_848315762");
    Undly_99.add_attribute("RestrctTyp", "FR"); // 1
    Undly_99_set.insert("FR");
    Undly_99.add_attribute("Snrty", "SR"); // 1
    Undly_99_set.insert("SR");
    Undly_99.add_attribute("NotlPctOut", "19123208.930000"); // 1
    Undly_99_set.insert("19123208.930000");
    Undly_99.add_attribute("OrigNotlPctOut", "3036759.410000"); // 1
    Undly_99_set.insert("3036759.410000");
    Undly_99.add_attribute("AttchPnt", "3693328.700000"); // 1
    Undly_99_set.insert("3693328.700000");
    Undly_99.add_attribute("DetchPnt", "11925818.230000"); // 1
    Undly_99_set.insert("11925818.230000");
    Undly_99.add_attribute("Issued", "UnderlyingIssueDate_t_1877913696"); // 1
    Undly_99_set.insert("UnderlyingIssueDate_t_1877913696");
    Undly_99.add_attribute("RepoCollSecTyp", "488853873"); // 1
    Undly_99_set.insert("488853873");
    Undly_99.add_attribute("RepoTrm", "1379065285"); // 1
    Undly_99_set.insert("1379065285");
    Undly_99.add_attribute("RepoRt", "12413360.310000"); // 1
    Undly_99_set.insert("12413360.310000");
    Undly_99.add_attribute("Fctr", "20273716.950000"); // 1
    Undly_99_set.insert("20273716.950000");
    Undly_99.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1835014230"); // 1
    Undly_99_set.insert("UnderlyingCreditRating_t_1835014230");
    Undly_99.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_135358627"); // 1
    Undly_99_set.insert("UnderlyingInstrRegistry_t_135358627");
    Undly_99.add_attribute("Ctry", "935361849"); // 1
    Undly_99_set.insert("935361849");
    Undly_99.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_498057707"); // 1
    Undly_99_set.insert("UnderlyingStateOrProvinceOfIssue_t_498057707");
    Undly_99.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1999513073"); // 1
    Undly_99_set.insert("UnderlyingLocaleOfIssue_t_1999513073");
    Undly_99.add_attribute("Redeem", "UnderlyingRedemptionDate_t_510700272"); // 1
    Undly_99_set.insert("UnderlyingRedemptionDate_t_510700272");
    Undly_99.add_attribute("StrkPx", "971793.720000"); // 1
    Undly_99_set.insert("971793.720000");
    Undly_99.add_attribute("StrkCcy", "JPY"); // 1
    Undly_99_set.insert("JPY");
    Undly_99.add_attribute("OptA", "638056216"); // 1
    Undly_99_set.insert("638056216");
    Undly_99.add_attribute("Mult", "10121727.520000"); // 1
    Undly_99_set.insert("10121727.520000");
    Undly_99.add_attribute("MultTyp", "0"); // 1
    Undly_99_set.insert("0");
    Undly_99.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_99_set.insert("4");
    Undly_99.add_attribute("UOM", "MMBtu"); // 1
    Undly_99_set.insert("MMBtu");
    Undly_99.add_attribute("UOMQty", "18284245.500000"); // 1
    Undly_99_set.insert("18284245.500000");
    Undly_99.add_attribute("PxUOM", "Alw"); // 1
    Undly_99_set.insert("Alw");
    Undly_99.add_attribute("PxUOMQty", "440422.050000"); // 1
    Undly_99_set.insert("440422.050000");
    Undly_99.add_attribute("TmUnit", "Wk"); // 1
    Undly_99_set.insert("Wk");
    Undly_99.add_attribute("ExerStyle", "0"); // 1
    Undly_99_set.insert("0");
    Undly_99.add_attribute("CpnRt", "8923579.680000"); // 1
    Undly_99_set.insert("8923579.680000");
    Undly_99.add_attribute("Exch", "UnderlyingSecurityExchange_t_999898079"); // 1
    Undly_99_set.insert("UnderlyingSecurityExchange_t_999898079");
    Undly_99.add_attribute("Issr", "UnderlyingIssuer_t_250584413"); // 1
    Undly_99_set.insert("UnderlyingIssuer_t_250584413");
    Undly_99.add_attribute("EncUndIssrLen", "657195213"); // 1
    Undly_99_set.insert("657195213");
    Undly_99.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1303574020"); // 1
    Undly_99_set.insert("EncodedUnderlyingIssuer_t_1303574020");
    Undly_99.add_attribute("Desc", "UnderlyingSecurityDesc_t_619917283"); // 1
    Undly_99_set.insert("UnderlyingSecurityDesc_t_619917283");
    Undly_99.add_attribute("EncUndSecDescLen", "1849777036"); // 1
    Undly_99_set.insert("1849777036");
    Undly_99.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1034004068"); // 1
    Undly_99_set.insert("EncodedUnderlyingSecurityDesc_t_1034004068");
    Undly_99.add_attribute("CPPgm", "UnderlyingCPProgram_t_1108771156"); // 1
    Undly_99_set.insert("UnderlyingCPProgram_t_1108771156");
    Undly_99.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1081358674"); // 1
    Undly_99_set.insert("UnderlyingCPRegType_t_1081358674");
    Undly_99.add_attribute("AllocPct", "1278564.510000"); // 1
    Undly_99_set.insert("1278564.510000");
    Undly_99.add_attribute("Ccy", "GBP"); // 1
    Undly_99_set.insert("GBP");
    Undly_99.add_attribute("Qty", "2632150.780000"); // 1
    Undly_99_set.insert("2632150.780000");
    Undly_99.add_attribute("SettlTyp", "2"); // 1
    Undly_99_set.insert("2");
    Undly_99.add_attribute("CashAmt", "UnderlyingCashAmount_t_1266946963"); // 1
    Undly_99_set.insert("UnderlyingCashAmount_t_1266946963");
    Undly_99.add_attribute("CashTyp", "FIXED"); // 1
    Undly_99_set.insert("FIXED");
    Undly_99.add_attribute("Px", "2872376.780000"); // 1
    Undly_99_set.insert("2872376.780000");
    Undly_99.add_attribute("DirtPx", "13641263.360000"); // 1
    Undly_99_set.insert("13641263.360000");
    Undly_99.add_attribute("EndPx", "4248542.540000"); // 1
    Undly_99_set.insert("4248542.540000");
    Undly_99.add_attribute("StartVal", "UnderlyingStartValue_t_1863760644"); // 1
    Undly_99_set.insert("UnderlyingStartValue_t_1863760644");
    Undly_99.add_attribute("CurVal", "UnderlyingCurrentValue_t_2002182552"); // 1
    Undly_99_set.insert("UnderlyingCurrentValue_t_2002182552");
    Undly_99.add_attribute("EndVal", "UnderlyingEndValue_t_1437027006"); // 1
    Undly_99_set.insert("UnderlyingEndValue_t_1437027006");
    Undly_99.add_attribute("AdjQty", "14521309.570000"); // 1
    Undly_99_set.insert("14521309.570000");
    Undly_99.add_attribute("FxRate", "17926004.130000"); // 1
    Undly_99_set.insert("17926004.130000");
    Undly_99.add_attribute("FxRateCalc", "D"); // 1
    Undly_99_set.insert("D");
    Undly_99.add_attribute("CapValu", "UnderlyingCapValue_t_1133071859"); // 1
    Undly_99_set.insert("UnderlyingCapValue_t_1133071859");
    Undly_99.add_attribute("SetMeth", "UnderlyingSettlMethod_t_369300368"); // 1
    Undly_99_set.insert("UnderlyingSettlMethod_t_369300368");
    Undly_99.add_attribute("PutCall", "1361609316"); // 1
    Undly_99_set.insert("1361609316");
    all_values.push_back(Undly_99_set);
    all_compo_names.insert("Undly_99_set");

    {
      xml_element UndAID_99{"UndAID"};
      multiset<string> UndAID_99_set;
      UndAID_99.add_attribute("AltID", "UnderlyingSecurityAltID_t_789246562"); // 2
      UndAID_99_set.insert("UnderlyingSecurityAltID_t_789246562");
      UndAID_99.add_attribute("AltIDSrc", "2"); // 2
      UndAID_99_set.insert("2");
      all_values.push_back(UndAID_99_set);
      all_compo_names.insert("UndAID_99_set");

      Undly_99.add_element(UndAID_99);
    }
    {
      xml_element Stip_160{"Stip"};
      multiset<string> Stip_160_set;
      Stip_160.add_attribute("Typ", "PRICE"); // 2
      Stip_160_set.insert("PRICE");
      Stip_160.add_attribute("Val", "UnderlyingStipValue_t_1789144641"); // 2
      Stip_160_set.insert("UnderlyingStipValue_t_1789144641");
      all_values.push_back(Stip_160_set);
      all_compo_names.insert("Stip_160_set");

      Undly_99.add_element(Stip_160);
    }
    {
      xml_element Pty_387{"Pty"};
      multiset<string> Pty_387_set;
      Pty_387.add_attribute("ID", "UnderlyingInstrumentPartyID_t_889680256"); // 2
      Pty_387_set.insert("UnderlyingInstrumentPartyID_t_889680256");
      Pty_387.add_attribute("Src", "E"); // 2
      Pty_387_set.insert("E");
      Pty_387.add_attribute("R", "67"); // 2
      Pty_387_set.insert("67");
      all_values.push_back(Pty_387_set);
      all_compo_names.insert("Pty_387_set");

      {
        xml_element Sub_387{"Sub"};
        multiset<string> Sub_387_set;
        Sub_387.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1509597540"); // 3
        Sub_387_set.insert("UnderlyingInstrumentPartySubID_t_1509597540");
        Sub_387.add_attribute("Typ", "29"); // 3
        Sub_387_set.insert("29");
        all_values.push_back(Sub_387_set);
        all_compo_names.insert("Sub_387_set");

        Pty_387.add_element(Sub_387);
      }
      Undly_99.add_element(Pty_387);
    }
    elt.add_element(Undly_99);
  } // end Undly
  { // Undly
    xml_element Undly_100{"Undly"};
    multiset<string> Undly_100_set;
    Undly_100.add_attribute("Sym", "UnderlyingSymbol_t_1979239082"); // 1
    Undly_100_set.insert("UnderlyingSymbol_t_1979239082");
    Undly_100.add_attribute("Sfx", "CD"); // 1
    Undly_100_set.insert("CD");
    Undly_100.add_attribute("ID", "UnderlyingSecurityID_t_1547330912"); // 1
    Undly_100_set.insert("UnderlyingSecurityID_t_1547330912");
    Undly_100.add_attribute("Src", "G"); // 1
    Undly_100_set.insert("G");
    Undly_100.add_attribute("Prod", "7"); // 1
    Undly_100_set.insert("7");
    Undly_100.add_attribute("CFI", "UnderlyingCFICode_t_168736520"); // 1
    Undly_100_set.insert("UnderlyingCFICode_t_168736520");
    Undly_100.add_attribute("SecTyp", "CMBS"); // 1
    Undly_100_set.insert("CMBS");
    Undly_100.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1236081658"); // 1
    Undly_100_set.insert("UnderlyingSecuritySubType_t_1236081658");
    Undly_100.add_attribute("MMY", "1435683483"); // 1
    Undly_100_set.insert("1435683483");
    Undly_100.add_attribute("Mat", "UnderlyingMaturityDate_t_338071468"); // 1
    Undly_100_set.insert("UnderlyingMaturityDate_t_338071468");
    Undly_100.add_attribute("MatTm", "1523319336"); // 1
    Undly_100_set.insert("1523319336");
    Undly_100.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_652326171"); // 1
    Undly_100_set.insert("UnderlyingCouponPaymentDate_t_652326171");
    Undly_100.add_attribute("RestrctTyp", "MM"); // 1
    Undly_100_set.insert("MM");
    Undly_100.add_attribute("Snrty", "SR"); // 1
    Undly_100_set.insert("SR");
    Undly_100.add_attribute("NotlPctOut", "5070250.760000"); // 1
    Undly_100_set.insert("5070250.760000");
    Undly_100.add_attribute("OrigNotlPctOut", "524690.800000"); // 1
    Undly_100_set.insert("524690.800000");
    Undly_100.add_attribute("AttchPnt", "5442436.420000"); // 1
    Undly_100_set.insert("5442436.420000");
    Undly_100.add_attribute("DetchPnt", "1521418.410000"); // 1
    Undly_100_set.insert("1521418.410000");
    Undly_100.add_attribute("Issued", "UnderlyingIssueDate_t_1370036191"); // 1
    Undly_100_set.insert("UnderlyingIssueDate_t_1370036191");
    Undly_100.add_attribute("RepoCollSecTyp", "1677315501"); // 1
    Undly_100_set.insert("1677315501");
    Undly_100.add_attribute("RepoTrm", "521442209"); // 1
    Undly_100_set.insert("521442209");
    Undly_100.add_attribute("RepoRt", "5841618.600000"); // 1
    Undly_100_set.insert("5841618.600000");
    Undly_100.add_attribute("Fctr", "3190784.150000"); // 1
    Undly_100_set.insert("3190784.150000");
    Undly_100.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1160538052"); // 1
    Undly_100_set.insert("UnderlyingCreditRating_t_1160538052");
    Undly_100.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_690645496"); // 1
    Undly_100_set.insert("UnderlyingInstrRegistry_t_690645496");
    Undly_100.add_attribute("Ctry", "2108223056"); // 1
    Undly_100_set.insert("2108223056");
    Undly_100.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2050218309"); // 1
    Undly_100_set.insert("UnderlyingStateOrProvinceOfIssue_t_2050218309");
    Undly_100.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1454324346"); // 1
    Undly_100_set.insert("UnderlyingLocaleOfIssue_t_1454324346");
    Undly_100.add_attribute("Redeem", "UnderlyingRedemptionDate_t_905974422"); // 1
    Undly_100_set.insert("UnderlyingRedemptionDate_t_905974422");
    Undly_100.add_attribute("StrkPx", "14123322.010000"); // 1
    Undly_100_set.insert("14123322.010000");
    Undly_100.add_attribute("StrkCcy", "USD"); // 1
    Undly_100_set.insert("USD");
    Undly_100.add_attribute("OptA", "1883217249"); // 1
    Undly_100_set.insert("1883217249");
    Undly_100.add_attribute("Mult", "13201438.480000"); // 1
    Undly_100_set.insert("13201438.480000");
    Undly_100.add_attribute("MultTyp", "0"); // 1
    Undly_100_set.insert("0");
    Undly_100.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_100_set.insert("4");
    Undly_100.add_attribute("UOM", "MMBtu"); // 1
    Undly_100_set.insert("MMBtu");
    Undly_100.add_attribute("UOMQty", "9201687.050000"); // 1
    Undly_100_set.insert("9201687.050000");
    Undly_100.add_attribute("PxUOM", "Alw"); // 1
    Undly_100_set.insert("Alw");
    Undly_100.add_attribute("PxUOMQty", "7770802.030000"); // 1
    Undly_100_set.insert("7770802.030000");
    Undly_100.add_attribute("TmUnit", "Min"); // 1
    Undly_100_set.insert("Min");
    Undly_100.add_attribute("ExerStyle", "0"); // 1
    Undly_100_set.insert("0");
    Undly_100.add_attribute("CpnRt", "14294063.750000"); // 1
    Undly_100_set.insert("14294063.750000");
    Undly_100.add_attribute("Exch", "UnderlyingSecurityExchange_t_2021165895"); // 1
    Undly_100_set.insert("UnderlyingSecurityExchange_t_2021165895");
    Undly_100.add_attribute("Issr", "UnderlyingIssuer_t_899307884"); // 1
    Undly_100_set.insert("UnderlyingIssuer_t_899307884");
    Undly_100.add_attribute("EncUndIssrLen", "1936431451"); // 1
    Undly_100_set.insert("1936431451");
    Undly_100.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2073634976"); // 1
    Undly_100_set.insert("EncodedUnderlyingIssuer_t_2073634976");
    Undly_100.add_attribute("Desc", "UnderlyingSecurityDesc_t_1443551526"); // 1
    Undly_100_set.insert("UnderlyingSecurityDesc_t_1443551526");
    Undly_100.add_attribute("EncUndSecDescLen", "2088573292"); // 1
    Undly_100_set.insert("2088573292");
    Undly_100.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1296187519"); // 1
    Undly_100_set.insert("EncodedUnderlyingSecurityDesc_t_1296187519");
    Undly_100.add_attribute("CPPgm", "UnderlyingCPProgram_t_973383380"); // 1
    Undly_100_set.insert("UnderlyingCPProgram_t_973383380");
    Undly_100.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_462531854"); // 1
    Undly_100_set.insert("UnderlyingCPRegType_t_462531854");
    Undly_100.add_attribute("AllocPct", "18803493.790000"); // 1
    Undly_100_set.insert("18803493.790000");
    Undly_100.add_attribute("Ccy", "USD"); // 1
    Undly_100_set.insert("USD");
    Undly_100.add_attribute("Qty", "4235112.280000"); // 1
    Undly_100_set.insert("4235112.280000");
    Undly_100.add_attribute("SettlTyp", "5"); // 1
    Undly_100_set.insert("5");
    Undly_100.add_attribute("CashAmt", "UnderlyingCashAmount_t_1525804567"); // 1
    Undly_100_set.insert("UnderlyingCashAmount_t_1525804567");
    Undly_100.add_attribute("CashTyp", "FIXED"); // 1
    Undly_100_set.insert("FIXED");
    Undly_100.add_attribute("Px", "116919.780000"); // 1
    Undly_100_set.insert("116919.780000");
    Undly_100.add_attribute("DirtPx", "7906531.200000"); // 1
    Undly_100_set.insert("7906531.200000");
    Undly_100.add_attribute("EndPx", "16506485.100000"); // 1
    Undly_100_set.insert("16506485.100000");
    Undly_100.add_attribute("StartVal", "UnderlyingStartValue_t_749421834"); // 1
    Undly_100_set.insert("UnderlyingStartValue_t_749421834");
    Undly_100.add_attribute("CurVal", "UnderlyingCurrentValue_t_526386722"); // 1
    Undly_100_set.insert("UnderlyingCurrentValue_t_526386722");
    Undly_100.add_attribute("EndVal", "UnderlyingEndValue_t_823308710"); // 1
    Undly_100_set.insert("UnderlyingEndValue_t_823308710");
    Undly_100.add_attribute("AdjQty", "14467635.750000"); // 1
    Undly_100_set.insert("14467635.750000");
    Undly_100.add_attribute("FxRate", "17216645.760000"); // 1
    Undly_100_set.insert("17216645.760000");
    Undly_100.add_attribute("FxRateCalc", "M"); // 1
    Undly_100_set.insert("M");
    Undly_100.add_attribute("CapValu", "UnderlyingCapValue_t_219448633"); // 1
    Undly_100_set.insert("UnderlyingCapValue_t_219448633");
    Undly_100.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2005540440"); // 1
    Undly_100_set.insert("UnderlyingSettlMethod_t_2005540440");
    Undly_100.add_attribute("PutCall", "941785633"); // 1
    Undly_100_set.insert("941785633");
    all_values.push_back(Undly_100_set);
    all_compo_names.insert("Undly_100_set");

    {
      xml_element UndAID_100{"UndAID"};
      multiset<string> UndAID_100_set;
      UndAID_100.add_attribute("AltID", "UnderlyingSecurityAltID_t_1477688806"); // 2
      UndAID_100_set.insert("UnderlyingSecurityAltID_t_1477688806");
      UndAID_100.add_attribute("AltIDSrc", "9"); // 2
      UndAID_100_set.insert("9");
      all_values.push_back(UndAID_100_set);
      all_compo_names.insert("UndAID_100_set");

      Undly_100.add_element(UndAID_100);
    }
    {
      xml_element Stip_161{"Stip"};
      multiset<string> Stip_161_set;
      Stip_161.add_attribute("Typ", "PSA"); // 2
      Stip_161_set.insert("PSA");
      Stip_161.add_attribute("Val", "UnderlyingStipValue_t_1351371054"); // 2
      Stip_161_set.insert("UnderlyingStipValue_t_1351371054");
      all_values.push_back(Stip_161_set);
      all_compo_names.insert("Stip_161_set");

      Undly_100.add_element(Stip_161);
    }
    {
      xml_element Pty_388{"Pty"};
      multiset<string> Pty_388_set;
      Pty_388.add_attribute("ID", "UnderlyingInstrumentPartyID_t_417076228"); // 2
      Pty_388_set.insert("UnderlyingInstrumentPartyID_t_417076228");
      Pty_388.add_attribute("Src", "4"); // 2
      Pty_388_set.insert("4");
      Pty_388.add_attribute("R", "68"); // 2
      Pty_388_set.insert("68");
      all_values.push_back(Pty_388_set);
      all_compo_names.insert("Pty_388_set");

      {
        xml_element Sub_388{"Sub"};
        multiset<string> Sub_388_set;
        Sub_388.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1860627755"); // 3
        Sub_388_set.insert("UnderlyingInstrumentPartySubID_t_1860627755");
        Sub_388.add_attribute("Typ", "30"); // 3
        Sub_388_set.insert("30");
        all_values.push_back(Sub_388_set);
        all_compo_names.insert("Sub_388_set");

        Pty_388.add_element(Sub_388);
      }
      Undly_100.add_element(Pty_388);
    }
    elt.add_element(Undly_100);
  } // end Undly
  { // Undly
    xml_element Undly_101{"Undly"};
    multiset<string> Undly_101_set;
    Undly_101.add_attribute("Sym", "UnderlyingSymbol_t_426226253"); // 1
    Undly_101_set.insert("UnderlyingSymbol_t_426226253");
    Undly_101.add_attribute("Sfx", "WI"); // 1
    Undly_101_set.insert("WI");
    Undly_101.add_attribute("ID", "UnderlyingSecurityID_t_416277662"); // 1
    Undly_101_set.insert("UnderlyingSecurityID_t_416277662");
    Undly_101.add_attribute("Src", "L"); // 1
    Undly_101_set.insert("L");
    Undly_101.add_attribute("Prod", "7"); // 1
    Undly_101_set.insert("7");
    Undly_101.add_attribute("CFI", "UnderlyingCFICode_t_2039347568"); // 1
    Undly_101_set.insert("UnderlyingCFICode_t_2039347568");
    Undly_101.add_attribute("SecTyp", "MPO"); // 1
    Undly_101_set.insert("MPO");
    Undly_101.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1084706838"); // 1
    Undly_101_set.insert("UnderlyingSecuritySubType_t_1084706838");
    Undly_101.add_attribute("MMY", "1417668488"); // 1
    Undly_101_set.insert("1417668488");
    Undly_101.add_attribute("Mat", "UnderlyingMaturityDate_t_312955139"); // 1
    Undly_101_set.insert("UnderlyingMaturityDate_t_312955139");
    Undly_101.add_attribute("MatTm", "1096398816"); // 1
    Undly_101_set.insert("1096398816");
    Undly_101.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_60837960"); // 1
    Undly_101_set.insert("UnderlyingCouponPaymentDate_t_60837960");
    Undly_101.add_attribute("RestrctTyp", "MR"); // 1
    Undly_101_set.insert("MR");
    Undly_101.add_attribute("Snrty", "SD"); // 1
    Undly_101_set.insert("SD");
    Undly_101.add_attribute("NotlPctOut", "5872246.820000"); // 1
    Undly_101_set.insert("5872246.820000");
    Undly_101.add_attribute("OrigNotlPctOut", "6394287.110000"); // 1
    Undly_101_set.insert("6394287.110000");
    Undly_101.add_attribute("AttchPnt", "11451005.780000"); // 1
    Undly_101_set.insert("11451005.780000");
    Undly_101.add_attribute("DetchPnt", "1614056.100000"); // 1
    Undly_101_set.insert("1614056.100000");
    Undly_101.add_attribute("Issued", "UnderlyingIssueDate_t_804134141"); // 1
    Undly_101_set.insert("UnderlyingIssueDate_t_804134141");
    Undly_101.add_attribute("RepoCollSecTyp", "1364549211"); // 1
    Undly_101_set.insert("1364549211");
    Undly_101.add_attribute("RepoTrm", "19462402"); // 1
    Undly_101_set.insert("19462402");
    Undly_101.add_attribute("RepoRt", "17459197.740000"); // 1
    Undly_101_set.insert("17459197.740000");
    Undly_101.add_attribute("Fctr", "6947543.690000"); // 1
    Undly_101_set.insert("6947543.690000");
    Undly_101.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1684714394"); // 1
    Undly_101_set.insert("UnderlyingCreditRating_t_1684714394");
    Undly_101.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1969628135"); // 1
    Undly_101_set.insert("UnderlyingInstrRegistry_t_1969628135");
    Undly_101.add_attribute("Ctry", "2046125423"); // 1
    Undly_101_set.insert("2046125423");
    Undly_101.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2101790623"); // 1
    Undly_101_set.insert("UnderlyingStateOrProvinceOfIssue_t_2101790623");
    Undly_101.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1982284298"); // 1
    Undly_101_set.insert("UnderlyingLocaleOfIssue_t_1982284298");
    Undly_101.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1176164157"); // 1
    Undly_101_set.insert("UnderlyingRedemptionDate_t_1176164157");
    Undly_101.add_attribute("StrkPx", "18149347.300000"); // 1
    Undly_101_set.insert("18149347.300000");
    Undly_101.add_attribute("StrkCcy", "CHF"); // 1
    Undly_101_set.insert("CHF");
    Undly_101.add_attribute("OptA", "353978569"); // 1
    Undly_101_set.insert("353978569");
    Undly_101.add_attribute("Mult", "2048241.200000"); // 1
    Undly_101_set.insert("2048241.200000");
    Undly_101.add_attribute("MultTyp", "2"); // 1
    Undly_101_set.insert("2");
    Undly_101.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_101_set.insert("3");
    Undly_101.add_attribute("UOM", "oz_tr"); // 1
    Undly_101_set.insert("oz_tr");
    Undly_101.add_attribute("UOMQty", "1966019.610000"); // 1
    Undly_101_set.insert("1966019.610000");
    Undly_101.add_attribute("PxUOM", "Gal"); // 1
    Undly_101_set.insert("Gal");
    Undly_101.add_attribute("PxUOMQty", "15143565.290000"); // 1
    Undly_101_set.insert("15143565.290000");
    Undly_101.add_attribute("TmUnit", "D"); // 1
    Undly_101_set.insert("D");
    Undly_101.add_attribute("ExerStyle", "1"); // 1
    Undly_101_set.insert("1");
    Undly_101.add_attribute("CpnRt", "15751944.890000"); // 1
    Undly_101_set.insert("15751944.890000");
    Undly_101.add_attribute("Exch", "UnderlyingSecurityExchange_t_325677101"); // 1
    Undly_101_set.insert("UnderlyingSecurityExchange_t_325677101");
    Undly_101.add_attribute("Issr", "UnderlyingIssuer_t_2064926861"); // 1
    Undly_101_set.insert("UnderlyingIssuer_t_2064926861");
    Undly_101.add_attribute("EncUndIssrLen", "14935524"); // 1
    Undly_101_set.insert("14935524");
    Undly_101.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_965105812"); // 1
    Undly_101_set.insert("EncodedUnderlyingIssuer_t_965105812");
    Undly_101.add_attribute("Desc", "UnderlyingSecurityDesc_t_1062543791"); // 1
    Undly_101_set.insert("UnderlyingSecurityDesc_t_1062543791");
    Undly_101.add_attribute("EncUndSecDescLen", "176341134"); // 1
    Undly_101_set.insert("176341134");
    Undly_101.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1769239953"); // 1
    Undly_101_set.insert("EncodedUnderlyingSecurityDesc_t_1769239953");
    Undly_101.add_attribute("CPPgm", "UnderlyingCPProgram_t_279609354"); // 1
    Undly_101_set.insert("UnderlyingCPProgram_t_279609354");
    Undly_101.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_195803537"); // 1
    Undly_101_set.insert("UnderlyingCPRegType_t_195803537");
    Undly_101.add_attribute("AllocPct", "13676760.790000"); // 1
    Undly_101_set.insert("13676760.790000");
    Undly_101.add_attribute("Ccy", "EUR"); // 1
    Undly_101_set.insert("EUR");
    Undly_101.add_attribute("Qty", "11898205.660000"); // 1
    Undly_101_set.insert("11898205.660000");
    Undly_101.add_attribute("SettlTyp", "2"); // 1
    Undly_101_set.insert("2");
    Undly_101.add_attribute("CashAmt", "UnderlyingCashAmount_t_1834824906"); // 1
    Undly_101_set.insert("UnderlyingCashAmount_t_1834824906");
    Undly_101.add_attribute("CashTyp", "DIFF"); // 1
    Undly_101_set.insert("DIFF");
    Undly_101.add_attribute("Px", "20491696.560000"); // 1
    Undly_101_set.insert("20491696.560000");
    Undly_101.add_attribute("DirtPx", "15022759.880000"); // 1
    Undly_101_set.insert("15022759.880000");
    Undly_101.add_attribute("EndPx", "8131676.750000"); // 1
    Undly_101_set.insert("8131676.750000");
    Undly_101.add_attribute("StartVal", "UnderlyingStartValue_t_1504076419"); // 1
    Undly_101_set.insert("UnderlyingStartValue_t_1504076419");
    Undly_101.add_attribute("CurVal", "UnderlyingCurrentValue_t_1856254557"); // 1
    Undly_101_set.insert("UnderlyingCurrentValue_t_1856254557");
    Undly_101.add_attribute("EndVal", "UnderlyingEndValue_t_1017991796"); // 1
    Undly_101_set.insert("UnderlyingEndValue_t_1017991796");
    Undly_101.add_attribute("AdjQty", "11180751.670000"); // 1
    Undly_101_set.insert("11180751.670000");
    Undly_101.add_attribute("FxRate", "20417387.610000"); // 1
    Undly_101_set.insert("20417387.610000");
    Undly_101.add_attribute("FxRateCalc", "D"); // 1
    Undly_101_set.insert("D");
    Undly_101.add_attribute("CapValu", "UnderlyingCapValue_t_1314677128"); // 1
    Undly_101_set.insert("UnderlyingCapValue_t_1314677128");
    Undly_101.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1164446155"); // 1
    Undly_101_set.insert("UnderlyingSettlMethod_t_1164446155");
    Undly_101.add_attribute("PutCall", "481552718"); // 1
    Undly_101_set.insert("481552718");
    all_values.push_back(Undly_101_set);
    all_compo_names.insert("Undly_101_set");

    {
      xml_element UndAID_101{"UndAID"};
      multiset<string> UndAID_101_set;
      UndAID_101.add_attribute("AltID", "UnderlyingSecurityAltID_t_1824234228"); // 2
      UndAID_101_set.insert("UnderlyingSecurityAltID_t_1824234228");
      UndAID_101.add_attribute("AltIDSrc", "L"); // 2
      UndAID_101_set.insert("L");
      all_values.push_back(UndAID_101_set);
      all_compo_names.insert("UndAID_101_set");

      Undly_101.add_element(UndAID_101);
    }
    {
      xml_element Stip_162{"Stip"};
      multiset<string> Stip_162_set;
      Stip_162.add_attribute("Typ", "CPR"); // 2
      Stip_162_set.insert("CPR");
      Stip_162.add_attribute("Val", "UnderlyingStipValue_t_2427681"); // 2
      Stip_162_set.insert("UnderlyingStipValue_t_2427681");
      all_values.push_back(Stip_162_set);
      all_compo_names.insert("Stip_162_set");

      Undly_101.add_element(Stip_162);
    }
    {
      xml_element Pty_389{"Pty"};
      multiset<string> Pty_389_set;
      Pty_389.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1300995578"); // 2
      Pty_389_set.insert("UnderlyingInstrumentPartyID_t_1300995578");
      Pty_389.add_attribute("Src", "2"); // 2
      Pty_389_set.insert("2");
      Pty_389.add_attribute("R", "75"); // 2
      Pty_389_set.insert("75");
      all_values.push_back(Pty_389_set);
      all_compo_names.insert("Pty_389_set");

      {
        xml_element Sub_389{"Sub"};
        multiset<string> Sub_389_set;
        Sub_389.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_216055721"); // 3
        Sub_389_set.insert("UnderlyingInstrumentPartySubID_t_216055721");
        Sub_389.add_attribute("Typ", "18"); // 3
        Sub_389_set.insert("18");
        all_values.push_back(Sub_389_set);
        all_compo_names.insert("Sub_389_set");

        Pty_389.add_element(Sub_389);
      }
      Undly_101.add_element(Pty_389);
    }
    elt.add_element(Undly_101);
  } // end Undly
  { // TrdSes
    xml_element TrdSes_23{"TrdSes"};
    multiset<string> TrdSes_23_set;
    TrdSes_23.add_attribute("SesID", "6"); // 1
    TrdSes_23_set.insert("6");
    TrdSes_23.add_attribute("SesSub", "2"); // 1
    TrdSes_23_set.insert("2");
    all_values.push_back(TrdSes_23_set);
    all_compo_names.insert("TrdSes_23_set");

    elt.add_element(TrdSes_23);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_24{"TrdSes"};
    multiset<string> TrdSes_24_set;
    TrdSes_24.add_attribute("SesID", "5"); // 1
    TrdSes_24_set.insert("5");
    TrdSes_24.add_attribute("SesSub", "2"); // 1
    TrdSes_24_set.insert("2");
    all_values.push_back(TrdSes_24_set);
    all_compo_names.insert("TrdSes_24_set");

    elt.add_element(TrdSes_24);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_25{"TrdSes"};
    multiset<string> TrdSes_25_set;
    TrdSes_25.add_attribute("SesID", "5"); // 1
    TrdSes_25_set.insert("5");
    TrdSes_25.add_attribute("SesSub", "3"); // 1
    TrdSes_25_set.insert("3");
    all_values.push_back(TrdSes_25_set);
    all_compo_names.insert("TrdSes_25_set");

    elt.add_element(TrdSes_25);
  } // end TrdSes
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
