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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SettlementInstructions msg;

  list<multiset<string>> all_values;
  multiset<string> SettlementInstructions_0;
  FIX::ClOrdID ClOrdID_46("STRING_1945374698");
  msg.set(ClOrdID_46);
  SettlementInstructions_0.insert(ClOrdID_46.getString());
  FIX::EncodedText EncodedText_95("DATA_701062009");
  msg.set(EncodedText_95);
  SettlementInstructions_0.insert(EncodedText_95.getString());
  FIX::EncodedTextLen EncodedTextLen_95(1838611151);
  msg.set(EncodedTextLen_95);
  SettlementInstructions_0.insert(EncodedTextLen_95.getString());
  FIX::SettlInstMode SettlInstMode_1('0');
  msg.set(SettlInstMode_1);
  SettlementInstructions_0.insert(SettlInstMode_1.getString());
  FIX::SettlInstMsgID SettlInstMsgID_0("STRING_1884100902");
  msg.set(SettlInstMsgID_0);
  SettlementInstructions_0.insert(SettlInstMsgID_0.getString());
  FIX::SettlInstReqID SettlInstReqID_1("STRING_1395698329");
  msg.set(SettlInstReqID_1);
  SettlementInstructions_0.insert(SettlInstReqID_1.getString());
  FIX::SettlInstReqRejCode SettlInstReqRejCode_0(99);
  msg.set(SettlInstReqRejCode_0);
  SettlementInstructions_0.insert(SettlInstReqRejCode_0.getString());
  FIX::Text Text_95("STRING_56167015");
  msg.set(Text_95);
  SettlementInstructions_0.insert(Text_95.getString());
  FIX::TransactTime TransactTime_63(FIX::UTCTIMESTAMP(8, 26, 20, 2, 4, 2009));
  msg.set(TransactTime_63);
  SettlementInstructions_0.insert(TransactTime_63.getString());
  all_values.push_back(SettlementInstructions_0);

  // SettlInstGrp
  // Group SettlInstGrp.NoSettlInst
  {
    FIX50SP2::SettlementInstructions::NoSettlInst noSettlInst_0_0;
    // SettlInstGrp.NoSettlInst
    multiset<string> SettlInstGrp_NoSettlInst_0;
    FIX::CFICode CFICode_84("STRING_186579088");
    noSettlInst_0_0.set(CFICode_84);
    SettlInstGrp_NoSettlInst_0.insert(CFICode_84.getString());
    FIX::CardExpDate CardExpDate_0("LOCALMKTDATE_626665774");
    noSettlInst_0_0.set(CardExpDate_0);
    SettlInstGrp_NoSettlInst_0.insert(CardExpDate_0.getString());
    FIX::CardHolderName CardHolderName_0("STRING_99678551");
    noSettlInst_0_0.set(CardHolderName_0);
    SettlInstGrp_NoSettlInst_0.insert(CardHolderName_0.getString());
    FIX::CardIssNum CardIssNum_0("STRING_511253739");
    noSettlInst_0_0.set(CardIssNum_0);
    SettlInstGrp_NoSettlInst_0.insert(CardIssNum_0.getString());
    FIX::CardNumber CardNumber_0("STRING_939678205");
    noSettlInst_0_0.set(CardNumber_0);
    SettlInstGrp_NoSettlInst_0.insert(CardNumber_0.getString());
    FIX::CardStartDate CardStartDate_0("LOCALMKTDATE_1791298482");
    noSettlInst_0_0.set(CardStartDate_0);
    SettlInstGrp_NoSettlInst_0.insert(CardStartDate_0.getString());
    FIX::EffectiveTime EffectiveTime_9(FIX::UTCTIMESTAMP(17, 9, 4, 14, 12, 2011));
    noSettlInst_0_0.set(EffectiveTime_9);
    SettlInstGrp_NoSettlInst_0.insert(EffectiveTime_9.getString());
    FIX::ExpireTime ExpireTime_20(FIX::UTCTIMESTAMP(16, 47, 39, 7, 1, 2007));
    noSettlInst_0_0.set(ExpireTime_20);
    SettlInstGrp_NoSettlInst_0.insert(ExpireTime_20.getString());
    FIX::LastUpdateTime LastUpdateTime_1(FIX::UTCTIMESTAMP(15, 8, 56, 7, 11, 2014));
    noSettlInst_0_0.set(LastUpdateTime_1);
    SettlInstGrp_NoSettlInst_0.insert(LastUpdateTime_1.getString());
    FIX::PaymentDate PaymentDate_0("LOCALMKTDATE_95059321");
    noSettlInst_0_0.set(PaymentDate_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentDate_0.getString());
    FIX::PaymentMethod PaymentMethod_0(5);
    noSettlInst_0_0.set(PaymentMethod_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentMethod_0.getString());
    FIX::PaymentRef PaymentRef_0("STRING_2062053617");
    noSettlInst_0_0.set(PaymentRef_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentRef_0.getString());
    FIX::PaymentRemitterID PaymentRemitterID_0("STRING_599980");
    noSettlInst_0_0.set(PaymentRemitterID_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentRemitterID_0.getString());
    FIX::Product Product_87(3);
    noSettlInst_0_0.set(Product_87);
    SettlInstGrp_NoSettlInst_0.insert(Product_87.getString());
    FIX::SecurityType SecurityType_87("STRING_MTN");
    noSettlInst_0_0.set(SecurityType_87);
    SettlInstGrp_NoSettlInst_0.insert(SecurityType_87.getString());
    FIX::SettlCurrency SettlCurrency_31("EUR");
    noSettlInst_0_0.set(SettlCurrency_31);
    SettlInstGrp_NoSettlInst_0.insert(SettlCurrency_31.getString());
    FIX::SettlInstID SettlInstID_0("STRING_1480913949");
    noSettlInst_0_0.set(SettlInstID_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstID_0.getString());
    FIX::SettlInstRefID SettlInstRefID_0("STRING_1891577014");
    noSettlInst_0_0.set(SettlInstRefID_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstRefID_0.getString());
    FIX::SettlInstTransType SettlInstTransType_0('R');
    noSettlInst_0_0.set(SettlInstTransType_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstTransType_0.getString());
    FIX::Side Side_48('7');
    noSettlInst_0_0.set(Side_48);
    SettlInstGrp_NoSettlInst_0.insert(Side_48.getString());
    all_values.push_back(SettlInstGrp_NoSettlInst_0);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_130;
      FIX::PartyID PartyID_130("STRING_1041300723");
      noPartyIDs_0_1_0.set(PartyID_130);
      Parties_NoPartyIDs_130.insert(PartyID_130.getString());
      FIX::PartyIDSource PartyIDSource_130('I');
      noPartyIDs_0_1_0.set(PartyIDSource_130);
      Parties_NoPartyIDs_130.insert(PartyIDSource_130.getString());
      FIX::PartyRole PartyRole_130(52);
      noPartyIDs_0_1_0.set(PartyRole_130);
      Parties_NoPartyIDs_130.insert(PartyRole_130.getString());
      all_values.push_back(Parties_NoPartyIDs_130);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_259;
        FIX::PartySubID PartySubID_259("STRING_1976435198");
        noPartySubIDs_0_0_2_0.set(PartySubID_259);
        PtysSubGrp_NoPartySubIDs_259.insert(PartySubID_259.getString());
        FIX::PartySubIDType PartySubIDType_259(25);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_259);
        PtysSubGrp_NoPartySubIDs_259.insert(PartySubIDType_259.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_259);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_260;
        FIX::PartySubID PartySubID_260("STRING_1285424648");
        noPartySubIDs_0_0_2_1.set(PartySubID_260);
        PtysSubGrp_NoPartySubIDs_260.insert(PartySubID_260.getString());
        FIX::PartySubIDType PartySubIDType_260(28);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_260);
        PtysSubGrp_NoPartySubIDs_260.insert(PartySubIDType_260.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_260);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_261;
        FIX::PartySubID PartySubID_261("STRING_226122270");
        noPartySubIDs_0_0_2_2.set(PartySubID_261);
        PtysSubGrp_NoPartySubIDs_261.insert(PartySubID_261.getString());
        FIX::PartySubIDType PartySubIDType_261(18);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_261);
        PtysSubGrp_NoPartySubIDs_261.insert(PartySubIDType_261.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_261);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_131;
      FIX::PartyID PartyID_131("STRING_300960682");
      noPartyIDs_0_1_1.set(PartyID_131);
      Parties_NoPartyIDs_131.insert(PartyID_131.getString());
      FIX::PartyIDSource PartyIDSource_131('D');
      noPartyIDs_0_1_1.set(PartyIDSource_131);
      Parties_NoPartyIDs_131.insert(PartyIDSource_131.getString());
      FIX::PartyRole PartyRole_131(61);
      noPartyIDs_0_1_1.set(PartyRole_131);
      Parties_NoPartyIDs_131.insert(PartyRole_131.getString());
      all_values.push_back(Parties_NoPartyIDs_131);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_262;
        FIX::PartySubID PartySubID_262("STRING_1609645179");
        noPartySubIDs_0_1_2_0.set(PartySubID_262);
        PtysSubGrp_NoPartySubIDs_262.insert(PartySubID_262.getString());
        FIX::PartySubIDType PartySubIDType_262(10);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_262);
        PtysSubGrp_NoPartySubIDs_262.insert(PartySubIDType_262.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_262);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_263;
        FIX::PartySubID PartySubID_263("STRING_1948023845");
        noPartySubIDs_0_1_2_1.set(PartySubID_263);
        PtysSubGrp_NoPartySubIDs_263.insert(PartySubID_263.getString());
        FIX::PartySubIDType PartySubIDType_263(4);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_263);
        PtysSubGrp_NoPartySubIDs_263.insert(PartySubIDType_263.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_263);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_132;
      FIX::PartyID PartyID_132("STRING_483314428");
      noPartyIDs_0_1_2.set(PartyID_132);
      Parties_NoPartyIDs_132.insert(PartyID_132.getString());
      FIX::PartyIDSource PartyIDSource_132('B');
      noPartyIDs_0_1_2.set(PartyIDSource_132);
      Parties_NoPartyIDs_132.insert(PartyIDSource_132.getString());
      FIX::PartyRole PartyRole_132(13);
      noPartyIDs_0_1_2.set(PartyRole_132);
      Parties_NoPartyIDs_132.insert(PartyRole_132.getString());
      all_values.push_back(Parties_NoPartyIDs_132);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_264;
        FIX::PartySubID PartySubID_264("STRING_1968187376");
        noPartySubIDs_0_2_2_0.set(PartySubID_264);
        PtysSubGrp_NoPartySubIDs_264.insert(PartySubID_264.getString());
        FIX::PartySubIDType PartySubIDType_264(15);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_264);
        PtysSubGrp_NoPartySubIDs_264.insert(PartySubIDType_264.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_264);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_265;
        FIX::PartySubID PartySubID_265("STRING_584192940");
        noPartySubIDs_0_2_2_1.set(PartySubID_265);
        PtysSubGrp_NoPartySubIDs_265.insert(PartySubID_265.getString());
        FIX::PartySubIDType PartySubIDType_265(5);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_265);
        PtysSubGrp_NoPartySubIDs_265.insert(PartySubIDType_265.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_265);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_266;
        FIX::PartySubID PartySubID_266("STRING_122243374");
        noPartySubIDs_0_2_2_2.set(PartySubID_266);
        PtysSubGrp_NoPartySubIDs_266.insert(PartySubID_266.getString());
        FIX::PartySubIDType PartySubIDType_266(30);
        noPartySubIDs_0_2_2_2.set(PartySubIDType_266);
        PtysSubGrp_NoPartySubIDs_266.insert(PartySubIDType_266.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_266);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_2);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_9;
    FIX::SettlDeliveryType SettlDeliveryType_9(0);
    noSettlInst_0_0.set(SettlDeliveryType_9);
    SettlInstructionsData_9.insert(SettlDeliveryType_9.getString());
    FIX::StandInstDbID StandInstDbID_10("STRING_819760612");
    noSettlInst_0_0.set(StandInstDbID_10);
    SettlInstructionsData_9.insert(StandInstDbID_10.getString());
    FIX::StandInstDbName StandInstDbName_10("STRING_883539601");
    noSettlInst_0_0.set(StandInstDbName_10);
    SettlInstructionsData_9.insert(StandInstDbName_10.getString());
    FIX::StandInstDbType StandInstDbType_10(4);
    noSettlInst_0_0.set(StandInstDbType_10);
    SettlInstructionsData_9.insert(StandInstDbType_10.getString());
    all_values.push_back(SettlInstructionsData_9);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_17;
      FIX::DlvyInstType DlvyInstType_17('C');
      noDlvyInst_0_1_0.set(DlvyInstType_17);
      DlvyInstGrp_NoDlvyInst_17.insert(DlvyInstType_17.getString());
      FIX::SettlInstSource SettlInstSource_17('1');
      noDlvyInst_0_1_0.set(SettlInstSource_17);
      DlvyInstGrp_NoDlvyInst_17.insert(SettlInstSource_17.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_17);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_37;
        FIX::SettlPartyID SettlPartyID_37("STRING_677975918");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyID_37.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_37('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyIDSource_37.getString());
        FIX::SettlPartyRole SettlPartyRole_37(1007677272);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyRole_37.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_37);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_84;
          FIX::SettlPartySubID SettlPartySubID_84("STRING_1566123287");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_84);
          SettlPtysSubGrp_NoSettlPartySubIDs_84.insert(SettlPartySubID_84.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_84(1308637954);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_84);
          SettlPtysSubGrp_NoSettlPartySubIDs_84.insert(SettlPartySubIDType_84.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_84);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_85;
          FIX::SettlPartySubID SettlPartySubID_85("STRING_1210574931");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_85);
          SettlPtysSubGrp_NoSettlPartySubIDs_85.insert(SettlPartySubID_85.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_85(809515227);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_85);
          SettlPtysSubGrp_NoSettlPartySubIDs_85.insert(SettlPartySubIDType_85.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_85);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_86;
          FIX::SettlPartySubID SettlPartySubID_86("STRING_1770078845");
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubID_86);
          SettlPtysSubGrp_NoSettlPartySubIDs_86.insert(SettlPartySubID_86.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_86(672736462);
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubIDType_86);
          SettlPtysSubGrp_NoSettlPartySubIDs_86.insert(SettlPartySubIDType_86.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_86);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
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
    FIX::CFICode CFICode_85("STRING_1197770334");
    noSettlInst_0_1.set(CFICode_85);
    SettlInstGrp_NoSettlInst_1.insert(CFICode_85.getString());
    FIX::CardExpDate CardExpDate_1("LOCALMKTDATE_1570619043");
    noSettlInst_0_1.set(CardExpDate_1);
    SettlInstGrp_NoSettlInst_1.insert(CardExpDate_1.getString());
    FIX::CardHolderName CardHolderName_1("STRING_1005743821");
    noSettlInst_0_1.set(CardHolderName_1);
    SettlInstGrp_NoSettlInst_1.insert(CardHolderName_1.getString());
    FIX::CardIssNum CardIssNum_1("STRING_1681084762");
    noSettlInst_0_1.set(CardIssNum_1);
    SettlInstGrp_NoSettlInst_1.insert(CardIssNum_1.getString());
    FIX::CardNumber CardNumber_1("STRING_1287951462");
    noSettlInst_0_1.set(CardNumber_1);
    SettlInstGrp_NoSettlInst_1.insert(CardNumber_1.getString());
    FIX::CardStartDate CardStartDate_1("LOCALMKTDATE_1253321150");
    noSettlInst_0_1.set(CardStartDate_1);
    SettlInstGrp_NoSettlInst_1.insert(CardStartDate_1.getString());
    FIX::EffectiveTime EffectiveTime_10(FIX::UTCTIMESTAMP(6, 22, 23, 16, 1, 2001));
    noSettlInst_0_1.set(EffectiveTime_10);
    SettlInstGrp_NoSettlInst_1.insert(EffectiveTime_10.getString());
    FIX::ExpireTime ExpireTime_21(FIX::UTCTIMESTAMP(17, 50, 7, 18, 11, 2016));
    noSettlInst_0_1.set(ExpireTime_21);
    SettlInstGrp_NoSettlInst_1.insert(ExpireTime_21.getString());
    FIX::LastUpdateTime LastUpdateTime_2(FIX::UTCTIMESTAMP(1, 50, 21, 21, 6, 2017));
    noSettlInst_0_1.set(LastUpdateTime_2);
    SettlInstGrp_NoSettlInst_1.insert(LastUpdateTime_2.getString());
    FIX::PaymentDate PaymentDate_1("LOCALMKTDATE_1595209553");
    noSettlInst_0_1.set(PaymentDate_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentDate_1.getString());
    FIX::PaymentMethod PaymentMethod_1(12);
    noSettlInst_0_1.set(PaymentMethod_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentMethod_1.getString());
    FIX::PaymentRef PaymentRef_1("STRING_273705705");
    noSettlInst_0_1.set(PaymentRef_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentRef_1.getString());
    FIX::PaymentRemitterID PaymentRemitterID_1("STRING_120462367");
    noSettlInst_0_1.set(PaymentRemitterID_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentRemitterID_1.getString());
    FIX::Product Product_88(9);
    noSettlInst_0_1.set(Product_88);
    SettlInstGrp_NoSettlInst_1.insert(Product_88.getString());
    FIX::SecurityType SecurityType_88("STRING_MPP");
    noSettlInst_0_1.set(SecurityType_88);
    SettlInstGrp_NoSettlInst_1.insert(SecurityType_88.getString());
    FIX::SettlCurrency SettlCurrency_32("CHF");
    noSettlInst_0_1.set(SettlCurrency_32);
    SettlInstGrp_NoSettlInst_1.insert(SettlCurrency_32.getString());
    FIX::SettlInstID SettlInstID_1("STRING_984792562");
    noSettlInst_0_1.set(SettlInstID_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstID_1.getString());
    FIX::SettlInstRefID SettlInstRefID_1("STRING_232043691");
    noSettlInst_0_1.set(SettlInstRefID_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstRefID_1.getString());
    FIX::SettlInstTransType SettlInstTransType_1('N');
    noSettlInst_0_1.set(SettlInstTransType_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstTransType_1.getString());
    FIX::Side Side_49('9');
    noSettlInst_0_1.set(Side_49);
    SettlInstGrp_NoSettlInst_1.insert(Side_49.getString());
    all_values.push_back(SettlInstGrp_NoSettlInst_1);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_133;
      FIX::PartyID PartyID_133("STRING_753555343");
      noPartyIDs_1_1_0.set(PartyID_133);
      Parties_NoPartyIDs_133.insert(PartyID_133.getString());
      FIX::PartyIDSource PartyIDSource_133('G');
      noPartyIDs_1_1_0.set(PartyIDSource_133);
      Parties_NoPartyIDs_133.insert(PartyIDSource_133.getString());
      FIX::PartyRole PartyRole_133(44);
      noPartyIDs_1_1_0.set(PartyRole_133);
      Parties_NoPartyIDs_133.insert(PartyRole_133.getString());
      all_values.push_back(Parties_NoPartyIDs_133);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_267;
        FIX::PartySubID PartySubID_267("STRING_1780838848");
        noPartySubIDs_1_0_2_0.set(PartySubID_267);
        PtysSubGrp_NoPartySubIDs_267.insert(PartySubID_267.getString());
        FIX::PartySubIDType PartySubIDType_267(18);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_267);
        PtysSubGrp_NoPartySubIDs_267.insert(PartySubIDType_267.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_267);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_268;
        FIX::PartySubID PartySubID_268("STRING_1349600834");
        noPartySubIDs_1_0_2_1.set(PartySubID_268);
        PtysSubGrp_NoPartySubIDs_268.insert(PartySubID_268.getString());
        FIX::PartySubIDType PartySubIDType_268(33);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_268);
        PtysSubGrp_NoPartySubIDs_268.insert(PartySubIDType_268.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_268);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_269;
        FIX::PartySubID PartySubID_269("STRING_651491921");
        noPartySubIDs_1_0_2_2.set(PartySubID_269);
        PtysSubGrp_NoPartySubIDs_269.insert(PartySubID_269.getString());
        FIX::PartySubIDType PartySubIDType_269(33);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_269);
        PtysSubGrp_NoPartySubIDs_269.insert(PartySubIDType_269.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_269);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_134;
      FIX::PartyID PartyID_134("STRING_844176506");
      noPartyIDs_1_1_1.set(PartyID_134);
      Parties_NoPartyIDs_134.insert(PartyID_134.getString());
      FIX::PartyIDSource PartyIDSource_134('4');
      noPartyIDs_1_1_1.set(PartyIDSource_134);
      Parties_NoPartyIDs_134.insert(PartyIDSource_134.getString());
      FIX::PartyRole PartyRole_134(7);
      noPartyIDs_1_1_1.set(PartyRole_134);
      Parties_NoPartyIDs_134.insert(PartyRole_134.getString());
      all_values.push_back(Parties_NoPartyIDs_134);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_270;
        FIX::PartySubID PartySubID_270("STRING_476243403");
        noPartySubIDs_1_1_2_0.set(PartySubID_270);
        PtysSubGrp_NoPartySubIDs_270.insert(PartySubID_270.getString());
        FIX::PartySubIDType PartySubIDType_270(12);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_270);
        PtysSubGrp_NoPartySubIDs_270.insert(PartySubIDType_270.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_270);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_271;
        FIX::PartySubID PartySubID_271("STRING_759909877");
        noPartySubIDs_1_1_2_1.set(PartySubID_271);
        PtysSubGrp_NoPartySubIDs_271.insert(PartySubID_271.getString());
        FIX::PartySubIDType PartySubIDType_271(24);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_271);
        PtysSubGrp_NoPartySubIDs_271.insert(PartySubIDType_271.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_271);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_272;
        FIX::PartySubID PartySubID_272("STRING_1612541956");
        noPartySubIDs_1_1_2_2.set(PartySubID_272);
        PtysSubGrp_NoPartySubIDs_272.insert(PartySubID_272.getString());
        FIX::PartySubIDType PartySubIDType_272(3);
        noPartySubIDs_1_1_2_2.set(PartySubIDType_272);
        PtysSubGrp_NoPartySubIDs_272.insert(PartySubIDType_272.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_272);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_135;
      FIX::PartyID PartyID_135("STRING_1401059615");
      noPartyIDs_1_1_2.set(PartyID_135);
      Parties_NoPartyIDs_135.insert(PartyID_135.getString());
      FIX::PartyIDSource PartyIDSource_135('6');
      noPartyIDs_1_1_2.set(PartyIDSource_135);
      Parties_NoPartyIDs_135.insert(PartyIDSource_135.getString());
      FIX::PartyRole PartyRole_135(46);
      noPartyIDs_1_1_2.set(PartyRole_135);
      Parties_NoPartyIDs_135.insert(PartyRole_135.getString());
      all_values.push_back(Parties_NoPartyIDs_135);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_273;
        FIX::PartySubID PartySubID_273("STRING_711726865");
        noPartySubIDs_1_2_2_0.set(PartySubID_273);
        PtysSubGrp_NoPartySubIDs_273.insert(PartySubID_273.getString());
        FIX::PartySubIDType PartySubIDType_273(33);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_273);
        PtysSubGrp_NoPartySubIDs_273.insert(PartySubIDType_273.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_273);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_10;
    FIX::SettlDeliveryType SettlDeliveryType_10(1);
    noSettlInst_0_1.set(SettlDeliveryType_10);
    SettlInstructionsData_10.insert(SettlDeliveryType_10.getString());
    FIX::StandInstDbID StandInstDbID_11("STRING_943770556");
    noSettlInst_0_1.set(StandInstDbID_11);
    SettlInstructionsData_10.insert(StandInstDbID_11.getString());
    FIX::StandInstDbName StandInstDbName_11("STRING_1049778265");
    noSettlInst_0_1.set(StandInstDbName_11);
    SettlInstructionsData_10.insert(StandInstDbName_11.getString());
    FIX::StandInstDbType StandInstDbType_11(2);
    noSettlInst_0_1.set(StandInstDbType_11);
    SettlInstructionsData_10.insert(StandInstDbType_11.getString());
    all_values.push_back(SettlInstructionsData_10);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_18;
      FIX::DlvyInstType DlvyInstType_18('C');
      noDlvyInst_1_1_0.set(DlvyInstType_18);
      DlvyInstGrp_NoDlvyInst_18.insert(DlvyInstType_18.getString());
      FIX::SettlInstSource SettlInstSource_18('1');
      noDlvyInst_1_1_0.set(SettlInstSource_18);
      DlvyInstGrp_NoDlvyInst_18.insert(SettlInstSource_18.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_18);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_38;
        FIX::SettlPartyID SettlPartyID_38("STRING_1339400072");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyID_38.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_38('1');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyIDSource_38.getString());
        FIX::SettlPartyRole SettlPartyRole_38(46812162);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyRole_38.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_38);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_87;
          FIX::SettlPartySubID SettlPartySubID_87("STRING_716930514");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_87);
          SettlPtysSubGrp_NoSettlPartySubIDs_87.insert(SettlPartySubID_87.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_87(698304083);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_87);
          SettlPtysSubGrp_NoSettlPartySubIDs_87.insert(SettlPartySubIDType_87.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_87);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      noSettlInst_0_1.addGroup(noDlvyInst_1_1_0);
    }
    msg.addGroup(noSettlInst_0_1);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
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
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
