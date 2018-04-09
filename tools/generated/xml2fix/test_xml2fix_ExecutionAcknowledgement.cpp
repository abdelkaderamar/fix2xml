#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ExecutionAcknowledgement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ExecutionAcknowledgement_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ExecAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionAcknowledgement_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_12337238"); // 0
  ExecutionAcknowledgement_message_t_0.insert("OrderID_t_12337238");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_237563928"); // 0
  ExecutionAcknowledgement_message_t_0.insert("SecondaryOrderID_t_237563928");
  elt.add_attribute("ID", "ClOrdID_t_321126202"); // 0
  ExecutionAcknowledgement_message_t_0.insert("ClOrdID_t_321126202");
  elt.add_attribute("ExecAckStat", "0"); // 0
  ExecutionAcknowledgement_message_t_0.insert("0");
  elt.add_attribute("ExecID", "ExecID_t_1447003061"); // 0
  ExecutionAcknowledgement_message_t_0.insert("ExecID_t_1447003061");
  elt.add_attribute("DkRsn", "C"); // 0
  ExecutionAcknowledgement_message_t_0.insert("C");
  elt.add_attribute("Side", "G"); // 0
  ExecutionAcknowledgement_message_t_0.insert("G");
  elt.add_attribute("LastQty", "13320577.260000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("13320577.260000");
  elt.add_attribute("LastPx", "8033674.840000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("8033674.840000");
  elt.add_attribute("PxTyp", "16"); // 0
  ExecutionAcknowledgement_message_t_0.insert("16");
  elt.add_attribute("LastParPx", "18465092.890000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("18465092.890000");
  elt.add_attribute("CumQty", "20669074.280000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("20669074.280000");
  elt.add_attribute("AvgPx", "18252299.320000"); // 0
  ExecutionAcknowledgement_message_t_0.insert("18252299.320000");
  elt.add_attribute("Txt", "Text_t_1165947679"); // 0
  ExecutionAcknowledgement_message_t_0.insert("Text_t_1165947679");
  elt.add_attribute("EncTxtLen", "50215865"); // 0
  ExecutionAcknowledgement_message_t_0.insert("50215865");
  elt.add_attribute("EncTxt", "EncodedText_t_70255220"); // 0
  ExecutionAcknowledgement_message_t_0.insert("EncodedText_t_70255220");
  all_values.push_back(ExecutionAcknowledgement_message_t_0);
  all_compo_names.insert("ExecutionAcknowledgement_message_t");

  { // Hdr
    xml_element Hdr_31{"Hdr"};
    multiset<string> Hdr_31_set;
    Hdr_31.add_attribute("SeqNum", "115640401"); // 1
    Hdr_31_set.insert("115640401");
    Hdr_31.add_attribute("SID", "SenderCompID_t_1930401517"); // 1
    Hdr_31_set.insert("SenderCompID_t_1930401517");
    Hdr_31.add_attribute("TID", "TargetCompID_t_848828519"); // 1
    Hdr_31_set.insert("TargetCompID_t_848828519");
    Hdr_31.add_attribute("OBID", "OnBehalfOfCompID_t_964896692"); // 1
    Hdr_31_set.insert("OnBehalfOfCompID_t_964896692");
    Hdr_31.add_attribute("D2ID", "DeliverToCompID_t_1925568691"); // 1
    Hdr_31_set.insert("DeliverToCompID_t_1925568691");
    Hdr_31.add_attribute("SSub", "SenderSubID_t_717242015"); // 1
    Hdr_31_set.insert("SenderSubID_t_717242015");
    Hdr_31.add_attribute("SLoc", "SenderLocationID_t_148145683"); // 1
    Hdr_31_set.insert("SenderLocationID_t_148145683");
    Hdr_31.add_attribute("TSub", "TargetSubID_t_1508713116"); // 1
    Hdr_31_set.insert("TargetSubID_t_1508713116");
    Hdr_31.add_attribute("TLoc", "TargetLocationID_t_1468865630"); // 1
    Hdr_31_set.insert("TargetLocationID_t_1468865630");
    Hdr_31.add_attribute("OBSub", "OnBehalfOfSubID_t_957300795"); // 1
    Hdr_31_set.insert("OnBehalfOfSubID_t_957300795");
    Hdr_31.add_attribute("OBLoc", "OnBehalfOfLocationID_t_432926523"); // 1
    Hdr_31_set.insert("OnBehalfOfLocationID_t_432926523");
    Hdr_31.add_attribute("D2Sub", "DeliverToSubID_t_1145579142"); // 1
    Hdr_31_set.insert("DeliverToSubID_t_1145579142");
    Hdr_31.add_attribute("D2Loc", "DeliverToLocationID_t_274252478"); // 1
    Hdr_31_set.insert("DeliverToLocationID_t_274252478");
    Hdr_31.add_attribute("PosDup", "Y"); // 1
    Hdr_31_set.insert("Y");
    Hdr_31.add_attribute("PosRsnd", "N"); // 1
    Hdr_31_set.insert("N");
    Hdr_31.add_attribute("Snt", "SendingTime_t_286589717"); // 1
    Hdr_31_set.insert("SendingTime_t_286589717");
    Hdr_31.add_attribute("OrigSnt", "OrigSendingTime_t_1367298103"); // 1
    Hdr_31_set.insert("OrigSendingTime_t_1367298103");
    Hdr_31.add_attribute("MsgEncd", "MessageEncoding_t_1359069784"); // 1
    Hdr_31_set.insert("MessageEncoding_t_1359069784");
    all_values.push_back(Hdr_31_set);
    all_compo_names.insert("Hdr_31_set");

    {
      xml_element Hop_31{"Hop"};
      multiset<string> Hop_31_set;
      Hop_31.add_attribute("ID", "HopCompID_t_1056540503"); // 2
      Hop_31_set.insert("HopCompID_t_1056540503");
      Hop_31.add_attribute("Ref", "666817516"); // 2
      Hop_31_set.insert("666817516");
      Hop_31.add_attribute("Snt", "HopSendingTime_t_1644249870"); // 2
      Hop_31_set.insert("HopSendingTime_t_1644249870");
      all_values.push_back(Hop_31_set);
      all_compo_names.insert("Hop_31_set");

      Hdr_31.add_element(Hop_31);
    }
    elt.add_element(Hdr_31);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_23{"Instrmt"};
    multiset<string> Instrmt_23_set;
    Instrmt_23.add_attribute("Sym", "Symbol_t_1250317814"); // 1
    Instrmt_23_set.insert("Symbol_t_1250317814");
    Instrmt_23.add_attribute("Sfx", "WI"); // 1
    Instrmt_23_set.insert("WI");
    Instrmt_23.add_attribute("ID", "SecurityID_t_300133706"); // 1
    Instrmt_23_set.insert("SecurityID_t_300133706");
    Instrmt_23.add_attribute("Src", "9"); // 1
    Instrmt_23_set.insert("9");
    Instrmt_23.add_attribute("Prod", "13"); // 1
    Instrmt_23_set.insert("13");
    Instrmt_23.add_attribute("ProdCmplx", "ProductComplex_t_219557486"); // 1
    Instrmt_23_set.insert("ProductComplex_t_219557486");
    Instrmt_23.add_attribute("SecGrp", "SecurityGroup_t_1368977658"); // 1
    Instrmt_23_set.insert("SecurityGroup_t_1368977658");
    Instrmt_23.add_attribute("CFI", "CFICode_t_716364915"); // 1
    Instrmt_23_set.insert("CFICode_t_716364915");
    Instrmt_23.add_attribute("SecTyp", "IRS"); // 1
    Instrmt_23_set.insert("IRS");
    Instrmt_23.add_attribute("SubTyp", "SecuritySubType_t_1439232879"); // 1
    Instrmt_23_set.insert("SecuritySubType_t_1439232879");
    Instrmt_23.add_attribute("MMY", "832005316"); // 1
    Instrmt_23_set.insert("832005316");
    Instrmt_23.add_attribute("MatDt", "MaturityDate_t_52691221"); // 1
    Instrmt_23_set.insert("MaturityDate_t_52691221");
    Instrmt_23.add_attribute("MatTm", "140577750"); // 1
    Instrmt_23_set.insert("140577750");
    Instrmt_23.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1796902009"); // 1
    Instrmt_23_set.insert("SettleOnOpenFlag_t_1796902009");
    Instrmt_23.add_attribute("AsgnMeth", "1978259912"); // 1
    Instrmt_23_set.insert("1978259912");
    Instrmt_23.add_attribute("Status", "2"); // 1
    Instrmt_23_set.insert("2");
    Instrmt_23.add_attribute("CpnPmt", "CouponPaymentDate_t_1945047692"); // 1
    Instrmt_23_set.insert("CouponPaymentDate_t_1945047692");
    Instrmt_23.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_23_set.insert("FR");
    Instrmt_23.add_attribute("Snrty", "SB"); // 1
    Instrmt_23_set.insert("SB");
    Instrmt_23.add_attribute("NotlPctOut", "7548648.400000"); // 1
    Instrmt_23_set.insert("7548648.400000");
    Instrmt_23.add_attribute("OrigNotlPctOut", "17724159.040000"); // 1
    Instrmt_23_set.insert("17724159.040000");
    Instrmt_23.add_attribute("AttchPnt", "13247808.890000"); // 1
    Instrmt_23_set.insert("13247808.890000");
    Instrmt_23.add_attribute("DetchPnt", "10291173.180000"); // 1
    Instrmt_23_set.insert("10291173.180000");
    Instrmt_23.add_attribute("Issued", "IssueDate_t_754666431"); // 1
    Instrmt_23_set.insert("IssueDate_t_754666431");
    Instrmt_23.add_attribute("RepoCollSecTyp", "215240823"); // 1
    Instrmt_23_set.insert("215240823");
    Instrmt_23.add_attribute("RepoTrm", "1315707035"); // 1
    Instrmt_23_set.insert("1315707035");
    Instrmt_23.add_attribute("RepoRt", "21219645.350000"); // 1
    Instrmt_23_set.insert("21219645.350000");
    Instrmt_23.add_attribute("Fctr", "15743106.080000"); // 1
    Instrmt_23_set.insert("15743106.080000");
    Instrmt_23.add_attribute("CrdRtg", "CreditRating_t_224763890"); // 1
    Instrmt_23_set.insert("CreditRating_t_224763890");
    Instrmt_23.add_attribute("Rgstry", "InstrRegistry_t_641298403"); // 1
    Instrmt_23_set.insert("InstrRegistry_t_641298403");
    Instrmt_23.add_attribute("IssuCtry", "1071076830"); // 1
    Instrmt_23_set.insert("1071076830");
    Instrmt_23.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1475081704"); // 1
    Instrmt_23_set.insert("StateOrProvinceOfIssue_t_1475081704");
    Instrmt_23.add_attribute("Lcl", "LocaleOfIssue_t_492689998"); // 1
    Instrmt_23_set.insert("LocaleOfIssue_t_492689998");
    Instrmt_23.add_attribute("Redeem", "RedemptionDate_t_1371210537"); // 1
    Instrmt_23_set.insert("RedemptionDate_t_1371210537");
    Instrmt_23.add_attribute("StrkPx", "10188294.310000"); // 1
    Instrmt_23_set.insert("10188294.310000");
    Instrmt_23.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_23_set.insert("CAN");
    Instrmt_23.add_attribute("StrkMult", "2403234.410000"); // 1
    Instrmt_23_set.insert("2403234.410000");
    Instrmt_23.add_attribute("StrkValu", "7594721.490000"); // 1
    Instrmt_23_set.insert("7594721.490000");
    Instrmt_23.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_23_set.insert("4");
    Instrmt_23.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_23_set.insert("1");
    Instrmt_23.add_attribute("StrkPxBndryPrcsn", "15914774.660000"); // 1
    Instrmt_23_set.insert("15914774.660000");
    Instrmt_23.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_23_set.insert("1");
    Instrmt_23.add_attribute("OptAt", "1820134070"); // 1
    Instrmt_23_set.insert("1820134070");
    Instrmt_23.add_attribute("Mult", "12408958.270000"); // 1
    Instrmt_23_set.insert("12408958.270000");
    Instrmt_23.add_attribute("MultTyp", "0"); // 1
    Instrmt_23_set.insert("0");
    Instrmt_23.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_23_set.insert("2");
    Instrmt_23.add_attribute("MinPxIncr", "10384598.710000"); // 1
    Instrmt_23_set.insert("10384598.710000");
    Instrmt_23.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_936014593"); // 1
    Instrmt_23_set.insert("MinPriceIncrementAmount_t_936014593");
    Instrmt_23.add_attribute("UOM", "Bcf"); // 1
    Instrmt_23_set.insert("Bcf");
    Instrmt_23.add_attribute("UOMQty", "17933247.110000"); // 1
    Instrmt_23_set.insert("17933247.110000");
    Instrmt_23.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_23_set.insert("oz_tr");
    Instrmt_23.add_attribute("PxUOMQty", "20344528.230000"); // 1
    Instrmt_23_set.insert("20344528.230000");
    Instrmt_23.add_attribute("SettlMeth", "C"); // 1
    Instrmt_23_set.insert("C");
    Instrmt_23.add_attribute("ExerStyle", "1"); // 1
    Instrmt_23_set.insert("1");
    Instrmt_23.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_23_set.insert("3");
    Instrmt_23.add_attribute("OptPayAmt", "OptPayoutAmount_t_1990665417"); // 1
    Instrmt_23_set.insert("OptPayoutAmount_t_1990665417");
    Instrmt_23.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_23_set.insert("STD");
    Instrmt_23.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_23_set.insert("FUTDA");
    Instrmt_23.add_attribute("ListMeth", "0"); // 1
    Instrmt_23_set.insert("0");
    Instrmt_23.add_attribute("CapPx", "19313925.710000"); // 1
    Instrmt_23_set.insert("19313925.710000");
    Instrmt_23.add_attribute("FlrPx", "6001137.890000"); // 1
    Instrmt_23_set.insert("6001137.890000");
    Instrmt_23.add_attribute("PutCall", "0"); // 1
    Instrmt_23_set.insert("0");
    Instrmt_23.add_attribute("FlexInd", "true"); // 1
    Instrmt_23_set.insert("true");
    Instrmt_23.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_23_set.insert("true");
    Instrmt_23.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_23_set.insert("Yr");
    Instrmt_23.add_attribute("CpnRt", "3197061.560000"); // 1
    Instrmt_23_set.insert("3197061.560000");
    Instrmt_23.add_attribute("Exch", "SecurityExchange_t_1414608702"); // 1
    Instrmt_23_set.insert("SecurityExchange_t_1414608702");
    Instrmt_23.add_attribute("PosLmt", "654696589"); // 1
    Instrmt_23_set.insert("654696589");
    Instrmt_23.add_attribute("NTPosLmt", "1079178306"); // 1
    Instrmt_23_set.insert("1079178306");
    Instrmt_23.add_attribute("Issr", "Issuer_t_1127666429"); // 1
    Instrmt_23_set.insert("Issuer_t_1127666429");
    Instrmt_23.add_attribute("EncIssrLen", "186769261"); // 1
    Instrmt_23_set.insert("186769261");
    Instrmt_23.add_attribute("EncIssr", "EncodedIssuer_t_523172124"); // 1
    Instrmt_23_set.insert("EncodedIssuer_t_523172124");
    Instrmt_23.add_attribute("Desc", "SecurityDesc_t_893415378"); // 1
    Instrmt_23_set.insert("SecurityDesc_t_893415378");
    Instrmt_23.add_attribute("EncSecDescLen", "2006903332"); // 1
    Instrmt_23_set.insert("2006903332");
    Instrmt_23.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1764067951"); // 1
    Instrmt_23_set.insert("EncodedSecurityDesc_t_1764067951");
    Instrmt_23.add_attribute("Pool", "Pool_t_489940591"); // 1
    Instrmt_23_set.insert("Pool_t_489940591");
    Instrmt_23.add_attribute("CSetMo", "389889871"); // 1
    Instrmt_23_set.insert("389889871");
    Instrmt_23.add_attribute("CPPgm", "1"); // 1
    Instrmt_23_set.insert("1");
    Instrmt_23.add_attribute("CPRegT", "CPRegType_t_1425955184"); // 1
    Instrmt_23_set.insert("CPRegType_t_1425955184");
    Instrmt_23.add_attribute("Dated", "DatedDate_t_1099561806"); // 1
    Instrmt_23_set.insert("DatedDate_t_1099561806");
    Instrmt_23.add_attribute("IntAcrl", "InterestAccrualDate_t_300885238"); // 1
    Instrmt_23_set.insert("InterestAccrualDate_t_300885238");
    all_values.push_back(Instrmt_23_set);
    all_compo_names.insert("Instrmt_23_set");

    {
      xml_element AID_26{"AID"};
      multiset<string> AID_26_set;
      AID_26.add_attribute("AltID", "SecurityAltID_t_1986902034"); // 2
      AID_26_set.insert("SecurityAltID_t_1986902034");
      AID_26.add_attribute("AltIDSrc", "8"); // 2
      AID_26_set.insert("8");
      all_values.push_back(AID_26_set);
      all_compo_names.insert("AID_26_set");

      Instrmt_23.add_element(AID_26);
    }
    {
      xml_element SecXML_26{"SecXML"};
      multiset<string> SecXML_26_set;
      SecXML_26.add_attribute("Schema", "SecurityXMLSchema_t_975843620"); // 2
      SecXML_26_set.insert("SecurityXMLSchema_t_975843620");
      all_values.push_back(SecXML_26_set);
      all_compo_names.insert("SecXML_26_set");

      Instrmt_23.add_element(SecXML_26);
    }
    {
      xml_element Evnt_26{"Evnt"};
      multiset<string> Evnt_26_set;
      Evnt_26.add_attribute("EventTyp", "7"); // 2
      Evnt_26_set.insert("7");
      Evnt_26.add_attribute("Dt", "EventDate_t_1088740980"); // 2
      Evnt_26_set.insert("EventDate_t_1088740980");
      Evnt_26.add_attribute("Tm", "EventTime_t_819025389"); // 2
      Evnt_26_set.insert("EventTime_t_819025389");
      Evnt_26.add_attribute("Px", "2976421.870000"); // 2
      Evnt_26_set.insert("2976421.870000");
      Evnt_26.add_attribute("Txt", "EventText_t_617777939"); // 2
      Evnt_26_set.insert("EventText_t_617777939");
      all_values.push_back(Evnt_26_set);
      all_compo_names.insert("Evnt_26_set");

      Instrmt_23.add_element(Evnt_26);
    }
    {
      xml_element Pty_137{"Pty"};
      multiset<string> Pty_137_set;
      Pty_137.add_attribute("ID", "InstrumentPartyID_t_886971049"); // 2
      Pty_137_set.insert("InstrumentPartyID_t_886971049");
      Pty_137.add_attribute("Src", "5"); // 2
      Pty_137_set.insert("5");
      Pty_137.add_attribute("R", "14"); // 2
      Pty_137_set.insert("14");
      all_values.push_back(Pty_137_set);
      all_compo_names.insert("Pty_137_set");

      {
        xml_element Sub_137{"Sub"};
        multiset<string> Sub_137_set;
        Sub_137.add_attribute("ID", "InstrumentPartySubID_t_282514766"); // 3
        Sub_137_set.insert("InstrumentPartySubID_t_282514766");
        Sub_137.add_attribute("Typ", "18"); // 3
        Sub_137_set.insert("18");
        all_values.push_back(Sub_137_set);
        all_compo_names.insert("Sub_137_set");

        Pty_137.add_element(Sub_137);
      }
      Instrmt_23.add_element(Pty_137);
    }
    {
      xml_element CmplxEvnt_23{"CmplxEvnt"};
      multiset<string> CmplxEvnt_23_set;
      CmplxEvnt_23.add_attribute("Typ", "3"); // 2
      CmplxEvnt_23_set.insert("3");
      CmplxEvnt_23.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_696887913"); // 2
      CmplxEvnt_23_set.insert("ComplexOptPayoutAmount_t_696887913");
      CmplxEvnt_23.add_attribute("Px", "6778561.890000"); // 2
      CmplxEvnt_23_set.insert("6778561.890000");
      CmplxEvnt_23.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_23_set.insert("2");
      CmplxEvnt_23.add_attribute("PxBndryPrcsn", "13515845.020000"); // 2
      CmplxEvnt_23_set.insert("13515845.020000");
      CmplxEvnt_23.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_23_set.insert("1");
      CmplxEvnt_23.add_attribute("Cond", "2"); // 2
      CmplxEvnt_23_set.insert("2");
      all_values.push_back(CmplxEvnt_23_set);
      all_compo_names.insert("CmplxEvnt_23_set");

      {
        xml_element EvntDts_23{"EvntDts"};
        multiset<string> EvntDts_23_set;
        EvntDts_23.add_attribute("StartDt", "ComplexEventStartDate_t_1538353764"); // 3
        EvntDts_23_set.insert("ComplexEventStartDate_t_1538353764");
        EvntDts_23.add_attribute("EndDt", "ComplexEventEndDate_t_132722971"); // 3
        EvntDts_23_set.insert("ComplexEventEndDate_t_132722971");
        all_values.push_back(EvntDts_23_set);
        all_compo_names.insert("EvntDts_23_set");

        {
          xml_element EvntTms_23{"EvntTms"};
          multiset<string> EvntTms_23_set;
          EvntTms_23.add_attribute("StartTm", "182455621"); // 4
          EvntTms_23_set.insert("182455621");
          EvntTms_23.add_attribute("EndTm", "1397773448"); // 4
          EvntTms_23_set.insert("1397773448");
          all_values.push_back(EvntTms_23_set);
          all_compo_names.insert("EvntTms_23_set");

          EvntDts_23.add_element(EvntTms_23);
        }
        CmplxEvnt_23.add_element(EvntDts_23);
      }
      Instrmt_23.add_element(CmplxEvnt_23);
    }
    elt.add_element(Instrmt_23);
  } // end Instrmt
  { // Undly
    xml_element Undly_30{"Undly"};
    multiset<string> Undly_30_set;
    Undly_30.add_attribute("Sym", "UnderlyingSymbol_t_672396212"); // 1
    Undly_30_set.insert("UnderlyingSymbol_t_672396212");
    Undly_30.add_attribute("Sfx", "WI"); // 1
    Undly_30_set.insert("WI");
    Undly_30.add_attribute("ID", "UnderlyingSecurityID_t_404351448"); // 1
    Undly_30_set.insert("UnderlyingSecurityID_t_404351448");
    Undly_30.add_attribute("Src", "K"); // 1
    Undly_30_set.insert("K");
    Undly_30.add_attribute("Prod", "4"); // 1
    Undly_30_set.insert("4");
    Undly_30.add_attribute("CFI", "UnderlyingCFICode_t_705236686"); // 1
    Undly_30_set.insert("UnderlyingCFICode_t_705236686");
    Undly_30.add_attribute("SecTyp", "OOP"); // 1
    Undly_30_set.insert("OOP");
    Undly_30.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1726272459"); // 1
    Undly_30_set.insert("UnderlyingSecuritySubType_t_1726272459");
    Undly_30.add_attribute("MMY", "1681080306"); // 1
    Undly_30_set.insert("1681080306");
    Undly_30.add_attribute("Mat", "UnderlyingMaturityDate_t_945317801"); // 1
    Undly_30_set.insert("UnderlyingMaturityDate_t_945317801");
    Undly_30.add_attribute("MatTm", "667529791"); // 1
    Undly_30_set.insert("667529791");
    Undly_30.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_352622048"); // 1
    Undly_30_set.insert("UnderlyingCouponPaymentDate_t_352622048");
    Undly_30.add_attribute("RestrctTyp", "FR"); // 1
    Undly_30_set.insert("FR");
    Undly_30.add_attribute("Snrty", "SR"); // 1
    Undly_30_set.insert("SR");
    Undly_30.add_attribute("NotlPctOut", "12395930.970000"); // 1
    Undly_30_set.insert("12395930.970000");
    Undly_30.add_attribute("OrigNotlPctOut", "13245110.990000"); // 1
    Undly_30_set.insert("13245110.990000");
    Undly_30.add_attribute("AttchPnt", "3557158.120000"); // 1
    Undly_30_set.insert("3557158.120000");
    Undly_30.add_attribute("DetchPnt", "15221078.630000"); // 1
    Undly_30_set.insert("15221078.630000");
    Undly_30.add_attribute("Issued", "UnderlyingIssueDate_t_1682661131"); // 1
    Undly_30_set.insert("UnderlyingIssueDate_t_1682661131");
    Undly_30.add_attribute("RepoCollSecTyp", "1397448219"); // 1
    Undly_30_set.insert("1397448219");
    Undly_30.add_attribute("RepoTrm", "71512129"); // 1
    Undly_30_set.insert("71512129");
    Undly_30.add_attribute("RepoRt", "2130336.720000"); // 1
    Undly_30_set.insert("2130336.720000");
    Undly_30.add_attribute("Fctr", "17063056.810000"); // 1
    Undly_30_set.insert("17063056.810000");
    Undly_30.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1423096631"); // 1
    Undly_30_set.insert("UnderlyingCreditRating_t_1423096631");
    Undly_30.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1970068167"); // 1
    Undly_30_set.insert("UnderlyingInstrRegistry_t_1970068167");
    Undly_30.add_attribute("Ctry", "995345924"); // 1
    Undly_30_set.insert("995345924");
    Undly_30.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_813966747"); // 1
    Undly_30_set.insert("UnderlyingStateOrProvinceOfIssue_t_813966747");
    Undly_30.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2102791138"); // 1
    Undly_30_set.insert("UnderlyingLocaleOfIssue_t_2102791138");
    Undly_30.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1177801545"); // 1
    Undly_30_set.insert("UnderlyingRedemptionDate_t_1177801545");
    Undly_30.add_attribute("StrkPx", "642565.470000"); // 1
    Undly_30_set.insert("642565.470000");
    Undly_30.add_attribute("StrkCcy", "CAN"); // 1
    Undly_30_set.insert("CAN");
    Undly_30.add_attribute("OptA", "1851919867"); // 1
    Undly_30_set.insert("1851919867");
    Undly_30.add_attribute("Mult", "1089662.130000"); // 1
    Undly_30_set.insert("1089662.130000");
    Undly_30.add_attribute("MultTyp", "1"); // 1
    Undly_30_set.insert("1");
    Undly_30.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_30_set.insert("1");
    Undly_30.add_attribute("UOM", "Gal"); // 1
    Undly_30_set.insert("Gal");
    Undly_30.add_attribute("UOMQty", "15913516.400000"); // 1
    Undly_30_set.insert("15913516.400000");
    Undly_30.add_attribute("PxUOM", "tn"); // 1
    Undly_30_set.insert("tn");
    Undly_30.add_attribute("PxUOMQty", "3477995.580000"); // 1
    Undly_30_set.insert("3477995.580000");
    Undly_30.add_attribute("TmUnit", "D"); // 1
    Undly_30_set.insert("D");
    Undly_30.add_attribute("ExerStyle", "0"); // 1
    Undly_30_set.insert("0");
    Undly_30.add_attribute("CpnRt", "7004216.060000"); // 1
    Undly_30_set.insert("7004216.060000");
    Undly_30.add_attribute("Exch", "UnderlyingSecurityExchange_t_1632145782"); // 1
    Undly_30_set.insert("UnderlyingSecurityExchange_t_1632145782");
    Undly_30.add_attribute("Issr", "UnderlyingIssuer_t_1975804030"); // 1
    Undly_30_set.insert("UnderlyingIssuer_t_1975804030");
    Undly_30.add_attribute("EncUndIssrLen", "1940014703"); // 1
    Undly_30_set.insert("1940014703");
    Undly_30.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_809173233"); // 1
    Undly_30_set.insert("EncodedUnderlyingIssuer_t_809173233");
    Undly_30.add_attribute("Desc", "UnderlyingSecurityDesc_t_184036194"); // 1
    Undly_30_set.insert("UnderlyingSecurityDesc_t_184036194");
    Undly_30.add_attribute("EncUndSecDescLen", "1314638919"); // 1
    Undly_30_set.insert("1314638919");
    Undly_30.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_344350716"); // 1
    Undly_30_set.insert("EncodedUnderlyingSecurityDesc_t_344350716");
    Undly_30.add_attribute("CPPgm", "UnderlyingCPProgram_t_1581484413"); // 1
    Undly_30_set.insert("UnderlyingCPProgram_t_1581484413");
    Undly_30.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1386151048"); // 1
    Undly_30_set.insert("UnderlyingCPRegType_t_1386151048");
    Undly_30.add_attribute("AllocPct", "5573843.890000"); // 1
    Undly_30_set.insert("5573843.890000");
    Undly_30.add_attribute("Ccy", "EUR"); // 1
    Undly_30_set.insert("EUR");
    Undly_30.add_attribute("Qty", "3799689.080000"); // 1
    Undly_30_set.insert("3799689.080000");
    Undly_30.add_attribute("SettlTyp", "4"); // 1
    Undly_30_set.insert("4");
    Undly_30.add_attribute("CashAmt", "UnderlyingCashAmount_t_1475730779"); // 1
    Undly_30_set.insert("UnderlyingCashAmount_t_1475730779");
    Undly_30.add_attribute("CashTyp", "DIFF"); // 1
    Undly_30_set.insert("DIFF");
    Undly_30.add_attribute("Px", "11659702.670000"); // 1
    Undly_30_set.insert("11659702.670000");
    Undly_30.add_attribute("DirtPx", "15399873.260000"); // 1
    Undly_30_set.insert("15399873.260000");
    Undly_30.add_attribute("EndPx", "398911.630000"); // 1
    Undly_30_set.insert("398911.630000");
    Undly_30.add_attribute("StartVal", "UnderlyingStartValue_t_868684376"); // 1
    Undly_30_set.insert("UnderlyingStartValue_t_868684376");
    Undly_30.add_attribute("CurVal", "UnderlyingCurrentValue_t_1244423545"); // 1
    Undly_30_set.insert("UnderlyingCurrentValue_t_1244423545");
    Undly_30.add_attribute("EndVal", "UnderlyingEndValue_t_148857376"); // 1
    Undly_30_set.insert("UnderlyingEndValue_t_148857376");
    Undly_30.add_attribute("AdjQty", "5222662.340000"); // 1
    Undly_30_set.insert("5222662.340000");
    Undly_30.add_attribute("FxRate", "16886012.420000"); // 1
    Undly_30_set.insert("16886012.420000");
    Undly_30.add_attribute("FxRateCalc", "M"); // 1
    Undly_30_set.insert("M");
    Undly_30.add_attribute("CapValu", "UnderlyingCapValue_t_2113617874"); // 1
    Undly_30_set.insert("UnderlyingCapValue_t_2113617874");
    Undly_30.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1711567749"); // 1
    Undly_30_set.insert("UnderlyingSettlMethod_t_1711567749");
    Undly_30.add_attribute("PutCall", "1310859834"); // 1
    Undly_30_set.insert("1310859834");
    all_values.push_back(Undly_30_set);
    all_compo_names.insert("Undly_30_set");

    {
      xml_element UndAID_30{"UndAID"};
      multiset<string> UndAID_30_set;
      UndAID_30.add_attribute("AltID", "UnderlyingSecurityAltID_t_355320019"); // 2
      UndAID_30_set.insert("UnderlyingSecurityAltID_t_355320019");
      UndAID_30.add_attribute("AltIDSrc", "9"); // 2
      UndAID_30_set.insert("9");
      all_values.push_back(UndAID_30_set);
      all_compo_names.insert("UndAID_30_set");

      Undly_30.add_element(UndAID_30);
    }
    {
      xml_element Stip_51{"Stip"};
      multiset<string> Stip_51_set;
      Stip_51.add_attribute("Typ", "ABS"); // 2
      Stip_51_set.insert("ABS");
      Stip_51.add_attribute("Val", "UnderlyingStipValue_t_1987465801"); // 2
      Stip_51_set.insert("UnderlyingStipValue_t_1987465801");
      all_values.push_back(Stip_51_set);
      all_compo_names.insert("Stip_51_set");

      Undly_30.add_element(Stip_51);
    }
    {
      xml_element Pty_138{"Pty"};
      multiset<string> Pty_138_set;
      Pty_138.add_attribute("ID", "UnderlyingInstrumentPartyID_t_82900782"); // 2
      Pty_138_set.insert("UnderlyingInstrumentPartyID_t_82900782");
      Pty_138.add_attribute("Src", "6"); // 2
      Pty_138_set.insert("6");
      Pty_138.add_attribute("R", "34"); // 2
      Pty_138_set.insert("34");
      all_values.push_back(Pty_138_set);
      all_compo_names.insert("Pty_138_set");

      {
        xml_element Sub_138{"Sub"};
        multiset<string> Sub_138_set;
        Sub_138.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_266936976"); // 3
        Sub_138_set.insert("UnderlyingInstrumentPartySubID_t_266936976");
        Sub_138.add_attribute("Typ", "5"); // 3
        Sub_138_set.insert("5");
        all_values.push_back(Sub_138_set);
        all_compo_names.insert("Sub_138_set");

        Pty_138.add_element(Sub_138);
      }
      Undly_30.add_element(Pty_138);
    }
    elt.add_element(Undly_30);
  } // end Undly
  { // Undly
    xml_element Undly_31{"Undly"};
    multiset<string> Undly_31_set;
    Undly_31.add_attribute("Sym", "UnderlyingSymbol_t_993506103"); // 1
    Undly_31_set.insert("UnderlyingSymbol_t_993506103");
    Undly_31.add_attribute("Sfx", "CD"); // 1
    Undly_31_set.insert("CD");
    Undly_31.add_attribute("ID", "UnderlyingSecurityID_t_209635166"); // 1
    Undly_31_set.insert("UnderlyingSecurityID_t_209635166");
    Undly_31.add_attribute("Src", "9"); // 1
    Undly_31_set.insert("9");
    Undly_31.add_attribute("Prod", "2"); // 1
    Undly_31_set.insert("2");
    Undly_31.add_attribute("CFI", "UnderlyingCFICode_t_871399198"); // 1
    Undly_31_set.insert("UnderlyingCFICode_t_871399198");
    Undly_31.add_attribute("SecTyp", "FADN"); // 1
    Undly_31_set.insert("FADN");
    Undly_31.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_829412911"); // 1
    Undly_31_set.insert("UnderlyingSecuritySubType_t_829412911");
    Undly_31.add_attribute("MMY", "199646329"); // 1
    Undly_31_set.insert("199646329");
    Undly_31.add_attribute("Mat", "UnderlyingMaturityDate_t_118652151"); // 1
    Undly_31_set.insert("UnderlyingMaturityDate_t_118652151");
    Undly_31.add_attribute("MatTm", "1995383178"); // 1
    Undly_31_set.insert("1995383178");
    Undly_31.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1739633655"); // 1
    Undly_31_set.insert("UnderlyingCouponPaymentDate_t_1739633655");
    Undly_31.add_attribute("RestrctTyp", "XR"); // 1
    Undly_31_set.insert("XR");
    Undly_31.add_attribute("Snrty", "SR"); // 1
    Undly_31_set.insert("SR");
    Undly_31.add_attribute("NotlPctOut", "8365735.530000"); // 1
    Undly_31_set.insert("8365735.530000");
    Undly_31.add_attribute("OrigNotlPctOut", "3074006.910000"); // 1
    Undly_31_set.insert("3074006.910000");
    Undly_31.add_attribute("AttchPnt", "12388501.410000"); // 1
    Undly_31_set.insert("12388501.410000");
    Undly_31.add_attribute("DetchPnt", "3776911.470000"); // 1
    Undly_31_set.insert("3776911.470000");
    Undly_31.add_attribute("Issued", "UnderlyingIssueDate_t_1270460967"); // 1
    Undly_31_set.insert("UnderlyingIssueDate_t_1270460967");
    Undly_31.add_attribute("RepoCollSecTyp", "1204984367"); // 1
    Undly_31_set.insert("1204984367");
    Undly_31.add_attribute("RepoTrm", "2089258896"); // 1
    Undly_31_set.insert("2089258896");
    Undly_31.add_attribute("RepoRt", "4338371.530000"); // 1
    Undly_31_set.insert("4338371.530000");
    Undly_31.add_attribute("Fctr", "15603043.860000"); // 1
    Undly_31_set.insert("15603043.860000");
    Undly_31.add_attribute("CrdRtg", "UnderlyingCreditRating_t_196355649"); // 1
    Undly_31_set.insert("UnderlyingCreditRating_t_196355649");
    Undly_31.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_297634945"); // 1
    Undly_31_set.insert("UnderlyingInstrRegistry_t_297634945");
    Undly_31.add_attribute("Ctry", "1400286540"); // 1
    Undly_31_set.insert("1400286540");
    Undly_31.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_279256431"); // 1
    Undly_31_set.insert("UnderlyingStateOrProvinceOfIssue_t_279256431");
    Undly_31.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2101447441"); // 1
    Undly_31_set.insert("UnderlyingLocaleOfIssue_t_2101447441");
    Undly_31.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2049441926"); // 1
    Undly_31_set.insert("UnderlyingRedemptionDate_t_2049441926");
    Undly_31.add_attribute("StrkPx", "5461934.080000"); // 1
    Undly_31_set.insert("5461934.080000");
    Undly_31.add_attribute("StrkCcy", "CHF"); // 1
    Undly_31_set.insert("CHF");
    Undly_31.add_attribute("OptA", "247131150"); // 1
    Undly_31_set.insert("247131150");
    Undly_31.add_attribute("Mult", "11345667.260000"); // 1
    Undly_31_set.insert("11345667.260000");
    Undly_31.add_attribute("MultTyp", "2"); // 1
    Undly_31_set.insert("2");
    Undly_31.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_31_set.insert("3");
    Undly_31.add_attribute("UOM", "MMBtu"); // 1
    Undly_31_set.insert("MMBtu");
    Undly_31.add_attribute("UOMQty", "822469.780000"); // 1
    Undly_31_set.insert("822469.780000");
    Undly_31.add_attribute("PxUOM", "MWh"); // 1
    Undly_31_set.insert("MWh");
    Undly_31.add_attribute("PxUOMQty", "581286.050000"); // 1
    Undly_31_set.insert("581286.050000");
    Undly_31.add_attribute("TmUnit", "Wk"); // 1
    Undly_31_set.insert("Wk");
    Undly_31.add_attribute("ExerStyle", "1"); // 1
    Undly_31_set.insert("1");
    Undly_31.add_attribute("CpnRt", "17977622.600000"); // 1
    Undly_31_set.insert("17977622.600000");
    Undly_31.add_attribute("Exch", "UnderlyingSecurityExchange_t_359442444"); // 1
    Undly_31_set.insert("UnderlyingSecurityExchange_t_359442444");
    Undly_31.add_attribute("Issr", "UnderlyingIssuer_t_334788039"); // 1
    Undly_31_set.insert("UnderlyingIssuer_t_334788039");
    Undly_31.add_attribute("EncUndIssrLen", "486852165"); // 1
    Undly_31_set.insert("486852165");
    Undly_31.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_666843136"); // 1
    Undly_31_set.insert("EncodedUnderlyingIssuer_t_666843136");
    Undly_31.add_attribute("Desc", "UnderlyingSecurityDesc_t_1573638180"); // 1
    Undly_31_set.insert("UnderlyingSecurityDesc_t_1573638180");
    Undly_31.add_attribute("EncUndSecDescLen", "864543312"); // 1
    Undly_31_set.insert("864543312");
    Undly_31.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1937304103"); // 1
    Undly_31_set.insert("EncodedUnderlyingSecurityDesc_t_1937304103");
    Undly_31.add_attribute("CPPgm", "UnderlyingCPProgram_t_631138899"); // 1
    Undly_31_set.insert("UnderlyingCPProgram_t_631138899");
    Undly_31.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_806318561"); // 1
    Undly_31_set.insert("UnderlyingCPRegType_t_806318561");
    Undly_31.add_attribute("AllocPct", "2236576.090000"); // 1
    Undly_31_set.insert("2236576.090000");
    Undly_31.add_attribute("Ccy", "GBP"); // 1
    Undly_31_set.insert("GBP");
    Undly_31.add_attribute("Qty", "5212925.540000"); // 1
    Undly_31_set.insert("5212925.540000");
    Undly_31.add_attribute("SettlTyp", "4"); // 1
    Undly_31_set.insert("4");
    Undly_31.add_attribute("CashAmt", "UnderlyingCashAmount_t_1281930641"); // 1
    Undly_31_set.insert("UnderlyingCashAmount_t_1281930641");
    Undly_31.add_attribute("CashTyp", "DIFF"); // 1
    Undly_31_set.insert("DIFF");
    Undly_31.add_attribute("Px", "13462044.560000"); // 1
    Undly_31_set.insert("13462044.560000");
    Undly_31.add_attribute("DirtPx", "18281240.490000"); // 1
    Undly_31_set.insert("18281240.490000");
    Undly_31.add_attribute("EndPx", "14001879.070000"); // 1
    Undly_31_set.insert("14001879.070000");
    Undly_31.add_attribute("StartVal", "UnderlyingStartValue_t_94185189"); // 1
    Undly_31_set.insert("UnderlyingStartValue_t_94185189");
    Undly_31.add_attribute("CurVal", "UnderlyingCurrentValue_t_2075255199"); // 1
    Undly_31_set.insert("UnderlyingCurrentValue_t_2075255199");
    Undly_31.add_attribute("EndVal", "UnderlyingEndValue_t_387270985"); // 1
    Undly_31_set.insert("UnderlyingEndValue_t_387270985");
    Undly_31.add_attribute("AdjQty", "3930564.150000"); // 1
    Undly_31_set.insert("3930564.150000");
    Undly_31.add_attribute("FxRate", "10161468.900000"); // 1
    Undly_31_set.insert("10161468.900000");
    Undly_31.add_attribute("FxRateCalc", "D"); // 1
    Undly_31_set.insert("D");
    Undly_31.add_attribute("CapValu", "UnderlyingCapValue_t_475303393"); // 1
    Undly_31_set.insert("UnderlyingCapValue_t_475303393");
    Undly_31.add_attribute("SetMeth", "UnderlyingSettlMethod_t_786451491"); // 1
    Undly_31_set.insert("UnderlyingSettlMethod_t_786451491");
    Undly_31.add_attribute("PutCall", "303881866"); // 1
    Undly_31_set.insert("303881866");
    all_values.push_back(Undly_31_set);
    all_compo_names.insert("Undly_31_set");

    {
      xml_element UndAID_31{"UndAID"};
      multiset<string> UndAID_31_set;
      UndAID_31.add_attribute("AltID", "UnderlyingSecurityAltID_t_676202522"); // 2
      UndAID_31_set.insert("UnderlyingSecurityAltID_t_676202522");
      UndAID_31.add_attribute("AltIDSrc", "A"); // 2
      UndAID_31_set.insert("A");
      all_values.push_back(UndAID_31_set);
      all_compo_names.insert("UndAID_31_set");

      Undly_31.add_element(UndAID_31);
    }
    {
      xml_element Stip_52{"Stip"};
      multiset<string> Stip_52_set;
      Stip_52.add_attribute("Typ", "SECTOR"); // 2
      Stip_52_set.insert("SECTOR");
      Stip_52.add_attribute("Val", "UnderlyingStipValue_t_1035644967"); // 2
      Stip_52_set.insert("UnderlyingStipValue_t_1035644967");
      all_values.push_back(Stip_52_set);
      all_compo_names.insert("Stip_52_set");

      Undly_31.add_element(Stip_52);
    }
    {
      xml_element Pty_139{"Pty"};
      multiset<string> Pty_139_set;
      Pty_139.add_attribute("ID", "UnderlyingInstrumentPartyID_t_739443662"); // 2
      Pty_139_set.insert("UnderlyingInstrumentPartyID_t_739443662");
      Pty_139.add_attribute("Src", "9"); // 2
      Pty_139_set.insert("9");
      Pty_139.add_attribute("R", "46"); // 2
      Pty_139_set.insert("46");
      all_values.push_back(Pty_139_set);
      all_compo_names.insert("Pty_139_set");

      {
        xml_element Sub_139{"Sub"};
        multiset<string> Sub_139_set;
        Sub_139.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_165598194"); // 3
        Sub_139_set.insert("UnderlyingInstrumentPartySubID_t_165598194");
        Sub_139.add_attribute("Typ", "7"); // 3
        Sub_139_set.insert("7");
        all_values.push_back(Sub_139_set);
        all_compo_names.insert("Sub_139_set");

        Pty_139.add_element(Sub_139);
      }
      Undly_31.add_element(Pty_139);
    }
    elt.add_element(Undly_31);
  } // end Undly
  { // Undly
    xml_element Undly_32{"Undly"};
    multiset<string> Undly_32_set;
    Undly_32.add_attribute("Sym", "UnderlyingSymbol_t_1492308558"); // 1
    Undly_32_set.insert("UnderlyingSymbol_t_1492308558");
    Undly_32.add_attribute("Sfx", "WI"); // 1
    Undly_32_set.insert("WI");
    Undly_32.add_attribute("ID", "UnderlyingSecurityID_t_2111874517"); // 1
    Undly_32_set.insert("UnderlyingSecurityID_t_2111874517");
    Undly_32.add_attribute("Src", "4"); // 1
    Undly_32_set.insert("4");
    Undly_32.add_attribute("Prod", "13"); // 1
    Undly_32_set.insert("13");
    Undly_32.add_attribute("CFI", "UnderlyingCFICode_t_967065079"); // 1
    Undly_32_set.insert("UnderlyingCFICode_t_967065079");
    Undly_32.add_attribute("SecTyp", "TPRN"); // 1
    Undly_32_set.insert("TPRN");
    Undly_32.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_137459260"); // 1
    Undly_32_set.insert("UnderlyingSecuritySubType_t_137459260");
    Undly_32.add_attribute("MMY", "101512073"); // 1
    Undly_32_set.insert("101512073");
    Undly_32.add_attribute("Mat", "UnderlyingMaturityDate_t_565031421"); // 1
    Undly_32_set.insert("UnderlyingMaturityDate_t_565031421");
    Undly_32.add_attribute("MatTm", "1483663716"); // 1
    Undly_32_set.insert("1483663716");
    Undly_32.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1929636122"); // 1
    Undly_32_set.insert("UnderlyingCouponPaymentDate_t_1929636122");
    Undly_32.add_attribute("RestrctTyp", "FR"); // 1
    Undly_32_set.insert("FR");
    Undly_32.add_attribute("Snrty", "SR"); // 1
    Undly_32_set.insert("SR");
    Undly_32.add_attribute("NotlPctOut", "18574076.740000"); // 1
    Undly_32_set.insert("18574076.740000");
    Undly_32.add_attribute("OrigNotlPctOut", "2050066.650000"); // 1
    Undly_32_set.insert("2050066.650000");
    Undly_32.add_attribute("AttchPnt", "19709053.210000"); // 1
    Undly_32_set.insert("19709053.210000");
    Undly_32.add_attribute("DetchPnt", "7260709.160000"); // 1
    Undly_32_set.insert("7260709.160000");
    Undly_32.add_attribute("Issued", "UnderlyingIssueDate_t_450759926"); // 1
    Undly_32_set.insert("UnderlyingIssueDate_t_450759926");
    Undly_32.add_attribute("RepoCollSecTyp", "298725066"); // 1
    Undly_32_set.insert("298725066");
    Undly_32.add_attribute("RepoTrm", "1512522407"); // 1
    Undly_32_set.insert("1512522407");
    Undly_32.add_attribute("RepoRt", "7546417.920000"); // 1
    Undly_32_set.insert("7546417.920000");
    Undly_32.add_attribute("Fctr", "9749275.880000"); // 1
    Undly_32_set.insert("9749275.880000");
    Undly_32.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1917178031"); // 1
    Undly_32_set.insert("UnderlyingCreditRating_t_1917178031");
    Undly_32.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_708802271"); // 1
    Undly_32_set.insert("UnderlyingInstrRegistry_t_708802271");
    Undly_32.add_attribute("Ctry", "2010572555"); // 1
    Undly_32_set.insert("2010572555");
    Undly_32.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_509138045"); // 1
    Undly_32_set.insert("UnderlyingStateOrProvinceOfIssue_t_509138045");
    Undly_32.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1149814915"); // 1
    Undly_32_set.insert("UnderlyingLocaleOfIssue_t_1149814915");
    Undly_32.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1565577010"); // 1
    Undly_32_set.insert("UnderlyingRedemptionDate_t_1565577010");
    Undly_32.add_attribute("StrkPx", "6747362.400000"); // 1
    Undly_32_set.insert("6747362.400000");
    Undly_32.add_attribute("StrkCcy", "CHF"); // 1
    Undly_32_set.insert("CHF");
    Undly_32.add_attribute("OptA", "1471473333"); // 1
    Undly_32_set.insert("1471473333");
    Undly_32.add_attribute("Mult", "2722780.930000"); // 1
    Undly_32_set.insert("2722780.930000");
    Undly_32.add_attribute("MultTyp", "2"); // 1
    Undly_32_set.insert("2");
    Undly_32.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_32_set.insert("1");
    Undly_32.add_attribute("UOM", "Bbl"); // 1
    Undly_32_set.insert("Bbl");
    Undly_32.add_attribute("UOMQty", "5686595.140000"); // 1
    Undly_32_set.insert("5686595.140000");
    Undly_32.add_attribute("PxUOM", "Bbl"); // 1
    Undly_32_set.insert("Bbl");
    Undly_32.add_attribute("PxUOMQty", "13408552.450000"); // 1
    Undly_32_set.insert("13408552.450000");
    Undly_32.add_attribute("TmUnit", "S"); // 1
    Undly_32_set.insert("S");
    Undly_32.add_attribute("ExerStyle", "2"); // 1
    Undly_32_set.insert("2");
    Undly_32.add_attribute("CpnRt", "11230077.200000"); // 1
    Undly_32_set.insert("11230077.200000");
    Undly_32.add_attribute("Exch", "UnderlyingSecurityExchange_t_951426616"); // 1
    Undly_32_set.insert("UnderlyingSecurityExchange_t_951426616");
    Undly_32.add_attribute("Issr", "UnderlyingIssuer_t_1216174651"); // 1
    Undly_32_set.insert("UnderlyingIssuer_t_1216174651");
    Undly_32.add_attribute("EncUndIssrLen", "832931746"); // 1
    Undly_32_set.insert("832931746");
    Undly_32.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1156433282"); // 1
    Undly_32_set.insert("EncodedUnderlyingIssuer_t_1156433282");
    Undly_32.add_attribute("Desc", "UnderlyingSecurityDesc_t_1039596324"); // 1
    Undly_32_set.insert("UnderlyingSecurityDesc_t_1039596324");
    Undly_32.add_attribute("EncUndSecDescLen", "1559002662"); // 1
    Undly_32_set.insert("1559002662");
    Undly_32.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1607193208"); // 1
    Undly_32_set.insert("EncodedUnderlyingSecurityDesc_t_1607193208");
    Undly_32.add_attribute("CPPgm", "UnderlyingCPProgram_t_1338321390"); // 1
    Undly_32_set.insert("UnderlyingCPProgram_t_1338321390");
    Undly_32.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_924041421"); // 1
    Undly_32_set.insert("UnderlyingCPRegType_t_924041421");
    Undly_32.add_attribute("AllocPct", "2143513.530000"); // 1
    Undly_32_set.insert("2143513.530000");
    Undly_32.add_attribute("Ccy", "USD"); // 1
    Undly_32_set.insert("USD");
    Undly_32.add_attribute("Qty", "9231536.240000"); // 1
    Undly_32_set.insert("9231536.240000");
    Undly_32.add_attribute("SettlTyp", "4"); // 1
    Undly_32_set.insert("4");
    Undly_32.add_attribute("CashAmt", "UnderlyingCashAmount_t_1202873850"); // 1
    Undly_32_set.insert("UnderlyingCashAmount_t_1202873850");
    Undly_32.add_attribute("CashTyp", "DIFF"); // 1
    Undly_32_set.insert("DIFF");
    Undly_32.add_attribute("Px", "15944312.490000"); // 1
    Undly_32_set.insert("15944312.490000");
    Undly_32.add_attribute("DirtPx", "18776100.900000"); // 1
    Undly_32_set.insert("18776100.900000");
    Undly_32.add_attribute("EndPx", "2333721.140000"); // 1
    Undly_32_set.insert("2333721.140000");
    Undly_32.add_attribute("StartVal", "UnderlyingStartValue_t_357349522"); // 1
    Undly_32_set.insert("UnderlyingStartValue_t_357349522");
    Undly_32.add_attribute("CurVal", "UnderlyingCurrentValue_t_1201599775"); // 1
    Undly_32_set.insert("UnderlyingCurrentValue_t_1201599775");
    Undly_32.add_attribute("EndVal", "UnderlyingEndValue_t_505650207"); // 1
    Undly_32_set.insert("UnderlyingEndValue_t_505650207");
    Undly_32.add_attribute("AdjQty", "8362339.620000"); // 1
    Undly_32_set.insert("8362339.620000");
    Undly_32.add_attribute("FxRate", "13662861.920000"); // 1
    Undly_32_set.insert("13662861.920000");
    Undly_32.add_attribute("FxRateCalc", "M"); // 1
    Undly_32_set.insert("M");
    Undly_32.add_attribute("CapValu", "UnderlyingCapValue_t_1404893477"); // 1
    Undly_32_set.insert("UnderlyingCapValue_t_1404893477");
    Undly_32.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1668431869"); // 1
    Undly_32_set.insert("UnderlyingSettlMethod_t_1668431869");
    Undly_32.add_attribute("PutCall", "938364977"); // 1
    Undly_32_set.insert("938364977");
    all_values.push_back(Undly_32_set);
    all_compo_names.insert("Undly_32_set");

    {
      xml_element UndAID_32{"UndAID"};
      multiset<string> UndAID_32_set;
      UndAID_32.add_attribute("AltID", "UnderlyingSecurityAltID_t_391100765"); // 2
      UndAID_32_set.insert("UnderlyingSecurityAltID_t_391100765");
      UndAID_32.add_attribute("AltIDSrc", "9"); // 2
      UndAID_32_set.insert("9");
      all_values.push_back(UndAID_32_set);
      all_compo_names.insert("UndAID_32_set");

      Undly_32.add_element(UndAID_32);
    }
    {
      xml_element Stip_53{"Stip"};
      multiset<string> Stip_53_set;
      Stip_53.add_attribute("Typ", "WAM"); // 2
      Stip_53_set.insert("WAM");
      Stip_53.add_attribute("Val", "UnderlyingStipValue_t_1342527381"); // 2
      Stip_53_set.insert("UnderlyingStipValue_t_1342527381");
      all_values.push_back(Stip_53_set);
      all_compo_names.insert("Stip_53_set");

      Undly_32.add_element(Stip_53);
    }
    {
      xml_element Pty_140{"Pty"};
      multiset<string> Pty_140_set;
      Pty_140.add_attribute("ID", "UnderlyingInstrumentPartyID_t_375448618"); // 2
      Pty_140_set.insert("UnderlyingInstrumentPartyID_t_375448618");
      Pty_140.add_attribute("Src", "4"); // 2
      Pty_140_set.insert("4");
      Pty_140.add_attribute("R", "24"); // 2
      Pty_140_set.insert("24");
      all_values.push_back(Pty_140_set);
      all_compo_names.insert("Pty_140_set");

      {
        xml_element Sub_140{"Sub"};
        multiset<string> Sub_140_set;
        Sub_140.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1415044942"); // 3
        Sub_140_set.insert("UnderlyingInstrumentPartySubID_t_1415044942");
        Sub_140.add_attribute("Typ", "10"); // 3
        Sub_140_set.insert("10");
        all_values.push_back(Sub_140_set);
        all_compo_names.insert("Sub_140_set");

        Pty_140.add_element(Sub_140);
      }
      Undly_32.add_element(Pty_140);
    }
    elt.add_element(Undly_32);
  } // end Undly
  { // Leg
    xml_element Leg_34{"Leg"};
    multiset<string> Leg_34_set;
    Leg_34.add_attribute("Sym", "LegSymbol_t_605882685"); // 1
    Leg_34_set.insert("LegSymbol_t_605882685");
    Leg_34.add_attribute("Sfx", "WI"); // 1
    Leg_34_set.insert("WI");
    Leg_34.add_attribute("ID", "LegSecurityID_t_25537929"); // 1
    Leg_34_set.insert("LegSecurityID_t_25537929");
    Leg_34.add_attribute("Src", "J"); // 1
    Leg_34_set.insert("J");
    Leg_34.add_attribute("Prod", "13"); // 1
    Leg_34_set.insert("13");
    Leg_34.add_attribute("CFI", "LegCFICode_t_948691553"); // 1
    Leg_34_set.insert("LegCFICode_t_948691553");
    Leg_34.add_attribute("SecTyp", "NONE"); // 1
    Leg_34_set.insert("NONE");
    Leg_34.add_attribute("SecSubTyp", "LegSecuritySubType_t_831507237"); // 1
    Leg_34_set.insert("LegSecuritySubType_t_831507237");
    Leg_34.add_attribute("MMY", "874176444"); // 1
    Leg_34_set.insert("874176444");
    Leg_34.add_attribute("Mat", "LegMaturityDate_t_247449855"); // 1
    Leg_34_set.insert("LegMaturityDate_t_247449855");
    Leg_34.add_attribute("MatTm", "561633679"); // 1
    Leg_34_set.insert("561633679");
    Leg_34.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1107548558"); // 1
    Leg_34_set.insert("LegCouponPaymentDate_t_1107548558");
    Leg_34.add_attribute("Issued", "LegIssueDate_t_604799377"); // 1
    Leg_34_set.insert("LegIssueDate_t_604799377");
    Leg_34.add_attribute("RepoCollSecTyp", "1763233455"); // 1
    Leg_34_set.insert("1763233455");
    Leg_34.add_attribute("RepoTrm", "1613198766"); // 1
    Leg_34_set.insert("1613198766");
    Leg_34.add_attribute("RepoRt", "14410333.400000"); // 1
    Leg_34_set.insert("14410333.400000");
    Leg_34.add_attribute("Fctr", "9820359.990000"); // 1
    Leg_34_set.insert("9820359.990000");
    Leg_34.add_attribute("CrdRtg", "LegCreditRating_t_1210708498"); // 1
    Leg_34_set.insert("LegCreditRating_t_1210708498");
    Leg_34.add_attribute("Rgstry", "LegInstrRegistry_t_698443169"); // 1
    Leg_34_set.insert("LegInstrRegistry_t_698443169");
    Leg_34.add_attribute("Ctry", "502984220"); // 1
    Leg_34_set.insert("502984220");
    Leg_34.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1589827"); // 1
    Leg_34_set.insert("LegStateOrProvinceOfIssue_t_1589827");
    Leg_34.add_attribute("Lcl", "LegLocaleOfIssue_t_1089543934"); // 1
    Leg_34_set.insert("LegLocaleOfIssue_t_1089543934");
    Leg_34.add_attribute("Redeem", "LegRedemptionDate_t_1809741834"); // 1
    Leg_34_set.insert("LegRedemptionDate_t_1809741834");
    Leg_34.add_attribute("Strk", "20629625.250000"); // 1
    Leg_34_set.insert("20629625.250000");
    Leg_34.add_attribute("StrkCcy", "GBP"); // 1
    Leg_34_set.insert("GBP");
    Leg_34.add_attribute("OptA", "662299672"); // 1
    Leg_34_set.insert("662299672");
    Leg_34.add_attribute("Cmult", "6360646.830000"); // 1
    Leg_34_set.insert("6360646.830000");
    Leg_34.add_attribute("MultTyp", "1"); // 1
    Leg_34_set.insert("1");
    Leg_34.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_34_set.insert("2");
    Leg_34.add_attribute("UOM", "MWh"); // 1
    Leg_34_set.insert("MWh");
    Leg_34.add_attribute("UOMQty", "20586344.320000"); // 1
    Leg_34_set.insert("20586344.320000");
    Leg_34.add_attribute("PxUOM", "USD"); // 1
    Leg_34_set.insert("USD");
    Leg_34.add_attribute("PxUOMQty", "4727891.880000"); // 1
    Leg_34_set.insert("4727891.880000");
    Leg_34.add_attribute("TmUnit", "Mo"); // 1
    Leg_34_set.insert("Mo");
    Leg_34.add_attribute("ExerStyle", "2"); // 1
    Leg_34_set.insert("2");
    Leg_34.add_attribute("CpnRt", "14214807.410000"); // 1
    Leg_34_set.insert("14214807.410000");
    Leg_34.add_attribute("Exch", "LegSecurityExchange_t_1483301054"); // 1
    Leg_34_set.insert("LegSecurityExchange_t_1483301054");
    Leg_34.add_attribute("Issr", "LegIssuer_t_215677690"); // 1
    Leg_34_set.insert("LegIssuer_t_215677690");
    Leg_34.add_attribute("EncLegIssrLen", "148173537"); // 1
    Leg_34_set.insert("148173537");
    Leg_34.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1730750910"); // 1
    Leg_34_set.insert("EncodedLegIssuer_t_1730750910");
    Leg_34.add_attribute("Desc", "LegSecurityDesc_t_777311369"); // 1
    Leg_34_set.insert("LegSecurityDesc_t_777311369");
    Leg_34.add_attribute("EncLegSecDescLen", "1255722095"); // 1
    Leg_34_set.insert("1255722095");
    Leg_34.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_188066639"); // 1
    Leg_34_set.insert("EncodedLegSecurityDesc_t_188066639");
    Leg_34.add_attribute("RatioQty", "3930611.760000"); // 1
    Leg_34_set.insert("3930611.760000");
    Leg_34.add_attribute("Side", "E"); // 1
    Leg_34_set.insert("E");
    Leg_34.add_attribute("Ccy", "CHF"); // 1
    Leg_34_set.insert("CHF");
    Leg_34.add_attribute("Pool", "LegPool_t_1932145711"); // 1
    Leg_34_set.insert("LegPool_t_1932145711");
    Leg_34.add_attribute("Dated", "LegDatedDate_t_180059500"); // 1
    Leg_34_set.insert("LegDatedDate_t_180059500");
    Leg_34.add_attribute("CSetMo", "1878081395"); // 1
    Leg_34_set.insert("1878081395");
    Leg_34.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1933735539"); // 1
    Leg_34_set.insert("LegInterestAccrualDate_t_1933735539");
    Leg_34.add_attribute("PutCall", "1269603434"); // 1
    Leg_34_set.insert("1269603434");
    Leg_34.add_attribute("LegOptionRatio", "15403395.820000"); // 1
    Leg_34_set.insert("15403395.820000");
    Leg_34.add_attribute("Px", "18492144.160000"); // 1
    Leg_34_set.insert("18492144.160000");
    all_values.push_back(Leg_34_set);
    all_compo_names.insert("Leg_34_set");

    {
      xml_element LegAID_34{"LegAID"};
      multiset<string> LegAID_34_set;
      LegAID_34.add_attribute("SecAltID", "LegSecurityAltID_t_1554191102"); // 2
      LegAID_34_set.insert("LegSecurityAltID_t_1554191102");
      LegAID_34.add_attribute("SecAltIDSrc", "5"); // 2
      LegAID_34_set.insert("5");
      all_values.push_back(LegAID_34_set);
      all_compo_names.insert("LegAID_34_set");

      Leg_34.add_element(LegAID_34);
    }
    elt.add_element(Leg_34);
  } // end Leg
  { // Leg
    xml_element Leg_35{"Leg"};
    multiset<string> Leg_35_set;
    Leg_35.add_attribute("Sym", "LegSymbol_t_364030440"); // 1
    Leg_35_set.insert("LegSymbol_t_364030440");
    Leg_35.add_attribute("Sfx", "WI"); // 1
    Leg_35_set.insert("WI");
    Leg_35.add_attribute("ID", "LegSecurityID_t_883314485"); // 1
    Leg_35_set.insert("LegSecurityID_t_883314485");
    Leg_35.add_attribute("Src", "J"); // 1
    Leg_35_set.insert("J");
    Leg_35.add_attribute("Prod", "2"); // 1
    Leg_35_set.insert("2");
    Leg_35.add_attribute("CFI", "LegCFICode_t_794465269"); // 1
    Leg_35_set.insert("LegCFICode_t_794465269");
    Leg_35.add_attribute("SecTyp", "OOF"); // 1
    Leg_35_set.insert("OOF");
    Leg_35.add_attribute("SecSubTyp", "LegSecuritySubType_t_962812584"); // 1
    Leg_35_set.insert("LegSecuritySubType_t_962812584");
    Leg_35.add_attribute("MMY", "1477264069"); // 1
    Leg_35_set.insert("1477264069");
    Leg_35.add_attribute("Mat", "LegMaturityDate_t_324377440"); // 1
    Leg_35_set.insert("LegMaturityDate_t_324377440");
    Leg_35.add_attribute("MatTm", "236809677"); // 1
    Leg_35_set.insert("236809677");
    Leg_35.add_attribute("CpnPmt", "LegCouponPaymentDate_t_813081476"); // 1
    Leg_35_set.insert("LegCouponPaymentDate_t_813081476");
    Leg_35.add_attribute("Issued", "LegIssueDate_t_540055130"); // 1
    Leg_35_set.insert("LegIssueDate_t_540055130");
    Leg_35.add_attribute("RepoCollSecTyp", "384983214"); // 1
    Leg_35_set.insert("384983214");
    Leg_35.add_attribute("RepoTrm", "396348738"); // 1
    Leg_35_set.insert("396348738");
    Leg_35.add_attribute("RepoRt", "13173664.990000"); // 1
    Leg_35_set.insert("13173664.990000");
    Leg_35.add_attribute("Fctr", "16407053.090000"); // 1
    Leg_35_set.insert("16407053.090000");
    Leg_35.add_attribute("CrdRtg", "LegCreditRating_t_584415377"); // 1
    Leg_35_set.insert("LegCreditRating_t_584415377");
    Leg_35.add_attribute("Rgstry", "LegInstrRegistry_t_1710427676"); // 1
    Leg_35_set.insert("LegInstrRegistry_t_1710427676");
    Leg_35.add_attribute("Ctry", "214658875"); // 1
    Leg_35_set.insert("214658875");
    Leg_35.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_66031709"); // 1
    Leg_35_set.insert("LegStateOrProvinceOfIssue_t_66031709");
    Leg_35.add_attribute("Lcl", "LegLocaleOfIssue_t_938041203"); // 1
    Leg_35_set.insert("LegLocaleOfIssue_t_938041203");
    Leg_35.add_attribute("Redeem", "LegRedemptionDate_t_2146804586"); // 1
    Leg_35_set.insert("LegRedemptionDate_t_2146804586");
    Leg_35.add_attribute("Strk", "2460912.090000"); // 1
    Leg_35_set.insert("2460912.090000");
    Leg_35.add_attribute("StrkCcy", "CHF"); // 1
    Leg_35_set.insert("CHF");
    Leg_35.add_attribute("OptA", "1515694644"); // 1
    Leg_35_set.insert("1515694644");
    Leg_35.add_attribute("Cmult", "614948.850000"); // 1
    Leg_35_set.insert("614948.850000");
    Leg_35.add_attribute("MultTyp", "2"); // 1
    Leg_35_set.insert("2");
    Leg_35.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_35_set.insert("3");
    Leg_35.add_attribute("UOM", "t"); // 1
    Leg_35_set.insert("t");
    Leg_35.add_attribute("UOMQty", "19988176.860000"); // 1
    Leg_35_set.insert("19988176.860000");
    Leg_35.add_attribute("PxUOM", "Alw"); // 1
    Leg_35_set.insert("Alw");
    Leg_35.add_attribute("PxUOMQty", "3753721.090000"); // 1
    Leg_35_set.insert("3753721.090000");
    Leg_35.add_attribute("TmUnit", "Mo"); // 1
    Leg_35_set.insert("Mo");
    Leg_35.add_attribute("ExerStyle", "0"); // 1
    Leg_35_set.insert("0");
    Leg_35.add_attribute("CpnRt", "11698373.780000"); // 1
    Leg_35_set.insert("11698373.780000");
    Leg_35.add_attribute("Exch", "LegSecurityExchange_t_1976210948"); // 1
    Leg_35_set.insert("LegSecurityExchange_t_1976210948");
    Leg_35.add_attribute("Issr", "LegIssuer_t_270526567"); // 1
    Leg_35_set.insert("LegIssuer_t_270526567");
    Leg_35.add_attribute("EncLegIssrLen", "499617800"); // 1
    Leg_35_set.insert("499617800");
    Leg_35.add_attribute("EncLegIssr", "EncodedLegIssuer_t_153104740"); // 1
    Leg_35_set.insert("EncodedLegIssuer_t_153104740");
    Leg_35.add_attribute("Desc", "LegSecurityDesc_t_507336244"); // 1
    Leg_35_set.insert("LegSecurityDesc_t_507336244");
    Leg_35.add_attribute("EncLegSecDescLen", "1312699276"); // 1
    Leg_35_set.insert("1312699276");
    Leg_35.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_693159870"); // 1
    Leg_35_set.insert("EncodedLegSecurityDesc_t_693159870");
    Leg_35.add_attribute("RatioQty", "8923194.580000"); // 1
    Leg_35_set.insert("8923194.580000");
    Leg_35.add_attribute("Side", "F"); // 1
    Leg_35_set.insert("F");
    Leg_35.add_attribute("Ccy", "EUR"); // 1
    Leg_35_set.insert("EUR");
    Leg_35.add_attribute("Pool", "LegPool_t_145979743"); // 1
    Leg_35_set.insert("LegPool_t_145979743");
    Leg_35.add_attribute("Dated", "LegDatedDate_t_1573470397"); // 1
    Leg_35_set.insert("LegDatedDate_t_1573470397");
    Leg_35.add_attribute("CSetMo", "600199994"); // 1
    Leg_35_set.insert("600199994");
    Leg_35.add_attribute("IntAcrl", "LegInterestAccrualDate_t_212011452"); // 1
    Leg_35_set.insert("LegInterestAccrualDate_t_212011452");
    Leg_35.add_attribute("PutCall", "364027953"); // 1
    Leg_35_set.insert("364027953");
    Leg_35.add_attribute("LegOptionRatio", "5995209.330000"); // 1
    Leg_35_set.insert("5995209.330000");
    Leg_35.add_attribute("Px", "4581026.620000"); // 1
    Leg_35_set.insert("4581026.620000");
    all_values.push_back(Leg_35_set);
    all_compo_names.insert("Leg_35_set");

    {
      xml_element LegAID_35{"LegAID"};
      multiset<string> LegAID_35_set;
      LegAID_35.add_attribute("SecAltID", "LegSecurityAltID_t_1032666904"); // 2
      LegAID_35_set.insert("LegSecurityAltID_t_1032666904");
      LegAID_35.add_attribute("SecAltIDSrc", "K"); // 2
      LegAID_35_set.insert("K");
      all_values.push_back(LegAID_35_set);
      all_compo_names.insert("LegAID_35_set");

      Leg_35.add_element(LegAID_35);
    }
    elt.add_element(Leg_35);
  } // end Leg
  { // Leg
    xml_element Leg_36{"Leg"};
    multiset<string> Leg_36_set;
    Leg_36.add_attribute("Sym", "LegSymbol_t_1973797306"); // 1
    Leg_36_set.insert("LegSymbol_t_1973797306");
    Leg_36.add_attribute("Sfx", "WI"); // 1
    Leg_36_set.insert("WI");
    Leg_36.add_attribute("ID", "LegSecurityID_t_2019881008"); // 1
    Leg_36_set.insert("LegSecurityID_t_2019881008");
    Leg_36.add_attribute("Src", "9"); // 1
    Leg_36_set.insert("9");
    Leg_36.add_attribute("Prod", "9"); // 1
    Leg_36_set.insert("9");
    Leg_36.add_attribute("CFI", "LegCFICode_t_1871215046"); // 1
    Leg_36_set.insert("LegCFICode_t_1871215046");
    Leg_36.add_attribute("SecTyp", "PN"); // 1
    Leg_36_set.insert("PN");
    Leg_36.add_attribute("SecSubTyp", "LegSecuritySubType_t_961591521"); // 1
    Leg_36_set.insert("LegSecuritySubType_t_961591521");
    Leg_36.add_attribute("MMY", "759735358"); // 1
    Leg_36_set.insert("759735358");
    Leg_36.add_attribute("Mat", "LegMaturityDate_t_1021603974"); // 1
    Leg_36_set.insert("LegMaturityDate_t_1021603974");
    Leg_36.add_attribute("MatTm", "2131428900"); // 1
    Leg_36_set.insert("2131428900");
    Leg_36.add_attribute("CpnPmt", "LegCouponPaymentDate_t_588462658"); // 1
    Leg_36_set.insert("LegCouponPaymentDate_t_588462658");
    Leg_36.add_attribute("Issued", "LegIssueDate_t_1292130541"); // 1
    Leg_36_set.insert("LegIssueDate_t_1292130541");
    Leg_36.add_attribute("RepoCollSecTyp", "483563052"); // 1
    Leg_36_set.insert("483563052");
    Leg_36.add_attribute("RepoTrm", "741567398"); // 1
    Leg_36_set.insert("741567398");
    Leg_36.add_attribute("RepoRt", "17994667.850000"); // 1
    Leg_36_set.insert("17994667.850000");
    Leg_36.add_attribute("Fctr", "17962623.280000"); // 1
    Leg_36_set.insert("17962623.280000");
    Leg_36.add_attribute("CrdRtg", "LegCreditRating_t_1434727268"); // 1
    Leg_36_set.insert("LegCreditRating_t_1434727268");
    Leg_36.add_attribute("Rgstry", "LegInstrRegistry_t_544302595"); // 1
    Leg_36_set.insert("LegInstrRegistry_t_544302595");
    Leg_36.add_attribute("Ctry", "1357826694"); // 1
    Leg_36_set.insert("1357826694");
    Leg_36.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1297769990"); // 1
    Leg_36_set.insert("LegStateOrProvinceOfIssue_t_1297769990");
    Leg_36.add_attribute("Lcl", "LegLocaleOfIssue_t_929843714"); // 1
    Leg_36_set.insert("LegLocaleOfIssue_t_929843714");
    Leg_36.add_attribute("Redeem", "LegRedemptionDate_t_1503806437"); // 1
    Leg_36_set.insert("LegRedemptionDate_t_1503806437");
    Leg_36.add_attribute("Strk", "7237567.390000"); // 1
    Leg_36_set.insert("7237567.390000");
    Leg_36.add_attribute("StrkCcy", "GBP"); // 1
    Leg_36_set.insert("GBP");
    Leg_36.add_attribute("OptA", "1087784692"); // 1
    Leg_36_set.insert("1087784692");
    Leg_36.add_attribute("Cmult", "21295646.420000"); // 1
    Leg_36_set.insert("21295646.420000");
    Leg_36.add_attribute("MultTyp", "1"); // 1
    Leg_36_set.insert("1");
    Leg_36.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_36_set.insert("1");
    Leg_36.add_attribute("UOM", "MWh"); // 1
    Leg_36_set.insert("MWh");
    Leg_36.add_attribute("UOMQty", "20002342.100000"); // 1
    Leg_36_set.insert("20002342.100000");
    Leg_36.add_attribute("PxUOM", "Bu"); // 1
    Leg_36_set.insert("Bu");
    Leg_36.add_attribute("PxUOMQty", "2395721.160000"); // 1
    Leg_36_set.insert("2395721.160000");
    Leg_36.add_attribute("TmUnit", "Mo"); // 1
    Leg_36_set.insert("Mo");
    Leg_36.add_attribute("ExerStyle", "1"); // 1
    Leg_36_set.insert("1");
    Leg_36.add_attribute("CpnRt", "21107871.620000"); // 1
    Leg_36_set.insert("21107871.620000");
    Leg_36.add_attribute("Exch", "LegSecurityExchange_t_167872661"); // 1
    Leg_36_set.insert("LegSecurityExchange_t_167872661");
    Leg_36.add_attribute("Issr", "LegIssuer_t_467457023"); // 1
    Leg_36_set.insert("LegIssuer_t_467457023");
    Leg_36.add_attribute("EncLegIssrLen", "723038873"); // 1
    Leg_36_set.insert("723038873");
    Leg_36.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1189476635"); // 1
    Leg_36_set.insert("EncodedLegIssuer_t_1189476635");
    Leg_36.add_attribute("Desc", "LegSecurityDesc_t_451402275"); // 1
    Leg_36_set.insert("LegSecurityDesc_t_451402275");
    Leg_36.add_attribute("EncLegSecDescLen", "1311501531"); // 1
    Leg_36_set.insert("1311501531");
    Leg_36.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_334123528"); // 1
    Leg_36_set.insert("EncodedLegSecurityDesc_t_334123528");
    Leg_36.add_attribute("RatioQty", "9349653.270000"); // 1
    Leg_36_set.insert("9349653.270000");
    Leg_36.add_attribute("Side", "3"); // 1
    Leg_36_set.insert("3");
    Leg_36.add_attribute("Ccy", "CAN"); // 1
    Leg_36_set.insert("CAN");
    Leg_36.add_attribute("Pool", "LegPool_t_1340312550"); // 1
    Leg_36_set.insert("LegPool_t_1340312550");
    Leg_36.add_attribute("Dated", "LegDatedDate_t_530409260"); // 1
    Leg_36_set.insert("LegDatedDate_t_530409260");
    Leg_36.add_attribute("CSetMo", "1941570701"); // 1
    Leg_36_set.insert("1941570701");
    Leg_36.add_attribute("IntAcrl", "LegInterestAccrualDate_t_490598892"); // 1
    Leg_36_set.insert("LegInterestAccrualDate_t_490598892");
    Leg_36.add_attribute("PutCall", "1460252974"); // 1
    Leg_36_set.insert("1460252974");
    Leg_36.add_attribute("LegOptionRatio", "12978934.910000"); // 1
    Leg_36_set.insert("12978934.910000");
    Leg_36.add_attribute("Px", "12143556.320000"); // 1
    Leg_36_set.insert("12143556.320000");
    all_values.push_back(Leg_36_set);
    all_compo_names.insert("Leg_36_set");

    {
      xml_element LegAID_36{"LegAID"};
      multiset<string> LegAID_36_set;
      LegAID_36.add_attribute("SecAltID", "LegSecurityAltID_t_842813035"); // 2
      LegAID_36_set.insert("LegSecurityAltID_t_842813035");
      LegAID_36.add_attribute("SecAltIDSrc", "L"); // 2
      LegAID_36_set.insert("L");
      all_values.push_back(LegAID_36_set);
      all_compo_names.insert("LegAID_36_set");

      Leg_36.add_element(LegAID_36);
    }
    elt.add_element(Leg_36);
  } // end Leg
  { // OrdQty
    xml_element OrdQty_7{"OrdQty"};
    multiset<string> OrdQty_7_set;
    OrdQty_7.add_attribute("Qty", "1546566.760000"); // 1
    OrdQty_7_set.insert("1546566.760000");
    OrdQty_7.add_attribute("Cash", "8248940.290000"); // 1
    OrdQty_7_set.insert("8248940.290000");
    OrdQty_7.add_attribute("Pct", "8926646.370000"); // 1
    OrdQty_7_set.insert("8926646.370000");
    OrdQty_7.add_attribute("RndDir", "2"); // 1
    OrdQty_7_set.insert("2");
    OrdQty_7.add_attribute("RndMod", "11920687.860000"); // 1
    OrdQty_7_set.insert("11920687.860000");
    all_values.push_back(OrdQty_7_set);
    all_compo_names.insert("OrdQty_7_set");

    elt.add_element(OrdQty_7);
  } // end OrdQty
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
