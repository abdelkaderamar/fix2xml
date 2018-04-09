#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DontKnowTrade.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DontKnowTradeDK_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DkTrd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DontKnowTradeDK_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_556535074"); // 0
  DontKnowTradeDK_message_t_0.insert("OrderID_t_556535074");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1684626789"); // 0
  DontKnowTradeDK_message_t_0.insert("SecondaryOrderID_t_1684626789");
  elt.add_attribute("ExecID", "ExecID_t_1997114970"); // 0
  DontKnowTradeDK_message_t_0.insert("ExecID_t_1997114970");
  elt.add_attribute("DkRsn", "Z"); // 0
  DontKnowTradeDK_message_t_0.insert("Z");
  elt.add_attribute("Side", "G"); // 0
  DontKnowTradeDK_message_t_0.insert("G");
  elt.add_attribute("LastQty", "15174226.500000"); // 0
  DontKnowTradeDK_message_t_0.insert("15174226.500000");
  elt.add_attribute("LastPx", "8170536.510000"); // 0
  DontKnowTradeDK_message_t_0.insert("8170536.510000");
  elt.add_attribute("Txt", "Text_t_1165391229"); // 0
  DontKnowTradeDK_message_t_0.insert("Text_t_1165391229");
  elt.add_attribute("EncTxtLen", "1103849506"); // 0
  DontKnowTradeDK_message_t_0.insert("1103849506");
  elt.add_attribute("EncTxt", "EncodedText_t_1791493207"); // 0
  DontKnowTradeDK_message_t_0.insert("EncodedText_t_1791493207");
  all_values.push_back(DontKnowTradeDK_message_t_0);
  all_compo_names.insert("DontKnowTradeDK_message_t");

  { // Hdr
    xml_element Hdr_29{"Hdr"};
    multiset<string> Hdr_29_set;
    Hdr_29.add_attribute("SeqNum", "14525863"); // 1
    Hdr_29_set.insert("14525863");
    Hdr_29.add_attribute("SID", "SenderCompID_t_796246908"); // 1
    Hdr_29_set.insert("SenderCompID_t_796246908");
    Hdr_29.add_attribute("TID", "TargetCompID_t_543545400"); // 1
    Hdr_29_set.insert("TargetCompID_t_543545400");
    Hdr_29.add_attribute("OBID", "OnBehalfOfCompID_t_1403824416"); // 1
    Hdr_29_set.insert("OnBehalfOfCompID_t_1403824416");
    Hdr_29.add_attribute("D2ID", "DeliverToCompID_t_1225974973"); // 1
    Hdr_29_set.insert("DeliverToCompID_t_1225974973");
    Hdr_29.add_attribute("SSub", "SenderSubID_t_553941744"); // 1
    Hdr_29_set.insert("SenderSubID_t_553941744");
    Hdr_29.add_attribute("SLoc", "SenderLocationID_t_160856431"); // 1
    Hdr_29_set.insert("SenderLocationID_t_160856431");
    Hdr_29.add_attribute("TSub", "TargetSubID_t_1501932833"); // 1
    Hdr_29_set.insert("TargetSubID_t_1501932833");
    Hdr_29.add_attribute("TLoc", "TargetLocationID_t_1116998281"); // 1
    Hdr_29_set.insert("TargetLocationID_t_1116998281");
    Hdr_29.add_attribute("OBSub", "OnBehalfOfSubID_t_747118894"); // 1
    Hdr_29_set.insert("OnBehalfOfSubID_t_747118894");
    Hdr_29.add_attribute("OBLoc", "OnBehalfOfLocationID_t_590553015"); // 1
    Hdr_29_set.insert("OnBehalfOfLocationID_t_590553015");
    Hdr_29.add_attribute("D2Sub", "DeliverToSubID_t_102825535"); // 1
    Hdr_29_set.insert("DeliverToSubID_t_102825535");
    Hdr_29.add_attribute("D2Loc", "DeliverToLocationID_t_1284764484"); // 1
    Hdr_29_set.insert("DeliverToLocationID_t_1284764484");
    Hdr_29.add_attribute("PosDup", "N"); // 1
    Hdr_29_set.insert("N");
    Hdr_29.add_attribute("PosRsnd", "N"); // 1
    Hdr_29_set.insert("N");
    Hdr_29.add_attribute("Snt", "SendingTime_t_2129514160"); // 1
    Hdr_29_set.insert("SendingTime_t_2129514160");
    Hdr_29.add_attribute("OrigSnt", "OrigSendingTime_t_1760594512"); // 1
    Hdr_29_set.insert("OrigSendingTime_t_1760594512");
    Hdr_29.add_attribute("MsgEncd", "MessageEncoding_t_1220454111"); // 1
    Hdr_29_set.insert("MessageEncoding_t_1220454111");
    all_values.push_back(Hdr_29_set);
    all_compo_names.insert("Hdr_29_set");

    {
      xml_element Hop_29{"Hop"};
      multiset<string> Hop_29_set;
      Hop_29.add_attribute("ID", "HopCompID_t_729498167"); // 2
      Hop_29_set.insert("HopCompID_t_729498167");
      Hop_29.add_attribute("Ref", "1610926535"); // 2
      Hop_29_set.insert("1610926535");
      Hop_29.add_attribute("Snt", "HopSendingTime_t_1554127025"); // 2
      Hop_29_set.insert("HopSendingTime_t_1554127025");
      all_values.push_back(Hop_29_set);
      all_compo_names.insert("Hop_29_set");

      Hdr_29.add_element(Hop_29);
    }
    elt.add_element(Hdr_29);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_19{"Instrmt"};
    multiset<string> Instrmt_19_set;
    Instrmt_19.add_attribute("Sym", "Symbol_t_1286033241"); // 1
    Instrmt_19_set.insert("Symbol_t_1286033241");
    Instrmt_19.add_attribute("Sfx", "CD"); // 1
    Instrmt_19_set.insert("CD");
    Instrmt_19.add_attribute("ID", "SecurityID_t_1403758347"); // 1
    Instrmt_19_set.insert("SecurityID_t_1403758347");
    Instrmt_19.add_attribute("Src", "I"); // 1
    Instrmt_19_set.insert("I");
    Instrmt_19.add_attribute("Prod", "1"); // 1
    Instrmt_19_set.insert("1");
    Instrmt_19.add_attribute("ProdCmplx", "ProductComplex_t_773697349"); // 1
    Instrmt_19_set.insert("ProductComplex_t_773697349");
    Instrmt_19.add_attribute("SecGrp", "SecurityGroup_t_346644188"); // 1
    Instrmt_19_set.insert("SecurityGroup_t_346644188");
    Instrmt_19.add_attribute("CFI", "CFICode_t_383719497"); // 1
    Instrmt_19_set.insert("CFICode_t_383719497");
    Instrmt_19.add_attribute("SecTyp", "BN"); // 1
    Instrmt_19_set.insert("BN");
    Instrmt_19.add_attribute("SubTyp", "SecuritySubType_t_2138137395"); // 1
    Instrmt_19_set.insert("SecuritySubType_t_2138137395");
    Instrmt_19.add_attribute("MMY", "398245360"); // 1
    Instrmt_19_set.insert("398245360");
    Instrmt_19.add_attribute("MatDt", "MaturityDate_t_526310116"); // 1
    Instrmt_19_set.insert("MaturityDate_t_526310116");
    Instrmt_19.add_attribute("MatTm", "534199147"); // 1
    Instrmt_19_set.insert("534199147");
    Instrmt_19.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1802069776"); // 1
    Instrmt_19_set.insert("SettleOnOpenFlag_t_1802069776");
    Instrmt_19.add_attribute("AsgnMeth", "1752285089"); // 1
    Instrmt_19_set.insert("1752285089");
    Instrmt_19.add_attribute("Status", "1"); // 1
    Instrmt_19_set.insert("1");
    Instrmt_19.add_attribute("CpnPmt", "CouponPaymentDate_t_1962926207"); // 1
    Instrmt_19_set.insert("CouponPaymentDate_t_1962926207");
    Instrmt_19.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_19_set.insert("XR");
    Instrmt_19.add_attribute("Snrty", "SR"); // 1
    Instrmt_19_set.insert("SR");
    Instrmt_19.add_attribute("NotlPctOut", "5625614.530000"); // 1
    Instrmt_19_set.insert("5625614.530000");
    Instrmt_19.add_attribute("OrigNotlPctOut", "16972872.900000"); // 1
    Instrmt_19_set.insert("16972872.900000");
    Instrmt_19.add_attribute("AttchPnt", "1604810.600000"); // 1
    Instrmt_19_set.insert("1604810.600000");
    Instrmt_19.add_attribute("DetchPnt", "18473259.380000"); // 1
    Instrmt_19_set.insert("18473259.380000");
    Instrmt_19.add_attribute("Issued", "IssueDate_t_897766002"); // 1
    Instrmt_19_set.insert("IssueDate_t_897766002");
    Instrmt_19.add_attribute("RepoCollSecTyp", "176027660"); // 1
    Instrmt_19_set.insert("176027660");
    Instrmt_19.add_attribute("RepoTrm", "1829356450"); // 1
    Instrmt_19_set.insert("1829356450");
    Instrmt_19.add_attribute("RepoRt", "5108768.660000"); // 1
    Instrmt_19_set.insert("5108768.660000");
    Instrmt_19.add_attribute("Fctr", "13964817.710000"); // 1
    Instrmt_19_set.insert("13964817.710000");
    Instrmt_19.add_attribute("CrdRtg", "CreditRating_t_411370969"); // 1
    Instrmt_19_set.insert("CreditRating_t_411370969");
    Instrmt_19.add_attribute("Rgstry", "InstrRegistry_t_2121803402"); // 1
    Instrmt_19_set.insert("InstrRegistry_t_2121803402");
    Instrmt_19.add_attribute("IssuCtry", "803125148"); // 1
    Instrmt_19_set.insert("803125148");
    Instrmt_19.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1697404210"); // 1
    Instrmt_19_set.insert("StateOrProvinceOfIssue_t_1697404210");
    Instrmt_19.add_attribute("Lcl", "LocaleOfIssue_t_1122389430"); // 1
    Instrmt_19_set.insert("LocaleOfIssue_t_1122389430");
    Instrmt_19.add_attribute("Redeem", "RedemptionDate_t_59399847"); // 1
    Instrmt_19_set.insert("RedemptionDate_t_59399847");
    Instrmt_19.add_attribute("StrkPx", "12269947.470000"); // 1
    Instrmt_19_set.insert("12269947.470000");
    Instrmt_19.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_19_set.insert("JPY");
    Instrmt_19.add_attribute("StrkMult", "15736389.350000"); // 1
    Instrmt_19_set.insert("15736389.350000");
    Instrmt_19.add_attribute("StrkValu", "7244371.950000"); // 1
    Instrmt_19_set.insert("7244371.950000");
    Instrmt_19.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_19_set.insert("1");
    Instrmt_19.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_19_set.insert("4");
    Instrmt_19.add_attribute("StrkPxBndryPrcsn", "11226825.550000"); // 1
    Instrmt_19_set.insert("11226825.550000");
    Instrmt_19.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_19_set.insert("2");
    Instrmt_19.add_attribute("OptAt", "2098491830"); // 1
    Instrmt_19_set.insert("2098491830");
    Instrmt_19.add_attribute("Mult", "7772686.840000"); // 1
    Instrmt_19_set.insert("7772686.840000");
    Instrmt_19.add_attribute("MultTyp", "1"); // 1
    Instrmt_19_set.insert("1");
    Instrmt_19.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_19_set.insert("4");
    Instrmt_19.add_attribute("MinPxIncr", "5927112.430000"); // 1
    Instrmt_19_set.insert("5927112.430000");
    Instrmt_19.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1801006237"); // 1
    Instrmt_19_set.insert("MinPriceIncrementAmount_t_1801006237");
    Instrmt_19.add_attribute("UOM", "lbs"); // 1
    Instrmt_19_set.insert("lbs");
    Instrmt_19.add_attribute("UOMQty", "11552726.970000"); // 1
    Instrmt_19_set.insert("11552726.970000");
    Instrmt_19.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_19_set.insert("Gal");
    Instrmt_19.add_attribute("PxUOMQty", "12572856.590000"); // 1
    Instrmt_19_set.insert("12572856.590000");
    Instrmt_19.add_attribute("SettlMeth", "P"); // 1
    Instrmt_19_set.insert("P");
    Instrmt_19.add_attribute("ExerStyle", "1"); // 1
    Instrmt_19_set.insert("1");
    Instrmt_19.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_19_set.insert("2");
    Instrmt_19.add_attribute("OptPayAmt", "OptPayoutAmount_t_536987789"); // 1
    Instrmt_19_set.insert("OptPayoutAmount_t_536987789");
    Instrmt_19.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_19_set.insert("STD");
    Instrmt_19.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_19_set.insert("FUTDA");
    Instrmt_19.add_attribute("ListMeth", "0"); // 1
    Instrmt_19_set.insert("0");
    Instrmt_19.add_attribute("CapPx", "5862888.540000"); // 1
    Instrmt_19_set.insert("5862888.540000");
    Instrmt_19.add_attribute("FlrPx", "14854365.900000"); // 1
    Instrmt_19_set.insert("14854365.900000");
    Instrmt_19.add_attribute("PutCall", "0"); // 1
    Instrmt_19_set.insert("0");
    Instrmt_19.add_attribute("FlexInd", "false"); // 1
    Instrmt_19_set.insert("false");
    Instrmt_19.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_19_set.insert("false");
    Instrmt_19.add_attribute("TmUnit", "S"); // 1
    Instrmt_19_set.insert("S");
    Instrmt_19.add_attribute("CpnRt", "20493959.830000"); // 1
    Instrmt_19_set.insert("20493959.830000");
    Instrmt_19.add_attribute("Exch", "SecurityExchange_t_230449986"); // 1
    Instrmt_19_set.insert("SecurityExchange_t_230449986");
    Instrmt_19.add_attribute("PosLmt", "1151429355"); // 1
    Instrmt_19_set.insert("1151429355");
    Instrmt_19.add_attribute("NTPosLmt", "626349530"); // 1
    Instrmt_19_set.insert("626349530");
    Instrmt_19.add_attribute("Issr", "Issuer_t_793610390"); // 1
    Instrmt_19_set.insert("Issuer_t_793610390");
    Instrmt_19.add_attribute("EncIssrLen", "568238390"); // 1
    Instrmt_19_set.insert("568238390");
    Instrmt_19.add_attribute("EncIssr", "EncodedIssuer_t_1749032085"); // 1
    Instrmt_19_set.insert("EncodedIssuer_t_1749032085");
    Instrmt_19.add_attribute("Desc", "SecurityDesc_t_1883080911"); // 1
    Instrmt_19_set.insert("SecurityDesc_t_1883080911");
    Instrmt_19.add_attribute("EncSecDescLen", "519246573"); // 1
    Instrmt_19_set.insert("519246573");
    Instrmt_19.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_378817121"); // 1
    Instrmt_19_set.insert("EncodedSecurityDesc_t_378817121");
    Instrmt_19.add_attribute("Pool", "Pool_t_429869226"); // 1
    Instrmt_19_set.insert("Pool_t_429869226");
    Instrmt_19.add_attribute("CSetMo", "1558395647"); // 1
    Instrmt_19_set.insert("1558395647");
    Instrmt_19.add_attribute("CPPgm", "2"); // 1
    Instrmt_19_set.insert("2");
    Instrmt_19.add_attribute("CPRegT", "CPRegType_t_83391815"); // 1
    Instrmt_19_set.insert("CPRegType_t_83391815");
    Instrmt_19.add_attribute("Dated", "DatedDate_t_507716599"); // 1
    Instrmt_19_set.insert("DatedDate_t_507716599");
    Instrmt_19.add_attribute("IntAcrl", "InterestAccrualDate_t_2126801062"); // 1
    Instrmt_19_set.insert("InterestAccrualDate_t_2126801062");
    all_values.push_back(Instrmt_19_set);
    all_compo_names.insert("Instrmt_19_set");

    {
      xml_element AID_22{"AID"};
      multiset<string> AID_22_set;
      AID_22.add_attribute("AltID", "SecurityAltID_t_1434201695"); // 2
      AID_22_set.insert("SecurityAltID_t_1434201695");
      AID_22.add_attribute("AltIDSrc", "9"); // 2
      AID_22_set.insert("9");
      all_values.push_back(AID_22_set);
      all_compo_names.insert("AID_22_set");

      Instrmt_19.add_element(AID_22);
    }
    {
      xml_element SecXML_22{"SecXML"};
      multiset<string> SecXML_22_set;
      SecXML_22.add_attribute("Schema", "SecurityXMLSchema_t_834432401"); // 2
      SecXML_22_set.insert("SecurityXMLSchema_t_834432401");
      all_values.push_back(SecXML_22_set);
      all_compo_names.insert("SecXML_22_set");

      Instrmt_19.add_element(SecXML_22);
    }
    {
      xml_element Evnt_22{"Evnt"};
      multiset<string> Evnt_22_set;
      Evnt_22.add_attribute("EventTyp", "9"); // 2
      Evnt_22_set.insert("9");
      Evnt_22.add_attribute("Dt", "EventDate_t_1050831930"); // 2
      Evnt_22_set.insert("EventDate_t_1050831930");
      Evnt_22.add_attribute("Tm", "EventTime_t_1371420190"); // 2
      Evnt_22_set.insert("EventTime_t_1371420190");
      Evnt_22.add_attribute("Px", "21472630.290000"); // 2
      Evnt_22_set.insert("21472630.290000");
      Evnt_22.add_attribute("Txt", "EventText_t_1733143372"); // 2
      Evnt_22_set.insert("EventText_t_1733143372");
      all_values.push_back(Evnt_22_set);
      all_compo_names.insert("Evnt_22_set");

      Instrmt_19.add_element(Evnt_22);
    }
    {
      xml_element Pty_130{"Pty"};
      multiset<string> Pty_130_set;
      Pty_130.add_attribute("ID", "InstrumentPartyID_t_172295300"); // 2
      Pty_130_set.insert("InstrumentPartyID_t_172295300");
      Pty_130.add_attribute("Src", "9"); // 2
      Pty_130_set.insert("9");
      Pty_130.add_attribute("R", "54"); // 2
      Pty_130_set.insert("54");
      all_values.push_back(Pty_130_set);
      all_compo_names.insert("Pty_130_set");

      {
        xml_element Sub_130{"Sub"};
        multiset<string> Sub_130_set;
        Sub_130.add_attribute("ID", "InstrumentPartySubID_t_670574620"); // 3
        Sub_130_set.insert("InstrumentPartySubID_t_670574620");
        Sub_130.add_attribute("Typ", "19"); // 3
        Sub_130_set.insert("19");
        all_values.push_back(Sub_130_set);
        all_compo_names.insert("Sub_130_set");

        Pty_130.add_element(Sub_130);
      }
      Instrmt_19.add_element(Pty_130);
    }
    {
      xml_element CmplxEvnt_19{"CmplxEvnt"};
      multiset<string> CmplxEvnt_19_set;
      CmplxEvnt_19.add_attribute("Typ", "5"); // 2
      CmplxEvnt_19_set.insert("5");
      CmplxEvnt_19.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_248365040"); // 2
      CmplxEvnt_19_set.insert("ComplexOptPayoutAmount_t_248365040");
      CmplxEvnt_19.add_attribute("Px", "491752.080000"); // 2
      CmplxEvnt_19_set.insert("491752.080000");
      CmplxEvnt_19.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_19_set.insert("1");
      CmplxEvnt_19.add_attribute("PxBndryPrcsn", "13997943.960000"); // 2
      CmplxEvnt_19_set.insert("13997943.960000");
      CmplxEvnt_19.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_19_set.insert("3");
      CmplxEvnt_19.add_attribute("Cond", "2"); // 2
      CmplxEvnt_19_set.insert("2");
      all_values.push_back(CmplxEvnt_19_set);
      all_compo_names.insert("CmplxEvnt_19_set");

      {
        xml_element EvntDts_19{"EvntDts"};
        multiset<string> EvntDts_19_set;
        EvntDts_19.add_attribute("StartDt", "ComplexEventStartDate_t_1968032786"); // 3
        EvntDts_19_set.insert("ComplexEventStartDate_t_1968032786");
        EvntDts_19.add_attribute("EndDt", "ComplexEventEndDate_t_277073175"); // 3
        EvntDts_19_set.insert("ComplexEventEndDate_t_277073175");
        all_values.push_back(EvntDts_19_set);
        all_compo_names.insert("EvntDts_19_set");

        {
          xml_element EvntTms_19{"EvntTms"};
          multiset<string> EvntTms_19_set;
          EvntTms_19.add_attribute("StartTm", "1228106744"); // 4
          EvntTms_19_set.insert("1228106744");
          EvntTms_19.add_attribute("EndTm", "339795711"); // 4
          EvntTms_19_set.insert("339795711");
          all_values.push_back(EvntTms_19_set);
          all_compo_names.insert("EvntTms_19_set");

          EvntDts_19.add_element(EvntTms_19);
        }
        CmplxEvnt_19.add_element(EvntDts_19);
      }
      Instrmt_19.add_element(CmplxEvnt_19);
    }
    elt.add_element(Instrmt_19);
  } // end Instrmt
  { // Undly
    xml_element Undly_27{"Undly"};
    multiset<string> Undly_27_set;
    Undly_27.add_attribute("Sym", "UnderlyingSymbol_t_1657975970"); // 1
    Undly_27_set.insert("UnderlyingSymbol_t_1657975970");
    Undly_27.add_attribute("Sfx", "WI"); // 1
    Undly_27_set.insert("WI");
    Undly_27.add_attribute("ID", "UnderlyingSecurityID_t_1627418662"); // 1
    Undly_27_set.insert("UnderlyingSecurityID_t_1627418662");
    Undly_27.add_attribute("Src", "5"); // 1
    Undly_27_set.insert("5");
    Undly_27.add_attribute("Prod", "10"); // 1
    Undly_27_set.insert("10");
    Undly_27.add_attribute("CFI", "UnderlyingCFICode_t_1606736076"); // 1
    Undly_27_set.insert("UnderlyingCFICode_t_1606736076");
    Undly_27.add_attribute("SecTyp", "YCD"); // 1
    Undly_27_set.insert("YCD");
    Undly_27.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2023426568"); // 1
    Undly_27_set.insert("UnderlyingSecuritySubType_t_2023426568");
    Undly_27.add_attribute("MMY", "293684829"); // 1
    Undly_27_set.insert("293684829");
    Undly_27.add_attribute("Mat", "UnderlyingMaturityDate_t_415896114"); // 1
    Undly_27_set.insert("UnderlyingMaturityDate_t_415896114");
    Undly_27.add_attribute("MatTm", "926774850"); // 1
    Undly_27_set.insert("926774850");
    Undly_27.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1665105019"); // 1
    Undly_27_set.insert("UnderlyingCouponPaymentDate_t_1665105019");
    Undly_27.add_attribute("RestrctTyp", "XR"); // 1
    Undly_27_set.insert("XR");
    Undly_27.add_attribute("Snrty", "SD"); // 1
    Undly_27_set.insert("SD");
    Undly_27.add_attribute("NotlPctOut", "18374003.190000"); // 1
    Undly_27_set.insert("18374003.190000");
    Undly_27.add_attribute("OrigNotlPctOut", "10017437.310000"); // 1
    Undly_27_set.insert("10017437.310000");
    Undly_27.add_attribute("AttchPnt", "15835308.900000"); // 1
    Undly_27_set.insert("15835308.900000");
    Undly_27.add_attribute("DetchPnt", "3604912.910000"); // 1
    Undly_27_set.insert("3604912.910000");
    Undly_27.add_attribute("Issued", "UnderlyingIssueDate_t_1149006604"); // 1
    Undly_27_set.insert("UnderlyingIssueDate_t_1149006604");
    Undly_27.add_attribute("RepoCollSecTyp", "2051979994"); // 1
    Undly_27_set.insert("2051979994");
    Undly_27.add_attribute("RepoTrm", "608856332"); // 1
    Undly_27_set.insert("608856332");
    Undly_27.add_attribute("RepoRt", "11981818.120000"); // 1
    Undly_27_set.insert("11981818.120000");
    Undly_27.add_attribute("Fctr", "6033954.370000"); // 1
    Undly_27_set.insert("6033954.370000");
    Undly_27.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2008650728"); // 1
    Undly_27_set.insert("UnderlyingCreditRating_t_2008650728");
    Undly_27.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1873706550"); // 1
    Undly_27_set.insert("UnderlyingInstrRegistry_t_1873706550");
    Undly_27.add_attribute("Ctry", "2095904918"); // 1
    Undly_27_set.insert("2095904918");
    Undly_27.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1829199866"); // 1
    Undly_27_set.insert("UnderlyingStateOrProvinceOfIssue_t_1829199866");
    Undly_27.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_3296078"); // 1
    Undly_27_set.insert("UnderlyingLocaleOfIssue_t_3296078");
    Undly_27.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1176528014"); // 1
    Undly_27_set.insert("UnderlyingRedemptionDate_t_1176528014");
    Undly_27.add_attribute("StrkPx", "215119.300000"); // 1
    Undly_27_set.insert("215119.300000");
    Undly_27.add_attribute("StrkCcy", "CHF"); // 1
    Undly_27_set.insert("CHF");
    Undly_27.add_attribute("OptA", "1919703289"); // 1
    Undly_27_set.insert("1919703289");
    Undly_27.add_attribute("Mult", "1391213.890000"); // 1
    Undly_27_set.insert("1391213.890000");
    Undly_27.add_attribute("MultTyp", "0"); // 1
    Undly_27_set.insert("0");
    Undly_27.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_27_set.insert("1");
    Undly_27.add_attribute("UOM", "MMBtu"); // 1
    Undly_27_set.insert("MMBtu");
    Undly_27.add_attribute("UOMQty", "13089903.080000"); // 1
    Undly_27_set.insert("13089903.080000");
    Undly_27.add_attribute("PxUOM", "lbs"); // 1
    Undly_27_set.insert("lbs");
    Undly_27.add_attribute("PxUOMQty", "20395422.940000"); // 1
    Undly_27_set.insert("20395422.940000");
    Undly_27.add_attribute("TmUnit", "S"); // 1
    Undly_27_set.insert("S");
    Undly_27.add_attribute("ExerStyle", "2"); // 1
    Undly_27_set.insert("2");
    Undly_27.add_attribute("CpnRt", "15571636.650000"); // 1
    Undly_27_set.insert("15571636.650000");
    Undly_27.add_attribute("Exch", "UnderlyingSecurityExchange_t_2140561917"); // 1
    Undly_27_set.insert("UnderlyingSecurityExchange_t_2140561917");
    Undly_27.add_attribute("Issr", "UnderlyingIssuer_t_1345796297"); // 1
    Undly_27_set.insert("UnderlyingIssuer_t_1345796297");
    Undly_27.add_attribute("EncUndIssrLen", "1247080336"); // 1
    Undly_27_set.insert("1247080336");
    Undly_27.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_994822001"); // 1
    Undly_27_set.insert("EncodedUnderlyingIssuer_t_994822001");
    Undly_27.add_attribute("Desc", "UnderlyingSecurityDesc_t_781843539"); // 1
    Undly_27_set.insert("UnderlyingSecurityDesc_t_781843539");
    Undly_27.add_attribute("EncUndSecDescLen", "1607571627"); // 1
    Undly_27_set.insert("1607571627");
    Undly_27.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2143828605"); // 1
    Undly_27_set.insert("EncodedUnderlyingSecurityDesc_t_2143828605");
    Undly_27.add_attribute("CPPgm", "UnderlyingCPProgram_t_686339885"); // 1
    Undly_27_set.insert("UnderlyingCPProgram_t_686339885");
    Undly_27.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_68944311"); // 1
    Undly_27_set.insert("UnderlyingCPRegType_t_68944311");
    Undly_27.add_attribute("AllocPct", "11945267.700000"); // 1
    Undly_27_set.insert("11945267.700000");
    Undly_27.add_attribute("Ccy", "CAN"); // 1
    Undly_27_set.insert("CAN");
    Undly_27.add_attribute("Qty", "9207496.720000"); // 1
    Undly_27_set.insert("9207496.720000");
    Undly_27.add_attribute("SettlTyp", "2"); // 1
    Undly_27_set.insert("2");
    Undly_27.add_attribute("CashAmt", "UnderlyingCashAmount_t_1759311258"); // 1
    Undly_27_set.insert("UnderlyingCashAmount_t_1759311258");
    Undly_27.add_attribute("CashTyp", "FIXED"); // 1
    Undly_27_set.insert("FIXED");
    Undly_27.add_attribute("Px", "2672009.590000"); // 1
    Undly_27_set.insert("2672009.590000");
    Undly_27.add_attribute("DirtPx", "17808231.880000"); // 1
    Undly_27_set.insert("17808231.880000");
    Undly_27.add_attribute("EndPx", "15832321.250000"); // 1
    Undly_27_set.insert("15832321.250000");
    Undly_27.add_attribute("StartVal", "UnderlyingStartValue_t_954221296"); // 1
    Undly_27_set.insert("UnderlyingStartValue_t_954221296");
    Undly_27.add_attribute("CurVal", "UnderlyingCurrentValue_t_1553042829"); // 1
    Undly_27_set.insert("UnderlyingCurrentValue_t_1553042829");
    Undly_27.add_attribute("EndVal", "UnderlyingEndValue_t_1722353514"); // 1
    Undly_27_set.insert("UnderlyingEndValue_t_1722353514");
    Undly_27.add_attribute("AdjQty", "12351257.710000"); // 1
    Undly_27_set.insert("12351257.710000");
    Undly_27.add_attribute("FxRate", "15836867.800000"); // 1
    Undly_27_set.insert("15836867.800000");
    Undly_27.add_attribute("FxRateCalc", "D"); // 1
    Undly_27_set.insert("D");
    Undly_27.add_attribute("CapValu", "UnderlyingCapValue_t_396632431"); // 1
    Undly_27_set.insert("UnderlyingCapValue_t_396632431");
    Undly_27.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1490273651"); // 1
    Undly_27_set.insert("UnderlyingSettlMethod_t_1490273651");
    Undly_27.add_attribute("PutCall", "1212785977"); // 1
    Undly_27_set.insert("1212785977");
    all_values.push_back(Undly_27_set);
    all_compo_names.insert("Undly_27_set");

    {
      xml_element UndAID_27{"UndAID"};
      multiset<string> UndAID_27_set;
      UndAID_27.add_attribute("AltID", "UnderlyingSecurityAltID_t_2121518853"); // 2
      UndAID_27_set.insert("UnderlyingSecurityAltID_t_2121518853");
      UndAID_27.add_attribute("AltIDSrc", "E"); // 2
      UndAID_27_set.insert("E");
      all_values.push_back(UndAID_27_set);
      all_compo_names.insert("UndAID_27_set");

      Undly_27.add_element(UndAID_27);
    }
    {
      xml_element Stip_48{"Stip"};
      multiset<string> Stip_48_set;
      Stip_48.add_attribute("Typ", "ORDRINCR"); // 2
      Stip_48_set.insert("ORDRINCR");
      Stip_48.add_attribute("Val", "UnderlyingStipValue_t_2114597122"); // 2
      Stip_48_set.insert("UnderlyingStipValue_t_2114597122");
      all_values.push_back(Stip_48_set);
      all_compo_names.insert("Stip_48_set");

      Undly_27.add_element(Stip_48);
    }
    {
      xml_element Pty_131{"Pty"};
      multiset<string> Pty_131_set;
      Pty_131.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1521948022"); // 2
      Pty_131_set.insert("UnderlyingInstrumentPartyID_t_1521948022");
      Pty_131.add_attribute("Src", "1"); // 2
      Pty_131_set.insert("1");
      Pty_131.add_attribute("R", "69"); // 2
      Pty_131_set.insert("69");
      all_values.push_back(Pty_131_set);
      all_compo_names.insert("Pty_131_set");

      {
        xml_element Sub_131{"Sub"};
        multiset<string> Sub_131_set;
        Sub_131.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_156307913"); // 3
        Sub_131_set.insert("UnderlyingInstrumentPartySubID_t_156307913");
        Sub_131.add_attribute("Typ", "27"); // 3
        Sub_131_set.insert("27");
        all_values.push_back(Sub_131_set);
        all_compo_names.insert("Sub_131_set");

        Pty_131.add_element(Sub_131);
      }
      Undly_27.add_element(Pty_131);
    }
    elt.add_element(Undly_27);
  } // end Undly
  { // Leg
    xml_element Leg_30{"Leg"};
    multiset<string> Leg_30_set;
    Leg_30.add_attribute("Sym", "LegSymbol_t_842647799"); // 1
    Leg_30_set.insert("LegSymbol_t_842647799");
    Leg_30.add_attribute("Sfx", "WI"); // 1
    Leg_30_set.insert("WI");
    Leg_30.add_attribute("ID", "LegSecurityID_t_5323555"); // 1
    Leg_30_set.insert("LegSecurityID_t_5323555");
    Leg_30.add_attribute("Src", "C"); // 1
    Leg_30_set.insert("C");
    Leg_30.add_attribute("Prod", "10"); // 1
    Leg_30_set.insert("10");
    Leg_30.add_attribute("CFI", "LegCFICode_t_926073227"); // 1
    Leg_30_set.insert("LegCFICode_t_926073227");
    Leg_30.add_attribute("SecTyp", "FRN"); // 1
    Leg_30_set.insert("FRN");
    Leg_30.add_attribute("SecSubTyp", "LegSecuritySubType_t_940517623"); // 1
    Leg_30_set.insert("LegSecuritySubType_t_940517623");
    Leg_30.add_attribute("MMY", "1850118978"); // 1
    Leg_30_set.insert("1850118978");
    Leg_30.add_attribute("Mat", "LegMaturityDate_t_1490257025"); // 1
    Leg_30_set.insert("LegMaturityDate_t_1490257025");
    Leg_30.add_attribute("MatTm", "573857163"); // 1
    Leg_30_set.insert("573857163");
    Leg_30.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1285867455"); // 1
    Leg_30_set.insert("LegCouponPaymentDate_t_1285867455");
    Leg_30.add_attribute("Issued", "LegIssueDate_t_296994673"); // 1
    Leg_30_set.insert("LegIssueDate_t_296994673");
    Leg_30.add_attribute("RepoCollSecTyp", "2126899992"); // 1
    Leg_30_set.insert("2126899992");
    Leg_30.add_attribute("RepoTrm", "860737322"); // 1
    Leg_30_set.insert("860737322");
    Leg_30.add_attribute("RepoRt", "15321204.440000"); // 1
    Leg_30_set.insert("15321204.440000");
    Leg_30.add_attribute("Fctr", "15631031.240000"); // 1
    Leg_30_set.insert("15631031.240000");
    Leg_30.add_attribute("CrdRtg", "LegCreditRating_t_33981005"); // 1
    Leg_30_set.insert("LegCreditRating_t_33981005");
    Leg_30.add_attribute("Rgstry", "LegInstrRegistry_t_1928752875"); // 1
    Leg_30_set.insert("LegInstrRegistry_t_1928752875");
    Leg_30.add_attribute("Ctry", "905893127"); // 1
    Leg_30_set.insert("905893127");
    Leg_30.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1246766983"); // 1
    Leg_30_set.insert("LegStateOrProvinceOfIssue_t_1246766983");
    Leg_30.add_attribute("Lcl", "LegLocaleOfIssue_t_1902788080"); // 1
    Leg_30_set.insert("LegLocaleOfIssue_t_1902788080");
    Leg_30.add_attribute("Redeem", "LegRedemptionDate_t_1082044853"); // 1
    Leg_30_set.insert("LegRedemptionDate_t_1082044853");
    Leg_30.add_attribute("Strk", "18692329.770000"); // 1
    Leg_30_set.insert("18692329.770000");
    Leg_30.add_attribute("StrkCcy", "EUR"); // 1
    Leg_30_set.insert("EUR");
    Leg_30.add_attribute("OptA", "1591295660"); // 1
    Leg_30_set.insert("1591295660");
    Leg_30.add_attribute("Cmult", "6843533.820000"); // 1
    Leg_30_set.insert("6843533.820000");
    Leg_30.add_attribute("MultTyp", "1"); // 1
    Leg_30_set.insert("1");
    Leg_30.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_30_set.insert("2");
    Leg_30.add_attribute("UOM", "t"); // 1
    Leg_30_set.insert("t");
    Leg_30.add_attribute("UOMQty", "14554649.400000"); // 1
    Leg_30_set.insert("14554649.400000");
    Leg_30.add_attribute("PxUOM", "Alw"); // 1
    Leg_30_set.insert("Alw");
    Leg_30.add_attribute("PxUOMQty", "16479573.700000"); // 1
    Leg_30_set.insert("16479573.700000");
    Leg_30.add_attribute("TmUnit", "Mo"); // 1
    Leg_30_set.insert("Mo");
    Leg_30.add_attribute("ExerStyle", "2"); // 1
    Leg_30_set.insert("2");
    Leg_30.add_attribute("CpnRt", "4265469.490000"); // 1
    Leg_30_set.insert("4265469.490000");
    Leg_30.add_attribute("Exch", "LegSecurityExchange_t_515936831"); // 1
    Leg_30_set.insert("LegSecurityExchange_t_515936831");
    Leg_30.add_attribute("Issr", "LegIssuer_t_146265283"); // 1
    Leg_30_set.insert("LegIssuer_t_146265283");
    Leg_30.add_attribute("EncLegIssrLen", "129182279"); // 1
    Leg_30_set.insert("129182279");
    Leg_30.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2006193856"); // 1
    Leg_30_set.insert("EncodedLegIssuer_t_2006193856");
    Leg_30.add_attribute("Desc", "LegSecurityDesc_t_720122446"); // 1
    Leg_30_set.insert("LegSecurityDesc_t_720122446");
    Leg_30.add_attribute("EncLegSecDescLen", "1415049735"); // 1
    Leg_30_set.insert("1415049735");
    Leg_30.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_155704881"); // 1
    Leg_30_set.insert("EncodedLegSecurityDesc_t_155704881");
    Leg_30.add_attribute("RatioQty", "6995387.900000"); // 1
    Leg_30_set.insert("6995387.900000");
    Leg_30.add_attribute("Side", "2"); // 1
    Leg_30_set.insert("2");
    Leg_30.add_attribute("Ccy", "GBP"); // 1
    Leg_30_set.insert("GBP");
    Leg_30.add_attribute("Pool", "LegPool_t_162284414"); // 1
    Leg_30_set.insert("LegPool_t_162284414");
    Leg_30.add_attribute("Dated", "LegDatedDate_t_1469094552"); // 1
    Leg_30_set.insert("LegDatedDate_t_1469094552");
    Leg_30.add_attribute("CSetMo", "1021051394"); // 1
    Leg_30_set.insert("1021051394");
    Leg_30.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1409051397"); // 1
    Leg_30_set.insert("LegInterestAccrualDate_t_1409051397");
    Leg_30.add_attribute("PutCall", "1224398984"); // 1
    Leg_30_set.insert("1224398984");
    Leg_30.add_attribute("LegOptionRatio", "21030962.470000"); // 1
    Leg_30_set.insert("21030962.470000");
    Leg_30.add_attribute("Px", "11308007.270000"); // 1
    Leg_30_set.insert("11308007.270000");
    all_values.push_back(Leg_30_set);
    all_compo_names.insert("Leg_30_set");

    {
      xml_element LegAID_30{"LegAID"};
      multiset<string> LegAID_30_set;
      LegAID_30.add_attribute("SecAltID", "LegSecurityAltID_t_946816891"); // 2
      LegAID_30_set.insert("LegSecurityAltID_t_946816891");
      LegAID_30.add_attribute("SecAltIDSrc", "7"); // 2
      LegAID_30_set.insert("7");
      all_values.push_back(LegAID_30_set);
      all_compo_names.insert("LegAID_30_set");

      Leg_30.add_element(LegAID_30);
    }
    elt.add_element(Leg_30);
  } // end Leg
  { // OrdQty
    xml_element OrdQty_6{"OrdQty"};
    multiset<string> OrdQty_6_set;
    OrdQty_6.add_attribute("Qty", "5746127.390000"); // 1
    OrdQty_6_set.insert("5746127.390000");
    OrdQty_6.add_attribute("Cash", "16311702.730000"); // 1
    OrdQty_6_set.insert("16311702.730000");
    OrdQty_6.add_attribute("Pct", "10249389.670000"); // 1
    OrdQty_6_set.insert("10249389.670000");
    OrdQty_6.add_attribute("RndDir", "1"); // 1
    OrdQty_6_set.insert("1");
    OrdQty_6.add_attribute("RndMod", "11263204.400000"); // 1
    OrdQty_6_set.insert("11263204.400000");
    all_values.push_back(OrdQty_6_set);
    all_compo_names.insert("OrdQty_6_set");

    elt.add_element(OrdQty_6);
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
