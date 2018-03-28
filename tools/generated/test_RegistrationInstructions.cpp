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
  multiset<string> RegistrationInstructions_0;
  FIX::Account Account_36("STRING_820827915");
  msg.set(Account_36);
  RegistrationInstructions_0.insert(Account_36.getString());
  FIX::AcctIDSource AcctIDSource_29(99);
  msg.set(AcctIDSource_29);
  RegistrationInstructions_0.insert(AcctIDSource_29.getString());
  FIX::ClOrdID ClOrdID_43("STRING_2039240362");
  msg.set(ClOrdID_43);
  RegistrationInstructions_0.insert(ClOrdID_43.getString());
  FIX::OwnershipType OwnershipType_0('T');
  msg.set(OwnershipType_0);
  RegistrationInstructions_0.insert(OwnershipType_0.getString());
  FIX::RegistAcctType RegistAcctType_0("STRING_2105149449");
  msg.set(RegistAcctType_0);
  RegistrationInstructions_0.insert(RegistAcctType_0.getString());
  FIX::RegistID RegistID_8("STRING_1633498114");
  msg.set(RegistID_8);
  RegistrationInstructions_0.insert(RegistID_8.getString());
  FIX::RegistRefID RegistRefID_0("STRING_18357919");
  msg.set(RegistRefID_0);
  RegistrationInstructions_0.insert(RegistRefID_0.getString());
  FIX::RegistTransType RegistTransType_0('0');
  msg.set(RegistTransType_0);
  RegistrationInstructions_0.insert(RegistTransType_0.getString());
  FIX::TaxAdvantageType TaxAdvantageType_0(25);
  msg.set(TaxAdvantageType_0);
  RegistrationInstructions_0.insert(TaxAdvantageType_0.getString());
  all_values.push_back(RegistrationInstructions_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_116;
    FIX::PartyID PartyID_116("STRING_1786249140");
    noPartyIDs_0_0.set(PartyID_116);
    Parties_NoPartyIDs_116.insert(PartyID_116.getString());
    FIX::PartyIDSource PartyIDSource_116('F');
    noPartyIDs_0_0.set(PartyIDSource_116);
    Parties_NoPartyIDs_116.insert(PartyIDSource_116.getString());
    FIX::PartyRole PartyRole_116(50);
    noPartyIDs_0_0.set(PartyRole_116);
    Parties_NoPartyIDs_116.insert(PartyRole_116.getString());
    all_values.push_back(Parties_NoPartyIDs_116);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_240;
      FIX::PartySubID PartySubID_240("STRING_1213883249");
      noPartySubIDs_0_1_0.set(PartySubID_240);
      PtysSubGrp_NoPartySubIDs_240.insert(PartySubID_240.getString());
      FIX::PartySubIDType PartySubIDType_240(26);
      noPartySubIDs_0_1_0.set(PartySubIDType_240);
      PtysSubGrp_NoPartySubIDs_240.insert(PartySubIDType_240.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_240);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_117;
    FIX::PartyID PartyID_117("STRING_632006830");
    noPartyIDs_0_1.set(PartyID_117);
    Parties_NoPartyIDs_117.insert(PartyID_117.getString());
    FIX::PartyIDSource PartyIDSource_117('4');
    noPartyIDs_0_1.set(PartyIDSource_117);
    Parties_NoPartyIDs_117.insert(PartyIDSource_117.getString());
    FIX::PartyRole PartyRole_117(15);
    noPartyIDs_0_1.set(PartyRole_117);
    Parties_NoPartyIDs_117.insert(PartyRole_117.getString());
    all_values.push_back(Parties_NoPartyIDs_117);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_241;
      FIX::PartySubID PartySubID_241("STRING_2041158137");
      noPartySubIDs_1_1_0.set(PartySubID_241);
      PtysSubGrp_NoPartySubIDs_241.insert(PartySubID_241.getString());
      FIX::PartySubIDType PartySubIDType_241(18);
      noPartySubIDs_1_1_0.set(PartySubIDType_241);
      PtysSubGrp_NoPartySubIDs_241.insert(PartySubIDType_241.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_241);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_118;
    FIX::PartyID PartyID_118("STRING_1831360119");
    noPartyIDs_0_2.set(PartyID_118);
    Parties_NoPartyIDs_118.insert(PartyID_118.getString());
    FIX::PartyIDSource PartyIDSource_118('G');
    noPartyIDs_0_2.set(PartyIDSource_118);
    Parties_NoPartyIDs_118.insert(PartyIDSource_118.getString());
    FIX::PartyRole PartyRole_118(51);
    noPartyIDs_0_2.set(PartyRole_118);
    Parties_NoPartyIDs_118.insert(PartyRole_118.getString());
    all_values.push_back(Parties_NoPartyIDs_118);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_242;
      FIX::PartySubID PartySubID_242("STRING_25508964");
      noPartySubIDs_2_1_0.set(PartySubID_242);
      PtysSubGrp_NoPartySubIDs_242.insert(PartySubID_242.getString());
      FIX::PartySubIDType PartySubIDType_242(22);
      noPartySubIDs_2_1_0.set(PartySubIDType_242);
      PtysSubGrp_NoPartySubIDs_242.insert(PartySubIDType_242.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_242);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // RgstDistInstGrp
  // Group RgstDistInstGrp.NoDistribInsts
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_0;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_0;
    FIX::CashDistribAgentAcctName CashDistribAgentAcctName_0("STRING_2030463159");
    noDistribInsts_0_0.set(CashDistribAgentAcctName_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentAcctName_0.getString());
    FIX::CashDistribAgentAcctNumber CashDistribAgentAcctNumber_0("STRING_1093319287");
    noDistribInsts_0_0.set(CashDistribAgentAcctNumber_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentAcctNumber_0.getString());
    FIX::CashDistribAgentCode CashDistribAgentCode_0("STRING_1212049576");
    noDistribInsts_0_0.set(CashDistribAgentCode_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentCode_0.getString());
    FIX::CashDistribAgentName CashDistribAgentName_0("STRING_633939840");
    noDistribInsts_0_0.set(CashDistribAgentName_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentName_0.getString());
    FIX::CashDistribCurr CashDistribCurr_0("EUR");
    noDistribInsts_0_0.set(CashDistribCurr_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribCurr_0.getString());
    FIX::CashDistribPayRef CashDistribPayRef_0("STRING_591605641");
    noDistribInsts_0_0.set(CashDistribPayRef_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribPayRef_0.getString());
    FIX::DistribPaymentMethod DistribPaymentMethod_0(1);
    noDistribInsts_0_0.set(DistribPaymentMethod_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(DistribPaymentMethod_0.getString());
    FIX::DistribPercentage DistribPercentage_0;
    DistribPercentage_0.setString("17.320000");
    noDistribInsts_0_0.set(DistribPercentage_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(DistribPercentage_0.getString());
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_0);

    msg.addGroup(noDistribInsts_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_1;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_1;
    FIX::CashDistribAgentAcctName CashDistribAgentAcctName_1("STRING_1420990054");
    noDistribInsts_0_1.set(CashDistribAgentAcctName_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentAcctName_1.getString());
    FIX::CashDistribAgentAcctNumber CashDistribAgentAcctNumber_1("STRING_33290201");
    noDistribInsts_0_1.set(CashDistribAgentAcctNumber_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentAcctNumber_1.getString());
    FIX::CashDistribAgentCode CashDistribAgentCode_1("STRING_880624841");
    noDistribInsts_0_1.set(CashDistribAgentCode_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentCode_1.getString());
    FIX::CashDistribAgentName CashDistribAgentName_1("STRING_1059755546");
    noDistribInsts_0_1.set(CashDistribAgentName_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribAgentName_1.getString());
    FIX::CashDistribCurr CashDistribCurr_1("CAN");
    noDistribInsts_0_1.set(CashDistribCurr_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribCurr_1.getString());
    FIX::CashDistribPayRef CashDistribPayRef_1("STRING_1170320777");
    noDistribInsts_0_1.set(CashDistribPayRef_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(CashDistribPayRef_1.getString());
    FIX::DistribPaymentMethod DistribPaymentMethod_1(8);
    noDistribInsts_0_1.set(DistribPaymentMethod_1);
    RgstDistInstGrp_NoDistribInsts_1.insert(DistribPaymentMethod_1.getString());
    FIX::DistribPercentage DistribPercentage_1;
    DistribPercentage_1.setString("61.080000");
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
    FIX::DateOfBirth DateOfBirth_0("LOCALMKTDATE_1014427909");
    noRegistDtls_0_0.set(DateOfBirth_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(DateOfBirth_0.getString());
    FIX::InvestorCountryOfResidence InvestorCountryOfResidence_0("COUNTRY_950708402");
    noRegistDtls_0_0.set(InvestorCountryOfResidence_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(InvestorCountryOfResidence_0.getString());
    FIX::MailingDtls MailingDtls_0("STRING_1101114445");
    noRegistDtls_0_0.set(MailingDtls_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(MailingDtls_0.getString());
    FIX::MailingInst MailingInst_0("STRING_908102398");
    noRegistDtls_0_0.set(MailingInst_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(MailingInst_0.getString());
    FIX::OwnerType OwnerType_0(11);
    noRegistDtls_0_0.set(OwnerType_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(OwnerType_0.getString());
    FIX::RegistDtls RegistDtls_0("STRING_784990917");
    noRegistDtls_0_0.set(RegistDtls_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(RegistDtls_0.getString());
    FIX::RegistEmail RegistEmail_0("STRING_135535609");
    noRegistDtls_0_0.set(RegistEmail_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(RegistEmail_0.getString());
    all_values.push_back(RgstDtlsGrp_NoRegistDtls_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_120;
      FIX::NestedPartyID NestedPartyID_120("STRING_796921848");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyID_120.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_120('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyIDSource_120.getString());
      FIX::NestedPartyRole NestedPartyRole_120(811607069);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyRole_120.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_120);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_235;
        FIX::NestedPartySubID NestedPartySubID_235("STRING_44024084");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_235);
        NstdPtysSubGrp_NoNestedPartySubIDs_235.insert(NestedPartySubID_235.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_235(1904926356);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_235);
        NstdPtysSubGrp_NoNestedPartySubIDs_235.insert(NestedPartySubIDType_235.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_235);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_236;
        FIX::NestedPartySubID NestedPartySubID_236("STRING_252709438");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_236);
        NstdPtysSubGrp_NoNestedPartySubIDs_236.insert(NestedPartySubID_236.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_236(677963924);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_236);
        NstdPtysSubGrp_NoNestedPartySubIDs_236.insert(NestedPartySubIDType_236.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_236);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noRegistDtls_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noRegistDtls_0_0);
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
