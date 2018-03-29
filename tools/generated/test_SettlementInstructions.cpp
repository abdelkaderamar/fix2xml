#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SettlementInstructions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementInstructions, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SettlementInstructions msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructions_0;
  FIX::ClOrdID ClOrdID_46("STRING_763330706");
  msg.set(ClOrdID_46);
  SettlementInstructions_0.insert(ClOrdID_46.getString());
  FIX::EncodedText EncodedText_93("DATA_229046912");
  msg.set(EncodedText_93);
  SettlementInstructions_0.insert(EncodedText_93.getString());
  FIX::EncodedTextLen EncodedTextLen_93(1663860511);
  msg.set(EncodedTextLen_93);
  SettlementInstructions_0.insert(EncodedTextLen_93.getString());
  FIX::SettlInstMode SettlInstMode_3('0');
  msg.set(SettlInstMode_3);
  SettlementInstructions_0.insert(SettlInstMode_3.getString());
  FIX::SettlInstMsgID SettlInstMsgID_0("STRING_1054044965");
  msg.set(SettlInstMsgID_0);
  SettlementInstructions_0.insert(SettlInstMsgID_0.getString());
  FIX::SettlInstReqID SettlInstReqID_1("STRING_1777599434");
  msg.set(SettlInstReqID_1);
  SettlementInstructions_0.insert(SettlInstReqID_1.getString());
  FIX::SettlInstReqRejCode SettlInstReqRejCode_0(0);
  msg.set(SettlInstReqRejCode_0);
  SettlementInstructions_0.insert(SettlInstReqRejCode_0.getString());
  FIX::Text Text_93("STRING_635439512");
  msg.set(Text_93);
  SettlementInstructions_0.insert(Text_93.getString());
  FIX::TransactTime TransactTime_71(FIX::UTCTIMESTAMP(20, 20, 31, 6, 2, 2007));
  msg.set(TransactTime_71);
  SettlementInstructions_0.insert(TransactTime_71.getString());
  all_values.push_back(SettlementInstructions_0);

  all_compo_names.insert("SettlementInstructions");

  // SettlInstGrp
  // Group SettlInstGrp.NoSettlInst
  {
    FIX50SP2::SettlementInstructions::NoSettlInst noSettlInst_0_0;
    // SettlInstGrp.NoSettlInst
    multiset<string> SettlInstGrp_NoSettlInst_0;
    FIX::CFICode CFICode_93("STRING_1144369268");
    noSettlInst_0_0.set(CFICode_93);
    SettlInstGrp_NoSettlInst_0.insert(CFICode_93.getString());
    FIX::CardExpDate CardExpDate_0("LOCALMKTDATE_1308159998");
    noSettlInst_0_0.set(CardExpDate_0);
    SettlInstGrp_NoSettlInst_0.insert(CardExpDate_0.getString());
    FIX::CardHolderName CardHolderName_0("STRING_425693053");
    noSettlInst_0_0.set(CardHolderName_0);
    SettlInstGrp_NoSettlInst_0.insert(CardHolderName_0.getString());
    FIX::CardIssNum CardIssNum_0("STRING_760456781");
    noSettlInst_0_0.set(CardIssNum_0);
    SettlInstGrp_NoSettlInst_0.insert(CardIssNum_0.getString());
    FIX::CardNumber CardNumber_0("STRING_264286477");
    noSettlInst_0_0.set(CardNumber_0);
    SettlInstGrp_NoSettlInst_0.insert(CardNumber_0.getString());
    FIX::CardStartDate CardStartDate_0("LOCALMKTDATE_1967425559");
    noSettlInst_0_0.set(CardStartDate_0);
    SettlInstGrp_NoSettlInst_0.insert(CardStartDate_0.getString());
    FIX::EffectiveTime EffectiveTime_11(FIX::UTCTIMESTAMP(20, 56, 50, 13, 7, 2017));
    noSettlInst_0_0.set(EffectiveTime_11);
    SettlInstGrp_NoSettlInst_0.insert(EffectiveTime_11.getString());
    FIX::ExpireTime ExpireTime_20(FIX::UTCTIMESTAMP(1, 37, 7, 8, 12, 2016));
    noSettlInst_0_0.set(ExpireTime_20);
    SettlInstGrp_NoSettlInst_0.insert(ExpireTime_20.getString());
    FIX::LastUpdateTime LastUpdateTime_1(FIX::UTCTIMESTAMP(16, 36, 1, 8, 2, 2002));
    noSettlInst_0_0.set(LastUpdateTime_1);
    SettlInstGrp_NoSettlInst_0.insert(LastUpdateTime_1.getString());
    FIX::PaymentDate PaymentDate_0("LOCALMKTDATE_1347853879");
    noSettlInst_0_0.set(PaymentDate_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentDate_0.getString());
    FIX::PaymentMethod PaymentMethod_0(13);
    noSettlInst_0_0.set(PaymentMethod_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentMethod_0.getString());
    FIX::PaymentRef PaymentRef_0("STRING_1621197352");
    noSettlInst_0_0.set(PaymentRef_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentRef_0.getString());
    FIX::PaymentRemitterID PaymentRemitterID_0("STRING_598505328");
    noSettlInst_0_0.set(PaymentRemitterID_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentRemitterID_0.getString());
    FIX::Product Product_96(1);
    noSettlInst_0_0.set(Product_96);
    SettlInstGrp_NoSettlInst_0.insert(Product_96.getString());
    FIX::SecurityType SecurityType_96("STRING_TBOND");
    noSettlInst_0_0.set(SecurityType_96);
    SettlInstGrp_NoSettlInst_0.insert(SecurityType_96.getString());
    FIX::SettlCurrency SettlCurrency_31("GBP");
    noSettlInst_0_0.set(SettlCurrency_31);
    SettlInstGrp_NoSettlInst_0.insert(SettlCurrency_31.getString());
    FIX::SettlInstID SettlInstID_0("STRING_1046160179");
    noSettlInst_0_0.set(SettlInstID_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstID_0.getString());
    FIX::SettlInstRefID SettlInstRefID_0("STRING_844140292");
    noSettlInst_0_0.set(SettlInstRefID_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstRefID_0.getString());
    FIX::SettlInstTransType SettlInstTransType_0('R');
    noSettlInst_0_0.set(SettlInstTransType_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstTransType_0.getString());
    FIX::Side Side_48('G');
    noSettlInst_0_0.set(Side_48);
    SettlInstGrp_NoSettlInst_0.insert(Side_48.getString());
    all_values.push_back(SettlInstGrp_NoSettlInst_0);
    all_compo_names.insert("SettlInstGrp.NoSettlInst");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_132;
      FIX::PartyID PartyID_132("STRING_2137445096");
      noPartyIDs_0_1_0.set(PartyID_132);
      Parties_NoPartyIDs_132.insert(PartyID_132.getString());
      FIX::PartyIDSource PartyIDSource_132('8');
      noPartyIDs_0_1_0.set(PartyIDSource_132);
      Parties_NoPartyIDs_132.insert(PartyIDSource_132.getString());
      FIX::PartyRole PartyRole_132(49);
      noPartyIDs_0_1_0.set(PartyRole_132);
      Parties_NoPartyIDs_132.insert(PartyRole_132.getString());
      all_values.push_back(Parties_NoPartyIDs_132);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_289;
        FIX::PartySubID PartySubID_289("STRING_719238203");
        noPartySubIDs_0_0_2_0.set(PartySubID_289);
        PtysSubGrp_NoPartySubIDs_289.insert(PartySubID_289.getString());
        FIX::PartySubIDType PartySubIDType_289(29);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_289);
        PtysSubGrp_NoPartySubIDs_289.insert(PartySubIDType_289.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_289);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_290;
        FIX::PartySubID PartySubID_290("STRING_894686129");
        noPartySubIDs_0_0_2_1.set(PartySubID_290);
        PtysSubGrp_NoPartySubIDs_290.insert(PartySubID_290.getString());
        FIX::PartySubIDType PartySubIDType_290(32);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_290);
        PtysSubGrp_NoPartySubIDs_290.insert(PartySubIDType_290.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_290);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_291;
        FIX::PartySubID PartySubID_291("STRING_659288380");
        noPartySubIDs_0_0_2_2.set(PartySubID_291);
        PtysSubGrp_NoPartySubIDs_291.insert(PartySubID_291.getString());
        FIX::PartySubIDType PartySubIDType_291(23);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_291);
        PtysSubGrp_NoPartySubIDs_291.insert(PartySubIDType_291.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_291);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_133;
      FIX::PartyID PartyID_133("STRING_1608023846");
      noPartyIDs_0_1_1.set(PartyID_133);
      Parties_NoPartyIDs_133.insert(PartyID_133.getString());
      FIX::PartyIDSource PartyIDSource_133('I');
      noPartyIDs_0_1_1.set(PartyIDSource_133);
      Parties_NoPartyIDs_133.insert(PartyIDSource_133.getString());
      FIX::PartyRole PartyRole_133(50);
      noPartyIDs_0_1_1.set(PartyRole_133);
      Parties_NoPartyIDs_133.insert(PartyRole_133.getString());
      all_values.push_back(Parties_NoPartyIDs_133);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_292;
        FIX::PartySubID PartySubID_292("STRING_1186745555");
        noPartySubIDs_0_1_2_0.set(PartySubID_292);
        PtysSubGrp_NoPartySubIDs_292.insert(PartySubID_292.getString());
        FIX::PartySubIDType PartySubIDType_292(12);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_292);
        PtysSubGrp_NoPartySubIDs_292.insert(PartySubIDType_292.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_292);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_134;
      FIX::PartyID PartyID_134("STRING_1822043143");
      noPartyIDs_0_1_2.set(PartyID_134);
      Parties_NoPartyIDs_134.insert(PartyID_134.getString());
      FIX::PartyIDSource PartyIDSource_134('D');
      noPartyIDs_0_1_2.set(PartyIDSource_134);
      Parties_NoPartyIDs_134.insert(PartyIDSource_134.getString());
      FIX::PartyRole PartyRole_134(30);
      noPartyIDs_0_1_2.set(PartyRole_134);
      Parties_NoPartyIDs_134.insert(PartyRole_134.getString());
      all_values.push_back(Parties_NoPartyIDs_134);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_293;
        FIX::PartySubID PartySubID_293("STRING_1498659231");
        noPartySubIDs_0_2_2_0.set(PartySubID_293);
        PtysSubGrp_NoPartySubIDs_293.insert(PartySubID_293.getString());
        FIX::PartySubIDType PartySubIDType_293(11);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_293);
        PtysSubGrp_NoPartySubIDs_293.insert(PartySubIDType_293.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_293);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_294;
        FIX::PartySubID PartySubID_294("STRING_1004721248");
        noPartySubIDs_0_2_2_1.set(PartySubID_294);
        PtysSubGrp_NoPartySubIDs_294.insert(PartySubID_294.getString());
        FIX::PartySubIDType PartySubIDType_294(18);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_294);
        PtysSubGrp_NoPartySubIDs_294.insert(PartySubIDType_294.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_294);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_8;
    FIX::SettlDeliveryType SettlDeliveryType_8(1);
    noSettlInst_0_0.set(SettlDeliveryType_8);
    SettlInstructionsData_8.insert(SettlDeliveryType_8.getString());
    FIX::StandInstDbID StandInstDbID_9("STRING_854959892");
    noSettlInst_0_0.set(StandInstDbID_9);
    SettlInstructionsData_8.insert(StandInstDbID_9.getString());
    FIX::StandInstDbName StandInstDbName_9("STRING_1179209464");
    noSettlInst_0_0.set(StandInstDbName_9);
    SettlInstructionsData_8.insert(StandInstDbName_9.getString());
    FIX::StandInstDbType StandInstDbType_9(3);
    noSettlInst_0_0.set(StandInstDbType_9);
    SettlInstructionsData_8.insert(StandInstDbType_9.getString());
    all_values.push_back(SettlInstructionsData_8);
    all_compo_names.insert("SettlInstructionsData");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_12;
      FIX::DlvyInstType DlvyInstType_12('S');
      noDlvyInst_0_1_0.set(DlvyInstType_12);
      DlvyInstGrp_NoDlvyInst_12.insert(DlvyInstType_12.getString());
      FIX::SettlInstSource SettlInstSource_12('1');
      noDlvyInst_0_1_0.set(SettlInstSource_12);
      DlvyInstGrp_NoDlvyInst_12.insert(SettlInstSource_12.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_12);
      all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_22;
        FIX::SettlPartyID SettlPartyID_22("STRING_1123127375");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_22);
        SettlParties_NoSettlPartyIDs_22.insert(SettlPartyID_22.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_22('2');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_22);
        SettlParties_NoSettlPartyIDs_22.insert(SettlPartyIDSource_22.getString());
        FIX::SettlPartyRole SettlPartyRole_22(1592808377);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_22);
        SettlParties_NoSettlPartyIDs_22.insert(SettlPartyRole_22.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_22);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_42;
          FIX::SettlPartySubID SettlPartySubID_42("STRING_430115293");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_42);
          SettlPtysSubGrp_NoSettlPartySubIDs_42.insert(SettlPartySubID_42.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_42(340010858);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_42);
          SettlPtysSubGrp_NoSettlPartySubIDs_42.insert(SettlPartySubIDType_42.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_42);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_43;
          FIX::SettlPartySubID SettlPartySubID_43("STRING_331490472");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_43);
          SettlPtysSubGrp_NoSettlPartySubIDs_43.insert(SettlPartySubID_43.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_43(1089403673);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_43);
          SettlPtysSubGrp_NoSettlPartySubIDs_43.insert(SettlPartySubIDType_43.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_43);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noSettlInst_0_0.addGroup(noDlvyInst_0_1_0);
    }
    msg.addGroup(noSettlInst_0_0);
  }
  {
    FIX50SP2::SettlementInstructions::NoSettlInst noSettlInst_0_1;
    // SettlInstGrp.NoSettlInst
    multiset<string> SettlInstGrp_NoSettlInst_1;
    FIX::CFICode CFICode_94("STRING_1676666839");
    noSettlInst_0_1.set(CFICode_94);
    SettlInstGrp_NoSettlInst_1.insert(CFICode_94.getString());
    FIX::CardExpDate CardExpDate_1("LOCALMKTDATE_1939514318");
    noSettlInst_0_1.set(CardExpDate_1);
    SettlInstGrp_NoSettlInst_1.insert(CardExpDate_1.getString());
    FIX::CardHolderName CardHolderName_1("STRING_1867286607");
    noSettlInst_0_1.set(CardHolderName_1);
    SettlInstGrp_NoSettlInst_1.insert(CardHolderName_1.getString());
    FIX::CardIssNum CardIssNum_1("STRING_278175371");
    noSettlInst_0_1.set(CardIssNum_1);
    SettlInstGrp_NoSettlInst_1.insert(CardIssNum_1.getString());
    FIX::CardNumber CardNumber_1("STRING_859425685");
    noSettlInst_0_1.set(CardNumber_1);
    SettlInstGrp_NoSettlInst_1.insert(CardNumber_1.getString());
    FIX::CardStartDate CardStartDate_1("LOCALMKTDATE_906548514");
    noSettlInst_0_1.set(CardStartDate_1);
    SettlInstGrp_NoSettlInst_1.insert(CardStartDate_1.getString());
    FIX::EffectiveTime EffectiveTime_12(FIX::UTCTIMESTAMP(12, 54, 20, 2, 2, 2000));
    noSettlInst_0_1.set(EffectiveTime_12);
    SettlInstGrp_NoSettlInst_1.insert(EffectiveTime_12.getString());
    FIX::ExpireTime ExpireTime_21(FIX::UTCTIMESTAMP(7, 9, 50, 15, 12, 2008));
    noSettlInst_0_1.set(ExpireTime_21);
    SettlInstGrp_NoSettlInst_1.insert(ExpireTime_21.getString());
    FIX::LastUpdateTime LastUpdateTime_2(FIX::UTCTIMESTAMP(9, 38, 54, 27, 12, 2009));
    noSettlInst_0_1.set(LastUpdateTime_2);
    SettlInstGrp_NoSettlInst_1.insert(LastUpdateTime_2.getString());
    FIX::PaymentDate PaymentDate_1("LOCALMKTDATE_1165714184");
    noSettlInst_0_1.set(PaymentDate_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentDate_1.getString());
    FIX::PaymentMethod PaymentMethod_1(12);
    noSettlInst_0_1.set(PaymentMethod_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentMethod_1.getString());
    FIX::PaymentRef PaymentRef_1("STRING_541673457");
    noSettlInst_0_1.set(PaymentRef_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentRef_1.getString());
    FIX::PaymentRemitterID PaymentRemitterID_1("STRING_107634210");
    noSettlInst_0_1.set(PaymentRemitterID_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentRemitterID_1.getString());
    FIX::Product Product_97(13);
    noSettlInst_0_1.set(Product_97);
    SettlInstGrp_NoSettlInst_1.insert(Product_97.getString());
    FIX::SecurityType SecurityType_97("STRING_DUAL");
    noSettlInst_0_1.set(SecurityType_97);
    SettlInstGrp_NoSettlInst_1.insert(SecurityType_97.getString());
    FIX::SettlCurrency SettlCurrency_32("USD");
    noSettlInst_0_1.set(SettlCurrency_32);
    SettlInstGrp_NoSettlInst_1.insert(SettlCurrency_32.getString());
    FIX::SettlInstID SettlInstID_1("STRING_1193129813");
    noSettlInst_0_1.set(SettlInstID_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstID_1.getString());
    FIX::SettlInstRefID SettlInstRefID_1("STRING_733985684");
    noSettlInst_0_1.set(SettlInstRefID_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstRefID_1.getString());
    FIX::SettlInstTransType SettlInstTransType_1('C');
    noSettlInst_0_1.set(SettlInstTransType_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstTransType_1.getString());
    FIX::Side Side_49('2');
    noSettlInst_0_1.set(Side_49);
    SettlInstGrp_NoSettlInst_1.insert(Side_49.getString());
    all_values.push_back(SettlInstGrp_NoSettlInst_1);
    all_compo_names.insert("SettlInstGrp.NoSettlInst");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_135;
      FIX::PartyID PartyID_135("STRING_596686781");
      noPartyIDs_1_1_0.set(PartyID_135);
      Parties_NoPartyIDs_135.insert(PartyID_135.getString());
      FIX::PartyIDSource PartyIDSource_135('B');
      noPartyIDs_1_1_0.set(PartyIDSource_135);
      Parties_NoPartyIDs_135.insert(PartyIDSource_135.getString());
      FIX::PartyRole PartyRole_135(65);
      noPartyIDs_1_1_0.set(PartyRole_135);
      Parties_NoPartyIDs_135.insert(PartyRole_135.getString());
      all_values.push_back(Parties_NoPartyIDs_135);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_295;
        FIX::PartySubID PartySubID_295("STRING_1187234429");
        noPartySubIDs_1_0_2_0.set(PartySubID_295);
        PtysSubGrp_NoPartySubIDs_295.insert(PartySubID_295.getString());
        FIX::PartySubIDType PartySubIDType_295(8);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_295);
        PtysSubGrp_NoPartySubIDs_295.insert(PartySubIDType_295.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_295);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_296;
        FIX::PartySubID PartySubID_296("STRING_1406247331");
        noPartySubIDs_1_0_2_1.set(PartySubID_296);
        PtysSubGrp_NoPartySubIDs_296.insert(PartySubID_296.getString());
        FIX::PartySubIDType PartySubIDType_296(2);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_296);
        PtysSubGrp_NoPartySubIDs_296.insert(PartySubIDType_296.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_296);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_136;
      FIX::PartyID PartyID_136("STRING_1221378398");
      noPartyIDs_1_1_1.set(PartyID_136);
      Parties_NoPartyIDs_136.insert(PartyID_136.getString());
      FIX::PartyIDSource PartyIDSource_136('G');
      noPartyIDs_1_1_1.set(PartyIDSource_136);
      Parties_NoPartyIDs_136.insert(PartyIDSource_136.getString());
      FIX::PartyRole PartyRole_136(29);
      noPartyIDs_1_1_1.set(PartyRole_136);
      Parties_NoPartyIDs_136.insert(PartyRole_136.getString());
      all_values.push_back(Parties_NoPartyIDs_136);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_297;
        FIX::PartySubID PartySubID_297("STRING_1298235776");
        noPartySubIDs_1_1_2_0.set(PartySubID_297);
        PtysSubGrp_NoPartySubIDs_297.insert(PartySubID_297.getString());
        FIX::PartySubIDType PartySubIDType_297(22);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_297);
        PtysSubGrp_NoPartySubIDs_297.insert(PartySubIDType_297.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_297);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_137;
      FIX::PartyID PartyID_137("STRING_1128853131");
      noPartyIDs_1_1_2.set(PartyID_137);
      Parties_NoPartyIDs_137.insert(PartyID_137.getString());
      FIX::PartyIDSource PartyIDSource_137('F');
      noPartyIDs_1_1_2.set(PartyIDSource_137);
      Parties_NoPartyIDs_137.insert(PartyIDSource_137.getString());
      FIX::PartyRole PartyRole_137(83);
      noPartyIDs_1_1_2.set(PartyRole_137);
      Parties_NoPartyIDs_137.insert(PartyRole_137.getString());
      all_values.push_back(Parties_NoPartyIDs_137);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_298;
        FIX::PartySubID PartySubID_298("STRING_1052065203");
        noPartySubIDs_1_2_2_0.set(PartySubID_298);
        PtysSubGrp_NoPartySubIDs_298.insert(PartySubID_298.getString());
        FIX::PartySubIDType PartySubIDType_298(24);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_298);
        PtysSubGrp_NoPartySubIDs_298.insert(PartySubIDType_298.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_298);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_9;
    FIX::SettlDeliveryType SettlDeliveryType_9(2);
    noSettlInst_0_1.set(SettlDeliveryType_9);
    SettlInstructionsData_9.insert(SettlDeliveryType_9.getString());
    FIX::StandInstDbID StandInstDbID_10("STRING_1159699413");
    noSettlInst_0_1.set(StandInstDbID_10);
    SettlInstructionsData_9.insert(StandInstDbID_10.getString());
    FIX::StandInstDbName StandInstDbName_10("STRING_1842626160");
    noSettlInst_0_1.set(StandInstDbName_10);
    SettlInstructionsData_9.insert(StandInstDbName_10.getString());
    FIX::StandInstDbType StandInstDbType_10(4);
    noSettlInst_0_1.set(StandInstDbType_10);
    SettlInstructionsData_9.insert(StandInstDbType_10.getString());
    all_values.push_back(SettlInstructionsData_9);
    all_compo_names.insert("SettlInstructionsData");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_13;
      FIX::DlvyInstType DlvyInstType_13('C');
      noDlvyInst_1_1_0.set(DlvyInstType_13);
      DlvyInstGrp_NoDlvyInst_13.insert(DlvyInstType_13.getString());
      FIX::SettlInstSource SettlInstSource_13('3');
      noDlvyInst_1_1_0.set(SettlInstSource_13);
      DlvyInstGrp_NoDlvyInst_13.insert(SettlInstSource_13.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_13);
      all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_23;
        FIX::SettlPartyID SettlPartyID_23("STRING_1857779949");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_23);
        SettlParties_NoSettlPartyIDs_23.insert(SettlPartyID_23.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_23('8');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_23);
        SettlParties_NoSettlPartyIDs_23.insert(SettlPartyIDSource_23.getString());
        FIX::SettlPartyRole SettlPartyRole_23(1091634697);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_23);
        SettlParties_NoSettlPartyIDs_23.insert(SettlPartyRole_23.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_23);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_44;
          FIX::SettlPartySubID SettlPartySubID_44("STRING_720763476");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_44);
          SettlPtysSubGrp_NoSettlPartySubIDs_44.insert(SettlPartySubID_44.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_44(597333104);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_44);
          SettlPtysSubGrp_NoSettlPartySubIDs_44.insert(SettlPartySubIDType_44.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_44);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_45;
          FIX::SettlPartySubID SettlPartySubID_45("STRING_487869485");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_45);
          SettlPtysSubGrp_NoSettlPartySubIDs_45.insert(SettlPartySubID_45.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_45(1907997905);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_45);
          SettlPtysSubGrp_NoSettlPartySubIDs_45.insert(SettlPartySubIDType_45.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_45);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_24;
        FIX::SettlPartyID SettlPartyID_24("STRING_371266775");
        noSettlPartyIDs_1_0_2_1.set(SettlPartyID_24);
        SettlParties_NoSettlPartyIDs_24.insert(SettlPartyID_24.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_24('1');
        noSettlPartyIDs_1_0_2_1.set(SettlPartyIDSource_24);
        SettlParties_NoSettlPartyIDs_24.insert(SettlPartyIDSource_24.getString());
        FIX::SettlPartyRole SettlPartyRole_24(961387097);
        noSettlPartyIDs_1_0_2_1.set(SettlPartyRole_24);
        SettlParties_NoSettlPartyIDs_24.insert(SettlPartyRole_24.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_24);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_46;
          FIX::SettlPartySubID SettlPartySubID_46("STRING_568575735");
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubID_46);
          SettlPtysSubGrp_NoSettlPartySubIDs_46.insert(SettlPartySubID_46.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_46(496861368);
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubIDType_46);
          SettlPtysSubGrp_NoSettlPartySubIDs_46.insert(SettlPartySubIDType_46.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_46);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_47;
          FIX::SettlPartySubID SettlPartySubID_47("STRING_58713602");
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubID_47);
          SettlPtysSubGrp_NoSettlPartySubIDs_47.insert(SettlPartySubID_47.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_47(1866811511);
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubIDType_47);
          SettlPtysSubGrp_NoSettlPartySubIDs_47.insert(SettlPartySubIDType_47.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_47);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      noSettlInst_0_1.addGroup(noDlvyInst_1_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_1_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_14;
      FIX::DlvyInstType DlvyInstType_14('C');
      noDlvyInst_1_1_1.set(DlvyInstType_14);
      DlvyInstGrp_NoDlvyInst_14.insert(DlvyInstType_14.getString());
      FIX::SettlInstSource SettlInstSource_14('3');
      noDlvyInst_1_1_1.set(SettlInstSource_14);
      DlvyInstGrp_NoDlvyInst_14.insert(SettlInstSource_14.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_14);
      all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_25;
        FIX::SettlPartyID SettlPartyID_25("STRING_1834614235");
        noSettlPartyIDs_1_1_2_0.set(SettlPartyID_25);
        SettlParties_NoSettlPartyIDs_25.insert(SettlPartyID_25.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_25('3');
        noSettlPartyIDs_1_1_2_0.set(SettlPartyIDSource_25);
        SettlParties_NoSettlPartyIDs_25.insert(SettlPartyIDSource_25.getString());
        FIX::SettlPartyRole SettlPartyRole_25(657744085);
        noSettlPartyIDs_1_1_2_0.set(SettlPartyRole_25);
        SettlParties_NoSettlPartyIDs_25.insert(SettlPartyRole_25.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_25);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_48;
          FIX::SettlPartySubID SettlPartySubID_48("STRING_112345128");
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubID_48);
          SettlPtysSubGrp_NoSettlPartySubIDs_48.insert(SettlPartySubID_48.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_48(1817443499);
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubIDType_48);
          SettlPtysSubGrp_NoSettlPartySubIDs_48.insert(SettlPartySubIDType_48.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_48);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_49;
          FIX::SettlPartySubID SettlPartySubID_49("STRING_969887282");
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubID_49);
          SettlPtysSubGrp_NoSettlPartySubIDs_49.insert(SettlPartySubID_49.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_49(179275182);
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubIDType_49);
          SettlPtysSubGrp_NoSettlPartySubIDs_49.insert(SettlPartySubIDType_49.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_49);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_1);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      noSettlInst_0_1.addGroup(noDlvyInst_1_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_1_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_15;
      FIX::DlvyInstType DlvyInstType_15('C');
      noDlvyInst_1_1_2.set(DlvyInstType_15);
      DlvyInstGrp_NoDlvyInst_15.insert(DlvyInstType_15.getString());
      FIX::SettlInstSource SettlInstSource_15('1');
      noDlvyInst_1_1_2.set(SettlInstSource_15);
      DlvyInstGrp_NoDlvyInst_15.insert(SettlInstSource_15.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_15);
      all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_26;
        FIX::SettlPartyID SettlPartyID_26("STRING_230735053");
        noSettlPartyIDs_1_2_2_0.set(SettlPartyID_26);
        SettlParties_NoSettlPartyIDs_26.insert(SettlPartyID_26.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_26('9');
        noSettlPartyIDs_1_2_2_0.set(SettlPartyIDSource_26);
        SettlParties_NoSettlPartyIDs_26.insert(SettlPartyIDSource_26.getString());
        FIX::SettlPartyRole SettlPartyRole_26(131542613);
        noSettlPartyIDs_1_2_2_0.set(SettlPartyRole_26);
        SettlParties_NoSettlPartyIDs_26.insert(SettlPartyRole_26.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_26);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_50;
          FIX::SettlPartySubID SettlPartySubID_50("STRING_1215496527");
          noSettlPartySubIDs_1_2_0_3_0.set(SettlPartySubID_50);
          SettlPtysSubGrp_NoSettlPartySubIDs_50.insert(SettlPartySubID_50.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_50(852306089);
          noSettlPartySubIDs_1_2_0_3_0.set(SettlPartySubIDType_50);
          SettlPtysSubGrp_NoSettlPartySubIDs_50.insert(SettlPartySubIDType_50.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_50);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_51;
          FIX::SettlPartySubID SettlPartySubID_51("STRING_1919702854");
          noSettlPartySubIDs_1_2_0_3_1.set(SettlPartySubID_51);
          SettlPtysSubGrp_NoSettlPartySubIDs_51.insert(SettlPartySubID_51.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_51(1703366012);
          noSettlPartySubIDs_1_2_0_3_1.set(SettlPartySubIDType_51);
          SettlPtysSubGrp_NoSettlPartySubIDs_51.insert(SettlPartySubIDType_51.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_51);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_52;
          FIX::SettlPartySubID SettlPartySubID_52("STRING_612820347");
          noSettlPartySubIDs_1_2_0_3_2.set(SettlPartySubID_52);
          SettlPtysSubGrp_NoSettlPartySubIDs_52.insert(SettlPartySubID_52.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_52(143485981);
          noSettlPartySubIDs_1_2_0_3_2.set(SettlPartySubIDType_52);
          SettlPtysSubGrp_NoSettlPartySubIDs_52.insert(SettlPartySubIDType_52.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_52);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_2);
        }
        noDlvyInst_1_1_2.addGroup(noSettlPartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_27;
        FIX::SettlPartyID SettlPartyID_27("STRING_1449999180");
        noSettlPartyIDs_1_2_2_1.set(SettlPartyID_27);
        SettlParties_NoSettlPartyIDs_27.insert(SettlPartyID_27.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_27('1');
        noSettlPartyIDs_1_2_2_1.set(SettlPartyIDSource_27);
        SettlParties_NoSettlPartyIDs_27.insert(SettlPartyIDSource_27.getString());
        FIX::SettlPartyRole SettlPartyRole_27(1736131154);
        noSettlPartyIDs_1_2_2_1.set(SettlPartyRole_27);
        SettlParties_NoSettlPartyIDs_27.insert(SettlPartyRole_27.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_27);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_53;
          FIX::SettlPartySubID SettlPartySubID_53("STRING_2071068812");
          noSettlPartySubIDs_1_2_1_3_0.set(SettlPartySubID_53);
          SettlPtysSubGrp_NoSettlPartySubIDs_53.insert(SettlPartySubID_53.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_53(1794844756);
          noSettlPartySubIDs_1_2_1_3_0.set(SettlPartySubIDType_53);
          SettlPtysSubGrp_NoSettlPartySubIDs_53.insert(SettlPartySubIDType_53.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_53);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_1.addGroup(noSettlPartySubIDs_1_2_1_3_0);
        }
        noDlvyInst_1_1_2.addGroup(noSettlPartyIDs_1_2_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_2_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_28;
        FIX::SettlPartyID SettlPartyID_28("STRING_1737902778");
        noSettlPartyIDs_1_2_2_2.set(SettlPartyID_28);
        SettlParties_NoSettlPartyIDs_28.insert(SettlPartyID_28.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_28('8');
        noSettlPartyIDs_1_2_2_2.set(SettlPartyIDSource_28);
        SettlParties_NoSettlPartyIDs_28.insert(SettlPartyIDSource_28.getString());
        FIX::SettlPartyRole SettlPartyRole_28(834927842);
        noSettlPartyIDs_1_2_2_2.set(SettlPartyRole_28);
        SettlParties_NoSettlPartyIDs_28.insert(SettlPartyRole_28.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_28);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_54;
          FIX::SettlPartySubID SettlPartySubID_54("STRING_583544589");
          noSettlPartySubIDs_1_2_2_3_0.set(SettlPartySubID_54);
          SettlPtysSubGrp_NoSettlPartySubIDs_54.insert(SettlPartySubID_54.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_54(1214047044);
          noSettlPartySubIDs_1_2_2_3_0.set(SettlPartySubIDType_54);
          SettlPtysSubGrp_NoSettlPartySubIDs_54.insert(SettlPartySubIDType_54.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_54);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_2.addGroup(noSettlPartySubIDs_1_2_2_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_55;
          FIX::SettlPartySubID SettlPartySubID_55("STRING_2001325746");
          noSettlPartySubIDs_1_2_2_3_1.set(SettlPartySubID_55);
          SettlPtysSubGrp_NoSettlPartySubIDs_55.insert(SettlPartySubID_55.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_55(1858289359);
          noSettlPartySubIDs_1_2_2_3_1.set(SettlPartySubIDType_55);
          SettlPtysSubGrp_NoSettlPartySubIDs_55.insert(SettlPartySubIDType_55.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_55);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_2.addGroup(noSettlPartySubIDs_1_2_2_3_1);
        }
        noDlvyInst_1_1_2.addGroup(noSettlPartyIDs_1_2_2_2);
      }
      noSettlInst_0_1.addGroup(noDlvyInst_1_1_2);
    }
    msg.addGroup(noSettlInst_0_1);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl; 
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }

  for (const auto& xml_l : elt_lists) {
    bool found = false;
    for (const auto& l : all_values) {
      if (includes(l.begin(), l.end(), xml_l.begin(), xml_l.end())) {
        found = true;
        break;
      } // end if includes
    } // end for all_values
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
