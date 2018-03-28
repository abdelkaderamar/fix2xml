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
  multiset<string> SettlementInstructions_0;
  FIX::ClOrdID ClOrdID_45("STRING_1995420542");
  msg.set(ClOrdID_45);
  SettlementInstructions_0.insert(ClOrdID_45.getString());
  FIX::EncodedText EncodedText_85("DATA_1104890596");
  msg.set(EncodedText_85);
  SettlementInstructions_0.insert(EncodedText_85.getString());
  FIX::EncodedTextLen EncodedTextLen_85(1429135722);
  msg.set(EncodedTextLen_85);
  SettlementInstructions_0.insert(EncodedTextLen_85.getString());
  FIX::SettlInstMode SettlInstMode_2('4');
  msg.set(SettlInstMode_2);
  SettlementInstructions_0.insert(SettlInstMode_2.getString());
  FIX::SettlInstMsgID SettlInstMsgID_0("STRING_1372535077");
  msg.set(SettlInstMsgID_0);
  SettlementInstructions_0.insert(SettlInstMsgID_0.getString());
  FIX::SettlInstReqID SettlInstReqID_1("STRING_747125303");
  msg.set(SettlInstReqID_1);
  SettlementInstructions_0.insert(SettlInstReqID_1.getString());
  FIX::SettlInstReqRejCode SettlInstReqRejCode_0(99);
  msg.set(SettlInstReqRejCode_0);
  SettlementInstructions_0.insert(SettlInstReqRejCode_0.getString());
  FIX::Text Text_85("STRING_574717025");
  msg.set(Text_85);
  SettlementInstructions_0.insert(Text_85.getString());
  FIX::TransactTime TransactTime_68(FIX::UTCTIMESTAMP(14, 3, 30, 2, 5, 2007));
  msg.set(TransactTime_68);
  SettlementInstructions_0.insert(TransactTime_68.getString());
  all_values.push_back(SettlementInstructions_0);

  // SettlInstGrp
  // Group SettlInstGrp.NoSettlInst
  {
    FIX50SP2::SettlementInstructions::NoSettlInst noSettlInst_0_0;
    // SettlInstGrp.NoSettlInst
    multiset<string> SettlInstGrp_NoSettlInst_0;
    FIX::CFICode CFICode_91("STRING_2003860976");
    noSettlInst_0_0.set(CFICode_91);
    SettlInstGrp_NoSettlInst_0.insert(CFICode_91.getString());
    FIX::CardExpDate CardExpDate_0("LOCALMKTDATE_1633866880");
    noSettlInst_0_0.set(CardExpDate_0);
    SettlInstGrp_NoSettlInst_0.insert(CardExpDate_0.getString());
    FIX::CardHolderName CardHolderName_0("STRING_685079982");
    noSettlInst_0_0.set(CardHolderName_0);
    SettlInstGrp_NoSettlInst_0.insert(CardHolderName_0.getString());
    FIX::CardIssNum CardIssNum_0("STRING_1908597822");
    noSettlInst_0_0.set(CardIssNum_0);
    SettlInstGrp_NoSettlInst_0.insert(CardIssNum_0.getString());
    FIX::CardNumber CardNumber_0("STRING_1929091803");
    noSettlInst_0_0.set(CardNumber_0);
    SettlInstGrp_NoSettlInst_0.insert(CardNumber_0.getString());
    FIX::CardStartDate CardStartDate_0("LOCALMKTDATE_321445643");
    noSettlInst_0_0.set(CardStartDate_0);
    SettlInstGrp_NoSettlInst_0.insert(CardStartDate_0.getString());
    FIX::EffectiveTime EffectiveTime_10(FIX::UTCTIMESTAMP(4, 38, 22, 26, 7, 2008));
    noSettlInst_0_0.set(EffectiveTime_10);
    SettlInstGrp_NoSettlInst_0.insert(EffectiveTime_10.getString());
    FIX::ExpireTime ExpireTime_19(FIX::UTCTIMESTAMP(3, 27, 43, 21, 8, 2012));
    noSettlInst_0_0.set(ExpireTime_19);
    SettlInstGrp_NoSettlInst_0.insert(ExpireTime_19.getString());
    FIX::LastUpdateTime LastUpdateTime_1(FIX::UTCTIMESTAMP(14, 17, 4, 25, 10, 2010));
    noSettlInst_0_0.set(LastUpdateTime_1);
    SettlInstGrp_NoSettlInst_0.insert(LastUpdateTime_1.getString());
    FIX::PaymentDate PaymentDate_0("LOCALMKTDATE_522928963");
    noSettlInst_0_0.set(PaymentDate_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentDate_0.getString());
    FIX::PaymentMethod PaymentMethod_0(14);
    noSettlInst_0_0.set(PaymentMethod_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentMethod_0.getString());
    FIX::PaymentRef PaymentRef_0("STRING_369645567");
    noSettlInst_0_0.set(PaymentRef_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentRef_0.getString());
    FIX::PaymentRemitterID PaymentRemitterID_0("STRING_783334952");
    noSettlInst_0_0.set(PaymentRemitterID_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentRemitterID_0.getString());
    FIX::Product Product_94(8);
    noSettlInst_0_0.set(Product_94);
    SettlInstGrp_NoSettlInst_0.insert(Product_94.getString());
    FIX::SecurityType SecurityType_94("STRING_SUPRA");
    noSettlInst_0_0.set(SecurityType_94);
    SettlInstGrp_NoSettlInst_0.insert(SecurityType_94.getString());
    FIX::SettlCurrency SettlCurrency_27("USD");
    noSettlInst_0_0.set(SettlCurrency_27);
    SettlInstGrp_NoSettlInst_0.insert(SettlCurrency_27.getString());
    FIX::SettlInstID SettlInstID_0("STRING_1785120603");
    noSettlInst_0_0.set(SettlInstID_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstID_0.getString());
    FIX::SettlInstRefID SettlInstRefID_0("STRING_1789860578");
    noSettlInst_0_0.set(SettlInstRefID_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstRefID_0.getString());
    FIX::SettlInstTransType SettlInstTransType_0('C');
    noSettlInst_0_0.set(SettlInstTransType_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstTransType_0.getString());
    FIX::Side Side_42('G');
    noSettlInst_0_0.set(Side_42);
    SettlInstGrp_NoSettlInst_0.insert(Side_42.getString());
    all_values.push_back(SettlInstGrp_NoSettlInst_0);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_127;
      FIX::PartyID PartyID_127("STRING_971844659");
      noPartyIDs_0_1_0.set(PartyID_127);
      Parties_NoPartyIDs_127.insert(PartyID_127.getString());
      FIX::PartyIDSource PartyIDSource_127('B');
      noPartyIDs_0_1_0.set(PartyIDSource_127);
      Parties_NoPartyIDs_127.insert(PartyIDSource_127.getString());
      FIX::PartyRole PartyRole_127(3);
      noPartyIDs_0_1_0.set(PartyRole_127);
      Parties_NoPartyIDs_127.insert(PartyRole_127.getString());
      all_values.push_back(Parties_NoPartyIDs_127);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_258;
        FIX::PartySubID PartySubID_258("STRING_1577029893");
        noPartySubIDs_0_0_2_0.set(PartySubID_258);
        PtysSubGrp_NoPartySubIDs_258.insert(PartySubID_258.getString());
        FIX::PartySubIDType PartySubIDType_258(15);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_258);
        PtysSubGrp_NoPartySubIDs_258.insert(PartySubIDType_258.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_258);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_259;
        FIX::PartySubID PartySubID_259("STRING_2082108538");
        noPartySubIDs_0_0_2_1.set(PartySubID_259);
        PtysSubGrp_NoPartySubIDs_259.insert(PartySubID_259.getString());
        FIX::PartySubIDType PartySubIDType_259(9);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_259);
        PtysSubGrp_NoPartySubIDs_259.insert(PartySubIDType_259.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_259);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_128;
      FIX::PartyID PartyID_128("STRING_2010645438");
      noPartyIDs_0_1_1.set(PartyID_128);
      Parties_NoPartyIDs_128.insert(PartyID_128.getString());
      FIX::PartyIDSource PartyIDSource_128('I');
      noPartyIDs_0_1_1.set(PartyIDSource_128);
      Parties_NoPartyIDs_128.insert(PartyIDSource_128.getString());
      FIX::PartyRole PartyRole_128(83);
      noPartyIDs_0_1_1.set(PartyRole_128);
      Parties_NoPartyIDs_128.insert(PartyRole_128.getString());
      all_values.push_back(Parties_NoPartyIDs_128);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_260;
        FIX::PartySubID PartySubID_260("STRING_304843924");
        noPartySubIDs_0_1_2_0.set(PartySubID_260);
        PtysSubGrp_NoPartySubIDs_260.insert(PartySubID_260.getString());
        FIX::PartySubIDType PartySubIDType_260(33);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_260);
        PtysSubGrp_NoPartySubIDs_260.insert(PartySubIDType_260.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_260);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_261;
        FIX::PartySubID PartySubID_261("STRING_1855647039");
        noPartySubIDs_0_1_2_1.set(PartySubID_261);
        PtysSubGrp_NoPartySubIDs_261.insert(PartySubID_261.getString());
        FIX::PartySubIDType PartySubIDType_261(5);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_261);
        PtysSubGrp_NoPartySubIDs_261.insert(PartySubIDType_261.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_261);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_129;
      FIX::PartyID PartyID_129("STRING_1966708919");
      noPartyIDs_0_1_2.set(PartyID_129);
      Parties_NoPartyIDs_129.insert(PartyID_129.getString());
      FIX::PartyIDSource PartyIDSource_129('B');
      noPartyIDs_0_1_2.set(PartyIDSource_129);
      Parties_NoPartyIDs_129.insert(PartyIDSource_129.getString());
      FIX::PartyRole PartyRole_129(10);
      noPartyIDs_0_1_2.set(PartyRole_129);
      Parties_NoPartyIDs_129.insert(PartyRole_129.getString());
      all_values.push_back(Parties_NoPartyIDs_129);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_262;
        FIX::PartySubID PartySubID_262("STRING_2050186293");
        noPartySubIDs_0_2_2_0.set(PartySubID_262);
        PtysSubGrp_NoPartySubIDs_262.insert(PartySubID_262.getString());
        FIX::PartySubIDType PartySubIDType_262(4);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_262);
        PtysSubGrp_NoPartySubIDs_262.insert(PartySubIDType_262.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_262);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_263;
        FIX::PartySubID PartySubID_263("STRING_914867938");
        noPartySubIDs_0_2_2_1.set(PartySubID_263);
        PtysSubGrp_NoPartySubIDs_263.insert(PartySubID_263.getString());
        FIX::PartySubIDType PartySubIDType_263(25);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_263);
        PtysSubGrp_NoPartySubIDs_263.insert(PartySubIDType_263.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_263);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_10;
    FIX::SettlDeliveryType SettlDeliveryType_10(0);
    noSettlInst_0_0.set(SettlDeliveryType_10);
    SettlInstructionsData_10.insert(SettlDeliveryType_10.getString());
    FIX::StandInstDbID StandInstDbID_11("STRING_78250286");
    noSettlInst_0_0.set(StandInstDbID_11);
    SettlInstructionsData_10.insert(StandInstDbID_11.getString());
    FIX::StandInstDbName StandInstDbName_11("STRING_1543852048");
    noSettlInst_0_0.set(StandInstDbName_11);
    SettlInstructionsData_10.insert(StandInstDbName_11.getString());
    FIX::StandInstDbType StandInstDbType_11(2);
    noSettlInst_0_0.set(StandInstDbType_11);
    SettlInstructionsData_10.insert(StandInstDbType_11.getString());
    all_values.push_back(SettlInstructionsData_10);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_18;
      FIX::DlvyInstType DlvyInstType_18('S');
      noDlvyInst_0_1_0.set(DlvyInstType_18);
      DlvyInstGrp_NoDlvyInst_18.insert(DlvyInstType_18.getString());
      FIX::SettlInstSource SettlInstSource_18('1');
      noDlvyInst_0_1_0.set(SettlInstSource_18);
      DlvyInstGrp_NoDlvyInst_18.insert(SettlInstSource_18.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_18);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_34;
        FIX::SettlPartyID SettlPartyID_34("STRING_1670308357");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_34);
        SettlParties_NoSettlPartyIDs_34.insert(SettlPartyID_34.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_34('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_34);
        SettlParties_NoSettlPartyIDs_34.insert(SettlPartyIDSource_34.getString());
        FIX::SettlPartyRole SettlPartyRole_34(25963885);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_34);
        SettlParties_NoSettlPartyIDs_34.insert(SettlPartyRole_34.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_34);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_76;
          FIX::SettlPartySubID SettlPartySubID_76("STRING_1790094591");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_76);
          SettlPtysSubGrp_NoSettlPartySubIDs_76.insert(SettlPartySubID_76.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_76(2108072424);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_76);
          SettlPtysSubGrp_NoSettlPartySubIDs_76.insert(SettlPartySubIDType_76.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_76);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_77;
          FIX::SettlPartySubID SettlPartySubID_77("STRING_1328953810");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_77);
          SettlPtysSubGrp_NoSettlPartySubIDs_77.insert(SettlPartySubID_77.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_77(1653256381);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_77);
          SettlPtysSubGrp_NoSettlPartySubIDs_77.insert(SettlPartySubIDType_77.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_77);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_78;
          FIX::SettlPartySubID SettlPartySubID_78("STRING_1039915550");
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubID_78);
          SettlPtysSubGrp_NoSettlPartySubIDs_78.insert(SettlPartySubID_78.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_78(1582657411);
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubIDType_78);
          SettlPtysSubGrp_NoSettlPartySubIDs_78.insert(SettlPartySubIDType_78.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_78);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_35;
        FIX::SettlPartyID SettlPartyID_35("STRING_443256088");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_35);
        SettlParties_NoSettlPartyIDs_35.insert(SettlPartyID_35.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_35('1');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_35);
        SettlParties_NoSettlPartyIDs_35.insert(SettlPartyIDSource_35.getString());
        FIX::SettlPartyRole SettlPartyRole_35(288198782);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_35);
        SettlParties_NoSettlPartyIDs_35.insert(SettlPartyRole_35.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_35);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_79;
          FIX::SettlPartySubID SettlPartySubID_79("STRING_527843916");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_79);
          SettlPtysSubGrp_NoSettlPartySubIDs_79.insert(SettlPartySubID_79.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_79(107424053);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_79);
          SettlPtysSubGrp_NoSettlPartySubIDs_79.insert(SettlPartySubIDType_79.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_79);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_80;
          FIX::SettlPartySubID SettlPartySubID_80("STRING_1831960204");
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubID_80);
          SettlPtysSubGrp_NoSettlPartySubIDs_80.insert(SettlPartySubID_80.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_80(233857321);
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubIDType_80);
          SettlPtysSubGrp_NoSettlPartySubIDs_80.insert(SettlPartySubIDType_80.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_80);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_81;
          FIX::SettlPartySubID SettlPartySubID_81("STRING_1620023818");
          noSettlPartySubIDs_0_0_1_3_2.set(SettlPartySubID_81);
          SettlPtysSubGrp_NoSettlPartySubIDs_81.insert(SettlPartySubID_81.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_81(1734662849);
          noSettlPartySubIDs_0_0_1_3_2.set(SettlPartySubIDType_81);
          SettlPtysSubGrp_NoSettlPartySubIDs_81.insert(SettlPartySubIDType_81.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_81);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_36;
        FIX::SettlPartyID SettlPartyID_36("STRING_723205678");
        noSettlPartyIDs_0_0_2_2.set(SettlPartyID_36);
        SettlParties_NoSettlPartyIDs_36.insert(SettlPartyID_36.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_36('3');
        noSettlPartyIDs_0_0_2_2.set(SettlPartyIDSource_36);
        SettlParties_NoSettlPartyIDs_36.insert(SettlPartyIDSource_36.getString());
        FIX::SettlPartyRole SettlPartyRole_36(1493394294);
        noSettlPartyIDs_0_0_2_2.set(SettlPartyRole_36);
        SettlParties_NoSettlPartyIDs_36.insert(SettlPartyRole_36.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_36);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_82;
          FIX::SettlPartySubID SettlPartySubID_82("STRING_465658394");
          noSettlPartySubIDs_0_0_2_3_0.set(SettlPartySubID_82);
          SettlPtysSubGrp_NoSettlPartySubIDs_82.insert(SettlPartySubID_82.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_82(889762694);
          noSettlPartySubIDs_0_0_2_3_0.set(SettlPartySubIDType_82);
          SettlPtysSubGrp_NoSettlPartySubIDs_82.insert(SettlPartySubIDType_82.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_82);

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_0);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_2);
      }
      noSettlInst_0_0.addGroup(noDlvyInst_0_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_0_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_19;
      FIX::DlvyInstType DlvyInstType_19('S');
      noDlvyInst_0_1_1.set(DlvyInstType_19);
      DlvyInstGrp_NoDlvyInst_19.insert(DlvyInstType_19.getString());
      FIX::SettlInstSource SettlInstSource_19('3');
      noDlvyInst_0_1_1.set(SettlInstSource_19);
      DlvyInstGrp_NoDlvyInst_19.insert(SettlInstSource_19.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_19);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_37;
        FIX::SettlPartyID SettlPartyID_37("STRING_1602365968");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyID_37.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_37('6');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyIDSource_37.getString());
        FIX::SettlPartyRole SettlPartyRole_37(200528235);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyRole_37.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_37);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_83;
          FIX::SettlPartySubID SettlPartySubID_83("STRING_660656384");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_83);
          SettlPtysSubGrp_NoSettlPartySubIDs_83.insert(SettlPartySubID_83.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_83(1300382837);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_83);
          SettlPtysSubGrp_NoSettlPartySubIDs_83.insert(SettlPartySubIDType_83.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_83);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_84;
          FIX::SettlPartySubID SettlPartySubID_84("STRING_1351622325");
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubID_84);
          SettlPtysSubGrp_NoSettlPartySubIDs_84.insert(SettlPartySubID_84.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_84(621245160);
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubIDType_84);
          SettlPtysSubGrp_NoSettlPartySubIDs_84.insert(SettlPartySubIDType_84.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_84);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_85;
          FIX::SettlPartySubID SettlPartySubID_85("STRING_481852999");
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubID_85);
          SettlPtysSubGrp_NoSettlPartySubIDs_85.insert(SettlPartySubID_85.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_85(857395058);
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubIDType_85);
          SettlPtysSubGrp_NoSettlPartySubIDs_85.insert(SettlPartySubIDType_85.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_85);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_2);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_38;
        FIX::SettlPartyID SettlPartyID_38("STRING_1661160710");
        noSettlPartyIDs_0_1_2_1.set(SettlPartyID_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyID_38.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_38('2');
        noSettlPartyIDs_0_1_2_1.set(SettlPartyIDSource_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyIDSource_38.getString());
        FIX::SettlPartyRole SettlPartyRole_38(1300651146);
        noSettlPartyIDs_0_1_2_1.set(SettlPartyRole_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyRole_38.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_38);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_86;
          FIX::SettlPartySubID SettlPartySubID_86("STRING_205225545");
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubID_86);
          SettlPtysSubGrp_NoSettlPartySubIDs_86.insert(SettlPartySubID_86.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_86(1452070625);
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubIDType_86);
          SettlPtysSubGrp_NoSettlPartySubIDs_86.insert(SettlPartySubIDType_86.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_86);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_87;
          FIX::SettlPartySubID SettlPartySubID_87("STRING_1386280453");
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubID_87);
          SettlPtysSubGrp_NoSettlPartySubIDs_87.insert(SettlPartySubID_87.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_87(312649598);
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubIDType_87);
          SettlPtysSubGrp_NoSettlPartySubIDs_87.insert(SettlPartySubIDType_87.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_87);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_1);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      noSettlInst_0_0.addGroup(noDlvyInst_0_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_0_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_20;
      FIX::DlvyInstType DlvyInstType_20('C');
      noDlvyInst_0_1_2.set(DlvyInstType_20);
      DlvyInstGrp_NoDlvyInst_20.insert(DlvyInstType_20.getString());
      FIX::SettlInstSource SettlInstSource_20('3');
      noDlvyInst_0_1_2.set(SettlInstSource_20);
      DlvyInstGrp_NoDlvyInst_20.insert(SettlInstSource_20.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_20);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_39;
        FIX::SettlPartyID SettlPartyID_39("STRING_723726383");
        noSettlPartyIDs_0_2_2_0.set(SettlPartyID_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyID_39.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_39('1');
        noSettlPartyIDs_0_2_2_0.set(SettlPartyIDSource_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyIDSource_39.getString());
        FIX::SettlPartyRole SettlPartyRole_39(172597876);
        noSettlPartyIDs_0_2_2_0.set(SettlPartyRole_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyRole_39.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_39);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_88;
          FIX::SettlPartySubID SettlPartySubID_88("STRING_729345127");
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubID_88);
          SettlPtysSubGrp_NoSettlPartySubIDs_88.insert(SettlPartySubID_88.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_88(638256270);
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubIDType_88);
          SettlPtysSubGrp_NoSettlPartySubIDs_88.insert(SettlPartySubIDType_88.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_88);

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_89;
          FIX::SettlPartySubID SettlPartySubID_89("STRING_959399724");
          noSettlPartySubIDs_0_2_0_3_1.set(SettlPartySubID_89);
          SettlPtysSubGrp_NoSettlPartySubIDs_89.insert(SettlPartySubID_89.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_89(715487025);
          noSettlPartySubIDs_0_2_0_3_1.set(SettlPartySubIDType_89);
          SettlPtysSubGrp_NoSettlPartySubIDs_89.insert(SettlPartySubIDType_89.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_89);

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_1);
        }
        noDlvyInst_0_1_2.addGroup(noSettlPartyIDs_0_2_2_0);
      }
      noSettlInst_0_0.addGroup(noDlvyInst_0_1_2);
    }
    msg.addGroup(noSettlInst_0_0);
  }
  {
    FIX50SP2::SettlementInstructions::NoSettlInst noSettlInst_0_1;
    // SettlInstGrp.NoSettlInst
    multiset<string> SettlInstGrp_NoSettlInst_1;
    FIX::CFICode CFICode_92("STRING_702509387");
    noSettlInst_0_1.set(CFICode_92);
    SettlInstGrp_NoSettlInst_1.insert(CFICode_92.getString());
    FIX::CardExpDate CardExpDate_1("LOCALMKTDATE_1637103250");
    noSettlInst_0_1.set(CardExpDate_1);
    SettlInstGrp_NoSettlInst_1.insert(CardExpDate_1.getString());
    FIX::CardHolderName CardHolderName_1("STRING_170369345");
    noSettlInst_0_1.set(CardHolderName_1);
    SettlInstGrp_NoSettlInst_1.insert(CardHolderName_1.getString());
    FIX::CardIssNum CardIssNum_1("STRING_1337201886");
    noSettlInst_0_1.set(CardIssNum_1);
    SettlInstGrp_NoSettlInst_1.insert(CardIssNum_1.getString());
    FIX::CardNumber CardNumber_1("STRING_1837631485");
    noSettlInst_0_1.set(CardNumber_1);
    SettlInstGrp_NoSettlInst_1.insert(CardNumber_1.getString());
    FIX::CardStartDate CardStartDate_1("LOCALMKTDATE_1879380727");
    noSettlInst_0_1.set(CardStartDate_1);
    SettlInstGrp_NoSettlInst_1.insert(CardStartDate_1.getString());
    FIX::EffectiveTime EffectiveTime_11(FIX::UTCTIMESTAMP(10, 44, 43, 6, 12, 2004));
    noSettlInst_0_1.set(EffectiveTime_11);
    SettlInstGrp_NoSettlInst_1.insert(EffectiveTime_11.getString());
    FIX::ExpireTime ExpireTime_20(FIX::UTCTIMESTAMP(9, 3, 22, 11, 9, 2000));
    noSettlInst_0_1.set(ExpireTime_20);
    SettlInstGrp_NoSettlInst_1.insert(ExpireTime_20.getString());
    FIX::LastUpdateTime LastUpdateTime_2(FIX::UTCTIMESTAMP(10, 29, 36, 2, 10, 2010));
    noSettlInst_0_1.set(LastUpdateTime_2);
    SettlInstGrp_NoSettlInst_1.insert(LastUpdateTime_2.getString());
    FIX::PaymentDate PaymentDate_1("LOCALMKTDATE_480389246");
    noSettlInst_0_1.set(PaymentDate_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentDate_1.getString());
    FIX::PaymentMethod PaymentMethod_1(9);
    noSettlInst_0_1.set(PaymentMethod_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentMethod_1.getString());
    FIX::PaymentRef PaymentRef_1("STRING_1140495611");
    noSettlInst_0_1.set(PaymentRef_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentRef_1.getString());
    FIX::PaymentRemitterID PaymentRemitterID_1("STRING_1195876271");
    noSettlInst_0_1.set(PaymentRemitterID_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentRemitterID_1.getString());
    FIX::Product Product_95(3);
    noSettlInst_0_1.set(Product_95);
    SettlInstGrp_NoSettlInst_1.insert(Product_95.getString());
    FIX::SecurityType SecurityType_95("STRING_DINP");
    noSettlInst_0_1.set(SecurityType_95);
    SettlInstGrp_NoSettlInst_1.insert(SecurityType_95.getString());
    FIX::SettlCurrency SettlCurrency_28("USD");
    noSettlInst_0_1.set(SettlCurrency_28);
    SettlInstGrp_NoSettlInst_1.insert(SettlCurrency_28.getString());
    FIX::SettlInstID SettlInstID_1("STRING_320263051");
    noSettlInst_0_1.set(SettlInstID_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstID_1.getString());
    FIX::SettlInstRefID SettlInstRefID_1("STRING_1098142696");
    noSettlInst_0_1.set(SettlInstRefID_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstRefID_1.getString());
    FIX::SettlInstTransType SettlInstTransType_1('C');
    noSettlInst_0_1.set(SettlInstTransType_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstTransType_1.getString());
    FIX::Side Side_43('E');
    noSettlInst_0_1.set(Side_43);
    SettlInstGrp_NoSettlInst_1.insert(Side_43.getString());
    all_values.push_back(SettlInstGrp_NoSettlInst_1);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_130;
      FIX::PartyID PartyID_130("STRING_570067880");
      noPartyIDs_1_1_0.set(PartyID_130);
      Parties_NoPartyIDs_130.insert(PartyID_130.getString());
      FIX::PartyIDSource PartyIDSource_130('5');
      noPartyIDs_1_1_0.set(PartyIDSource_130);
      Parties_NoPartyIDs_130.insert(PartyIDSource_130.getString());
      FIX::PartyRole PartyRole_130(77);
      noPartyIDs_1_1_0.set(PartyRole_130);
      Parties_NoPartyIDs_130.insert(PartyRole_130.getString());
      all_values.push_back(Parties_NoPartyIDs_130);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_264;
        FIX::PartySubID PartySubID_264("STRING_2025104188");
        noPartySubIDs_1_0_2_0.set(PartySubID_264);
        PtysSubGrp_NoPartySubIDs_264.insert(PartySubID_264.getString());
        FIX::PartySubIDType PartySubIDType_264(9);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_264);
        PtysSubGrp_NoPartySubIDs_264.insert(PartySubIDType_264.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_264);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_265;
        FIX::PartySubID PartySubID_265("STRING_1399098109");
        noPartySubIDs_1_0_2_1.set(PartySubID_265);
        PtysSubGrp_NoPartySubIDs_265.insert(PartySubID_265.getString());
        FIX::PartySubIDType PartySubIDType_265(1);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_265);
        PtysSubGrp_NoPartySubIDs_265.insert(PartySubIDType_265.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_265);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_131;
      FIX::PartyID PartyID_131("STRING_1320360168");
      noPartyIDs_1_1_1.set(PartyID_131);
      Parties_NoPartyIDs_131.insert(PartyID_131.getString());
      FIX::PartyIDSource PartyIDSource_131('9');
      noPartyIDs_1_1_1.set(PartyIDSource_131);
      Parties_NoPartyIDs_131.insert(PartyIDSource_131.getString());
      FIX::PartyRole PartyRole_131(49);
      noPartyIDs_1_1_1.set(PartyRole_131);
      Parties_NoPartyIDs_131.insert(PartyRole_131.getString());
      all_values.push_back(Parties_NoPartyIDs_131);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_266;
        FIX::PartySubID PartySubID_266("STRING_1036812611");
        noPartySubIDs_1_1_2_0.set(PartySubID_266);
        PtysSubGrp_NoPartySubIDs_266.insert(PartySubID_266.getString());
        FIX::PartySubIDType PartySubIDType_266(15);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_266);
        PtysSubGrp_NoPartySubIDs_266.insert(PartySubIDType_266.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_266);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_267;
        FIX::PartySubID PartySubID_267("STRING_819551497");
        noPartySubIDs_1_1_2_1.set(PartySubID_267);
        PtysSubGrp_NoPartySubIDs_267.insert(PartySubID_267.getString());
        FIX::PartySubIDType PartySubIDType_267(13);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_267);
        PtysSubGrp_NoPartySubIDs_267.insert(PartySubIDType_267.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_267);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_11;
    FIX::SettlDeliveryType SettlDeliveryType_11(1);
    noSettlInst_0_1.set(SettlDeliveryType_11);
    SettlInstructionsData_11.insert(SettlDeliveryType_11.getString());
    FIX::StandInstDbID StandInstDbID_12("STRING_1000647384");
    noSettlInst_0_1.set(StandInstDbID_12);
    SettlInstructionsData_11.insert(StandInstDbID_12.getString());
    FIX::StandInstDbName StandInstDbName_12("STRING_1268245976");
    noSettlInst_0_1.set(StandInstDbName_12);
    SettlInstructionsData_11.insert(StandInstDbName_12.getString());
    FIX::StandInstDbType StandInstDbType_12(1);
    noSettlInst_0_1.set(StandInstDbType_12);
    SettlInstructionsData_11.insert(StandInstDbType_12.getString());
    all_values.push_back(SettlInstructionsData_11);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_21;
      FIX::DlvyInstType DlvyInstType_21('S');
      noDlvyInst_1_1_0.set(DlvyInstType_21);
      DlvyInstGrp_NoDlvyInst_21.insert(DlvyInstType_21.getString());
      FIX::SettlInstSource SettlInstSource_21('2');
      noDlvyInst_1_1_0.set(SettlInstSource_21);
      DlvyInstGrp_NoDlvyInst_21.insert(SettlInstSource_21.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_21);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_40;
        FIX::SettlPartyID SettlPartyID_40("STRING_1682884215");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyID_40.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_40('9');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyIDSource_40.getString());
        FIX::SettlPartyRole SettlPartyRole_40(944037611);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyRole_40.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_40);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_90;
          FIX::SettlPartySubID SettlPartySubID_90("STRING_107878740");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_90);
          SettlPtysSubGrp_NoSettlPartySubIDs_90.insert(SettlPartySubID_90.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_90(107347689);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_90);
          SettlPtysSubGrp_NoSettlPartySubIDs_90.insert(SettlPartySubIDType_90.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_90);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_91;
          FIX::SettlPartySubID SettlPartySubID_91("STRING_667721716");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_91);
          SettlPtysSubGrp_NoSettlPartySubIDs_91.insert(SettlPartySubID_91.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_91(677946620);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_91);
          SettlPtysSubGrp_NoSettlPartySubIDs_91.insert(SettlPartySubIDType_91.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_91);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_92;
          FIX::SettlPartySubID SettlPartySubID_92("STRING_743041440");
          noSettlPartySubIDs_1_0_0_3_2.set(SettlPartySubID_92);
          SettlPtysSubGrp_NoSettlPartySubIDs_92.insert(SettlPartySubID_92.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_92(495330983);
          noSettlPartySubIDs_1_0_0_3_2.set(SettlPartySubIDType_92);
          SettlPtysSubGrp_NoSettlPartySubIDs_92.insert(SettlPartySubIDType_92.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_92);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_2);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_41;
        FIX::SettlPartyID SettlPartyID_41("STRING_1233311347");
        noSettlPartyIDs_1_0_2_1.set(SettlPartyID_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyID_41.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_41('6');
        noSettlPartyIDs_1_0_2_1.set(SettlPartyIDSource_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyIDSource_41.getString());
        FIX::SettlPartyRole SettlPartyRole_41(1417022212);
        noSettlPartyIDs_1_0_2_1.set(SettlPartyRole_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyRole_41.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_41);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_93;
          FIX::SettlPartySubID SettlPartySubID_93("STRING_2092918503");
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubID_93);
          SettlPtysSubGrp_NoSettlPartySubIDs_93.insert(SettlPartySubID_93.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_93(589898732);
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubIDType_93);
          SettlPtysSubGrp_NoSettlPartySubIDs_93.insert(SettlPartySubIDType_93.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_93);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      noSettlInst_0_1.addGroup(noDlvyInst_1_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_1_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_22;
      FIX::DlvyInstType DlvyInstType_22('C');
      noDlvyInst_1_1_1.set(DlvyInstType_22);
      DlvyInstGrp_NoDlvyInst_22.insert(DlvyInstType_22.getString());
      FIX::SettlInstSource SettlInstSource_22('1');
      noDlvyInst_1_1_1.set(SettlInstSource_22);
      DlvyInstGrp_NoDlvyInst_22.insert(SettlInstSource_22.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_22);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_42;
        FIX::SettlPartyID SettlPartyID_42("STRING_855883069");
        noSettlPartyIDs_1_1_2_0.set(SettlPartyID_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyID_42.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_42('1');
        noSettlPartyIDs_1_1_2_0.set(SettlPartyIDSource_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyIDSource_42.getString());
        FIX::SettlPartyRole SettlPartyRole_42(2117542871);
        noSettlPartyIDs_1_1_2_0.set(SettlPartyRole_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyRole_42.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_42);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_94;
          FIX::SettlPartySubID SettlPartySubID_94("STRING_301699552");
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubID_94);
          SettlPtysSubGrp_NoSettlPartySubIDs_94.insert(SettlPartySubID_94.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_94(970706607);
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubIDType_94);
          SettlPtysSubGrp_NoSettlPartySubIDs_94.insert(SettlPartySubIDType_94.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_94);

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_95;
          FIX::SettlPartySubID SettlPartySubID_95("STRING_764502127");
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubID_95);
          SettlPtysSubGrp_NoSettlPartySubIDs_95.insert(SettlPartySubID_95.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_95(1152185133);
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubIDType_95);
          SettlPtysSubGrp_NoSettlPartySubIDs_95.insert(SettlPartySubIDType_95.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_95);

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_1);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      noSettlInst_0_1.addGroup(noDlvyInst_1_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_1_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_23;
      FIX::DlvyInstType DlvyInstType_23('C');
      noDlvyInst_1_1_2.set(DlvyInstType_23);
      DlvyInstGrp_NoDlvyInst_23.insert(DlvyInstType_23.getString());
      FIX::SettlInstSource SettlInstSource_23('1');
      noDlvyInst_1_1_2.set(SettlInstSource_23);
      DlvyInstGrp_NoDlvyInst_23.insert(SettlInstSource_23.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_23);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_43;
        FIX::SettlPartyID SettlPartyID_43("STRING_1588140514");
        noSettlPartyIDs_1_2_2_0.set(SettlPartyID_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyID_43.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_43('6');
        noSettlPartyIDs_1_2_2_0.set(SettlPartyIDSource_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyIDSource_43.getString());
        FIX::SettlPartyRole SettlPartyRole_43(922972945);
        noSettlPartyIDs_1_2_2_0.set(SettlPartyRole_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyRole_43.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_43);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_96;
          FIX::SettlPartySubID SettlPartySubID_96("STRING_1250084557");
          noSettlPartySubIDs_1_2_0_3_0.set(SettlPartySubID_96);
          SettlPtysSubGrp_NoSettlPartySubIDs_96.insert(SettlPartySubID_96.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_96(1030851685);
          noSettlPartySubIDs_1_2_0_3_0.set(SettlPartySubIDType_96);
          SettlPtysSubGrp_NoSettlPartySubIDs_96.insert(SettlPartySubIDType_96.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_96);

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_97;
          FIX::SettlPartySubID SettlPartySubID_97("STRING_492042167");
          noSettlPartySubIDs_1_2_0_3_1.set(SettlPartySubID_97);
          SettlPtysSubGrp_NoSettlPartySubIDs_97.insert(SettlPartySubID_97.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_97(1917806273);
          noSettlPartySubIDs_1_2_0_3_1.set(SettlPartySubIDType_97);
          SettlPtysSubGrp_NoSettlPartySubIDs_97.insert(SettlPartySubIDType_97.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_97);

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_98;
          FIX::SettlPartySubID SettlPartySubID_98("STRING_1708798306");
          noSettlPartySubIDs_1_2_0_3_2.set(SettlPartySubID_98);
          SettlPtysSubGrp_NoSettlPartySubIDs_98.insert(SettlPartySubID_98.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_98(1235083607);
          noSettlPartySubIDs_1_2_0_3_2.set(SettlPartySubIDType_98);
          SettlPtysSubGrp_NoSettlPartySubIDs_98.insert(SettlPartySubIDType_98.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_98);

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_2);
        }
        noDlvyInst_1_1_2.addGroup(noSettlPartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_44;
        FIX::SettlPartyID SettlPartyID_44("STRING_265653609");
        noSettlPartyIDs_1_2_2_1.set(SettlPartyID_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyID_44.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_44('7');
        noSettlPartyIDs_1_2_2_1.set(SettlPartyIDSource_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyIDSource_44.getString());
        FIX::SettlPartyRole SettlPartyRole_44(1855745588);
        noSettlPartyIDs_1_2_2_1.set(SettlPartyRole_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyRole_44.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_44);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_99;
          FIX::SettlPartySubID SettlPartySubID_99("STRING_1279551813");
          noSettlPartySubIDs_1_2_1_3_0.set(SettlPartySubID_99);
          SettlPtysSubGrp_NoSettlPartySubIDs_99.insert(SettlPartySubID_99.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_99(1801180444);
          noSettlPartySubIDs_1_2_1_3_0.set(SettlPartySubIDType_99);
          SettlPtysSubGrp_NoSettlPartySubIDs_99.insert(SettlPartySubIDType_99.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_99);

          noSettlPartyIDs_1_2_2_1.addGroup(noSettlPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_100;
          FIX::SettlPartySubID SettlPartySubID_100("STRING_125090906");
          noSettlPartySubIDs_1_2_1_3_1.set(SettlPartySubID_100);
          SettlPtysSubGrp_NoSettlPartySubIDs_100.insert(SettlPartySubID_100.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_100(1098622271);
          noSettlPartySubIDs_1_2_1_3_1.set(SettlPartySubIDType_100);
          SettlPtysSubGrp_NoSettlPartySubIDs_100.insert(SettlPartySubIDType_100.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_100);

          noSettlPartyIDs_1_2_2_1.addGroup(noSettlPartySubIDs_1_2_1_3_1);
        }
        noDlvyInst_1_1_2.addGroup(noSettlPartyIDs_1_2_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_2_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_45;
        FIX::SettlPartyID SettlPartyID_45("STRING_831190106");
        noSettlPartyIDs_1_2_2_2.set(SettlPartyID_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyID_45.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_45('1');
        noSettlPartyIDs_1_2_2_2.set(SettlPartyIDSource_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyIDSource_45.getString());
        FIX::SettlPartyRole SettlPartyRole_45(1954505341);
        noSettlPartyIDs_1_2_2_2.set(SettlPartyRole_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyRole_45.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_45);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_101;
          FIX::SettlPartySubID SettlPartySubID_101("STRING_1393141502");
          noSettlPartySubIDs_1_2_2_3_0.set(SettlPartySubID_101);
          SettlPtysSubGrp_NoSettlPartySubIDs_101.insert(SettlPartySubID_101.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_101(1450761492);
          noSettlPartySubIDs_1_2_2_3_0.set(SettlPartySubIDType_101);
          SettlPtysSubGrp_NoSettlPartySubIDs_101.insert(SettlPartySubIDType_101.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_101);

          noSettlPartyIDs_1_2_2_2.addGroup(noSettlPartySubIDs_1_2_2_3_0);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
