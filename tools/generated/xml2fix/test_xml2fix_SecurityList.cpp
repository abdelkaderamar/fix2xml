#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityList_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityList_message_t_0;
  elt.add_attribute("RptID", "1373653363"); // 0
  SecurityList_message_t_0.insert("1373653363");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_2116982829"); // 0
  SecurityList_message_t_0.insert("ClearingBusinessDate_t_2116982829");
  elt.add_attribute("ListID", "SecurityListID_t_587018343"); // 0
  SecurityList_message_t_0.insert("SecurityListID_t_587018343");
  elt.add_attribute("ListRefID", "SecurityListRefID_t_2068376483"); // 0
  SecurityList_message_t_0.insert("SecurityListRefID_t_2068376483");
  elt.add_attribute("ListDesc", "SecurityListDesc_t_202932617"); // 0
  SecurityList_message_t_0.insert("SecurityListDesc_t_202932617");
  elt.add_attribute("ListTyp", "1"); // 0
  SecurityList_message_t_0.insert("1");
  elt.add_attribute("LstTypSrc", "3"); // 0
  SecurityList_message_t_0.insert("3");
  elt.add_attribute("ReqID", "SecurityReqID_t_993086657"); // 0
  SecurityList_message_t_0.insert("SecurityReqID_t_993086657");
  elt.add_attribute("RspID", "SecurityResponseID_t_834563567"); // 0
  SecurityList_message_t_0.insert("SecurityResponseID_t_834563567");
  elt.add_attribute("ReqRslt", "0"); // 0
  SecurityList_message_t_0.insert("0");
  elt.add_attribute("TxnTm", "TransactTime_t_1482651516"); // 0
  SecurityList_message_t_0.insert("TransactTime_t_1482651516");
  elt.add_attribute("TotNoReltdSym", "385433763"); // 0
  SecurityList_message_t_0.insert("385433763");
  elt.add_attribute("MktID", "MarketID_t_1814145530"); // 0
  SecurityList_message_t_0.insert("MarketID_t_1814145530");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1998197085"); // 0
  SecurityList_message_t_0.insert("MarketSegmentID_t_1998197085");
  elt.add_attribute("LastFragment", "N"); // 0
  SecurityList_message_t_0.insert("N");
  all_values.push_back(SecurityList_message_t_0);
  all_compo_names.insert("SecurityList_message_t");

  { // Hdr
    xml_element Hdr_83{"Hdr"};
    multiset<string> Hdr_83_set;
    Hdr_83.add_attribute("SeqNum", "1790904574"); // 1
    Hdr_83_set.insert("1790904574");
    Hdr_83.add_attribute("SID", "SenderCompID_t_356294985"); // 1
    Hdr_83_set.insert("SenderCompID_t_356294985");
    Hdr_83.add_attribute("TID", "TargetCompID_t_1179425107"); // 1
    Hdr_83_set.insert("TargetCompID_t_1179425107");
    Hdr_83.add_attribute("OBID", "OnBehalfOfCompID_t_827505154"); // 1
    Hdr_83_set.insert("OnBehalfOfCompID_t_827505154");
    Hdr_83.add_attribute("D2ID", "DeliverToCompID_t_468588702"); // 1
    Hdr_83_set.insert("DeliverToCompID_t_468588702");
    Hdr_83.add_attribute("SSub", "SenderSubID_t_303291098"); // 1
    Hdr_83_set.insert("SenderSubID_t_303291098");
    Hdr_83.add_attribute("SLoc", "SenderLocationID_t_342946235"); // 1
    Hdr_83_set.insert("SenderLocationID_t_342946235");
    Hdr_83.add_attribute("TSub", "TargetSubID_t_487945323"); // 1
    Hdr_83_set.insert("TargetSubID_t_487945323");
    Hdr_83.add_attribute("TLoc", "TargetLocationID_t_1272947744"); // 1
    Hdr_83_set.insert("TargetLocationID_t_1272947744");
    Hdr_83.add_attribute("OBSub", "OnBehalfOfSubID_t_752089661"); // 1
    Hdr_83_set.insert("OnBehalfOfSubID_t_752089661");
    Hdr_83.add_attribute("OBLoc", "OnBehalfOfLocationID_t_780559836"); // 1
    Hdr_83_set.insert("OnBehalfOfLocationID_t_780559836");
    Hdr_83.add_attribute("D2Sub", "DeliverToSubID_t_822824392"); // 1
    Hdr_83_set.insert("DeliverToSubID_t_822824392");
    Hdr_83.add_attribute("D2Loc", "DeliverToLocationID_t_122993859"); // 1
    Hdr_83_set.insert("DeliverToLocationID_t_122993859");
    Hdr_83.add_attribute("PosDup", "Y"); // 1
    Hdr_83_set.insert("Y");
    Hdr_83.add_attribute("PosRsnd", "Y"); // 1
    Hdr_83_set.insert("Y");
    Hdr_83.add_attribute("Snt", "SendingTime_t_808052120"); // 1
    Hdr_83_set.insert("SendingTime_t_808052120");
    Hdr_83.add_attribute("OrigSnt", "OrigSendingTime_t_228699063"); // 1
    Hdr_83_set.insert("OrigSendingTime_t_228699063");
    Hdr_83.add_attribute("MsgEncd", "MessageEncoding_t_1113148444"); // 1
    Hdr_83_set.insert("MessageEncoding_t_1113148444");
    all_values.push_back(Hdr_83_set);
    all_compo_names.insert("Hdr_83_set");

    {
      xml_element Hop_83{"Hop"};
      multiset<string> Hop_83_set;
      Hop_83.add_attribute("ID", "HopCompID_t_1395070463"); // 2
      Hop_83_set.insert("HopCompID_t_1395070463");
      Hop_83.add_attribute("Ref", "149591898"); // 2
      Hop_83_set.insert("149591898");
      Hop_83.add_attribute("Snt", "HopSendingTime_t_1316081062"); // 2
      Hop_83_set.insert("HopSendingTime_t_1316081062");
      all_values.push_back(Hop_83_set);
      all_compo_names.insert("Hop_83_set");

      Hdr_83.add_element(Hop_83);
    }
    elt.add_element(Hdr_83);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_14{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_14_set;
    ApplSeqCtrl_14.add_attribute("ApplID", "ApplID_t_831996435"); // 1
    ApplSeqCtrl_14_set.insert("ApplID_t_831996435");
    ApplSeqCtrl_14.add_attribute("ApplSeqNum", "747247919"); // 1
    ApplSeqCtrl_14_set.insert("747247919");
    ApplSeqCtrl_14.add_attribute("ApplLastSeqNum", "161684071"); // 1
    ApplSeqCtrl_14_set.insert("161684071");
    ApplSeqCtrl_14.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_14_set.insert("false");
    all_values.push_back(ApplSeqCtrl_14_set);
    all_compo_names.insert("ApplSeqCtrl_14_set");

    elt.add_element(ApplSeqCtrl_14);
  } // end ApplSeqCtrl
  { // SecL
    xml_element SecL_0{"SecL"};
    multiset<string> SecL_0_set;
    SecL_0.add_attribute("Ccy", "USD"); // 1
    SecL_0_set.insert("USD");
    SecL_0.add_attribute("TxnTm", "RelSymTransactTime_t_21098727"); // 1
    SecL_0_set.insert("RelSymTransactTime_t_21098727");
    SecL_0.add_attribute("Txt", "Text_t_1495049024"); // 1
    SecL_0_set.insert("Text_t_1495049024");
    SecL_0.add_attribute("EncTxtLen", "978488422"); // 1
    SecL_0_set.insert("978488422");
    SecL_0.add_attribute("EncTxt", "EncodedText_t_1812003302"); // 1
    SecL_0_set.insert("EncodedText_t_1812003302");
    all_values.push_back(SecL_0_set);
    all_compo_names.insert("SecL_0_set");

    {
      xml_element Instrmt_71{"Instrmt"};
      multiset<string> Instrmt_71_set;
      Instrmt_71.add_attribute("Sym", "Symbol_t_1851344009"); // 2
      Instrmt_71_set.insert("Symbol_t_1851344009");
      Instrmt_71.add_attribute("Sfx", "WI"); // 2
      Instrmt_71_set.insert("WI");
      Instrmt_71.add_attribute("ID", "SecurityID_t_492024808"); // 2
      Instrmt_71_set.insert("SecurityID_t_492024808");
      Instrmt_71.add_attribute("Src", "J"); // 2
      Instrmt_71_set.insert("J");
      Instrmt_71.add_attribute("Prod", "1"); // 2
      Instrmt_71_set.insert("1");
      Instrmt_71.add_attribute("ProdCmplx", "ProductComplex_t_834971044"); // 2
      Instrmt_71_set.insert("ProductComplex_t_834971044");
      Instrmt_71.add_attribute("SecGrp", "SecurityGroup_t_660394387"); // 2
      Instrmt_71_set.insert("SecurityGroup_t_660394387");
      Instrmt_71.add_attribute("CFI", "CFICode_t_1586668724"); // 2
      Instrmt_71_set.insert("CFICode_t_1586668724");
      Instrmt_71.add_attribute("SecTyp", "FXSWAP"); // 2
      Instrmt_71_set.insert("FXSWAP");
      Instrmt_71.add_attribute("SubTyp", "SecuritySubType_t_1440954223"); // 2
      Instrmt_71_set.insert("SecuritySubType_t_1440954223");
      Instrmt_71.add_attribute("MMY", "262009468"); // 2
      Instrmt_71_set.insert("262009468");
      Instrmt_71.add_attribute("MatDt", "MaturityDate_t_1710054564"); // 2
      Instrmt_71_set.insert("MaturityDate_t_1710054564");
      Instrmt_71.add_attribute("MatTm", "295999923"); // 2
      Instrmt_71_set.insert("295999923");
      Instrmt_71.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1405658731"); // 2
      Instrmt_71_set.insert("SettleOnOpenFlag_t_1405658731");
      Instrmt_71.add_attribute("AsgnMeth", "370623037"); // 2
      Instrmt_71_set.insert("370623037");
      Instrmt_71.add_attribute("Status", "1"); // 2
      Instrmt_71_set.insert("1");
      Instrmt_71.add_attribute("CpnPmt", "CouponPaymentDate_t_371323528"); // 2
      Instrmt_71_set.insert("CouponPaymentDate_t_371323528");
      Instrmt_71.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_71_set.insert("FR");
      Instrmt_71.add_attribute("Snrty", "SD"); // 2
      Instrmt_71_set.insert("SD");
      Instrmt_71.add_attribute("NotlPctOut", "16874045.900000"); // 2
      Instrmt_71_set.insert("16874045.900000");
      Instrmt_71.add_attribute("OrigNotlPctOut", "4502062.880000"); // 2
      Instrmt_71_set.insert("4502062.880000");
      Instrmt_71.add_attribute("AttchPnt", "14215388.040000"); // 2
      Instrmt_71_set.insert("14215388.040000");
      Instrmt_71.add_attribute("DetchPnt", "18490886.610000"); // 2
      Instrmt_71_set.insert("18490886.610000");
      Instrmt_71.add_attribute("Issued", "IssueDate_t_2116766291"); // 2
      Instrmt_71_set.insert("IssueDate_t_2116766291");
      Instrmt_71.add_attribute("RepoCollSecTyp", "1775975649"); // 2
      Instrmt_71_set.insert("1775975649");
      Instrmt_71.add_attribute("RepoTrm", "1345940600"); // 2
      Instrmt_71_set.insert("1345940600");
      Instrmt_71.add_attribute("RepoRt", "20212764.090000"); // 2
      Instrmt_71_set.insert("20212764.090000");
      Instrmt_71.add_attribute("Fctr", "17970743.770000"); // 2
      Instrmt_71_set.insert("17970743.770000");
      Instrmt_71.add_attribute("CrdRtg", "CreditRating_t_693505977"); // 2
      Instrmt_71_set.insert("CreditRating_t_693505977");
      Instrmt_71.add_attribute("Rgstry", "InstrRegistry_t_852281183"); // 2
      Instrmt_71_set.insert("InstrRegistry_t_852281183");
      Instrmt_71.add_attribute("IssuCtry", "1461594031"); // 2
      Instrmt_71_set.insert("1461594031");
      Instrmt_71.add_attribute("StPrv", "StateOrProvinceOfIssue_t_397366338"); // 2
      Instrmt_71_set.insert("StateOrProvinceOfIssue_t_397366338");
      Instrmt_71.add_attribute("Lcl", "LocaleOfIssue_t_862711064"); // 2
      Instrmt_71_set.insert("LocaleOfIssue_t_862711064");
      Instrmt_71.add_attribute("Redeem", "RedemptionDate_t_1953618839"); // 2
      Instrmt_71_set.insert("RedemptionDate_t_1953618839");
      Instrmt_71.add_attribute("StrkPx", "5698154.020000"); // 2
      Instrmt_71_set.insert("5698154.020000");
      Instrmt_71.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_71_set.insert("EUR");
      Instrmt_71.add_attribute("StrkMult", "12302097.900000"); // 2
      Instrmt_71_set.insert("12302097.900000");
      Instrmt_71.add_attribute("StrkValu", "6156171.190000"); // 2
      Instrmt_71_set.insert("6156171.190000");
      Instrmt_71.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_71_set.insert("1");
      Instrmt_71.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_71_set.insert("1");
      Instrmt_71.add_attribute("StrkPxBndryPrcsn", "8776265.880000"); // 2
      Instrmt_71_set.insert("8776265.880000");
      Instrmt_71.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_71_set.insert("2");
      Instrmt_71.add_attribute("OptAt", "819680288"); // 2
      Instrmt_71_set.insert("819680288");
      Instrmt_71.add_attribute("Mult", "1358016.710000"); // 2
      Instrmt_71_set.insert("1358016.710000");
      Instrmt_71.add_attribute("MultTyp", "2"); // 2
      Instrmt_71_set.insert("2");
      Instrmt_71.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_71_set.insert("4");
      Instrmt_71.add_attribute("MinPxIncr", "5071251.990000"); // 2
      Instrmt_71_set.insert("5071251.990000");
      Instrmt_71.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1779570746"); // 2
      Instrmt_71_set.insert("MinPriceIncrementAmount_t_1779570746");
      Instrmt_71.add_attribute("UOM", "Alw"); // 2
      Instrmt_71_set.insert("Alw");
      Instrmt_71.add_attribute("UOMQty", "470461.410000"); // 2
      Instrmt_71_set.insert("470461.410000");
      Instrmt_71.add_attribute("PxUOM", "MMbbl"); // 2
      Instrmt_71_set.insert("MMbbl");
      Instrmt_71.add_attribute("PxUOMQty", "12927253.150000"); // 2
      Instrmt_71_set.insert("12927253.150000");
      Instrmt_71.add_attribute("SettlMeth", "C"); // 2
      Instrmt_71_set.insert("C");
      Instrmt_71.add_attribute("ExerStyle", "2"); // 2
      Instrmt_71_set.insert("2");
      Instrmt_71.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_71_set.insert("3");
      Instrmt_71.add_attribute("OptPayAmt", "OptPayoutAmount_t_1094591755"); // 2
      Instrmt_71_set.insert("OptPayoutAmount_t_1094591755");
      Instrmt_71.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_71_set.insert("INT");
      Instrmt_71.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_71_set.insert("EQTY");
      Instrmt_71.add_attribute("ListMeth", "0"); // 2
      Instrmt_71_set.insert("0");
      Instrmt_71.add_attribute("CapPx", "7776499.730000"); // 2
      Instrmt_71_set.insert("7776499.730000");
      Instrmt_71.add_attribute("FlrPx", "20324020.760000"); // 2
      Instrmt_71_set.insert("20324020.760000");
      Instrmt_71.add_attribute("PutCall", "0"); // 2
      Instrmt_71_set.insert("0");
      Instrmt_71.add_attribute("FlexInd", "false"); // 2
      Instrmt_71_set.insert("false");
      Instrmt_71.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_71_set.insert("true");
      Instrmt_71.add_attribute("TmUnit", "S"); // 2
      Instrmt_71_set.insert("S");
      Instrmt_71.add_attribute("CpnRt", "6693094.330000"); // 2
      Instrmt_71_set.insert("6693094.330000");
      Instrmt_71.add_attribute("Exch", "SecurityExchange_t_332159855"); // 2
      Instrmt_71_set.insert("SecurityExchange_t_332159855");
      Instrmt_71.add_attribute("PosLmt", "1838005615"); // 2
      Instrmt_71_set.insert("1838005615");
      Instrmt_71.add_attribute("NTPosLmt", "1284926552"); // 2
      Instrmt_71_set.insert("1284926552");
      Instrmt_71.add_attribute("Issr", "Issuer_t_412843148"); // 2
      Instrmt_71_set.insert("Issuer_t_412843148");
      Instrmt_71.add_attribute("EncIssrLen", "214202332"); // 2
      Instrmt_71_set.insert("214202332");
      Instrmt_71.add_attribute("EncIssr", "EncodedIssuer_t_15069492"); // 2
      Instrmt_71_set.insert("EncodedIssuer_t_15069492");
      Instrmt_71.add_attribute("Desc", "SecurityDesc_t_56097357"); // 2
      Instrmt_71_set.insert("SecurityDesc_t_56097357");
      Instrmt_71.add_attribute("EncSecDescLen", "1033882621"); // 2
      Instrmt_71_set.insert("1033882621");
      Instrmt_71.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_150871164"); // 2
      Instrmt_71_set.insert("EncodedSecurityDesc_t_150871164");
      Instrmt_71.add_attribute("Pool", "Pool_t_69974603"); // 2
      Instrmt_71_set.insert("Pool_t_69974603");
      Instrmt_71.add_attribute("CSetMo", "230778247"); // 2
      Instrmt_71_set.insert("230778247");
      Instrmt_71.add_attribute("CPPgm", "1"); // 2
      Instrmt_71_set.insert("1");
      Instrmt_71.add_attribute("CPRegT", "CPRegType_t_1849545349"); // 2
      Instrmt_71_set.insert("CPRegType_t_1849545349");
      Instrmt_71.add_attribute("Dated", "DatedDate_t_101964758"); // 2
      Instrmt_71_set.insert("DatedDate_t_101964758");
      Instrmt_71.add_attribute("IntAcrl", "InterestAccrualDate_t_705042505"); // 2
      Instrmt_71_set.insert("InterestAccrualDate_t_705042505");
      all_values.push_back(Instrmt_71_set);
      all_compo_names.insert("Instrmt_71_set");

      {
        xml_element AID_74{"AID"};
        multiset<string> AID_74_set;
        AID_74.add_attribute("AltID", "SecurityAltID_t_1931838736"); // 3
        AID_74_set.insert("SecurityAltID_t_1931838736");
        AID_74.add_attribute("AltIDSrc", "8"); // 3
        AID_74_set.insert("8");
        all_values.push_back(AID_74_set);
        all_compo_names.insert("AID_74_set");

        Instrmt_71.add_element(AID_74);
      }
      {
        xml_element SecXML_74{"SecXML"};
        multiset<string> SecXML_74_set;
        SecXML_74.add_attribute("Schema", "SecurityXMLSchema_t_453693659"); // 3
        SecXML_74_set.insert("SecurityXMLSchema_t_453693659");
        all_values.push_back(SecXML_74_set);
        all_compo_names.insert("SecXML_74_set");

        Instrmt_71.add_element(SecXML_74);
      }
      {
        xml_element Evnt_74{"Evnt"};
        multiset<string> Evnt_74_set;
        Evnt_74.add_attribute("EventTyp", "5"); // 3
        Evnt_74_set.insert("5");
        Evnt_74.add_attribute("Dt", "EventDate_t_168423742"); // 3
        Evnt_74_set.insert("EventDate_t_168423742");
        Evnt_74.add_attribute("Tm", "EventTime_t_1548285414"); // 3
        Evnt_74_set.insert("EventTime_t_1548285414");
        Evnt_74.add_attribute("Px", "19087835.560000"); // 3
        Evnt_74_set.insert("19087835.560000");
        Evnt_74.add_attribute("Txt", "EventText_t_739231787"); // 3
        Evnt_74_set.insert("EventText_t_739231787");
        all_values.push_back(Evnt_74_set);
        all_compo_names.insert("Evnt_74_set");

        Instrmt_71.add_element(Evnt_74);
      }
      {
        xml_element Pty_377{"Pty"};
        multiset<string> Pty_377_set;
        Pty_377.add_attribute("ID", "InstrumentPartyID_t_1188899498"); // 3
        Pty_377_set.insert("InstrumentPartyID_t_1188899498");
        Pty_377.add_attribute("Src", "2"); // 3
        Pty_377_set.insert("2");
        Pty_377.add_attribute("R", "62"); // 3
        Pty_377_set.insert("62");
        all_values.push_back(Pty_377_set);
        all_compo_names.insert("Pty_377_set");

        {
          xml_element Sub_377{"Sub"};
          multiset<string> Sub_377_set;
          Sub_377.add_attribute("ID", "InstrumentPartySubID_t_1226879921"); // 4
          Sub_377_set.insert("InstrumentPartySubID_t_1226879921");
          Sub_377.add_attribute("Typ", "9"); // 4
          Sub_377_set.insert("9");
          all_values.push_back(Sub_377_set);
          all_compo_names.insert("Sub_377_set");

          Pty_377.add_element(Sub_377);
        }
        Instrmt_71.add_element(Pty_377);
      }
      {
        xml_element CmplxEvnt_71{"CmplxEvnt"};
        multiset<string> CmplxEvnt_71_set;
        CmplxEvnt_71.add_attribute("Typ", "5"); // 3
        CmplxEvnt_71_set.insert("5");
        CmplxEvnt_71.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1834675746"); // 3
        CmplxEvnt_71_set.insert("ComplexOptPayoutAmount_t_1834675746");
        CmplxEvnt_71.add_attribute("Px", "7011367.040000"); // 3
        CmplxEvnt_71_set.insert("7011367.040000");
        CmplxEvnt_71.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_71_set.insert("2");
        CmplxEvnt_71.add_attribute("PxBndryPrcsn", "15251977.130000"); // 3
        CmplxEvnt_71_set.insert("15251977.130000");
        CmplxEvnt_71.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_71_set.insert("2");
        CmplxEvnt_71.add_attribute("Cond", "2"); // 3
        CmplxEvnt_71_set.insert("2");
        all_values.push_back(CmplxEvnt_71_set);
        all_compo_names.insert("CmplxEvnt_71_set");

        {
          xml_element EvntDts_71{"EvntDts"};
          multiset<string> EvntDts_71_set;
          EvntDts_71.add_attribute("StartDt", "ComplexEventStartDate_t_1739400045"); // 4
          EvntDts_71_set.insert("ComplexEventStartDate_t_1739400045");
          EvntDts_71.add_attribute("EndDt", "ComplexEventEndDate_t_2001132749"); // 4
          EvntDts_71_set.insert("ComplexEventEndDate_t_2001132749");
          all_values.push_back(EvntDts_71_set);
          all_compo_names.insert("EvntDts_71_set");

          {
            xml_element EvntTms_71{"EvntTms"};
            multiset<string> EvntTms_71_set;
            EvntTms_71.add_attribute("StartTm", "1116304196"); // 5
            EvntTms_71_set.insert("1116304196");
            EvntTms_71.add_attribute("EndTm", "625799018"); // 5
            EvntTms_71_set.insert("625799018");
            all_values.push_back(EvntTms_71_set);
            all_compo_names.insert("EvntTms_71_set");

            EvntDts_71.add_element(EvntTms_71);
          }
          CmplxEvnt_71.add_element(EvntDts_71);
        }
        Instrmt_71.add_element(CmplxEvnt_71);
      }
      SecL_0.add_element(Instrmt_71);
    }
    {
      xml_element InstrmtExt_10{"InstrmtExt"};
      multiset<string> InstrmtExt_10_set;
      InstrmtExt_10.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_10_set.insert("2");
      InstrmtExt_10.add_attribute("PctAtRisk", "11862787.990000"); // 2
      InstrmtExt_10_set.insert("11862787.990000");
      all_values.push_back(InstrmtExt_10_set);
      all_compo_names.insert("InstrmtExt_10_set");

      {
        xml_element Attrb_19{"Attrb"};
        multiset<string> Attrb_19_set;
        Attrb_19.add_attribute("Typ", "4"); // 3
        Attrb_19_set.insert("4");
        Attrb_19.add_attribute("Val", "InstrAttribValue_t_662516628"); // 3
        Attrb_19_set.insert("InstrAttribValue_t_662516628");
        all_values.push_back(Attrb_19_set);
        all_compo_names.insert("Attrb_19_set");

        InstrmtExt_10.add_element(Attrb_19);
      }
      SecL_0.add_element(InstrmtExt_10);
    }
    {
      xml_element FinDetls_25{"FinDetls"};
      multiset<string> FinDetls_25_set;
      FinDetls_25.add_attribute("AgmtDesc", "AgreementDesc_t_888340501"); // 2
      FinDetls_25_set.insert("AgreementDesc_t_888340501");
      FinDetls_25.add_attribute("AgmtID", "AgreementID_t_958542024"); // 2
      FinDetls_25_set.insert("AgreementID_t_958542024");
      FinDetls_25.add_attribute("AgmtDt", "AgreementDate_t_1367559133"); // 2
      FinDetls_25_set.insert("AgreementDate_t_1367559133");
      FinDetls_25.add_attribute("AgmtCcy", "GBP"); // 2
      FinDetls_25_set.insert("GBP");
      FinDetls_25.add_attribute("TrmTyp", "2"); // 2
      FinDetls_25_set.insert("2");
      FinDetls_25.add_attribute("StartDt", "StartDate_t_508626706"); // 2
      FinDetls_25_set.insert("StartDate_t_508626706");
      FinDetls_25.add_attribute("EndDt", "EndDate_t_374172192"); // 2
      FinDetls_25_set.insert("EndDate_t_374172192");
      FinDetls_25.add_attribute("DlvryTyp", "3"); // 2
      FinDetls_25_set.insert("3");
      FinDetls_25.add_attribute("MgnRatio", "2699266.140000"); // 2
      FinDetls_25_set.insert("2699266.140000");
      all_values.push_back(FinDetls_25_set);
      all_compo_names.insert("FinDetls_25_set");

      SecL_0.add_element(FinDetls_25);
    }
    {
      xml_element SecTrdgRules_7{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_9{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_9_set;
        BaseTrdgRules_9.add_attribute("ExpirationCycle", "2"); // 3
        BaseTrdgRules_9_set.insert("2");
        BaseTrdgRules_9.add_attribute("MinTrdVol", "2634704.100000"); // 3
        BaseTrdgRules_9_set.insert("2634704.100000");
        BaseTrdgRules_9.add_attribute("MaxTrdVol", "8088764.960000"); // 3
        BaseTrdgRules_9_set.insert("8088764.960000");
        BaseTrdgRules_9.add_attribute("MxPxVar", "17375541.950000"); // 3
        BaseTrdgRules_9_set.insert("17375541.950000");
        BaseTrdgRules_9.add_attribute("ImpldMktInd", "3"); // 3
        BaseTrdgRules_9_set.insert("3");
        BaseTrdgRules_9.add_attribute("TrdCcy", "CHF"); // 3
        BaseTrdgRules_9_set.insert("CHF");
        BaseTrdgRules_9.add_attribute("RndLot", "11775424.290000"); // 3
        BaseTrdgRules_9_set.insert("11775424.290000");
        BaseTrdgRules_9.add_attribute("MlegModel", "2"); // 3
        BaseTrdgRules_9_set.insert("2");
        BaseTrdgRules_9.add_attribute("MlegPxMeth", "5"); // 3
        BaseTrdgRules_9_set.insert("5");
        BaseTrdgRules_9.add_attribute("PxTyp", "1"); // 3
        BaseTrdgRules_9_set.insert("1");
        all_values.push_back(BaseTrdgRules_9_set);
        all_compo_names.insert("BaseTrdgRules_9_set");

        {
          xml_element TickRules_9{"TickRules"};
          multiset<string> TickRules_9_set;
          TickRules_9.add_attribute("StartTickPxRng", "13804200.790000"); // 4
          TickRules_9_set.insert("13804200.790000");
          TickRules_9.add_attribute("EndTickPxRng", "16128449.140000"); // 4
          TickRules_9_set.insert("16128449.140000");
          TickRules_9.add_attribute("TickIncr", "1471728.910000"); // 4
          TickRules_9_set.insert("1471728.910000");
          TickRules_9.add_attribute("TickRuleTyp", "0"); // 4
          TickRules_9_set.insert("0");
          all_values.push_back(TickRules_9_set);
          all_compo_names.insert("TickRules_9_set");

          BaseTrdgRules_9.add_element(TickRules_9);
        }
        {
          xml_element LotTypeRules_9{"LotTypeRules"};
          multiset<string> LotTypeRules_9_set;
          LotTypeRules_9.add_attribute("LotTyp", "4"); // 4
          LotTypeRules_9_set.insert("4");
          LotTypeRules_9.add_attribute("MinLotSz", "7729719.100000"); // 4
          LotTypeRules_9_set.insert("7729719.100000");
          all_values.push_back(LotTypeRules_9_set);
          all_compo_names.insert("LotTypeRules_9_set");

          BaseTrdgRules_9.add_element(LotTypeRules_9);
        }
        {
          xml_element PxLmts_9{"PxLmts"};
          multiset<string> PxLmts_9_set;
          PxLmts_9.add_attribute("PxLmtTyp", "1"); // 4
          PxLmts_9_set.insert("1");
          PxLmts_9.add_attribute("LowLmtPx", "17679442.620000"); // 4
          PxLmts_9_set.insert("17679442.620000");
          PxLmts_9.add_attribute("HiLmtPx", "16295491.760000"); // 4
          PxLmts_9_set.insert("16295491.760000");
          PxLmts_9.add_attribute("TrdgRefPx", "19011060.740000"); // 4
          PxLmts_9_set.insert("19011060.740000");
          all_values.push_back(PxLmts_9_set);
          all_compo_names.insert("PxLmts_9_set");

          BaseTrdgRules_9.add_element(PxLmts_9);
        }
        SecTrdgRules_7.add_element(BaseTrdgRules_9);
      }
      {
        xml_element TrdgSesRulesGrp_7{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_7_set;
        TrdgSesRulesGrp_7.add_attribute("SesID", "6"); // 3
        TrdgSesRulesGrp_7_set.insert("6");
        TrdgSesRulesGrp_7.add_attribute("SesSub", "1"); // 3
        TrdgSesRulesGrp_7_set.insert("1");
        all_values.push_back(TrdgSesRulesGrp_7_set);
        all_compo_names.insert("TrdgSesRulesGrp_7_set");

        {
          xml_element TrdgSesRules_7{"TrdgSesRules"};
          {
            xml_element OrdTypRules_10{"OrdTypRules"};
            multiset<string> OrdTypRules_10_set;
            OrdTypRules_10.add_attribute("OrdTyp", "8"); // 5
            OrdTypRules_10_set.insert("8");
            all_values.push_back(OrdTypRules_10_set);
            all_compo_names.insert("OrdTypRules_10_set");

            TrdgSesRules_7.add_element(OrdTypRules_10);
          }
          {
            xml_element TmInForceRules_11{"TmInForceRules"};
            multiset<string> TmInForceRules_11_set;
            TmInForceRules_11.add_attribute("TmInForce", "4"); // 5
            TmInForceRules_11_set.insert("4");
            all_values.push_back(TmInForceRules_11_set);
            all_compo_names.insert("TmInForceRules_11_set");

            TrdgSesRules_7.add_element(TmInForceRules_11);
          }
          {
            xml_element ExecInstRules_11{"ExecInstRules"};
            multiset<string> ExecInstRules_11_set;
            ExecInstRules_11.add_attribute("ExecInstValu", "L"); // 5
            ExecInstRules_11_set.insert("L");
            all_values.push_back(ExecInstRules_11_set);
            all_compo_names.insert("ExecInstRules_11_set");

            TrdgSesRules_7.add_element(ExecInstRules_11);
          }
          {
            xml_element MtchRules_7{"MtchRules"};
            multiset<string> MtchRules_7_set;
            MtchRules_7.add_attribute("MtchAlgo", "MatchAlgorithm_t_794950704"); // 5
            MtchRules_7_set.insert("MatchAlgorithm_t_794950704");
            MtchRules_7.add_attribute("MtchTyp", "S3"); // 5
            MtchRules_7_set.insert("S3");
            all_values.push_back(MtchRules_7_set);
            all_compo_names.insert("MtchRules_7_set");

            TrdgSesRules_7.add_element(MtchRules_7);
          }
          {
            xml_element MDFeedTyps_7{"MDFeedTyps"};
            multiset<string> MDFeedTyps_7_set;
            MDFeedTyps_7.add_attribute("MDFeedTyp", "MDFeedType_t_1020528194"); // 5
            MDFeedTyps_7_set.insert("MDFeedType_t_1020528194");
            MDFeedTyps_7.add_attribute("MktDepth", "2017005264"); // 5
            MDFeedTyps_7_set.insert("2017005264");
            MDFeedTyps_7.add_attribute("MDBkTyp", "2"); // 5
            MDFeedTyps_7_set.insert("2");
            all_values.push_back(MDFeedTyps_7_set);
            all_compo_names.insert("MDFeedTyps_7_set");

            TrdgSesRules_7.add_element(MDFeedTyps_7);
          }
          TrdgSesRulesGrp_7.add_element(TrdgSesRules_7);
        }
        SecTrdgRules_7.add_element(TrdgSesRulesGrp_7);
      }
      {
        xml_element Attrb_20{"Attrb"};
        multiset<string> Attrb_20_set;
        Attrb_20.add_attribute("Typ", "22"); // 3
        Attrb_20_set.insert("22");
        Attrb_20.add_attribute("Val", "NestedInstrAttribValue_t_132992026"); // 3
        Attrb_20_set.insert("NestedInstrAttribValue_t_132992026");
        all_values.push_back(Attrb_20_set);
        all_compo_names.insert("Attrb_20_set");

        SecTrdgRules_7.add_element(Attrb_20);
      }
      SecL_0.add_element(SecTrdgRules_7);
    }
    {
      xml_element StrkRules_7{"StrkRules"};
      multiset<string> StrkRules_7_set;
      StrkRules_7.add_attribute("StrkRule", "StrikeRuleID_t_621442873"); // 2
      StrkRules_7_set.insert("StrikeRuleID_t_621442873");
      StrkRules_7.add_attribute("StartStrkPxRng", "17240027.210000"); // 2
      StrkRules_7_set.insert("17240027.210000");
      StrkRules_7.add_attribute("EndStrkPxRng", "16233423.570000"); // 2
      StrkRules_7_set.insert("16233423.570000");
      StrkRules_7.add_attribute("StrkIncr", "14621466.400000"); // 2
      StrkRules_7_set.insert("14621466.400000");
      StrkRules_7.add_attribute("StrkExrStyle", "1"); // 2
      StrkRules_7_set.insert("1");
      all_values.push_back(StrkRules_7_set);
      all_compo_names.insert("StrkRules_7_set");

      {
        xml_element MatRules_7{"MatRules"};
        multiset<string> MatRules_7_set;
        MatRules_7.add_attribute("MatRuleID", "MaturityRuleID_t_653401138"); // 3
        MatRules_7_set.insert("MaturityRuleID_t_653401138");
        MatRules_7.add_attribute("MMYFmt", "1"); // 3
        MatRules_7_set.insert("1");
        MatRules_7.add_attribute("MMYIncrUnits", "0"); // 3
        MatRules_7_set.insert("0");
        MatRules_7.add_attribute("StartMMY", "1208657632"); // 3
        MatRules_7_set.insert("1208657632");
        MatRules_7.add_attribute("EndMMY", "89439895"); // 3
        MatRules_7_set.insert("89439895");
        MatRules_7.add_attribute("MMYIncr", "1647276446"); // 3
        MatRules_7_set.insert("1647276446");
        all_values.push_back(MatRules_7_set);
        all_compo_names.insert("MatRules_7_set");

        StrkRules_7.add_element(MatRules_7);
      }
      SecL_0.add_element(StrkRules_7);
    }
    {
      xml_element Undly_103{"Undly"};
      multiset<string> Undly_103_set;
      Undly_103.add_attribute("Sym", "UnderlyingSymbol_t_1355830523"); // 2
      Undly_103_set.insert("UnderlyingSymbol_t_1355830523");
      Undly_103.add_attribute("Sfx", "WI"); // 2
      Undly_103_set.insert("WI");
      Undly_103.add_attribute("ID", "UnderlyingSecurityID_t_81458261"); // 2
      Undly_103_set.insert("UnderlyingSecurityID_t_81458261");
      Undly_103.add_attribute("Src", "M"); // 2
      Undly_103_set.insert("M");
      Undly_103.add_attribute("Prod", "7"); // 2
      Undly_103_set.insert("7");
      Undly_103.add_attribute("CFI", "UnderlyingCFICode_t_1849402524"); // 2
      Undly_103_set.insert("UnderlyingCFICode_t_1849402524");
      Undly_103.add_attribute("SecTyp", "MTN"); // 2
      Undly_103_set.insert("MTN");
      Undly_103.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_168237299"); // 2
      Undly_103_set.insert("UnderlyingSecuritySubType_t_168237299");
      Undly_103.add_attribute("MMY", "210719991"); // 2
      Undly_103_set.insert("210719991");
      Undly_103.add_attribute("Mat", "UnderlyingMaturityDate_t_2051475514"); // 2
      Undly_103_set.insert("UnderlyingMaturityDate_t_2051475514");
      Undly_103.add_attribute("MatTm", "1289418858"); // 2
      Undly_103_set.insert("1289418858");
      Undly_103.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1392216696"); // 2
      Undly_103_set.insert("UnderlyingCouponPaymentDate_t_1392216696");
      Undly_103.add_attribute("RestrctTyp", "FR"); // 2
      Undly_103_set.insert("FR");
      Undly_103.add_attribute("Snrty", "SR"); // 2
      Undly_103_set.insert("SR");
      Undly_103.add_attribute("NotlPctOut", "9348564.590000"); // 2
      Undly_103_set.insert("9348564.590000");
      Undly_103.add_attribute("OrigNotlPctOut", "15708760.630000"); // 2
      Undly_103_set.insert("15708760.630000");
      Undly_103.add_attribute("AttchPnt", "19538911.790000"); // 2
      Undly_103_set.insert("19538911.790000");
      Undly_103.add_attribute("DetchPnt", "7474228.360000"); // 2
      Undly_103_set.insert("7474228.360000");
      Undly_103.add_attribute("Issued", "UnderlyingIssueDate_t_1557324589"); // 2
      Undly_103_set.insert("UnderlyingIssueDate_t_1557324589");
      Undly_103.add_attribute("RepoCollSecTyp", "2086883205"); // 2
      Undly_103_set.insert("2086883205");
      Undly_103.add_attribute("RepoTrm", "1368865710"); // 2
      Undly_103_set.insert("1368865710");
      Undly_103.add_attribute("RepoRt", "11338436.620000"); // 2
      Undly_103_set.insert("11338436.620000");
      Undly_103.add_attribute("Fctr", "15627419.140000"); // 2
      Undly_103_set.insert("15627419.140000");
      Undly_103.add_attribute("CrdRtg", "UnderlyingCreditRating_t_683528702"); // 2
      Undly_103_set.insert("UnderlyingCreditRating_t_683528702");
      Undly_103.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_615637119"); // 2
      Undly_103_set.insert("UnderlyingInstrRegistry_t_615637119");
      Undly_103.add_attribute("Ctry", "68659404"); // 2
      Undly_103_set.insert("68659404");
      Undly_103.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1540032166"); // 2
      Undly_103_set.insert("UnderlyingStateOrProvinceOfIssue_t_1540032166");
      Undly_103.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_650068651"); // 2
      Undly_103_set.insert("UnderlyingLocaleOfIssue_t_650068651");
      Undly_103.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1277317036"); // 2
      Undly_103_set.insert("UnderlyingRedemptionDate_t_1277317036");
      Undly_103.add_attribute("StrkPx", "16294720.610000"); // 2
      Undly_103_set.insert("16294720.610000");
      Undly_103.add_attribute("StrkCcy", "EUR"); // 2
      Undly_103_set.insert("EUR");
      Undly_103.add_attribute("OptA", "805497488"); // 2
      Undly_103_set.insert("805497488");
      Undly_103.add_attribute("Mult", "2313197.110000"); // 2
      Undly_103_set.insert("2313197.110000");
      Undly_103.add_attribute("MultTyp", "0"); // 2
      Undly_103_set.insert("0");
      Undly_103.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_103_set.insert("1");
      Undly_103.add_attribute("UOM", "lbs"); // 2
      Undly_103_set.insert("lbs");
      Undly_103.add_attribute("UOMQty", "20778506.580000"); // 2
      Undly_103_set.insert("20778506.580000");
      Undly_103.add_attribute("PxUOM", "USD"); // 2
      Undly_103_set.insert("USD");
      Undly_103.add_attribute("PxUOMQty", "1439585.790000"); // 2
      Undly_103_set.insert("1439585.790000");
      Undly_103.add_attribute("TmUnit", "Wk"); // 2
      Undly_103_set.insert("Wk");
      Undly_103.add_attribute("ExerStyle", "2"); // 2
      Undly_103_set.insert("2");
      Undly_103.add_attribute("CpnRt", "15361752.750000"); // 2
      Undly_103_set.insert("15361752.750000");
      Undly_103.add_attribute("Exch", "UnderlyingSecurityExchange_t_384706745"); // 2
      Undly_103_set.insert("UnderlyingSecurityExchange_t_384706745");
      Undly_103.add_attribute("Issr", "UnderlyingIssuer_t_467170786"); // 2
      Undly_103_set.insert("UnderlyingIssuer_t_467170786");
      Undly_103.add_attribute("EncUndIssrLen", "323548086"); // 2
      Undly_103_set.insert("323548086");
      Undly_103.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1955582808"); // 2
      Undly_103_set.insert("EncodedUnderlyingIssuer_t_1955582808");
      Undly_103.add_attribute("Desc", "UnderlyingSecurityDesc_t_273578317"); // 2
      Undly_103_set.insert("UnderlyingSecurityDesc_t_273578317");
      Undly_103.add_attribute("EncUndSecDescLen", "1070970922"); // 2
      Undly_103_set.insert("1070970922");
      Undly_103.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1365423749"); // 2
      Undly_103_set.insert("EncodedUnderlyingSecurityDesc_t_1365423749");
      Undly_103.add_attribute("CPPgm", "UnderlyingCPProgram_t_212977874"); // 2
      Undly_103_set.insert("UnderlyingCPProgram_t_212977874");
      Undly_103.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_292352984"); // 2
      Undly_103_set.insert("UnderlyingCPRegType_t_292352984");
      Undly_103.add_attribute("AllocPct", "3517837.630000"); // 2
      Undly_103_set.insert("3517837.630000");
      Undly_103.add_attribute("Ccy", "CAN"); // 2
      Undly_103_set.insert("CAN");
      Undly_103.add_attribute("Qty", "9674208.830000"); // 2
      Undly_103_set.insert("9674208.830000");
      Undly_103.add_attribute("SettlTyp", "2"); // 2
      Undly_103_set.insert("2");
      Undly_103.add_attribute("CashAmt", "UnderlyingCashAmount_t_368430205"); // 2
      Undly_103_set.insert("UnderlyingCashAmount_t_368430205");
      Undly_103.add_attribute("CashTyp", "FIXED"); // 2
      Undly_103_set.insert("FIXED");
      Undly_103.add_attribute("Px", "9742125.800000"); // 2
      Undly_103_set.insert("9742125.800000");
      Undly_103.add_attribute("DirtPx", "19979022.660000"); // 2
      Undly_103_set.insert("19979022.660000");
      Undly_103.add_attribute("EndPx", "17673509.840000"); // 2
      Undly_103_set.insert("17673509.840000");
      Undly_103.add_attribute("StartVal", "UnderlyingStartValue_t_1459876491"); // 2
      Undly_103_set.insert("UnderlyingStartValue_t_1459876491");
      Undly_103.add_attribute("CurVal", "UnderlyingCurrentValue_t_655916106"); // 2
      Undly_103_set.insert("UnderlyingCurrentValue_t_655916106");
      Undly_103.add_attribute("EndVal", "UnderlyingEndValue_t_1998670696"); // 2
      Undly_103_set.insert("UnderlyingEndValue_t_1998670696");
      Undly_103.add_attribute("AdjQty", "19268591.880000"); // 2
      Undly_103_set.insert("19268591.880000");
      Undly_103.add_attribute("FxRate", "18760284.680000"); // 2
      Undly_103_set.insert("18760284.680000");
      Undly_103.add_attribute("FxRateCalc", "D"); // 2
      Undly_103_set.insert("D");
      Undly_103.add_attribute("CapValu", "UnderlyingCapValue_t_1857226199"); // 2
      Undly_103_set.insert("UnderlyingCapValue_t_1857226199");
      Undly_103.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1116894480"); // 2
      Undly_103_set.insert("UnderlyingSettlMethod_t_1116894480");
      Undly_103.add_attribute("PutCall", "2075867862"); // 2
      Undly_103_set.insert("2075867862");
      all_values.push_back(Undly_103_set);
      all_compo_names.insert("Undly_103_set");

      {
        xml_element UndAID_103{"UndAID"};
        multiset<string> UndAID_103_set;
        UndAID_103.add_attribute("AltID", "UnderlyingSecurityAltID_t_1691585075"); // 3
        UndAID_103_set.insert("UnderlyingSecurityAltID_t_1691585075");
        UndAID_103.add_attribute("AltIDSrc", "G"); // 3
        UndAID_103_set.insert("G");
        all_values.push_back(UndAID_103_set);
        all_compo_names.insert("UndAID_103_set");

        Undly_103.add_element(UndAID_103);
      }
      {
        xml_element Stip_162{"Stip"};
        multiset<string> Stip_162_set;
        Stip_162.add_attribute("Typ", "STRUCT"); // 3
        Stip_162_set.insert("STRUCT");
        Stip_162.add_attribute("Val", "UnderlyingStipValue_t_2076291820"); // 3
        Stip_162_set.insert("UnderlyingStipValue_t_2076291820");
        all_values.push_back(Stip_162_set);
        all_compo_names.insert("Stip_162_set");

        Undly_103.add_element(Stip_162);
      }
      {
        xml_element Pty_378{"Pty"};
        multiset<string> Pty_378_set;
        Pty_378.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2114350137"); // 3
        Pty_378_set.insert("UnderlyingInstrumentPartyID_t_2114350137");
        Pty_378.add_attribute("Src", "E"); // 3
        Pty_378_set.insert("E");
        Pty_378.add_attribute("R", "82"); // 3
        Pty_378_set.insert("82");
        all_values.push_back(Pty_378_set);
        all_compo_names.insert("Pty_378_set");

        {
          xml_element Sub_378{"Sub"};
          multiset<string> Sub_378_set;
          Sub_378.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_240444806"); // 4
          Sub_378_set.insert("UnderlyingInstrumentPartySubID_t_240444806");
          Sub_378.add_attribute("Typ", "19"); // 4
          Sub_378_set.insert("19");
          all_values.push_back(Sub_378_set);
          all_compo_names.insert("Sub_378_set");

          Pty_378.add_element(Sub_378);
        }
        Undly_103.add_element(Pty_378);
      }
      SecL_0.add_element(Undly_103);
    }
    {
      xml_element Stip_163{"Stip"};
      multiset<string> Stip_163_set;
      Stip_163.add_attribute("Typ", "PURPOSE"); // 2
      Stip_163_set.insert("PURPOSE");
      Stip_163.add_attribute("Val", "StipulationValue_t_453422680"); // 2
      Stip_163_set.insert("StipulationValue_t_453422680");
      all_values.push_back(Stip_163_set);
      all_compo_names.insert("Stip_163_set");

      SecL_0.add_element(Stip_163);
    }
    {
      xml_element SecL_1{"SecL"};
      multiset<string> SecL_1_set;
      SecL_1.add_attribute("SwapTyp", "4"); // 2
      SecL_1_set.insert("4");
      SecL_1.add_attribute("SettlTyp", "1"); // 2
      SecL_1_set.insert("1");
      all_values.push_back(SecL_1_set);
      all_compo_names.insert("SecL_1_set");

      {
        xml_element Leg_88{"Leg"};
        multiset<string> Leg_88_set;
        Leg_88.add_attribute("Sym", "LegSymbol_t_81658820"); // 3
        Leg_88_set.insert("LegSymbol_t_81658820");
        Leg_88.add_attribute("Sfx", "WI"); // 3
        Leg_88_set.insert("WI");
        Leg_88.add_attribute("ID", "LegSecurityID_t_274052080"); // 3
        Leg_88_set.insert("LegSecurityID_t_274052080");
        Leg_88.add_attribute("Src", "9"); // 3
        Leg_88_set.insert("9");
        Leg_88.add_attribute("Prod", "6"); // 3
        Leg_88_set.insert("6");
        Leg_88.add_attribute("CFI", "LegCFICode_t_1891541614"); // 3
        Leg_88_set.insert("LegCFICode_t_1891541614");
        Leg_88.add_attribute("SecTyp", "CTB"); // 3
        Leg_88_set.insert("CTB");
        Leg_88.add_attribute("SecSubTyp", "LegSecuritySubType_t_51194696"); // 3
        Leg_88_set.insert("LegSecuritySubType_t_51194696");
        Leg_88.add_attribute("MMY", "1511408951"); // 3
        Leg_88_set.insert("1511408951");
        Leg_88.add_attribute("Mat", "LegMaturityDate_t_65159788"); // 3
        Leg_88_set.insert("LegMaturityDate_t_65159788");
        Leg_88.add_attribute("MatTm", "707110803"); // 3
        Leg_88_set.insert("707110803");
        Leg_88.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1362595999"); // 3
        Leg_88_set.insert("LegCouponPaymentDate_t_1362595999");
        Leg_88.add_attribute("Issued", "LegIssueDate_t_1992018976"); // 3
        Leg_88_set.insert("LegIssueDate_t_1992018976");
        Leg_88.add_attribute("RepoCollSecTyp", "435655623"); // 3
        Leg_88_set.insert("435655623");
        Leg_88.add_attribute("RepoTrm", "1147021634"); // 3
        Leg_88_set.insert("1147021634");
        Leg_88.add_attribute("RepoRt", "17017615.270000"); // 3
        Leg_88_set.insert("17017615.270000");
        Leg_88.add_attribute("Fctr", "15525501.030000"); // 3
        Leg_88_set.insert("15525501.030000");
        Leg_88.add_attribute("CrdRtg", "LegCreditRating_t_1075405849"); // 3
        Leg_88_set.insert("LegCreditRating_t_1075405849");
        Leg_88.add_attribute("Rgstry", "LegInstrRegistry_t_1245862955"); // 3
        Leg_88_set.insert("LegInstrRegistry_t_1245862955");
        Leg_88.add_attribute("Ctry", "1052245807"); // 3
        Leg_88_set.insert("1052245807");
        Leg_88.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_392481690"); // 3
        Leg_88_set.insert("LegStateOrProvinceOfIssue_t_392481690");
        Leg_88.add_attribute("Lcl", "LegLocaleOfIssue_t_1174671127"); // 3
        Leg_88_set.insert("LegLocaleOfIssue_t_1174671127");
        Leg_88.add_attribute("Redeem", "LegRedemptionDate_t_1019112296"); // 3
        Leg_88_set.insert("LegRedemptionDate_t_1019112296");
        Leg_88.add_attribute("Strk", "331056.180000"); // 3
        Leg_88_set.insert("331056.180000");
        Leg_88.add_attribute("StrkCcy", "CAN"); // 3
        Leg_88_set.insert("CAN");
        Leg_88.add_attribute("OptA", "744700468"); // 3
        Leg_88_set.insert("744700468");
        Leg_88.add_attribute("Cmult", "20139095.410000"); // 3
        Leg_88_set.insert("20139095.410000");
        Leg_88.add_attribute("MultTyp", "0"); // 3
        Leg_88_set.insert("0");
        Leg_88.add_attribute("FlowSchedTyp", "2"); // 3
        Leg_88_set.insert("2");
        Leg_88.add_attribute("UOM", "Bcf"); // 3
        Leg_88_set.insert("Bcf");
        Leg_88.add_attribute("UOMQty", "17946386.040000"); // 3
        Leg_88_set.insert("17946386.040000");
        Leg_88.add_attribute("PxUOM", "oz_tr"); // 3
        Leg_88_set.insert("oz_tr");
        Leg_88.add_attribute("PxUOMQty", "15945928.180000"); // 3
        Leg_88_set.insert("15945928.180000");
        Leg_88.add_attribute("TmUnit", "Wk"); // 3
        Leg_88_set.insert("Wk");
        Leg_88.add_attribute("ExerStyle", "0"); // 3
        Leg_88_set.insert("0");
        Leg_88.add_attribute("CpnRt", "13386507.850000"); // 3
        Leg_88_set.insert("13386507.850000");
        Leg_88.add_attribute("Exch", "LegSecurityExchange_t_178476265"); // 3
        Leg_88_set.insert("LegSecurityExchange_t_178476265");
        Leg_88.add_attribute("Issr", "LegIssuer_t_1832964951"); // 3
        Leg_88_set.insert("LegIssuer_t_1832964951");
        Leg_88.add_attribute("EncLegIssrLen", "702576088"); // 3
        Leg_88_set.insert("702576088");
        Leg_88.add_attribute("EncLegIssr", "EncodedLegIssuer_t_243636053"); // 3
        Leg_88_set.insert("EncodedLegIssuer_t_243636053");
        Leg_88.add_attribute("Desc", "LegSecurityDesc_t_392592106"); // 3
        Leg_88_set.insert("LegSecurityDesc_t_392592106");
        Leg_88.add_attribute("EncLegSecDescLen", "2065172087"); // 3
        Leg_88_set.insert("2065172087");
        Leg_88.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_88171381"); // 3
        Leg_88_set.insert("EncodedLegSecurityDesc_t_88171381");
        Leg_88.add_attribute("RatioQty", "8282477.290000"); // 3
        Leg_88_set.insert("8282477.290000");
        Leg_88.add_attribute("Side", "A"); // 3
        Leg_88_set.insert("A");
        Leg_88.add_attribute("Ccy", "GBP"); // 3
        Leg_88_set.insert("GBP");
        Leg_88.add_attribute("Pool", "LegPool_t_2140115922"); // 3
        Leg_88_set.insert("LegPool_t_2140115922");
        Leg_88.add_attribute("Dated", "LegDatedDate_t_888312216"); // 3
        Leg_88_set.insert("LegDatedDate_t_888312216");
        Leg_88.add_attribute("CSetMo", "1285559991"); // 3
        Leg_88_set.insert("1285559991");
        Leg_88.add_attribute("IntAcrl", "LegInterestAccrualDate_t_385113965"); // 3
        Leg_88_set.insert("LegInterestAccrualDate_t_385113965");
        Leg_88.add_attribute("PutCall", "2062983343"); // 3
        Leg_88_set.insert("2062983343");
        Leg_88.add_attribute("LegOptionRatio", "1571886.400000"); // 3
        Leg_88_set.insert("1571886.400000");
        Leg_88.add_attribute("Px", "4182195.830000"); // 3
        Leg_88_set.insert("4182195.830000");
        all_values.push_back(Leg_88_set);
        all_compo_names.insert("Leg_88_set");

        {
          xml_element LegAID_85{"LegAID"};
          multiset<string> LegAID_85_set;
          LegAID_85.add_attribute("SecAltID", "LegSecurityAltID_t_827078155"); // 4
          LegAID_85_set.insert("LegSecurityAltID_t_827078155");
          LegAID_85.add_attribute("SecAltIDSrc", "I"); // 4
          LegAID_85_set.insert("I");
          all_values.push_back(LegAID_85_set);
          all_compo_names.insert("LegAID_85_set");

          Leg_88.add_element(LegAID_85);
        }
        SecL_1.add_element(Leg_88);
      }
      {
        xml_element Stip_164{"Stip"};
        multiset<string> Stip_164_set;
        Stip_164.add_attribute("StipTyp", "SUBSLEFT"); // 3
        Stip_164_set.insert("SUBSLEFT");
        Stip_164.add_attribute("StipVal", "LegStipulationValue_t_693504049"); // 3
        Stip_164_set.insert("LegStipulationValue_t_693504049");
        all_values.push_back(Stip_164_set);
        all_compo_names.insert("Stip_164_set");

        SecL_1.add_element(Stip_164);
      }
      {
        xml_element BnchmkCurve_6{"BnchmkCurve"};
        multiset<string> BnchmkCurve_6_set;
        BnchmkCurve_6.add_attribute("Ccy", "CAN"); // 3
        BnchmkCurve_6_set.insert("CAN");
        BnchmkCurve_6.add_attribute("Name", "OTHER"); // 3
        BnchmkCurve_6_set.insert("OTHER");
        BnchmkCurve_6.add_attribute("Point", "LegBenchmarkCurvePoint_t_629396834"); // 3
        BnchmkCurve_6_set.insert("LegBenchmarkCurvePoint_t_629396834");
        BnchmkCurve_6.add_attribute("Px", "1975952.330000"); // 3
        BnchmkCurve_6_set.insert("1975952.330000");
        BnchmkCurve_6.add_attribute("PxTyp", "1461153958"); // 3
        BnchmkCurve_6_set.insert("1461153958");
        all_values.push_back(BnchmkCurve_6_set);
        all_compo_names.insert("BnchmkCurve_6_set");

        SecL_1.add_element(BnchmkCurve_6);
      }
      SecL_0.add_element(SecL_1);
    }
    {
      xml_element SprdBnchmkCurve_28{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_28_set;
      SprdBnchmkCurve_28.add_attribute("Spread", "551061.550000"); // 2
      SprdBnchmkCurve_28_set.insert("551061.550000");
      SprdBnchmkCurve_28.add_attribute("Ccy", "CHF"); // 2
      SprdBnchmkCurve_28_set.insert("CHF");
      SprdBnchmkCurve_28.add_attribute("Name", "Pfandbriefe"); // 2
      SprdBnchmkCurve_28_set.insert("Pfandbriefe");
      SprdBnchmkCurve_28.add_attribute("Point", "BenchmarkCurvePoint_t_1664846791"); // 2
      SprdBnchmkCurve_28_set.insert("BenchmarkCurvePoint_t_1664846791");
      SprdBnchmkCurve_28.add_attribute("Px", "13548971.830000"); // 2
      SprdBnchmkCurve_28_set.insert("13548971.830000");
      SprdBnchmkCurve_28.add_attribute("PxTyp", "6"); // 2
      SprdBnchmkCurve_28_set.insert("6");
      SprdBnchmkCurve_28.add_attribute("SecID", "BenchmarkSecurityID_t_2057438897"); // 2
      SprdBnchmkCurve_28_set.insert("BenchmarkSecurityID_t_2057438897");
      SprdBnchmkCurve_28.add_attribute("SecIDSrc", "1"); // 2
      SprdBnchmkCurve_28_set.insert("1");
      all_values.push_back(SprdBnchmkCurve_28_set);
      all_compo_names.insert("SprdBnchmkCurve_28_set");

      SecL_0.add_element(SprdBnchmkCurve_28);
    }
    {
      xml_element Yield_23{"Yield"};
      multiset<string> Yield_23_set;
      Yield_23.add_attribute("Typ", "INFLATION"); // 2
      Yield_23_set.insert("INFLATION");
      Yield_23.add_attribute("Yld", "7382029.780000"); // 2
      Yield_23_set.insert("7382029.780000");
      Yield_23.add_attribute("CalcDt", "YieldCalcDate_t_189812047"); // 2
      Yield_23_set.insert("YieldCalcDate_t_189812047");
      Yield_23.add_attribute("RedDt", "YieldRedemptionDate_t_207839115"); // 2
      Yield_23_set.insert("YieldRedemptionDate_t_207839115");
      Yield_23.add_attribute("RedPx", "9715171.620000"); // 2
      Yield_23_set.insert("9715171.620000");
      Yield_23.add_attribute("RedPxTyp", "14"); // 2
      Yield_23_set.insert("14");
      all_values.push_back(Yield_23_set);
      all_compo_names.insert("Yield_23_set");

      SecL_0.add_element(Yield_23);
    }
    elt.add_element(SecL_0);
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
