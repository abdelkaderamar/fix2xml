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
  FIX::Account Account_40("STRING_932347465");
  msg.set(Account_40);
  RegistrationInstructions_0.insert(Account_40.getString());
  FIX::AcctIDSource AcctIDSource_33(4);
  msg.set(AcctIDSource_33);
  RegistrationInstructions_0.insert(AcctIDSource_33.getString());
  FIX::ClOrdID ClOrdID_44("STRING_139025276");
  msg.set(ClOrdID_44);
  RegistrationInstructions_0.insert(ClOrdID_44.getString());
  FIX::OwnershipType OwnershipType_0('T');
  msg.set(OwnershipType_0);
  RegistrationInstructions_0.insert(OwnershipType_0.getString());
  FIX::RegistAcctType RegistAcctType_0("STRING_1735676891");
  msg.set(RegistAcctType_0);
  RegistrationInstructions_0.insert(RegistAcctType_0.getString());
  FIX::RegistID RegistID_8("STRING_1994213110");
  msg.set(RegistID_8);
  RegistrationInstructions_0.insert(RegistID_8.getString());
  FIX::RegistRefID RegistRefID_0("STRING_158778195");
  msg.set(RegistRefID_0);
  RegistrationInstructions_0.insert(RegistRefID_0.getString());
  FIX::RegistTransType RegistTransType_0('0');
  msg.set(RegistTransType_0);
  RegistrationInstructions_0.insert(RegistTransType_0.getString());
  FIX::TaxAdvantageType TaxAdvantageType_0(18);
  msg.set(TaxAdvantageType_0);
  RegistrationInstructions_0.insert(TaxAdvantageType_0.getString());
  all_values.push_back(RegistrationInstructions_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_125;
    FIX::PartyID PartyID_125("STRING_697399576");
    noPartyIDs_0_0.set(PartyID_125);
    Parties_NoPartyIDs_125.insert(PartyID_125.getString());
    FIX::PartyIDSource PartyIDSource_125('I');
    noPartyIDs_0_0.set(PartyIDSource_125);
    Parties_NoPartyIDs_125.insert(PartyIDSource_125.getString());
    FIX::PartyRole PartyRole_125(8);
    noPartyIDs_0_0.set(PartyRole_125);
    Parties_NoPartyIDs_125.insert(PartyRole_125.getString());
    all_values.push_back(Parties_NoPartyIDs_125);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_248;
      FIX::PartySubID PartySubID_248("STRING_1030424412");
      noPartySubIDs_0_1_0.set(PartySubID_248);
      PtysSubGrp_NoPartySubIDs_248.insert(PartySubID_248.getString());
      FIX::PartySubIDType PartySubIDType_248(12);
      noPartySubIDs_0_1_0.set(PartySubIDType_248);
      PtysSubGrp_NoPartySubIDs_248.insert(PartySubIDType_248.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_248);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_249;
      FIX::PartySubID PartySubID_249("STRING_1890716274");
      noPartySubIDs_0_1_1.set(PartySubID_249);
      PtysSubGrp_NoPartySubIDs_249.insert(PartySubID_249.getString());
      FIX::PartySubIDType PartySubIDType_249(25);
      noPartySubIDs_0_1_1.set(PartySubIDType_249);
      PtysSubGrp_NoPartySubIDs_249.insert(PartySubIDType_249.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_249);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // RgstDistInstGrp
  // Group RgstDistInstGrp.NoDistribInsts
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_0;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_0;
    FIX::CashDistribAgentAcctName CashDistribAgentAcctName_0("STRING_1754485306");
    noDistribInsts_0_0.set(CashDistribAgentAcctName_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentAcctName_0.getString());
    FIX::CashDistribAgentAcctNumber CashDistribAgentAcctNumber_0("STRING_1597467770");
    noDistribInsts_0_0.set(CashDistribAgentAcctNumber_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentAcctNumber_0.getString());
    FIX::CashDistribAgentCode CashDistribAgentCode_0("STRING_1754673755");
    noDistribInsts_0_0.set(CashDistribAgentCode_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentCode_0.getString());
    FIX::CashDistribAgentName CashDistribAgentName_0("STRING_877471838");
    noDistribInsts_0_0.set(CashDistribAgentName_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribAgentName_0.getString());
    FIX::CashDistribCurr CashDistribCurr_0("EUR");
    noDistribInsts_0_0.set(CashDistribCurr_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribCurr_0.getString());
    FIX::CashDistribPayRef CashDistribPayRef_0("STRING_587812401");
    noDistribInsts_0_0.set(CashDistribPayRef_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(CashDistribPayRef_0.getString());
    FIX::DistribPaymentMethod DistribPaymentMethod_0(12);
    noDistribInsts_0_0.set(DistribPaymentMethod_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(DistribPaymentMethod_0.getString());
    FIX::DistribPercentage DistribPercentage_0;
    DistribPercentage_0.setString("43.270000");
    noDistribInsts_0_0.set(DistribPercentage_0);
    RgstDistInstGrp_NoDistribInsts_0.insert(DistribPercentage_0.getString());
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_0);

    msg.addGroup(noDistribInsts_0_0);
  }
  // RgstDtlsGrp
  // Group RgstDtlsGrp.NoRegistDtls
  {
    FIX50SP2::RegistrationInstructions::NoRegistDtls noRegistDtls_0_0;
    // RgstDtlsGrp.NoRegistDtls
    multiset<string> RgstDtlsGrp_NoRegistDtls_0;
    FIX::DateOfBirth DateOfBirth_0("LOCALMKTDATE_284454493");
    noRegistDtls_0_0.set(DateOfBirth_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(DateOfBirth_0.getString());
    FIX::InvestorCountryOfResidence InvestorCountryOfResidence_0("COUNTRY_244800309");
    noRegistDtls_0_0.set(InvestorCountryOfResidence_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(InvestorCountryOfResidence_0.getString());
    FIX::MailingDtls MailingDtls_0("STRING_224216361");
    noRegistDtls_0_0.set(MailingDtls_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(MailingDtls_0.getString());
    FIX::MailingInst MailingInst_0("STRING_1414689478");
    noRegistDtls_0_0.set(MailingInst_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(MailingInst_0.getString());
    FIX::OwnerType OwnerType_0(1);
    noRegistDtls_0_0.set(OwnerType_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(OwnerType_0.getString());
    FIX::RegistDtls RegistDtls_0("STRING_2109452284");
    noRegistDtls_0_0.set(RegistDtls_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(RegistDtls_0.getString());
    FIX::RegistEmail RegistEmail_0("STRING_1002882721");
    noRegistDtls_0_0.set(RegistEmail_0);
    RgstDtlsGrp_NoRegistDtls_0.insert(RegistEmail_0.getString());
    all_values.push_back(RgstDtlsGrp_NoRegistDtls_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_118;
      FIX::NestedPartyID NestedPartyID_118("STRING_120746832");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_118);
      NestedParties_NoNestedPartyIDs_118.insert(NestedPartyID_118.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_118('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_118);
      NestedParties_NoNestedPartyIDs_118.insert(NestedPartyIDSource_118.getString());
      FIX::NestedPartyRole NestedPartyRole_118(1469690786);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_118);
      NestedParties_NoNestedPartyIDs_118.insert(NestedPartyRole_118.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_118);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_223;
        FIX::NestedPartySubID NestedPartySubID_223("STRING_313037695");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_223);
        NstdPtysSubGrp_NoNestedPartySubIDs_223.insert(NestedPartySubID_223.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_223(1362858166);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_223);
        NstdPtysSubGrp_NoNestedPartySubIDs_223.insert(NestedPartySubIDType_223.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_223);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noRegistDtls_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_119;
      FIX::NestedPartyID NestedPartyID_119("STRING_126050396");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_119);
      NestedParties_NoNestedPartyIDs_119.insert(NestedPartyID_119.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_119('7');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_119);
      NestedParties_NoNestedPartyIDs_119.insert(NestedPartyIDSource_119.getString());
      FIX::NestedPartyRole NestedPartyRole_119(245798931);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_119);
      NestedParties_NoNestedPartyIDs_119.insert(NestedPartyRole_119.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_119);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_224;
        FIX::NestedPartySubID NestedPartySubID_224("STRING_1961167380");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_224);
        NstdPtysSubGrp_NoNestedPartySubIDs_224.insert(NestedPartySubID_224.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_224(740820174);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_224);
        NstdPtysSubGrp_NoNestedPartySubIDs_224.insert(NestedPartySubIDType_224.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_224);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_225;
        FIX::NestedPartySubID NestedPartySubID_225("STRING_244953446");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_225);
        NstdPtysSubGrp_NoNestedPartySubIDs_225.insert(NestedPartySubID_225.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_225(1568169039);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_225);
        NstdPtysSubGrp_NoNestedPartySubIDs_225.insert(NestedPartySubIDType_225.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_225);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_226;
        FIX::NestedPartySubID NestedPartySubID_226("STRING_190804296");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_226);
        NstdPtysSubGrp_NoNestedPartySubIDs_226.insert(NestedPartySubID_226.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_226(1999627201);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_226);
        NstdPtysSubGrp_NoNestedPartySubIDs_226.insert(NestedPartySubIDType_226.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_226);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noRegistDtls_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_120;
      FIX::NestedPartyID NestedPartyID_120("STRING_298157229");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyID_120.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_120('7');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyIDSource_120.getString());
      FIX::NestedPartyRole NestedPartyRole_120(2144427344);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_120);
      NestedParties_NoNestedPartyIDs_120.insert(NestedPartyRole_120.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_120);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_227;
        FIX::NestedPartySubID NestedPartySubID_227("STRING_1252961316");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_227);
        NstdPtysSubGrp_NoNestedPartySubIDs_227.insert(NestedPartySubID_227.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_227(1208668023);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_227);
        NstdPtysSubGrp_NoNestedPartySubIDs_227.insert(NestedPartySubIDType_227.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_227);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_228;
        FIX::NestedPartySubID NestedPartySubID_228("STRING_177838526");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_228);
        NstdPtysSubGrp_NoNestedPartySubIDs_228.insert(NestedPartySubID_228.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_228(1537415809);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_228);
        NstdPtysSubGrp_NoNestedPartySubIDs_228.insert(NestedPartySubIDType_228.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_228);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noRegistDtls_0_0.addGroup(noNestedPartyIDs_0_1_2);
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
