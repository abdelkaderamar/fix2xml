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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RegistrationInstructions msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructions_0;
  FIX::Account Account_41("STRING_137219981");
  msg.set(Account_41);
  RegistrationInstructions_0.insert(Account_41.getString());
  FIX::AcctIDSource AcctIDSource_34(2);
  msg.set(AcctIDSource_34);
  RegistrationInstructions_0.insert(AcctIDSource_34.getString());
  FIX::ClOrdID ClOrdID_44("STRING_1933013606");
  msg.set(ClOrdID_44);
  RegistrationInstructions_0.insert(ClOrdID_44.getString());
  FIX::OwnershipType OwnershipType_0('T');
  msg.set(OwnershipType_0);
  RegistrationInstructions_0.insert(OwnershipType_0.getString());
  FIX::RegistAcctType RegistAcctType_0("STRING_1161833926");
  msg.set(RegistAcctType_0);
  RegistrationInstructions_0.insert(RegistAcctType_0.getString());
  FIX::RegistID RegistID_8("STRING_731233569");
  msg.set(RegistID_8);
  RegistrationInstructions_0.insert(RegistID_8.getString());
  FIX::RegistRefID RegistRefID_0("STRING_1575923421");
  msg.set(RegistRefID_0);
  RegistrationInstructions_0.insert(RegistRefID_0.getString());
  FIX::RegistTransType RegistTransType_0('0');
  msg.set(RegistTransType_0);
  RegistrationInstructions_0.insert(RegistTransType_0.getString());
  FIX::TaxAdvantageType TaxAdvantageType_0(17);
  msg.set(TaxAdvantageType_0);
  RegistrationInstructions_0.insert(TaxAdvantageType_0.getString());
  all_values.push_back(RegistrationInstructions_0);

  all_compo_names.insert("RegistrationInstructions");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_121;
    FIX::PartyID PartyID_121("STRING_1956042214");
    noPartyIDs_0_0.set(PartyID_121);
    Parties_NoPartyIDs_121.insert(PartyID_121.getString());
    FIX::PartyIDSource PartyIDSource_121('4');
    noPartyIDs_0_0.set(PartyIDSource_121);
    Parties_NoPartyIDs_121.insert(PartyIDSource_121.getString());
    FIX::PartyRole PartyRole_121(40);
    noPartyIDs_0_0.set(PartyRole_121);
    Parties_NoPartyIDs_121.insert(PartyRole_121.getString());
    all_values.push_back(Parties_NoPartyIDs_121);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_266;
      FIX::PartySubID PartySubID_266("STRING_1935441514");
      noPartySubIDs_0_1_0.set(PartySubID_266);
      PtysSubGrp_NoPartySubIDs_266.insert(PartySubID_266.getString());
      FIX::PartySubIDType PartySubIDType_266(25);
      noPartySubIDs_0_1_0.set(PartySubIDType_266);
      PtysSubGrp_NoPartySubIDs_266.insert(PartySubIDType_266.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_266);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_122;
    FIX::PartyID PartyID_122("STRING_862462106");
    noPartyIDs_0_1.set(PartyID_122);
    Parties_NoPartyIDs_122.insert(PartyID_122.getString());
    FIX::PartyIDSource PartyIDSource_122('I');
    noPartyIDs_0_1.set(PartyIDSource_122);
    Parties_NoPartyIDs_122.insert(PartyIDSource_122.getString());
    FIX::PartyRole PartyRole_122(82);
    noPartyIDs_0_1.set(PartyRole_122);
    Parties_NoPartyIDs_122.insert(PartyRole_122.getString());
    all_values.push_back(Parties_NoPartyIDs_122);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_267;
      FIX::PartySubID PartySubID_267("STRING_2044223995");
      noPartySubIDs_1_1_0.set(PartySubID_267);
      PtysSubGrp_NoPartySubIDs_267.insert(PartySubID_267.getString());
      FIX::PartySubIDType PartySubIDType_267(6);
      noPartySubIDs_1_1_0.set(PartySubIDType_267);
      PtysSubGrp_NoPartySubIDs_267.insert(PartySubIDType_267.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_267);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_268;
      FIX::PartySubID PartySubID_268("STRING_1320224303");
      noPartySubIDs_1_1_1.set(PartySubID_268);
      PtysSubGrp_NoPartySubIDs_268.insert(PartySubID_268.getString());
      FIX::PartySubIDType PartySubIDType_268(24);
      noPartySubIDs_1_1_1.set(PartySubIDType_268);
      PtysSubGrp_NoPartySubIDs_268.insert(PartySubIDType_268.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_268);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_123;
    FIX::PartyID PartyID_123("STRING_1027705168");
    noPartyIDs_0_2.set(PartyID_123);
    Parties_NoPartyIDs_123.insert(PartyID_123.getString());
    FIX::PartyIDSource PartyIDSource_123('5');
    noPartyIDs_0_2.set(PartyIDSource_123);
    Parties_NoPartyIDs_123.insert(PartyIDSource_123.getString());
    FIX::PartyRole PartyRole_123(62);
    noPartyIDs_0_2.set(PartyRole_123);
    Parties_NoPartyIDs_123.insert(PartyRole_123.getString());
    all_values.push_back(Parties_NoPartyIDs_123);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_269;
      FIX::PartySubID PartySubID_269("STRING_1653661318");
      noPartySubIDs_2_1_0.set(PartySubID_269);
      PtysSubGrp_NoPartySubIDs_269.insert(PartySubID_269.getString());
      FIX::PartySubIDType PartySubIDType_269(13);
      noPartySubIDs_2_1_0.set(PartySubIDType_269);
      PtysSubGrp_NoPartySubIDs_269.insert(PartySubIDType_269.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_269);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_270;
      FIX::PartySubID PartySubID_270("STRING_1874455300");
      noPartySubIDs_2_1_1.set(PartySubID_270);
      PtysSubGrp_NoPartySubIDs_270.insert(PartySubID_270.getString());
      FIX::PartySubIDType PartySubIDType_270(10);
      noPartySubIDs_2_1_1.set(PartySubIDType_270);
      PtysSubGrp_NoPartySubIDs_270.insert(PartySubIDType_270.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_270);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // RgstDistInstGrp
  // Group RgstDistInstGrp.NoDistribInsts
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_0;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_0;
    FIX::CashDistribAgentAcctName CashDistribAgentAcctName_0("STRING_1659985258");
    noDistribInsts_0_0.set(CashDistribAgentAcctName_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentAcctName_0.getString());
    FIX::CashDistribAgentAcctNumber CashDistribAgentAcctNumber_0("STRING_833424539");
    noDistribInsts_0_0.set(CashDistribAgentAcctNumber_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentAcctNumber_0.getString());
    FIX::CashDistribAgentCode CashDistribAgentCode_0("STRING_663716305");
    noDistribInsts_0_0.set(CashDistribAgentCode_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentCode_0.getString());
    FIX::CashDistribAgentName CashDistribAgentName_0("STRING_243735180");
    noDistribInsts_0_0.set(CashDistribAgentName_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentName_0.getString());
    FIX::CashDistribCurr CashDistribCurr_0("EUR");
    noDistribInsts_0_0.set(CashDistribCurr_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribCurr_0.getString());
    FIX::CashDistribPayRef CashDistribPayRef_0("STRING_1677297492");
    noDistribInsts_0_0.set(CashDistribPayRef_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribPayRef_0.getString());
    FIX::DistribPaymentMethod DistribPaymentMethod_0(7);
    noDistribInsts_0_0.set(DistribPaymentMethod_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(DistribPaymentMethod_0.getString());
    FIX::DistribPercentage DistribPercentage_0;
    DistribPercentage_0.setString("34.040000");
    noDistribInsts_0_0.set(DistribPercentage_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(DistribPercentage_0.getString());
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_0);
    all_compo_names.insert("RgstDistInstGrp.NoDistribInsts");

    msg.addGroup(noDistribInsts_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_1;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_1;
    FIX::CashDistribAgentAcctName CashDistribAgentAcctName_1("STRING_290185998");
    noDistribInsts_0_1.set(CashDistribAgentAcctName_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentAcctName_1.getString());
    FIX::CashDistribAgentAcctNumber CashDistribAgentAcctNumber_1("STRING_1474244796");
    noDistribInsts_0_1.set(CashDistribAgentAcctNumber_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentAcctNumber_1.getString());
    FIX::CashDistribAgentCode CashDistribAgentCode_1("STRING_2004072505");
    noDistribInsts_0_1.set(CashDistribAgentCode_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentCode_1.getString());
    FIX::CashDistribAgentName CashDistribAgentName_1("STRING_78143864");
    noDistribInsts_0_1.set(CashDistribAgentName_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentName_1.getString());
    FIX::CashDistribCurr CashDistribCurr_1("EUR");
    noDistribInsts_0_1.set(CashDistribCurr_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribCurr_1.getString());
    FIX::CashDistribPayRef CashDistribPayRef_1("STRING_1265555778");
    noDistribInsts_0_1.set(CashDistribPayRef_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribPayRef_1.getString());
    FIX::DistribPaymentMethod DistribPaymentMethod_1(2);
    noDistribInsts_0_1.set(DistribPaymentMethod_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(DistribPaymentMethod_1.getString());
    FIX::DistribPercentage DistribPercentage_1;
    DistribPercentage_1.setString("30.130000");
    noDistribInsts_0_1.set(DistribPercentage_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(DistribPercentage_1.getString());
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_1);
    all_compo_names.insert("RgstDistInstGrp.NoDistribInsts");

    msg.addGroup(noDistribInsts_0_1);
  }
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_2;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_2;
    FIX::CashDistribAgentAcctName CashDistribAgentAcctName_2("STRING_1162296125");
    noDistribInsts_0_2.set(CashDistribAgentAcctName_2);
    RgstDistInstGrp_NoDistribInsts_2.insert(CashDistribAgentAcctName_2.getString());
    FIX::CashDistribAgentAcctNumber CashDistribAgentAcctNumber_2("STRING_1609209025");
    noDistribInsts_0_2.set(CashDistribAgentAcctNumber_2);
    RgstDistInstGrp_NoDistribInsts_2.insert(CashDistribAgentAcctNumber_2.getString());
    FIX::CashDistribAgentCode CashDistribAgentCode_2("STRING_128203668");
    noDistribInsts_0_2.set(CashDistribAgentCode_2);
    RgstDistInstGrp_NoDistribInsts_2.insert(CashDistribAgentCode_2.getString());
    FIX::CashDistribAgentName CashDistribAgentName_2("STRING_465975522");
    noDistribInsts_0_2.set(CashDistribAgentName_2);
    RgstDistInstGrp_NoDistribInsts_2.insert(CashDistribAgentName_2.getString());
    FIX::CashDistribCurr CashDistribCurr_2("JPY");
    noDistribInsts_0_2.set(CashDistribCurr_2);
    RgstDistInstGrp_NoDistribInsts_2.insert(CashDistribCurr_2.getString());
    FIX::CashDistribPayRef CashDistribPayRef_2("STRING_1655422386");
    noDistribInsts_0_2.set(CashDistribPayRef_2);
    RgstDistInstGrp_NoDistribInsts_2.insert(CashDistribPayRef_2.getString());
    FIX::DistribPaymentMethod DistribPaymentMethod_2(2);
    noDistribInsts_0_2.set(DistribPaymentMethod_2);
    RgstDistInstGrp_NoDistribInsts_2.insert(DistribPaymentMethod_2.getString());
    FIX::DistribPercentage DistribPercentage_2;
    DistribPercentage_2.setString("21.260000");
    noDistribInsts_0_2.set(DistribPercentage_2);
    RgstDistInstGrp_NoDistribInsts_2.insert(DistribPercentage_2.getString());
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_2);
    all_compo_names.insert("RgstDistInstGrp.NoDistribInsts");

    msg.addGroup(noDistribInsts_0_2);
  }
  // RgstDtlsGrp
  // Group RgstDtlsGrp.NoRegistDtls
  {
    FIX50SP2::RegistrationInstructions::NoRegistDtls noRegistDtls_0_0;
    // RgstDtlsGrp.NoRegistDtls
    multiset<string> RgstDtlsGrp_NoRegistDtls_0;
    FIX::DateOfBirth DateOfBirth_0("LOCALMKTDATE_1651645138");
    noRegistDtls_0_0.set(DateOfBirth_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(DateOfBirth_0.getString());
    FIX::InvestorCountryOfResidence InvestorCountryOfResidence_0("COUNTRY_129319777");
    noRegistDtls_0_0.set(InvestorCountryOfResidence_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(InvestorCountryOfResidence_0.getString());
    FIX::MailingDtls MailingDtls_0("STRING_1744340821");
    noRegistDtls_0_0.set(MailingDtls_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(MailingDtls_0.getString());
    FIX::MailingInst MailingInst_0("STRING_1164146748");
    noRegistDtls_0_0.set(MailingInst_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(MailingInst_0.getString());
    FIX::OwnerType OwnerType_0(2);
    noRegistDtls_0_0.set(OwnerType_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(OwnerType_0.getString());
    FIX::RegistDtls RegistDtls_0("STRING_260573478");
    noRegistDtls_0_0.set(RegistDtls_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(RegistDtls_0.getString());
    FIX::RegistEmail RegistEmail_0("STRING_1407881928");
    noRegistDtls_0_0.set(RegistEmail_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(RegistEmail_0.getString());
    all_values.push_back(RgstDtlsGrp_NoRegistDtls_0);
    all_compo_names.insert("RgstDtlsGrp.NoRegistDtls");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_123;
      FIX::NestedPartyID NestedPartyID_123("STRING_145384667");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyID_123.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_123('9');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyIDSource_123.getString());
      FIX::NestedPartyRole NestedPartyRole_123(891276874);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyRole_123.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_123);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_265;
        FIX::NestedPartySubID NestedPartySubID_265("STRING_1227881770");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_265);
        NstdPtysSubGrp_NoNestedPartySubIDs_265.insert(NestedPartySubID_265.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_265(218038023);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_265);
        NstdPtysSubGrp_NoNestedPartySubIDs_265.insert(NestedPartySubIDType_265.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_265);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noRegistDtls_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noRegistDtls_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoRegistDtls noRegistDtls_0_1;
    // RgstDtlsGrp.NoRegistDtls
    multiset<string> RgstDtlsGrp_NoRegistDtls_1;
    FIX::DateOfBirth DateOfBirth_1("LOCALMKTDATE_1842826928");
    noRegistDtls_0_1.set(DateOfBirth_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(DateOfBirth_1.getString());
    FIX::InvestorCountryOfResidence InvestorCountryOfResidence_1("COUNTRY_1306025635");
    noRegistDtls_0_1.set(InvestorCountryOfResidence_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(InvestorCountryOfResidence_1.getString());
    FIX::MailingDtls MailingDtls_1("STRING_1527269180");
    noRegistDtls_0_1.set(MailingDtls_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(MailingDtls_1.getString());
    FIX::MailingInst MailingInst_1("STRING_414394244");
    noRegistDtls_0_1.set(MailingInst_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(MailingInst_1.getString());
    FIX::OwnerType OwnerType_1(1);
    noRegistDtls_0_1.set(OwnerType_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(OwnerType_1.getString());
    FIX::RegistDtls RegistDtls_1("STRING_1184577205");
    noRegistDtls_0_1.set(RegistDtls_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(RegistDtls_1.getString());
    FIX::RegistEmail RegistEmail_1("STRING_1369857257");
    noRegistDtls_0_1.set(RegistEmail_1);
    RgstDtlsGrp_NoRegistDtls_1.insert(RegistEmail_1.getString());
    all_values.push_back(RgstDtlsGrp_NoRegistDtls_1);
    all_compo_names.insert("RgstDtlsGrp.NoRegistDtls");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_124;
      FIX::NestedPartyID NestedPartyID_124("STRING_646302582");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyID_124.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_124('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyIDSource_124.getString());
      FIX::NestedPartyRole NestedPartyRole_124(2052369413);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyRole_124.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_124);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_266;
        FIX::NestedPartySubID NestedPartySubID_266("STRING_330321733");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_266);
        NstdPtysSubGrp_NoNestedPartySubIDs_266.insert(NestedPartySubID_266.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_266(1560308151);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_266);
        NstdPtysSubGrp_NoNestedPartySubIDs_266.insert(NestedPartySubIDType_266.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_266);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_267;
        FIX::NestedPartySubID NestedPartySubID_267("STRING_912922965");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_267);
        NstdPtysSubGrp_NoNestedPartySubIDs_267.insert(NestedPartySubID_267.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_267(816243859);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_267);
        NstdPtysSubGrp_NoNestedPartySubIDs_267.insert(NestedPartySubIDType_267.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_267);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noRegistDtls_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_125;
      FIX::NestedPartyID NestedPartyID_125("STRING_1655282945");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyID_125.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_125('4');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyIDSource_125.getString());
      FIX::NestedPartyRole NestedPartyRole_125(945563636);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyRole_125.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_125);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_268;
        FIX::NestedPartySubID NestedPartySubID_268("STRING_1581231204");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_268);
        NstdPtysSubGrp_NoNestedPartySubIDs_268.insert(NestedPartySubID_268.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_268(1908307952);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_268);
        NstdPtysSubGrp_NoNestedPartySubIDs_268.insert(NestedPartySubIDType_268.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_268);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_269;
        FIX::NestedPartySubID NestedPartySubID_269("STRING_1512713596");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_269);
        NstdPtysSubGrp_NoNestedPartySubIDs_269.insert(NestedPartySubID_269.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_269(841629484);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_269);
        NstdPtysSubGrp_NoNestedPartySubIDs_269.insert(NestedPartySubIDType_269.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_269);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noRegistDtls_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_126;
      FIX::NestedPartyID NestedPartyID_126("STRING_985432933");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyID_126.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_126('1');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyIDSource_126.getString());
      FIX::NestedPartyRole NestedPartyRole_126(1779325257);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyRole_126.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_126);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_270;
        FIX::NestedPartySubID NestedPartySubID_270("STRING_1496852687");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_270);
        NstdPtysSubGrp_NoNestedPartySubIDs_270.insert(NestedPartySubID_270.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_270(859723379);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_270);
        NstdPtysSubGrp_NoNestedPartySubIDs_270.insert(NestedPartySubIDType_270.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_270);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_271;
        FIX::NestedPartySubID NestedPartySubID_271("STRING_2094747830");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_271);
        NstdPtysSubGrp_NoNestedPartySubIDs_271.insert(NestedPartySubID_271.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_271(1192195968);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_271);
        NstdPtysSubGrp_NoNestedPartySubIDs_271.insert(NestedPartySubIDType_271.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_271);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_272;
        FIX::NestedPartySubID NestedPartySubID_272("STRING_18265366");
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubID_272);
        NstdPtysSubGrp_NoNestedPartySubIDs_272.insert(NestedPartySubID_272.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_272(1474533362);
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubIDType_272);
        NstdPtysSubGrp_NoNestedPartySubIDs_272.insert(NestedPartySubIDType_272.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_272);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noRegistDtls_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noRegistDtls_0_1);
  }
  {
    FIX50SP2::RegistrationInstructions::NoRegistDtls noRegistDtls_0_2;
    // RgstDtlsGrp.NoRegistDtls
    multiset<string> RgstDtlsGrp_NoRegistDtls_2;
    FIX::DateOfBirth DateOfBirth_2("LOCALMKTDATE_1606590212");
    noRegistDtls_0_2.set(DateOfBirth_2);
    RgstDtlsGrp_NoRegistDtls_2.insert(DateOfBirth_2.getString());
    FIX::InvestorCountryOfResidence InvestorCountryOfResidence_2("COUNTRY_442363132");
    noRegistDtls_0_2.set(InvestorCountryOfResidence_2);
    RgstDtlsGrp_NoRegistDtls_2.insert(InvestorCountryOfResidence_2.getString());
    FIX::MailingDtls MailingDtls_2("STRING_511626919");
    noRegistDtls_0_2.set(MailingDtls_2);
    RgstDtlsGrp_NoRegistDtls_2.insert(MailingDtls_2.getString());
    FIX::MailingInst MailingInst_2("STRING_828963821");
    noRegistDtls_0_2.set(MailingInst_2);
    RgstDtlsGrp_NoRegistDtls_2.insert(MailingInst_2.getString());
    FIX::OwnerType OwnerType_2(8);
    noRegistDtls_0_2.set(OwnerType_2);
    RgstDtlsGrp_NoRegistDtls_2.insert(OwnerType_2.getString());
    FIX::RegistDtls RegistDtls_2("STRING_1157929502");
    noRegistDtls_0_2.set(RegistDtls_2);
    RgstDtlsGrp_NoRegistDtls_2.insert(RegistDtls_2.getString());
    FIX::RegistEmail RegistEmail_2("STRING_179541098");
    noRegistDtls_0_2.set(RegistEmail_2);
    RgstDtlsGrp_NoRegistDtls_2.insert(RegistEmail_2.getString());
    all_values.push_back(RgstDtlsGrp_NoRegistDtls_2);
    all_compo_names.insert("RgstDtlsGrp.NoRegistDtls");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_127;
      FIX::NestedPartyID NestedPartyID_127("STRING_146178982");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyID_127.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_127('5');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyIDSource_127.getString());
      FIX::NestedPartyRole NestedPartyRole_127(1346467291);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyRole_127.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_127);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_273;
        FIX::NestedPartySubID NestedPartySubID_273("STRING_1326106691");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_273);
        NstdPtysSubGrp_NoNestedPartySubIDs_273.insert(NestedPartySubID_273.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_273(854266589);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_273);
        NstdPtysSubGrp_NoNestedPartySubIDs_273.insert(NestedPartySubIDType_273.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_273);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_274;
        FIX::NestedPartySubID NestedPartySubID_274("STRING_1476186403");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_274);
        NstdPtysSubGrp_NoNestedPartySubIDs_274.insert(NestedPartySubID_274.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_274(124186680);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_274);
        NstdPtysSubGrp_NoNestedPartySubIDs_274.insert(NestedPartySubIDType_274.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_274);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noRegistDtls_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noRegistDtls_0_2);
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
