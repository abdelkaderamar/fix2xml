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
  FIX::ClOrdID ClOrdID_46("STRING_388507159");
  msg.set(ClOrdID_46);
  SettlementInstructions_0.insert(ClOrdID_46.getString());
  FIX::EncodedText EncodedText_88("DATA_1751246428");
  msg.set(EncodedText_88);
  SettlementInstructions_0.insert(EncodedText_88.getString());
  FIX::EncodedTextLen EncodedTextLen_88(922816877);
  msg.set(EncodedTextLen_88);
  SettlementInstructions_0.insert(EncodedTextLen_88.getString());
  FIX::SettlInstMode SettlInstMode_3('4');
  msg.set(SettlInstMode_3);
  SettlementInstructions_0.insert(SettlInstMode_3.getString());
  FIX::SettlInstMsgID SettlInstMsgID_0("STRING_75253887");
  msg.set(SettlInstMsgID_0);
  SettlementInstructions_0.insert(SettlInstMsgID_0.getString());
  FIX::SettlInstReqID SettlInstReqID_1("STRING_549395674");
  msg.set(SettlInstReqID_1);
  SettlementInstructions_0.insert(SettlInstReqID_1.getString());
  FIX::SettlInstReqRejCode SettlInstReqRejCode_0(0);
  msg.set(SettlInstReqRejCode_0);
  SettlementInstructions_0.insert(SettlInstReqRejCode_0.getString());
  FIX::Text Text_88("STRING_2135390174");
  msg.set(Text_88);
  SettlementInstructions_0.insert(Text_88.getString());
  FIX::TransactTime TransactTime_62(FIX::UTCTIMESTAMP(8, 58, 36, 15, 22013));
  msg.set(TransactTime_62);
  SettlementInstructions_0.insert(TransactTime_62.getString());
  all_values.push_back(SettlementInstructions_0);

  // SettlInstGrp
  // Group SettlInstGrp.NoSettlInst
  {
    FIX50SP2::SettlementInstructions::NoSettlInst noSettlInst_0_0;
    // SettlInstGrp.NoSettlInst
    multiset<string> SettlInstGrp_NoSettlInst_0;
    FIX::CFICode CFICode_85("STRING_165364484");
    noSettlInst_0_0.set(CFICode_85);
    SettlInstGrp_NoSettlInst_0.insert(CFICode_85.getString());
    FIX::CardExpDate CardExpDate_0("LOCALMKTDATE_806699516");
    noSettlInst_0_0.set(CardExpDate_0);
    SettlInstGrp_NoSettlInst_0.insert(CardExpDate_0.getString());
    FIX::CardHolderName CardHolderName_0("STRING_310947614");
    noSettlInst_0_0.set(CardHolderName_0);
    SettlInstGrp_NoSettlInst_0.insert(CardHolderName_0.getString());
    FIX::CardIssNum CardIssNum_0("STRING_2058249706");
    noSettlInst_0_0.set(CardIssNum_0);
    SettlInstGrp_NoSettlInst_0.insert(CardIssNum_0.getString());
    FIX::CardNumber CardNumber_0("STRING_1899979725");
    noSettlInst_0_0.set(CardNumber_0);
    SettlInstGrp_NoSettlInst_0.insert(CardNumber_0.getString());
    FIX::CardStartDate CardStartDate_0("LOCALMKTDATE_876944388");
    noSettlInst_0_0.set(CardStartDate_0);
    SettlInstGrp_NoSettlInst_0.insert(CardStartDate_0.getString());
    FIX::EffectiveTime EffectiveTime_11(FIX::UTCTIMESTAMP(19, 51, 59, 11, 92005));
    noSettlInst_0_0.set(EffectiveTime_11);
    SettlInstGrp_NoSettlInst_0.insert(EffectiveTime_11.getString());
    FIX::ExpireTime ExpireTime_21(FIX::UTCTIMESTAMP(23, 34, 47, 8, 102014));
    noSettlInst_0_0.set(ExpireTime_21);
    SettlInstGrp_NoSettlInst_0.insert(ExpireTime_21.getString());
    FIX::LastUpdateTime LastUpdateTime_1(FIX::UTCTIMESTAMP(1, 20, 39, 1, 112010));
    noSettlInst_0_0.set(LastUpdateTime_1);
    SettlInstGrp_NoSettlInst_0.insert(LastUpdateTime_1.getString());
    FIX::PaymentDate PaymentDate_0("LOCALMKTDATE_589362284");
    noSettlInst_0_0.set(PaymentDate_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentDate_0.getString());
    FIX::PaymentMethod PaymentMethod_0(7);
    noSettlInst_0_0.set(PaymentMethod_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentMethod_0.getString());
    FIX::PaymentRef PaymentRef_0("STRING_665567175");
    noSettlInst_0_0.set(PaymentRef_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentRef_0.getString());
    FIX::PaymentRemitterID PaymentRemitterID_0("STRING_2119938751");
    noSettlInst_0_0.set(PaymentRemitterID_0);
    SettlInstGrp_NoSettlInst_0.insert(PaymentRemitterID_0.getString());
    FIX::Product Product_88(5);
    noSettlInst_0_0.set(Product_88);
    SettlInstGrp_NoSettlInst_0.insert(Product_88.getString());
    FIX::SecurityType SecurityType_88("STRING_TPRN");
    noSettlInst_0_0.set(SecurityType_88);
    SettlInstGrp_NoSettlInst_0.insert(SecurityType_88.getString());
    FIX::SettlCurrency SettlCurrency_31("CAN");
    noSettlInst_0_0.set(SettlCurrency_31);
    SettlInstGrp_NoSettlInst_0.insert(SettlCurrency_31.getString());
    FIX::SettlInstID SettlInstID_0("STRING_1224762768");
    noSettlInst_0_0.set(SettlInstID_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstID_0.getString());
    FIX::SettlInstRefID SettlInstRefID_0("STRING_1160347106");
    noSettlInst_0_0.set(SettlInstRefID_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstRefID_0.getString());
    FIX::SettlInstTransType SettlInstTransType_0('T');
    noSettlInst_0_0.set(SettlInstTransType_0);
    SettlInstGrp_NoSettlInst_0.insert(SettlInstTransType_0.getString());
    FIX::Side Side_47('D');
    noSettlInst_0_0.set(Side_47);
    SettlInstGrp_NoSettlInst_0.insert(Side_47.getString());
    all_values.push_back(SettlInstGrp_NoSettlInst_0);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_135;
      FIX::PartyID PartyID_135("STRING_1028027723");
      noPartyIDs_0_1_0.set(PartyID_135);
      Parties_NoPartyIDs_135.insert(PartyID_135.getString());
      FIX::PartyIDSource PartyIDSource_135('B');
      noPartyIDs_0_1_0.set(PartyIDSource_135);
      Parties_NoPartyIDs_135.insert(PartyIDSource_135.getString());
      FIX::PartyRole PartyRole_135(56);
      noPartyIDs_0_1_0.set(PartyRole_135);
      Parties_NoPartyIDs_135.insert(PartyRole_135.getString());
      all_values.push_back(Parties_NoPartyIDs_135);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_268;
        FIX::PartySubID PartySubID_268("STRING_1389962334");
        noPartySubIDs_0_0_2_0.set(PartySubID_268);
        PtysSubGrp_NoPartySubIDs_268.insert(PartySubID_268.getString());
        FIX::PartySubIDType PartySubIDType_268(19);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_268);
        PtysSubGrp_NoPartySubIDs_268.insert(PartySubIDType_268.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_268);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_269;
        FIX::PartySubID PartySubID_269("STRING_1065193753");
        noPartySubIDs_0_0_2_1.set(PartySubID_269);
        PtysSubGrp_NoPartySubIDs_269.insert(PartySubID_269.getString());
        FIX::PartySubIDType PartySubIDType_269(25);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_269);
        PtysSubGrp_NoPartySubIDs_269.insert(PartySubIDType_269.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_269);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_270;
        FIX::PartySubID PartySubID_270("STRING_337766573");
        noPartySubIDs_0_0_2_2.set(PartySubID_270);
        PtysSubGrp_NoPartySubIDs_270.insert(PartySubID_270.getString());
        FIX::PartySubIDType PartySubIDType_270(27);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_270);
        PtysSubGrp_NoPartySubIDs_270.insert(PartySubIDType_270.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_270);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_136;
      FIX::PartyID PartyID_136("STRING_888233860");
      noPartyIDs_0_1_1.set(PartyID_136);
      Parties_NoPartyIDs_136.insert(PartyID_136.getString());
      FIX::PartyIDSource PartyIDSource_136('H');
      noPartyIDs_0_1_1.set(PartyIDSource_136);
      Parties_NoPartyIDs_136.insert(PartyIDSource_136.getString());
      FIX::PartyRole PartyRole_136(41);
      noPartyIDs_0_1_1.set(PartyRole_136);
      Parties_NoPartyIDs_136.insert(PartyRole_136.getString());
      all_values.push_back(Parties_NoPartyIDs_136);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_271;
        FIX::PartySubID PartySubID_271("STRING_1172930030");
        noPartySubIDs_0_1_2_0.set(PartySubID_271);
        PtysSubGrp_NoPartySubIDs_271.insert(PartySubID_271.getString());
        FIX::PartySubIDType PartySubIDType_271(1);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_271);
        PtysSubGrp_NoPartySubIDs_271.insert(PartySubIDType_271.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_271);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_272;
        FIX::PartySubID PartySubID_272("STRING_1914136803");
        noPartySubIDs_0_1_2_1.set(PartySubID_272);
        PtysSubGrp_NoPartySubIDs_272.insert(PartySubID_272.getString());
        FIX::PartySubIDType PartySubIDType_272(11);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_272);
        PtysSubGrp_NoPartySubIDs_272.insert(PartySubIDType_272.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_272);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_137;
      FIX::PartyID PartyID_137("STRING_1987292312");
      noPartyIDs_0_1_2.set(PartyID_137);
      Parties_NoPartyIDs_137.insert(PartyID_137.getString());
      FIX::PartyIDSource PartyIDSource_137('D');
      noPartyIDs_0_1_2.set(PartyIDSource_137);
      Parties_NoPartyIDs_137.insert(PartyIDSource_137.getString());
      FIX::PartyRole PartyRole_137(63);
      noPartyIDs_0_1_2.set(PartyRole_137);
      Parties_NoPartyIDs_137.insert(PartyRole_137.getString());
      all_values.push_back(Parties_NoPartyIDs_137);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_273;
        FIX::PartySubID PartySubID_273("STRING_1255704223");
        noPartySubIDs_0_2_2_0.set(PartySubID_273);
        PtysSubGrp_NoPartySubIDs_273.insert(PartySubID_273.getString());
        FIX::PartySubIDType PartySubIDType_273(23);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_273);
        PtysSubGrp_NoPartySubIDs_273.insert(PartySubIDType_273.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_273);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_274;
        FIX::PartySubID PartySubID_274("STRING_95666485");
        noPartySubIDs_0_2_2_1.set(PartySubID_274);
        PtysSubGrp_NoPartySubIDs_274.insert(PartySubID_274.getString());
        FIX::PartySubIDType PartySubIDType_274(20);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_274);
        PtysSubGrp_NoPartySubIDs_274.insert(PartySubIDType_274.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_274);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_9;
    FIX::SettlDeliveryType SettlDeliveryType_9(1);
    noSettlInst_0_0.set(SettlDeliveryType_9);
    SettlInstructionsData_9.insert(SettlDeliveryType_9.getString());
    FIX::StandInstDbID StandInstDbID_10("STRING_1256013591");
    noSettlInst_0_0.set(StandInstDbID_10);
    SettlInstructionsData_9.insert(StandInstDbID_10.getString());
    FIX::StandInstDbName StandInstDbName_10("STRING_241203478");
    noSettlInst_0_0.set(StandInstDbName_10);
    SettlInstructionsData_9.insert(StandInstDbName_10.getString());
    FIX::StandInstDbType StandInstDbType_10(3);
    noSettlInst_0_0.set(StandInstDbType_10);
    SettlInstructionsData_9.insert(StandInstDbType_10.getString());
    all_values.push_back(SettlInstructionsData_9);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_16;
      FIX::DlvyInstType DlvyInstType_16('S');
      noDlvyInst_0_1_0.set(DlvyInstType_16);
      DlvyInstGrp_NoDlvyInst_16.insert(DlvyInstType_16.getString());
      FIX::SettlInstSource SettlInstSource_16('3');
      noDlvyInst_0_1_0.set(SettlInstSource_16);
      DlvyInstGrp_NoDlvyInst_16.insert(SettlInstSource_16.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_16);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_30;
        FIX::SettlPartyID SettlPartyID_30("STRING_2121588359");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_30);
        SettlParties_NoSettlPartyIDs_30.insert(SettlPartyID_30.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_30('6');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_30);
        SettlParties_NoSettlPartyIDs_30.insert(SettlPartyIDSource_30.getString());
        FIX::SettlPartyRole SettlPartyRole_30(2089581471);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_30);
        SettlParties_NoSettlPartyIDs_30.insert(SettlPartyRole_30.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_30);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_63;
          FIX::SettlPartySubID SettlPartySubID_63("STRING_1716260487");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_63);
          SettlPtysSubGrp_NoSettlPartySubIDs_63.insert(SettlPartySubID_63.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_63(279864396);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_63);
          SettlPtysSubGrp_NoSettlPartySubIDs_63.insert(SettlPartySubIDType_63.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_63);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_64;
          FIX::SettlPartySubID SettlPartySubID_64("STRING_1214196114");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_64);
          SettlPtysSubGrp_NoSettlPartySubIDs_64.insert(SettlPartySubID_64.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_64(457010699);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_64);
          SettlPtysSubGrp_NoSettlPartySubIDs_64.insert(SettlPartySubIDType_64.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_64);

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
    FIX::CFICode CFICode_86("STRING_1309896287");
    noSettlInst_0_1.set(CFICode_86);
    SettlInstGrp_NoSettlInst_1.insert(CFICode_86.getString());
    FIX::CardExpDate CardExpDate_1("LOCALMKTDATE_1822486437");
    noSettlInst_0_1.set(CardExpDate_1);
    SettlInstGrp_NoSettlInst_1.insert(CardExpDate_1.getString());
    FIX::CardHolderName CardHolderName_1("STRING_1119913792");
    noSettlInst_0_1.set(CardHolderName_1);
    SettlInstGrp_NoSettlInst_1.insert(CardHolderName_1.getString());
    FIX::CardIssNum CardIssNum_1("STRING_335342670");
    noSettlInst_0_1.set(CardIssNum_1);
    SettlInstGrp_NoSettlInst_1.insert(CardIssNum_1.getString());
    FIX::CardNumber CardNumber_1("STRING_1072932817");
    noSettlInst_0_1.set(CardNumber_1);
    SettlInstGrp_NoSettlInst_1.insert(CardNumber_1.getString());
    FIX::CardStartDate CardStartDate_1("LOCALMKTDATE_886566947");
    noSettlInst_0_1.set(CardStartDate_1);
    SettlInstGrp_NoSettlInst_1.insert(CardStartDate_1.getString());
    FIX::EffectiveTime EffectiveTime_12(FIX::UTCTIMESTAMP(1, 10, 34, 17, 62002));
    noSettlInst_0_1.set(EffectiveTime_12);
    SettlInstGrp_NoSettlInst_1.insert(EffectiveTime_12.getString());
    FIX::ExpireTime ExpireTime_22(FIX::UTCTIMESTAMP(20, 47, 5, 22, 92003));
    noSettlInst_0_1.set(ExpireTime_22);
    SettlInstGrp_NoSettlInst_1.insert(ExpireTime_22.getString());
    FIX::LastUpdateTime LastUpdateTime_2(FIX::UTCTIMESTAMP(20, 32, 30, 14, 42003));
    noSettlInst_0_1.set(LastUpdateTime_2);
    SettlInstGrp_NoSettlInst_1.insert(LastUpdateTime_2.getString());
    FIX::PaymentDate PaymentDate_1("LOCALMKTDATE_519921034");
    noSettlInst_0_1.set(PaymentDate_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentDate_1.getString());
    FIX::PaymentMethod PaymentMethod_1(8);
    noSettlInst_0_1.set(PaymentMethod_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentMethod_1.getString());
    FIX::PaymentRef PaymentRef_1("STRING_1860028701");
    noSettlInst_0_1.set(PaymentRef_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentRef_1.getString());
    FIX::PaymentRemitterID PaymentRemitterID_1("STRING_976931733");
    noSettlInst_0_1.set(PaymentRemitterID_1);
    SettlInstGrp_NoSettlInst_1.insert(PaymentRemitterID_1.getString());
    FIX::Product Product_89(4);
    noSettlInst_0_1.set(Product_89);
    SettlInstGrp_NoSettlInst_1.insert(Product_89.getString());
    FIX::SecurityType SecurityType_89("STRING_WITHDRN");
    noSettlInst_0_1.set(SecurityType_89);
    SettlInstGrp_NoSettlInst_1.insert(SecurityType_89.getString());
    FIX::SettlCurrency SettlCurrency_32("EUR");
    noSettlInst_0_1.set(SettlCurrency_32);
    SettlInstGrp_NoSettlInst_1.insert(SettlCurrency_32.getString());
    FIX::SettlInstID SettlInstID_1("STRING_460480660");
    noSettlInst_0_1.set(SettlInstID_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstID_1.getString());
    FIX::SettlInstRefID SettlInstRefID_1("STRING_835928824");
    noSettlInst_0_1.set(SettlInstRefID_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstRefID_1.getString());
    FIX::SettlInstTransType SettlInstTransType_1('R');
    noSettlInst_0_1.set(SettlInstTransType_1);
    SettlInstGrp_NoSettlInst_1.insert(SettlInstTransType_1.getString());
    FIX::Side Side_48('F');
    noSettlInst_0_1.set(Side_48);
    SettlInstGrp_NoSettlInst_1.insert(Side_48.getString());
    all_values.push_back(SettlInstGrp_NoSettlInst_1);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_138;
      FIX::PartyID PartyID_138("STRING_1837250164");
      noPartyIDs_1_1_0.set(PartyID_138);
      Parties_NoPartyIDs_138.insert(PartyID_138.getString());
      FIX::PartyIDSource PartyIDSource_138('3');
      noPartyIDs_1_1_0.set(PartyIDSource_138);
      Parties_NoPartyIDs_138.insert(PartyIDSource_138.getString());
      FIX::PartyRole PartyRole_138(50);
      noPartyIDs_1_1_0.set(PartyRole_138);
      Parties_NoPartyIDs_138.insert(PartyRole_138.getString());
      all_values.push_back(Parties_NoPartyIDs_138);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_275;
        FIX::PartySubID PartySubID_275("STRING_771415477");
        noPartySubIDs_1_0_2_0.set(PartySubID_275);
        PtysSubGrp_NoPartySubIDs_275.insert(PartySubID_275.getString());
        FIX::PartySubIDType PartySubIDType_275(27);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_275);
        PtysSubGrp_NoPartySubIDs_275.insert(PartySubIDType_275.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_275);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_276;
        FIX::PartySubID PartySubID_276("STRING_1887497254");
        noPartySubIDs_1_0_2_1.set(PartySubID_276);
        PtysSubGrp_NoPartySubIDs_276.insert(PartySubID_276.getString());
        FIX::PartySubIDType PartySubIDType_276(29);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_276);
        PtysSubGrp_NoPartySubIDs_276.insert(PartySubIDType_276.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_276);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_139;
      FIX::PartyID PartyID_139("STRING_1206952778");
      noPartyIDs_1_1_1.set(PartyID_139);
      Parties_NoPartyIDs_139.insert(PartyID_139.getString());
      FIX::PartyIDSource PartyIDSource_139('A');
      noPartyIDs_1_1_1.set(PartyIDSource_139);
      Parties_NoPartyIDs_139.insert(PartyIDSource_139.getString());
      FIX::PartyRole PartyRole_139(81);
      noPartyIDs_1_1_1.set(PartyRole_139);
      Parties_NoPartyIDs_139.insert(PartyRole_139.getString());
      all_values.push_back(Parties_NoPartyIDs_139);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_277;
        FIX::PartySubID PartySubID_277("STRING_1187896327");
        noPartySubIDs_1_1_2_0.set(PartySubID_277);
        PtysSubGrp_NoPartySubIDs_277.insert(PartySubID_277.getString());
        FIX::PartySubIDType PartySubIDType_277(10);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_277);
        PtysSubGrp_NoPartySubIDs_277.insert(PartySubIDType_277.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_277);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_140;
      FIX::PartyID PartyID_140("STRING_445916311");
      noPartyIDs_1_1_2.set(PartyID_140);
      Parties_NoPartyIDs_140.insert(PartyID_140.getString());
      FIX::PartyIDSource PartyIDSource_140('5');
      noPartyIDs_1_1_2.set(PartyIDSource_140);
      Parties_NoPartyIDs_140.insert(PartyIDSource_140.getString());
      FIX::PartyRole PartyRole_140(49);
      noPartyIDs_1_1_2.set(PartyRole_140);
      Parties_NoPartyIDs_140.insert(PartyRole_140.getString());
      all_values.push_back(Parties_NoPartyIDs_140);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_278;
        FIX::PartySubID PartySubID_278("STRING_511477907");
        noPartySubIDs_1_2_2_0.set(PartySubID_278);
        PtysSubGrp_NoPartySubIDs_278.insert(PartySubID_278.getString());
        FIX::PartySubIDType PartySubIDType_278(7);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_278);
        PtysSubGrp_NoPartySubIDs_278.insert(PartySubIDType_278.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_278);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_279;
        FIX::PartySubID PartySubID_279("STRING_804293952");
        noPartySubIDs_1_2_2_1.set(PartySubID_279);
        PtysSubGrp_NoPartySubIDs_279.insert(PartySubID_279.getString());
        FIX::PartySubIDType PartySubIDType_279(16);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_279);
        PtysSubGrp_NoPartySubIDs_279.insert(PartySubIDType_279.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_279);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_10;
    FIX::SettlDeliveryType SettlDeliveryType_10(2);
    noSettlInst_0_1.set(SettlDeliveryType_10);
    SettlInstructionsData_10.insert(SettlDeliveryType_10.getString());
    FIX::StandInstDbID StandInstDbID_11("STRING_191841795");
    noSettlInst_0_1.set(StandInstDbID_11);
    SettlInstructionsData_10.insert(StandInstDbID_11.getString());
    FIX::StandInstDbName StandInstDbName_11("STRING_1437771518");
    noSettlInst_0_1.set(StandInstDbName_11);
    SettlInstructionsData_10.insert(StandInstDbName_11.getString());
    FIX::StandInstDbType StandInstDbType_11(1);
    noSettlInst_0_1.set(StandInstDbType_11);
    SettlInstructionsData_10.insert(StandInstDbType_11.getString());
    all_values.push_back(SettlInstructionsData_10);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_17;
      FIX::DlvyInstType DlvyInstType_17('S');
      noDlvyInst_1_1_0.set(DlvyInstType_17);
      DlvyInstGrp_NoDlvyInst_17.insert(DlvyInstType_17.getString());
      FIX::SettlInstSource SettlInstSource_17('2');
      noDlvyInst_1_1_0.set(SettlInstSource_17);
      DlvyInstGrp_NoDlvyInst_17.insert(SettlInstSource_17.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_17);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_31;
        FIX::SettlPartyID SettlPartyID_31("STRING_1203467089");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_31);
        SettlParties_NoSettlPartyIDs_31.insert(SettlPartyID_31.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_31('6');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_31);
        SettlParties_NoSettlPartyIDs_31.insert(SettlPartyIDSource_31.getString());
        FIX::SettlPartyRole SettlPartyRole_31(1976288340);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_31);
        SettlParties_NoSettlPartyIDs_31.insert(SettlPartyRole_31.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_31);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_65;
          FIX::SettlPartySubID SettlPartySubID_65("STRING_1488699460");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_65);
          SettlPtysSubGrp_NoSettlPartySubIDs_65.insert(SettlPartySubID_65.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_65(600220169);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_65);
          SettlPtysSubGrp_NoSettlPartySubIDs_65.insert(SettlPartySubIDType_65.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_65);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_66;
          FIX::SettlPartySubID SettlPartySubID_66("STRING_179046901");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_66);
          SettlPtysSubGrp_NoSettlPartySubIDs_66.insert(SettlPartySubID_66.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_66(1228713066);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_66);
          SettlPtysSubGrp_NoSettlPartySubIDs_66.insert(SettlPartySubIDType_66.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_66);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_32;
        FIX::SettlPartyID SettlPartyID_32("STRING_1300837323");
        noSettlPartyIDs_1_0_2_1.set(SettlPartyID_32);
        SettlParties_NoSettlPartyIDs_32.insert(SettlPartyID_32.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_32('1');
        noSettlPartyIDs_1_0_2_1.set(SettlPartyIDSource_32);
        SettlParties_NoSettlPartyIDs_32.insert(SettlPartyIDSource_32.getString());
        FIX::SettlPartyRole SettlPartyRole_32(2080254533);
        noSettlPartyIDs_1_0_2_1.set(SettlPartyRole_32);
        SettlParties_NoSettlPartyIDs_32.insert(SettlPartyRole_32.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_32);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_67;
          FIX::SettlPartySubID SettlPartySubID_67("STRING_77898220");
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubID_67);
          SettlPtysSubGrp_NoSettlPartySubIDs_67.insert(SettlPartySubID_67.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_67(1120667212);
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubIDType_67);
          SettlPtysSubGrp_NoSettlPartySubIDs_67.insert(SettlPartySubIDType_67.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_67);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      noSettlInst_0_1.addGroup(noDlvyInst_1_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_1_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_18;
      FIX::DlvyInstType DlvyInstType_18('C');
      noDlvyInst_1_1_1.set(DlvyInstType_18);
      DlvyInstGrp_NoDlvyInst_18.insert(DlvyInstType_18.getString());
      FIX::SettlInstSource SettlInstSource_18('1');
      noDlvyInst_1_1_1.set(SettlInstSource_18);
      DlvyInstGrp_NoDlvyInst_18.insert(SettlInstSource_18.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_18);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_33;
        FIX::SettlPartyID SettlPartyID_33("STRING_1238190693");
        noSettlPartyIDs_1_1_2_0.set(SettlPartyID_33);
        SettlParties_NoSettlPartyIDs_33.insert(SettlPartyID_33.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_33('1');
        noSettlPartyIDs_1_1_2_0.set(SettlPartyIDSource_33);
        SettlParties_NoSettlPartyIDs_33.insert(SettlPartyIDSource_33.getString());
        FIX::SettlPartyRole SettlPartyRole_33(1623701993);
        noSettlPartyIDs_1_1_2_0.set(SettlPartyRole_33);
        SettlParties_NoSettlPartyIDs_33.insert(SettlPartyRole_33.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_33);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_68;
          FIX::SettlPartySubID SettlPartySubID_68("STRING_272373734");
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubID_68);
          SettlPtysSubGrp_NoSettlPartySubIDs_68.insert(SettlPartySubID_68.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_68(964627986);
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubIDType_68);
          SettlPtysSubGrp_NoSettlPartySubIDs_68.insert(SettlPartySubIDType_68.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_68);

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_69;
          FIX::SettlPartySubID SettlPartySubID_69("STRING_1781253783");
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubID_69);
          SettlPtysSubGrp_NoSettlPartySubIDs_69.insert(SettlPartySubID_69.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_69(464215529);
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubIDType_69);
          SettlPtysSubGrp_NoSettlPartySubIDs_69.insert(SettlPartySubIDType_69.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_69);

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_1);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_34;
        FIX::SettlPartyID SettlPartyID_34("STRING_254915856");
        noSettlPartyIDs_1_1_2_1.set(SettlPartyID_34);
        SettlParties_NoSettlPartyIDs_34.insert(SettlPartyID_34.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_34('1');
        noSettlPartyIDs_1_1_2_1.set(SettlPartyIDSource_34);
        SettlParties_NoSettlPartyIDs_34.insert(SettlPartyIDSource_34.getString());
        FIX::SettlPartyRole SettlPartyRole_34(1116537985);
        noSettlPartyIDs_1_1_2_1.set(SettlPartyRole_34);
        SettlParties_NoSettlPartyIDs_34.insert(SettlPartyRole_34.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_34);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_70;
          FIX::SettlPartySubID SettlPartySubID_70("STRING_70698441");
          noSettlPartySubIDs_1_1_1_3_0.set(SettlPartySubID_70);
          SettlPtysSubGrp_NoSettlPartySubIDs_70.insert(SettlPartySubID_70.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_70(994598934);
          noSettlPartySubIDs_1_1_1_3_0.set(SettlPartySubIDType_70);
          SettlPtysSubGrp_NoSettlPartySubIDs_70.insert(SettlPartySubIDType_70.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_70);

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_71;
          FIX::SettlPartySubID SettlPartySubID_71("STRING_1584599641");
          noSettlPartySubIDs_1_1_1_3_1.set(SettlPartySubID_71);
          SettlPtysSubGrp_NoSettlPartySubIDs_71.insert(SettlPartySubID_71.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_71(693334155);
          noSettlPartySubIDs_1_1_1_3_1.set(SettlPartySubIDType_71);
          SettlPtysSubGrp_NoSettlPartySubIDs_71.insert(SettlPartySubIDType_71.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_71);

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_72;
          FIX::SettlPartySubID SettlPartySubID_72("STRING_823403627");
          noSettlPartySubIDs_1_1_1_3_2.set(SettlPartySubID_72);
          SettlPtysSubGrp_NoSettlPartySubIDs_72.insert(SettlPartySubID_72.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_72(1067375622);
          noSettlPartySubIDs_1_1_1_3_2.set(SettlPartySubIDType_72);
          SettlPtysSubGrp_NoSettlPartySubIDs_72.insert(SettlPartySubIDType_72.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_72);

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_2);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_35;
        FIX::SettlPartyID SettlPartyID_35("STRING_34549967");
        noSettlPartyIDs_1_1_2_2.set(SettlPartyID_35);
        SettlParties_NoSettlPartyIDs_35.insert(SettlPartyID_35.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_35('1');
        noSettlPartyIDs_1_1_2_2.set(SettlPartyIDSource_35);
        SettlParties_NoSettlPartyIDs_35.insert(SettlPartyIDSource_35.getString());
        FIX::SettlPartyRole SettlPartyRole_35(1246422524);
        noSettlPartyIDs_1_1_2_2.set(SettlPartyRole_35);
        SettlParties_NoSettlPartyIDs_35.insert(SettlPartyRole_35.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_35);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_73;
          FIX::SettlPartySubID SettlPartySubID_73("STRING_576977472");
          noSettlPartySubIDs_1_1_2_3_0.set(SettlPartySubID_73);
          SettlPtysSubGrp_NoSettlPartySubIDs_73.insert(SettlPartySubID_73.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_73(484938555);
          noSettlPartySubIDs_1_1_2_3_0.set(SettlPartySubIDType_73);
          SettlPtysSubGrp_NoSettlPartySubIDs_73.insert(SettlPartySubIDType_73.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_73);

          noSettlPartyIDs_1_1_2_2.addGroup(noSettlPartySubIDs_1_1_2_3_0);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_2);
      }
      noSettlInst_0_1.addGroup(noDlvyInst_1_1_1);
    }
    msg.addGroup(noSettlInst_0_1);
  }
  {
    FIX50SP2::SettlementInstructions::NoSettlInst noSettlInst_0_2;
    // SettlInstGrp.NoSettlInst
    multiset<string> SettlInstGrp_NoSettlInst_2;
    FIX::CFICode CFICode_87("STRING_1196033919");
    noSettlInst_0_2.set(CFICode_87);
    SettlInstGrp_NoSettlInst_2.insert(CFICode_87.getString());
    FIX::CardExpDate CardExpDate_2("LOCALMKTDATE_1279990359");
    noSettlInst_0_2.set(CardExpDate_2);
    SettlInstGrp_NoSettlInst_2.insert(CardExpDate_2.getString());
    FIX::CardHolderName CardHolderName_2("STRING_562836776");
    noSettlInst_0_2.set(CardHolderName_2);
    SettlInstGrp_NoSettlInst_2.insert(CardHolderName_2.getString());
    FIX::CardIssNum CardIssNum_2("STRING_169217483");
    noSettlInst_0_2.set(CardIssNum_2);
    SettlInstGrp_NoSettlInst_2.insert(CardIssNum_2.getString());
    FIX::CardNumber CardNumber_2("STRING_1981421761");
    noSettlInst_0_2.set(CardNumber_2);
    SettlInstGrp_NoSettlInst_2.insert(CardNumber_2.getString());
    FIX::CardStartDate CardStartDate_2("LOCALMKTDATE_1086651308");
    noSettlInst_0_2.set(CardStartDate_2);
    SettlInstGrp_NoSettlInst_2.insert(CardStartDate_2.getString());
    FIX::EffectiveTime EffectiveTime_13(FIX::UTCTIMESTAMP(15, 10, 13, 3, 22001));
    noSettlInst_0_2.set(EffectiveTime_13);
    SettlInstGrp_NoSettlInst_2.insert(EffectiveTime_13.getString());
    FIX::ExpireTime ExpireTime_23(FIX::UTCTIMESTAMP(18, 56, 13, 3, 122016));
    noSettlInst_0_2.set(ExpireTime_23);
    SettlInstGrp_NoSettlInst_2.insert(ExpireTime_23.getString());
    FIX::LastUpdateTime LastUpdateTime_3(FIX::UTCTIMESTAMP(12, 49, 53, 23, 22013));
    noSettlInst_0_2.set(LastUpdateTime_3);
    SettlInstGrp_NoSettlInst_2.insert(LastUpdateTime_3.getString());
    FIX::PaymentDate PaymentDate_2("LOCALMKTDATE_1961766799");
    noSettlInst_0_2.set(PaymentDate_2);
    SettlInstGrp_NoSettlInst_2.insert(PaymentDate_2.getString());
    FIX::PaymentMethod PaymentMethod_2(9);
    noSettlInst_0_2.set(PaymentMethod_2);
    SettlInstGrp_NoSettlInst_2.insert(PaymentMethod_2.getString());
    FIX::PaymentRef PaymentRef_2("STRING_1931494873");
    noSettlInst_0_2.set(PaymentRef_2);
    SettlInstGrp_NoSettlInst_2.insert(PaymentRef_2.getString());
    FIX::PaymentRemitterID PaymentRemitterID_2("STRING_299221706");
    noSettlInst_0_2.set(PaymentRemitterID_2);
    SettlInstGrp_NoSettlInst_2.insert(PaymentRemitterID_2.getString());
    FIX::Product Product_90(10);
    noSettlInst_0_2.set(Product_90);
    SettlInstGrp_NoSettlInst_2.insert(Product_90.getString());
    FIX::SecurityType SecurityType_90("STRING_EUCP");
    noSettlInst_0_2.set(SecurityType_90);
    SettlInstGrp_NoSettlInst_2.insert(SecurityType_90.getString());
    FIX::SettlCurrency SettlCurrency_33("EUR");
    noSettlInst_0_2.set(SettlCurrency_33);
    SettlInstGrp_NoSettlInst_2.insert(SettlCurrency_33.getString());
    FIX::SettlInstID SettlInstID_2("STRING_897939698");
    noSettlInst_0_2.set(SettlInstID_2);
    SettlInstGrp_NoSettlInst_2.insert(SettlInstID_2.getString());
    FIX::SettlInstRefID SettlInstRefID_2("STRING_1948709790");
    noSettlInst_0_2.set(SettlInstRefID_2);
    SettlInstGrp_NoSettlInst_2.insert(SettlInstRefID_2.getString());
    FIX::SettlInstTransType SettlInstTransType_2('C');
    noSettlInst_0_2.set(SettlInstTransType_2);
    SettlInstGrp_NoSettlInst_2.insert(SettlInstTransType_2.getString());
    FIX::Side Side_49('A');
    noSettlInst_0_2.set(Side_49);
    SettlInstGrp_NoSettlInst_2.insert(Side_49.getString());
    all_values.push_back(SettlInstGrp_NoSettlInst_2);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_141;
      FIX::PartyID PartyID_141("STRING_1460630879");
      noPartyIDs_2_1_0.set(PartyID_141);
      Parties_NoPartyIDs_141.insert(PartyID_141.getString());
      FIX::PartyIDSource PartyIDSource_141('G');
      noPartyIDs_2_1_0.set(PartyIDSource_141);
      Parties_NoPartyIDs_141.insert(PartyIDSource_141.getString());
      FIX::PartyRole PartyRole_141(11);
      noPartyIDs_2_1_0.set(PartyRole_141);
      Parties_NoPartyIDs_141.insert(PartyRole_141.getString());
      all_values.push_back(Parties_NoPartyIDs_141);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_280;
        FIX::PartySubID PartySubID_280("STRING_344471975");
        noPartySubIDs_2_0_2_0.set(PartySubID_280);
        PtysSubGrp_NoPartySubIDs_280.insert(PartySubID_280.getString());
        FIX::PartySubIDType PartySubIDType_280(6);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_280);
        PtysSubGrp_NoPartySubIDs_280.insert(PartySubIDType_280.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_280);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_281;
        FIX::PartySubID PartySubID_281("STRING_865155238");
        noPartySubIDs_2_0_2_1.set(PartySubID_281);
        PtysSubGrp_NoPartySubIDs_281.insert(PartySubID_281.getString());
        FIX::PartySubIDType PartySubIDType_281(13);
        noPartySubIDs_2_0_2_1.set(PartySubIDType_281);
        PtysSubGrp_NoPartySubIDs_281.insert(PartySubIDType_281.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_281);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      noSettlInst_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_11;
    FIX::SettlDeliveryType SettlDeliveryType_11(0);
    noSettlInst_0_2.set(SettlDeliveryType_11);
    SettlInstructionsData_11.insert(SettlDeliveryType_11.getString());
    FIX::StandInstDbID StandInstDbID_12("STRING_1076007898");
    noSettlInst_0_2.set(StandInstDbID_12);
    SettlInstructionsData_11.insert(StandInstDbID_12.getString());
    FIX::StandInstDbName StandInstDbName_12("STRING_993969803");
    noSettlInst_0_2.set(StandInstDbName_12);
    SettlInstructionsData_11.insert(StandInstDbName_12.getString());
    FIX::StandInstDbType StandInstDbType_12(2);
    noSettlInst_0_2.set(StandInstDbType_12);
    SettlInstructionsData_11.insert(StandInstDbType_12.getString());
    all_values.push_back(SettlInstructionsData_11);

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_2_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_19;
      FIX::DlvyInstType DlvyInstType_19('C');
      noDlvyInst_2_1_0.set(DlvyInstType_19);
      DlvyInstGrp_NoDlvyInst_19.insert(DlvyInstType_19.getString());
      FIX::SettlInstSource SettlInstSource_19('3');
      noDlvyInst_2_1_0.set(SettlInstSource_19);
      DlvyInstGrp_NoDlvyInst_19.insert(SettlInstSource_19.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_19);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_36;
        FIX::SettlPartyID SettlPartyID_36("STRING_987900701");
        noSettlPartyIDs_2_0_2_0.set(SettlPartyID_36);
        SettlParties_NoSettlPartyIDs_36.insert(SettlPartyID_36.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_36('9');
        noSettlPartyIDs_2_0_2_0.set(SettlPartyIDSource_36);
        SettlParties_NoSettlPartyIDs_36.insert(SettlPartyIDSource_36.getString());
        FIX::SettlPartyRole SettlPartyRole_36(1253603976);
        noSettlPartyIDs_2_0_2_0.set(SettlPartyRole_36);
        SettlParties_NoSettlPartyIDs_36.insert(SettlPartyRole_36.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_36);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_74;
          FIX::SettlPartySubID SettlPartySubID_74("STRING_764185666");
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubID_74);
          SettlPtysSubGrp_NoSettlPartySubIDs_74.insert(SettlPartySubID_74.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_74(1552825683);
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubIDType_74);
          SettlPtysSubGrp_NoSettlPartySubIDs_74.insert(SettlPartySubIDType_74.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_74);

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_75;
          FIX::SettlPartySubID SettlPartySubID_75("STRING_443974258");
          noSettlPartySubIDs_2_0_0_3_1.set(SettlPartySubID_75);
          SettlPtysSubGrp_NoSettlPartySubIDs_75.insert(SettlPartySubID_75.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_75(1828187250);
          noSettlPartySubIDs_2_0_0_3_1.set(SettlPartySubIDType_75);
          SettlPtysSubGrp_NoSettlPartySubIDs_75.insert(SettlPartySubIDType_75.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_75);

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_1);
        }
        noDlvyInst_2_1_0.addGroup(noSettlPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_37;
        FIX::SettlPartyID SettlPartyID_37("STRING_267400517");
        noSettlPartyIDs_2_0_2_1.set(SettlPartyID_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyID_37.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_37('2');
        noSettlPartyIDs_2_0_2_1.set(SettlPartyIDSource_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyIDSource_37.getString());
        FIX::SettlPartyRole SettlPartyRole_37(578643300);
        noSettlPartyIDs_2_0_2_1.set(SettlPartyRole_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyRole_37.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_37);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_76;
          FIX::SettlPartySubID SettlPartySubID_76("STRING_568474621");
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubID_76);
          SettlPtysSubGrp_NoSettlPartySubIDs_76.insert(SettlPartySubID_76.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_76(401228157);
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubIDType_76);
          SettlPtysSubGrp_NoSettlPartySubIDs_76.insert(SettlPartySubIDType_76.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_76);

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_77;
          FIX::SettlPartySubID SettlPartySubID_77("STRING_424583893");
          noSettlPartySubIDs_2_0_1_3_1.set(SettlPartySubID_77);
          SettlPtysSubGrp_NoSettlPartySubIDs_77.insert(SettlPartySubID_77.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_77(2029105500);
          noSettlPartySubIDs_2_0_1_3_1.set(SettlPartySubIDType_77);
          SettlPtysSubGrp_NoSettlPartySubIDs_77.insert(SettlPartySubIDType_77.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_77);

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_1);
        }
        noDlvyInst_2_1_0.addGroup(noSettlPartyIDs_2_0_2_1);
      }
      noSettlInst_0_2.addGroup(noDlvyInst_2_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_2_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_20;
      FIX::DlvyInstType DlvyInstType_20('C');
      noDlvyInst_2_1_1.set(DlvyInstType_20);
      DlvyInstGrp_NoDlvyInst_20.insert(DlvyInstType_20.getString());
      FIX::SettlInstSource SettlInstSource_20('3');
      noDlvyInst_2_1_1.set(SettlInstSource_20);
      DlvyInstGrp_NoDlvyInst_20.insert(SettlInstSource_20.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_20);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_38;
        FIX::SettlPartyID SettlPartyID_38("STRING_2086085305");
        noSettlPartyIDs_2_1_2_0.set(SettlPartyID_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyID_38.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_38('1');
        noSettlPartyIDs_2_1_2_0.set(SettlPartyIDSource_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyIDSource_38.getString());
        FIX::SettlPartyRole SettlPartyRole_38(1782212221);
        noSettlPartyIDs_2_1_2_0.set(SettlPartyRole_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyRole_38.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_38);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_78;
          FIX::SettlPartySubID SettlPartySubID_78("STRING_374334523");
          noSettlPartySubIDs_2_1_0_3_0.set(SettlPartySubID_78);
          SettlPtysSubGrp_NoSettlPartySubIDs_78.insert(SettlPartySubID_78.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_78(710736471);
          noSettlPartySubIDs_2_1_0_3_0.set(SettlPartySubIDType_78);
          SettlPtysSubGrp_NoSettlPartySubIDs_78.insert(SettlPartySubIDType_78.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_78);

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_79;
          FIX::SettlPartySubID SettlPartySubID_79("STRING_1566443128");
          noSettlPartySubIDs_2_1_0_3_1.set(SettlPartySubID_79);
          SettlPtysSubGrp_NoSettlPartySubIDs_79.insert(SettlPartySubID_79.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_79(69097957);
          noSettlPartySubIDs_2_1_0_3_1.set(SettlPartySubIDType_79);
          SettlPtysSubGrp_NoSettlPartySubIDs_79.insert(SettlPartySubIDType_79.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_79);

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_80;
          FIX::SettlPartySubID SettlPartySubID_80("STRING_1434713021");
          noSettlPartySubIDs_2_1_0_3_2.set(SettlPartySubID_80);
          SettlPtysSubGrp_NoSettlPartySubIDs_80.insert(SettlPartySubID_80.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_80(1466361573);
          noSettlPartySubIDs_2_1_0_3_2.set(SettlPartySubIDType_80);
          SettlPtysSubGrp_NoSettlPartySubIDs_80.insert(SettlPartySubIDType_80.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_80);

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_2);
        }
        noDlvyInst_2_1_1.addGroup(noSettlPartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_39;
        FIX::SettlPartyID SettlPartyID_39("STRING_1842238644");
        noSettlPartyIDs_2_1_2_1.set(SettlPartyID_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyID_39.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_39('7');
        noSettlPartyIDs_2_1_2_1.set(SettlPartyIDSource_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyIDSource_39.getString());
        FIX::SettlPartyRole SettlPartyRole_39(306778626);
        noSettlPartyIDs_2_1_2_1.set(SettlPartyRole_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyRole_39.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_39);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_81;
          FIX::SettlPartySubID SettlPartySubID_81("STRING_1980154175");
          noSettlPartySubIDs_2_1_1_3_0.set(SettlPartySubID_81);
          SettlPtysSubGrp_NoSettlPartySubIDs_81.insert(SettlPartySubID_81.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_81(1498440971);
          noSettlPartySubIDs_2_1_1_3_0.set(SettlPartySubIDType_81);
          SettlPtysSubGrp_NoSettlPartySubIDs_81.insert(SettlPartySubIDType_81.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_81);

          noSettlPartyIDs_2_1_2_1.addGroup(noSettlPartySubIDs_2_1_1_3_0);
        }
        noDlvyInst_2_1_1.addGroup(noSettlPartyIDs_2_1_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_40;
        FIX::SettlPartyID SettlPartyID_40("STRING_1439115103");
        noSettlPartyIDs_2_1_2_2.set(SettlPartyID_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyID_40.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_40('1');
        noSettlPartyIDs_2_1_2_2.set(SettlPartyIDSource_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyIDSource_40.getString());
        FIX::SettlPartyRole SettlPartyRole_40(1942415229);
        noSettlPartyIDs_2_1_2_2.set(SettlPartyRole_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyRole_40.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_40);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_82;
          FIX::SettlPartySubID SettlPartySubID_82("STRING_1652896728");
          noSettlPartySubIDs_2_1_2_3_0.set(SettlPartySubID_82);
          SettlPtysSubGrp_NoSettlPartySubIDs_82.insert(SettlPartySubID_82.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_82(1807918885);
          noSettlPartySubIDs_2_1_2_3_0.set(SettlPartySubIDType_82);
          SettlPtysSubGrp_NoSettlPartySubIDs_82.insert(SettlPartySubIDType_82.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_82);

          noSettlPartyIDs_2_1_2_2.addGroup(noSettlPartySubIDs_2_1_2_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_83;
          FIX::SettlPartySubID SettlPartySubID_83("STRING_1698462006");
          noSettlPartySubIDs_2_1_2_3_1.set(SettlPartySubID_83);
          SettlPtysSubGrp_NoSettlPartySubIDs_83.insert(SettlPartySubID_83.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_83(1721523388);
          noSettlPartySubIDs_2_1_2_3_1.set(SettlPartySubIDType_83);
          SettlPtysSubGrp_NoSettlPartySubIDs_83.insert(SettlPartySubIDType_83.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_83);

          noSettlPartyIDs_2_1_2_2.addGroup(noSettlPartySubIDs_2_1_2_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_84;
          FIX::SettlPartySubID SettlPartySubID_84("STRING_228909858");
          noSettlPartySubIDs_2_1_2_3_2.set(SettlPartySubID_84);
          SettlPtysSubGrp_NoSettlPartySubIDs_84.insert(SettlPartySubID_84.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_84(2099690163);
          noSettlPartySubIDs_2_1_2_3_2.set(SettlPartySubIDType_84);
          SettlPtysSubGrp_NoSettlPartySubIDs_84.insert(SettlPartySubIDType_84.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_84);

          noSettlPartyIDs_2_1_2_2.addGroup(noSettlPartySubIDs_2_1_2_3_2);
        }
        noDlvyInst_2_1_1.addGroup(noSettlPartyIDs_2_1_2_2);
      }
      noSettlInst_0_2.addGroup(noDlvyInst_2_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_2_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_21;
      FIX::DlvyInstType DlvyInstType_21('S');
      noDlvyInst_2_1_2.set(DlvyInstType_21);
      DlvyInstGrp_NoDlvyInst_21.insert(DlvyInstType_21.getString());
      FIX::SettlInstSource SettlInstSource_21('2');
      noDlvyInst_2_1_2.set(SettlInstSource_21);
      DlvyInstGrp_NoDlvyInst_21.insert(SettlInstSource_21.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_21);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_41;
        FIX::SettlPartyID SettlPartyID_41("STRING_1606269584");
        noSettlPartyIDs_2_2_2_0.set(SettlPartyID_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyID_41.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_41('1');
        noSettlPartyIDs_2_2_2_0.set(SettlPartyIDSource_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyIDSource_41.getString());
        FIX::SettlPartyRole SettlPartyRole_41(1632421502);
        noSettlPartyIDs_2_2_2_0.set(SettlPartyRole_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyRole_41.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_41);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_85;
          FIX::SettlPartySubID SettlPartySubID_85("STRING_662317265");
          noSettlPartySubIDs_2_2_0_3_0.set(SettlPartySubID_85);
          SettlPtysSubGrp_NoSettlPartySubIDs_85.insert(SettlPartySubID_85.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_85(57411180);
          noSettlPartySubIDs_2_2_0_3_0.set(SettlPartySubIDType_85);
          SettlPtysSubGrp_NoSettlPartySubIDs_85.insert(SettlPartySubIDType_85.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_85);

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_86;
          FIX::SettlPartySubID SettlPartySubID_86("STRING_1767665175");
          noSettlPartySubIDs_2_2_0_3_1.set(SettlPartySubID_86);
          SettlPtysSubGrp_NoSettlPartySubIDs_86.insert(SettlPartySubID_86.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_86(1373053736);
          noSettlPartySubIDs_2_2_0_3_1.set(SettlPartySubIDType_86);
          SettlPtysSubGrp_NoSettlPartySubIDs_86.insert(SettlPartySubIDType_86.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_86);

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_1);
        }
        noDlvyInst_2_1_2.addGroup(noSettlPartyIDs_2_2_2_0);
      }
      noSettlInst_0_2.addGroup(noDlvyInst_2_1_2);
    }
    msg.addGroup(noSettlInst_0_2);
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
