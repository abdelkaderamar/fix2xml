#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/RegistrationInstructions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RegistrationInstructions, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RegistrationInstructions msg;

  list<multiset<string>> all_values;
  multiset<string> RegistrationInstructions_0;
  FIX::Account Account_38("STRING_594736853");
  msg.set(Account_38);
  RegistrationInstructions_0.insert(Account_38.getString());
  FIX::AcctIDSource AcctIDSource_31(3);
  msg.set(AcctIDSource_31);
  RegistrationInstructions_0.insert(AcctIDSource_31.getString());
  FIX::ClOrdID ClOrdID_44("STRING_901410401");
  msg.set(ClOrdID_44);
  RegistrationInstructions_0.insert(ClOrdID_44.getString());
  FIX::OwnershipType OwnershipType_0('J');
  msg.set(OwnershipType_0);
  RegistrationInstructions_0.insert(OwnershipType_0.getString());
  FIX::RegistAcctType RegistAcctType_0("STRING_1198395900");
  msg.set(RegistAcctType_0);
  RegistrationInstructions_0.insert(RegistAcctType_0.getString());
  FIX::RegistID RegistID_8("STRING_1273707644");
  msg.set(RegistID_8);
  RegistrationInstructions_0.insert(RegistID_8.getString());
  FIX::RegistRefID RegistRefID_0("STRING_1699762653");
  msg.set(RegistRefID_0);
  RegistrationInstructions_0.insert(RegistRefID_0.getString());
  FIX::RegistTransType RegistTransType_0('1');
  msg.set(RegistTransType_0);
  RegistrationInstructions_0.insert(RegistTransType_0.getString());
  FIX::TaxAdvantageType TaxAdvantageType_0(3);
  msg.set(TaxAdvantageType_0);
  RegistrationInstructions_0.insert(TaxAdvantageType_0.getString());
  all_values.push_back(RegistrationInstructions_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_122;
    FIX::PartyID PartyID_122("STRING_1789649851");
    noPartyIDs_0_0.set(PartyID_122);
    Parties_NoPartyIDs_122.insert(PartyID_122.getString());
    FIX::PartyIDSource PartyIDSource_122('H');
    noPartyIDs_0_0.set(PartyIDSource_122);
    Parties_NoPartyIDs_122.insert(PartyIDSource_122.getString());
    FIX::PartyRole PartyRole_122(29);
    noPartyIDs_0_0.set(PartyRole_122);
    Parties_NoPartyIDs_122.insert(PartyRole_122.getString());
    all_values.push_back(Parties_NoPartyIDs_122);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_245;
      FIX::PartySubID PartySubID_245("STRING_470800123");
      noPartySubIDs_0_1_0.set(PartySubID_245);
      PtysSubGrp_NoPartySubIDs_245.insert(PartySubID_245.getString());
      FIX::PartySubIDType PartySubIDType_245(7);
      noPartySubIDs_0_1_0.set(PartySubIDType_245);
      PtysSubGrp_NoPartySubIDs_245.insert(PartySubIDType_245.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_245);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_246;
      FIX::PartySubID PartySubID_246("STRING_755848115");
      noPartySubIDs_0_1_1.set(PartySubID_246);
      PtysSubGrp_NoPartySubIDs_246.insert(PartySubID_246.getString());
      FIX::PartySubIDType PartySubIDType_246(15);
      noPartySubIDs_0_1_1.set(PartySubIDType_246);
      PtysSubGrp_NoPartySubIDs_246.insert(PartySubIDType_246.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_246);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_123;
    FIX::PartyID PartyID_123("STRING_1564655955");
    noPartyIDs_0_1.set(PartyID_123);
    Parties_NoPartyIDs_123.insert(PartyID_123.getString());
    FIX::PartyIDSource PartyIDSource_123('B');
    noPartyIDs_0_1.set(PartyIDSource_123);
    Parties_NoPartyIDs_123.insert(PartyIDSource_123.getString());
    FIX::PartyRole PartyRole_123(15);
    noPartyIDs_0_1.set(PartyRole_123);
    Parties_NoPartyIDs_123.insert(PartyRole_123.getString());
    all_values.push_back(Parties_NoPartyIDs_123);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_247;
      FIX::PartySubID PartySubID_247("STRING_229944212");
      noPartySubIDs_1_1_0.set(PartySubID_247);
      PtysSubGrp_NoPartySubIDs_247.insert(PartySubID_247.getString());
      FIX::PartySubIDType PartySubIDType_247(3);
      noPartySubIDs_1_1_0.set(PartySubIDType_247);
      PtysSubGrp_NoPartySubIDs_247.insert(PartySubIDType_247.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_247);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // RgstDistInstGrp
  // Group RgstDistInstGrp.NoDistribInsts
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_0;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_0;
    FIX::CashDistribAgentAcctName CashDistribAgentAcctName_0("STRING_645481286");
    noDistribInsts_0_0.set(CashDistribAgentAcctName_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentAcctName_0.getString());
    FIX::CashDistribAgentAcctNumber CashDistribAgentAcctNumber_0("STRING_1712834844");
    noDistribInsts_0_0.set(CashDistribAgentAcctNumber_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentAcctNumber_0.getString());
    FIX::CashDistribAgentCode CashDistribAgentCode_0("STRING_275623618");
    noDistribInsts_0_0.set(CashDistribAgentCode_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentCode_0.getString());
    FIX::CashDistribAgentName CashDistribAgentName_0("STRING_447050928");
    noDistribInsts_0_0.set(CashDistribAgentName_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentName_0.getString());
    FIX::CashDistribCurr CashDistribCurr_0("JPY");
    noDistribInsts_0_0.set(CashDistribCurr_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribCurr_0.getString());
    FIX::CashDistribPayRef CashDistribPayRef_0("STRING_1041787781");
    noDistribInsts_0_0.set(CashDistribPayRef_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribPayRef_0.getString());
    FIX::DistribPaymentMethod DistribPaymentMethod_0(7);
    noDistribInsts_0_0.set(DistribPaymentMethod_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(DistribPaymentMethod_0.getString());
    FIX::DistribPercentage DistribPercentage_0;
    DistribPercentage_0.setString("76.330000");
    noDistribInsts_0_0.set(DistribPercentage_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(DistribPercentage_0.getString());
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_0);

    msg.addGroup(noDistribInsts_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_1;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_1;
    FIX::CashDistribAgentAcctName CashDistribAgentAcctName_1("STRING_306543063");
    noDistribInsts_0_1.set(CashDistribAgentAcctName_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentAcctName_1.getString());
    FIX::CashDistribAgentAcctNumber CashDistribAgentAcctNumber_1("STRING_619151399");
    noDistribInsts_0_1.set(CashDistribAgentAcctNumber_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentAcctNumber_1.getString());
    FIX::CashDistribAgentCode CashDistribAgentCode_1("STRING_1634375277");
    noDistribInsts_0_1.set(CashDistribAgentCode_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentCode_1.getString());
    FIX::CashDistribAgentName CashDistribAgentName_1("STRING_2006305717");
    noDistribInsts_0_1.set(CashDistribAgentName_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentName_1.getString());
    FIX::CashDistribCurr CashDistribCurr_1("CAN");
    noDistribInsts_0_1.set(CashDistribCurr_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribCurr_1.getString());
    FIX::CashDistribPayRef CashDistribPayRef_1("STRING_740901762");
    noDistribInsts_0_1.set(CashDistribPayRef_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribPayRef_1.getString());
    FIX::DistribPaymentMethod DistribPaymentMethod_1(10);
    noDistribInsts_0_1.set(DistribPaymentMethod_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(DistribPaymentMethod_1.getString());
    FIX::DistribPercentage DistribPercentage_1;
    DistribPercentage_1.setString("70.700000");
    noDistribInsts_0_1.set(DistribPercentage_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(DistribPercentage_1.getString());
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_1);

    msg.addGroup(noDistribInsts_0_1);
  }
  // RgstDtlsGrp
  // Group RgstDtlsGrp.NoRegistDtls
  {
    FIX50SP2::RegistrationInstructions::NoRegistDtls noRegistDtls_0_0;
    // RgstDtlsGrp.NoRegistDtls
    multiset<string> RgstDtlsGrp_NoRegistDtls_0;
    FIX::DateOfBirth DateOfBirth_0("LOCALMKTDATE_972823030");
    noRegistDtls_0_0.set(DateOfBirth_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(DateOfBirth_0.getString());
    FIX::InvestorCountryOfResidence InvestorCountryOfResidence_0("COUNTRY_1449587193");
    noRegistDtls_0_0.set(InvestorCountryOfResidence_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(InvestorCountryOfResidence_0.getString());
    FIX::MailingDtls MailingDtls_0("STRING_207650237");
    noRegistDtls_0_0.set(MailingDtls_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(MailingDtls_0.getString());
    FIX::MailingInst MailingInst_0("STRING_1728671145");
    noRegistDtls_0_0.set(MailingInst_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(MailingInst_0.getString());
    FIX::OwnerType OwnerType_0(6);
    noRegistDtls_0_0.set(OwnerType_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(OwnerType_0.getString());
    FIX::RegistDtls RegistDtls_0("STRING_1772306193");
    noRegistDtls_0_0.set(RegistDtls_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(RegistDtls_0.getString());
    FIX::RegistEmail RegistEmail_0("STRING_1937309606");
    noRegistDtls_0_0.set(RegistEmail_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(RegistEmail_0.getString());
    all_values.push_back(RgstDtlsGrp_NoRegistDtls_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_128;
      FIX::NestedPartyID NestedPartyID_128("STRING_196360045");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyID_128.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_128('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyIDSource_128.getString());
      FIX::NestedPartyRole NestedPartyRole_128(1476006437);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyRole_128.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_128);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_254;
        FIX::NestedPartySubID NestedPartySubID_254("STRING_665251457");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_254);
        NstdPtysSubGrp_NoNestedPartySubIDs_254.insert(NestedPartySubID_254.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_254(1041357633);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_254);
        NstdPtysSubGrp_NoNestedPartySubIDs_254.insert(NestedPartySubIDType_254.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_254);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_255;
        FIX::NestedPartySubID NestedPartySubID_255("STRING_1238022195");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_255);
        NstdPtysSubGrp_NoNestedPartySubIDs_255.insert(NestedPartySubID_255.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_255(1112302385);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_255);
        NstdPtysSubGrp_NoNestedPartySubIDs_255.insert(NestedPartySubIDType_255.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_255);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_256;
        FIX::NestedPartySubID NestedPartySubID_256("STRING_1236204355");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_256);
        NstdPtysSubGrp_NoNestedPartySubIDs_256.insert(NestedPartySubID_256.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_256(697279428);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_256);
        NstdPtysSubGrp_NoNestedPartySubIDs_256.insert(NestedPartySubIDType_256.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_256);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noRegistDtls_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noRegistDtls_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoRegistDtls noRegistDtls_0_1;
    // RgstDtlsGrp.NoRegistDtls
    multiset<string> RgstDtlsGrp_NoRegistDtls_1;
    FIX::DateOfBirth DateOfBirth_1("LOCALMKTDATE_6606518");
    noRegistDtls_0_1.set(DateOfBirth_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(DateOfBirth_1.getString());
    FIX::InvestorCountryOfResidence InvestorCountryOfResidence_1("COUNTRY_656959853");
    noRegistDtls_0_1.set(InvestorCountryOfResidence_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(InvestorCountryOfResidence_1.getString());
    FIX::MailingDtls MailingDtls_1("STRING_1057947061");
    noRegistDtls_0_1.set(MailingDtls_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(MailingDtls_1.getString());
    FIX::MailingInst MailingInst_1("STRING_313149582");
    noRegistDtls_0_1.set(MailingInst_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(MailingInst_1.getString());
    FIX::OwnerType OwnerType_1(1);
    noRegistDtls_0_1.set(OwnerType_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(OwnerType_1.getString());
    FIX::RegistDtls RegistDtls_1("STRING_544838691");
    noRegistDtls_0_1.set(RegistDtls_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(RegistDtls_1.getString());
    FIX::RegistEmail RegistEmail_1("STRING_171971651");
    noRegistDtls_0_1.set(RegistEmail_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(RegistEmail_1.getString());
    all_values.push_back(RgstDtlsGrp_NoRegistDtls_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_129;
      FIX::NestedPartyID NestedPartyID_129("STRING_286593042");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_129);
      NestedParties_NoNestedPartyIDs_129.insert(NestedPartyID_129.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_129('9');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_129);
      NestedParties_NoNestedPartyIDs_129.insert(NestedPartyIDSource_129.getString());
      FIX::NestedPartyRole NestedPartyRole_129(1373599348);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_129);
      NestedParties_NoNestedPartyIDs_129.insert(NestedPartyRole_129.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_129);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_257;
        FIX::NestedPartySubID NestedPartySubID_257("STRING_1330959630");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_257);
        NstdPtysSubGrp_NoNestedPartySubIDs_257.insert(NestedPartySubID_257.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_257(198938731);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_257);
        NstdPtysSubGrp_NoNestedPartySubIDs_257.insert(NestedPartySubIDType_257.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_257);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_258;
        FIX::NestedPartySubID NestedPartySubID_258("STRING_567483657");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_258);
        NstdPtysSubGrp_NoNestedPartySubIDs_258.insert(NestedPartySubID_258.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_258(1538609868);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_258);
        NstdPtysSubGrp_NoNestedPartySubIDs_258.insert(NestedPartySubIDType_258.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_258);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_259;
        FIX::NestedPartySubID NestedPartySubID_259("STRING_1927609876");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_259);
        NstdPtysSubGrp_NoNestedPartySubIDs_259.insert(NestedPartySubID_259.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_259(353386951);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_259);
        NstdPtysSubGrp_NoNestedPartySubIDs_259.insert(NestedPartySubIDType_259.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_259);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noRegistDtls_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_130;
      FIX::NestedPartyID NestedPartyID_130("STRING_1163432413");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_130);
      NestedParties_NoNestedPartyIDs_130.insert(NestedPartyID_130.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_130('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_130);
      NestedParties_NoNestedPartyIDs_130.insert(NestedPartyIDSource_130.getString());
      FIX::NestedPartyRole NestedPartyRole_130(1610599987);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_130);
      NestedParties_NoNestedPartyIDs_130.insert(NestedPartyRole_130.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_130);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_260;
        FIX::NestedPartySubID NestedPartySubID_260("STRING_1737206006");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_260);
        NstdPtysSubGrp_NoNestedPartySubIDs_260.insert(NestedPartySubID_260.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_260(939122776);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_260);
        NstdPtysSubGrp_NoNestedPartySubIDs_260.insert(NestedPartySubIDType_260.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_260);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_261;
        FIX::NestedPartySubID NestedPartySubID_261("STRING_174707387");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_261);
        NstdPtysSubGrp_NoNestedPartySubIDs_261.insert(NestedPartySubID_261.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_261(254973815);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_261);
        NstdPtysSubGrp_NoNestedPartySubIDs_261.insert(NestedPartySubIDType_261.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_261);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_262;
        FIX::NestedPartySubID NestedPartySubID_262("STRING_1980480409");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_262);
        NstdPtysSubGrp_NoNestedPartySubIDs_262.insert(NestedPartySubID_262.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_262(1412729583);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_262);
        NstdPtysSubGrp_NoNestedPartySubIDs_262.insert(NestedPartySubIDType_262.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_262);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noRegistDtls_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noRegistDtls_0_1);
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
