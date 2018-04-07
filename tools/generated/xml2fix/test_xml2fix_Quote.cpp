#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Quote.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Quote_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Quot" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Quote_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_539311688"); // 0
  Quote_message_t_0.insert("QuoteReqID_t_539311688");
  elt.add_attribute("QID", "QuoteID_t_1715217575"); // 0
  Quote_message_t_0.insert("QuoteID_t_1715217575");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_1936306768"); // 0
  Quote_message_t_0.insert("QuoteMsgID_t_1936306768");
  elt.add_attribute("RspID", "QuoteRespID_t_794972224"); // 0
  Quote_message_t_0.insert("QuoteRespID_t_794972224");
  elt.add_attribute("Typ", "3"); // 0
  Quote_message_t_0.insert("3");
  elt.add_attribute("PrvtQt", "true"); // 0
  Quote_message_t_0.insert("true");
  elt.add_attribute("RspLvl", "1"); // 0
  Quote_message_t_0.insert("1");
  elt.add_attribute("SesID", "5"); // 0
  Quote_message_t_0.insert("5");
  elt.add_attribute("SesSub", "2"); // 0
  Quote_message_t_0.insert("2");
  elt.add_attribute("Side", "4"); // 0
  Quote_message_t_0.insert("4");
  elt.add_attribute("SettlTyp", "1"); // 0
  Quote_message_t_0.insert("1");
  elt.add_attribute("SettlDt", "SettlDate_t_1269689992"); // 0
  Quote_message_t_0.insert("SettlDate_t_1269689992");
  elt.add_attribute("SettlDt2", "SettlDate2_t_162575866"); // 0
  Quote_message_t_0.insert("SettlDate2_t_162575866");
  elt.add_attribute("Qty2", "7314085.830000"); // 0
  Quote_message_t_0.insert("7314085.830000");
  elt.add_attribute("Ccy", "CAN"); // 0
  Quote_message_t_0.insert("CAN");
  elt.add_attribute("SettlCcy", "JPY"); // 0
  Quote_message_t_0.insert("JPY");
  elt.add_attribute("Acct", "Account_t_378023092"); // 0
  Quote_message_t_0.insert("Account_t_378023092");
  elt.add_attribute("AcctIDSrc", "2"); // 0
  Quote_message_t_0.insert("2");
  elt.add_attribute("AcctTyp", "2"); // 0
  Quote_message_t_0.insert("2");
  elt.add_attribute("BidPx", "11402388.360000"); // 0
  Quote_message_t_0.insert("11402388.360000");
  elt.add_attribute("OfrPx", "4037495.780000"); // 0
  Quote_message_t_0.insert("4037495.780000");
  elt.add_attribute("MktBidPx", "6171225.530000"); // 0
  Quote_message_t_0.insert("6171225.530000");
  elt.add_attribute("MktOfrPx", "9144881.500000"); // 0
  Quote_message_t_0.insert("9144881.500000");
  elt.add_attribute("MinBidSz", "14324470.790000"); // 0
  Quote_message_t_0.insert("14324470.790000");
  elt.add_attribute("BidSz", "19965333.740000"); // 0
  Quote_message_t_0.insert("19965333.740000");
  elt.add_attribute("MinOfrSz", "14164909.360000"); // 0
  Quote_message_t_0.insert("14164909.360000");
  elt.add_attribute("OfrSz", "4123008.750000"); // 0
  Quote_message_t_0.insert("4123008.750000");
  elt.add_attribute("MinQty", "12578892.230000"); // 0
  Quote_message_t_0.insert("12578892.230000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_44591589"); // 0
  Quote_message_t_0.insert("ValidUntilTime_t_44591589");
  elt.add_attribute("BidSpotRt", "9516125.630000"); // 0
  Quote_message_t_0.insert("9516125.630000");
  elt.add_attribute("OfrSpotRt", "8256231.510000"); // 0
  Quote_message_t_0.insert("8256231.510000");
  elt.add_attribute("BidFwdPnts", "19808983.570000"); // 0
  Quote_message_t_0.insert("19808983.570000");
  elt.add_attribute("OfrFwdPnts", "17465847.880000"); // 0
  Quote_message_t_0.insert("17465847.880000");
  elt.add_attribute("BidSwapPnts", "14630112.460000"); // 0
  Quote_message_t_0.insert("14630112.460000");
  elt.add_attribute("OfrSwapPnts", "12410389.870000"); // 0
  Quote_message_t_0.insert("12410389.870000");
  elt.add_attribute("MidPx", "3142808.530000"); // 0
  Quote_message_t_0.insert("3142808.530000");
  elt.add_attribute("BidYld", "15145301.540000"); // 0
  Quote_message_t_0.insert("15145301.540000");
  elt.add_attribute("MidYld", "16260768.510000"); // 0
  Quote_message_t_0.insert("16260768.510000");
  elt.add_attribute("OfrYld", "7781385.360000"); // 0
  Quote_message_t_0.insert("7781385.360000");
  elt.add_attribute("TxnTm", "TransactTime_t_340244792"); // 0
  Quote_message_t_0.insert("TransactTime_t_340244792");
  elt.add_attribute("OrdTyp", "C"); // 0
  Quote_message_t_0.insert("C");
  elt.add_attribute("BidFwdPnts2", "9407144.020000"); // 0
  Quote_message_t_0.insert("9407144.020000");
  elt.add_attribute("OfrFwdPnts2", "10716533.750000"); // 0
  Quote_message_t_0.insert("10716533.750000");
  elt.add_attribute("SettlCurrBidFxRt", "16466304.440000"); // 0
  Quote_message_t_0.insert("16466304.440000");
  elt.add_attribute("SettlCurrOfrFxRt", "20174619.930000"); // 0
  Quote_message_t_0.insert("20174619.930000");
  elt.add_attribute("SettlCurrFxRtCalc", "D"); // 0
  Quote_message_t_0.insert("D");
  elt.add_attribute("CommTyp", "6"); // 0
  Quote_message_t_0.insert("6");
  elt.add_attribute("Comm", "Commission_t_248001437"); // 0
  Quote_message_t_0.insert("Commission_t_248001437");
  elt.add_attribute("CustCpcty", "4"); // 0
  Quote_message_t_0.insert("4");
  elt.add_attribute("ExDest", "ExDestination_t_2046528769"); // 0
  Quote_message_t_0.insert("ExDestination_t_2046528769");
  elt.add_attribute("ExDestIDSrc", "G"); // 0
  Quote_message_t_0.insert("G");
  elt.add_attribute("BkngTyp", "2"); // 0
  Quote_message_t_0.insert("2");
  elt.add_attribute("Cpcty", "R"); // 0
  Quote_message_t_0.insert("R");
  elt.add_attribute("Rstctions", "C"); // 0
  Quote_message_t_0.insert("C");
  elt.add_attribute("PxTyp", "9"); // 0
  Quote_message_t_0.insert("9");
  elt.add_attribute("Txt", "Text_t_365217400"); // 0
  Quote_message_t_0.insert("Text_t_365217400");
  elt.add_attribute("EncTxtLen", "1571735713"); // 0
  Quote_message_t_0.insert("1571735713");
  elt.add_attribute("EncTxt", "EncodedText_t_79697207"); // 0
  Quote_message_t_0.insert("EncodedText_t_79697207");
  all_values.push_back(Quote_message_t_0);
  all_compo_names.insert("Quote_message_t");

  { // Hdr
    xml_element Hdr_68{"Hdr"};
    multiset<string> Hdr_68_set;
    Hdr_68.add_attribute("SeqNum", "1623106624"); // 1
    Hdr_68_set.insert("1623106624");
    Hdr_68.add_attribute("SID", "SenderCompID_t_1616327302"); // 1
    Hdr_68_set.insert("SenderCompID_t_1616327302");
    Hdr_68.add_attribute("TID", "TargetCompID_t_1031309771"); // 1
    Hdr_68_set.insert("TargetCompID_t_1031309771");
    Hdr_68.add_attribute("OBID", "OnBehalfOfCompID_t_301246127"); // 1
    Hdr_68_set.insert("OnBehalfOfCompID_t_301246127");
    Hdr_68.add_attribute("D2ID", "DeliverToCompID_t_1449742011"); // 1
    Hdr_68_set.insert("DeliverToCompID_t_1449742011");
    Hdr_68.add_attribute("SSub", "SenderSubID_t_630410911"); // 1
    Hdr_68_set.insert("SenderSubID_t_630410911");
    Hdr_68.add_attribute("SLoc", "SenderLocationID_t_1764257373"); // 1
    Hdr_68_set.insert("SenderLocationID_t_1764257373");
    Hdr_68.add_attribute("TSub", "TargetSubID_t_543297350"); // 1
    Hdr_68_set.insert("TargetSubID_t_543297350");
    Hdr_68.add_attribute("TLoc", "TargetLocationID_t_944691764"); // 1
    Hdr_68_set.insert("TargetLocationID_t_944691764");
    Hdr_68.add_attribute("OBSub", "OnBehalfOfSubID_t_1131303880"); // 1
    Hdr_68_set.insert("OnBehalfOfSubID_t_1131303880");
    Hdr_68.add_attribute("OBLoc", "OnBehalfOfLocationID_t_21890553"); // 1
    Hdr_68_set.insert("OnBehalfOfLocationID_t_21890553");
    Hdr_68.add_attribute("D2Sub", "DeliverToSubID_t_1722830300"); // 1
    Hdr_68_set.insert("DeliverToSubID_t_1722830300");
    Hdr_68.add_attribute("D2Loc", "DeliverToLocationID_t_1471548672"); // 1
    Hdr_68_set.insert("DeliverToLocationID_t_1471548672");
    Hdr_68.add_attribute("PosDup", "N"); // 1
    Hdr_68_set.insert("N");
    Hdr_68.add_attribute("PosRsnd", "N"); // 1
    Hdr_68_set.insert("N");
    Hdr_68.add_attribute("Snt", "SendingTime_t_395718399"); // 1
    Hdr_68_set.insert("SendingTime_t_395718399");
    Hdr_68.add_attribute("OrigSnt", "OrigSendingTime_t_269320544"); // 1
    Hdr_68_set.insert("OrigSendingTime_t_269320544");
    Hdr_68.add_attribute("MsgEncd", "MessageEncoding_t_386039400"); // 1
    Hdr_68_set.insert("MessageEncoding_t_386039400");
    all_values.push_back(Hdr_68_set);
    all_compo_names.insert("Hdr_68_set");

    {
      xml_element Hop_68{"Hop"};
      multiset<string> Hop_68_set;
      Hop_68.add_attribute("ID", "HopCompID_t_2066100030"); // 2
      Hop_68_set.insert("HopCompID_t_2066100030");
      Hop_68.add_attribute("Ref", "461586811"); // 2
      Hop_68_set.insert("461586811");
      Hop_68.add_attribute("Snt", "HopSendingTime_t_634040837"); // 2
      Hop_68_set.insert("HopSendingTime_t_634040837");
      all_values.push_back(Hop_68_set);
      all_compo_names.insert("Hop_68_set");

      Hdr_68.add_element(Hop_68);
    }
    elt.add_element(Hdr_68);
  } // end Hdr
  { // QuotQual
    xml_element QuotQual_0{"QuotQual"};
    multiset<string> QuotQual_0_set;
    QuotQual_0.add_attribute("Qual", "O"); // 1
    QuotQual_0_set.insert("O");
    all_values.push_back(QuotQual_0_set);
    all_compo_names.insert("QuotQual_0_set");

    elt.add_element(QuotQual_0);
  } // end QuotQual
  { // Pty
    xml_element Pty_322{"Pty"};
    multiset<string> Pty_322_set;
    Pty_322.add_attribute("ID", "PartyID_t_279732607"); // 1
    Pty_322_set.insert("PartyID_t_279732607");
    Pty_322.add_attribute("Src", "6"); // 1
    Pty_322_set.insert("6");
    Pty_322.add_attribute("R", "62"); // 1
    Pty_322_set.insert("62");
    all_values.push_back(Pty_322_set);
    all_compo_names.insert("Pty_322_set");

    {
      xml_element Sub_322{"Sub"};
      multiset<string> Sub_322_set;
      Sub_322.add_attribute("ID", "PartySubID_t_2094612587"); // 2
      Sub_322_set.insert("PartySubID_t_2094612587");
      Sub_322.add_attribute("Typ", "10"); // 2
      Sub_322_set.insert("10");
      all_values.push_back(Sub_322_set);
      all_compo_names.insert("Sub_322_set");

      Pty_322.add_element(Sub_322);
    }
    elt.add_element(Pty_322);
  } // end Pty
  { // Pty
    xml_element Pty_323{"Pty"};
    multiset<string> Pty_323_set;
    Pty_323.add_attribute("ID", "PartyID_t_1601777953"); // 1
    Pty_323_set.insert("PartyID_t_1601777953");
    Pty_323.add_attribute("Src", "A"); // 1
    Pty_323_set.insert("A");
    Pty_323.add_attribute("R", "20"); // 1
    Pty_323_set.insert("20");
    all_values.push_back(Pty_323_set);
    all_compo_names.insert("Pty_323_set");

    {
      xml_element Sub_323{"Sub"};
      multiset<string> Sub_323_set;
      Sub_323.add_attribute("ID", "PartySubID_t_1070621607"); // 2
      Sub_323_set.insert("PartySubID_t_1070621607");
      Sub_323.add_attribute("Typ", "27"); // 2
      Sub_323_set.insert("27");
      all_values.push_back(Sub_323_set);
      all_compo_names.insert("Sub_323_set");

      Pty_323.add_element(Sub_323);
    }
    elt.add_element(Pty_323);
  } // end Pty
  { // Pty
    xml_element Pty_324{"Pty"};
    multiset<string> Pty_324_set;
    Pty_324.add_attribute("ID", "PartyID_t_1018886111"); // 1
    Pty_324_set.insert("PartyID_t_1018886111");
    Pty_324.add_attribute("Src", "H"); // 1
    Pty_324_set.insert("H");
    Pty_324.add_attribute("R", "83"); // 1
    Pty_324_set.insert("83");
    all_values.push_back(Pty_324_set);
    all_compo_names.insert("Pty_324_set");

    {
      xml_element Sub_324{"Sub"};
      multiset<string> Sub_324_set;
      Sub_324.add_attribute("ID", "PartySubID_t_635659836"); // 2
      Sub_324_set.insert("PartySubID_t_635659836");
      Sub_324.add_attribute("Typ", "12"); // 2
      Sub_324_set.insert("12");
      all_values.push_back(Sub_324_set);
      all_compo_names.insert("Sub_324_set");

      Pty_324.add_element(Sub_324);
    }
    elt.add_element(Pty_324);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_58{"Instrmt"};
    multiset<string> Instrmt_58_set;
    Instrmt_58.add_attribute("Sym", "Symbol_t_485754945"); // 1
    Instrmt_58_set.insert("Symbol_t_485754945");
    Instrmt_58.add_attribute("Sfx", "CD"); // 1
    Instrmt_58_set.insert("CD");
    Instrmt_58.add_attribute("ID", "SecurityID_t_938067873"); // 1
    Instrmt_58_set.insert("SecurityID_t_938067873");
    Instrmt_58.add_attribute("Src", "8"); // 1
    Instrmt_58_set.insert("8");
    Instrmt_58.add_attribute("Prod", "6"); // 1
    Instrmt_58_set.insert("6");
    Instrmt_58.add_attribute("ProdCmplx", "ProductComplex_t_1708241621"); // 1
    Instrmt_58_set.insert("ProductComplex_t_1708241621");
    Instrmt_58.add_attribute("SecGrp", "SecurityGroup_t_577162651"); // 1
    Instrmt_58_set.insert("SecurityGroup_t_577162651");
    Instrmt_58.add_attribute("CFI", "CFICode_t_1486747139"); // 1
    Instrmt_58_set.insert("CFICode_t_1486747139");
    Instrmt_58.add_attribute("SecTyp", "MTN"); // 1
    Instrmt_58_set.insert("MTN");
    Instrmt_58.add_attribute("SubTyp", "SecuritySubType_t_963202051"); // 1
    Instrmt_58_set.insert("SecuritySubType_t_963202051");
    Instrmt_58.add_attribute("MMY", "1405363522"); // 1
    Instrmt_58_set.insert("1405363522");
    Instrmt_58.add_attribute("MatDt", "MaturityDate_t_291665329"); // 1
    Instrmt_58_set.insert("MaturityDate_t_291665329");
    Instrmt_58.add_attribute("MatTm", "1597242889"); // 1
    Instrmt_58_set.insert("1597242889");
    Instrmt_58.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1302663227"); // 1
    Instrmt_58_set.insert("SettleOnOpenFlag_t_1302663227");
    Instrmt_58.add_attribute("AsgnMeth", "652297262"); // 1
    Instrmt_58_set.insert("652297262");
    Instrmt_58.add_attribute("Status", "1"); // 1
    Instrmt_58_set.insert("1");
    Instrmt_58.add_attribute("CpnPmt", "CouponPaymentDate_t_1582395834"); // 1
    Instrmt_58_set.insert("CouponPaymentDate_t_1582395834");
    Instrmt_58.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_58_set.insert("MR");
    Instrmt_58.add_attribute("Snrty", "SR"); // 1
    Instrmt_58_set.insert("SR");
    Instrmt_58.add_attribute("NotlPctOut", "15295247.740000"); // 1
    Instrmt_58_set.insert("15295247.740000");
    Instrmt_58.add_attribute("OrigNotlPctOut", "6236302.290000"); // 1
    Instrmt_58_set.insert("6236302.290000");
    Instrmt_58.add_attribute("AttchPnt", "9563768.970000"); // 1
    Instrmt_58_set.insert("9563768.970000");
    Instrmt_58.add_attribute("DetchPnt", "15563509.210000"); // 1
    Instrmt_58_set.insert("15563509.210000");
    Instrmt_58.add_attribute("Issued", "IssueDate_t_1341270213"); // 1
    Instrmt_58_set.insert("IssueDate_t_1341270213");
    Instrmt_58.add_attribute("RepoCollSecTyp", "2026998504"); // 1
    Instrmt_58_set.insert("2026998504");
    Instrmt_58.add_attribute("RepoTrm", "467003191"); // 1
    Instrmt_58_set.insert("467003191");
    Instrmt_58.add_attribute("RepoRt", "2126726.760000"); // 1
    Instrmt_58_set.insert("2126726.760000");
    Instrmt_58.add_attribute("Fctr", "2523948.260000"); // 1
    Instrmt_58_set.insert("2523948.260000");
    Instrmt_58.add_attribute("CrdRtg", "CreditRating_t_8066372"); // 1
    Instrmt_58_set.insert("CreditRating_t_8066372");
    Instrmt_58.add_attribute("Rgstry", "InstrRegistry_t_848332513"); // 1
    Instrmt_58_set.insert("InstrRegistry_t_848332513");
    Instrmt_58.add_attribute("IssuCtry", "1168572146"); // 1
    Instrmt_58_set.insert("1168572146");
    Instrmt_58.add_attribute("StPrv", "StateOrProvinceOfIssue_t_493821317"); // 1
    Instrmt_58_set.insert("StateOrProvinceOfIssue_t_493821317");
    Instrmt_58.add_attribute("Lcl", "LocaleOfIssue_t_467812581"); // 1
    Instrmt_58_set.insert("LocaleOfIssue_t_467812581");
    Instrmt_58.add_attribute("Redeem", "RedemptionDate_t_2106640019"); // 1
    Instrmt_58_set.insert("RedemptionDate_t_2106640019");
    Instrmt_58.add_attribute("StrkPx", "5549229.140000"); // 1
    Instrmt_58_set.insert("5549229.140000");
    Instrmt_58.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_58_set.insert("GBP");
    Instrmt_58.add_attribute("StrkMult", "11320855.650000"); // 1
    Instrmt_58_set.insert("11320855.650000");
    Instrmt_58.add_attribute("StrkValu", "8981048.130000"); // 1
    Instrmt_58_set.insert("8981048.130000");
    Instrmt_58.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_58_set.insert("3");
    Instrmt_58.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_58_set.insert("3");
    Instrmt_58.add_attribute("StrkPxBndryPrcsn", "1559846.870000"); // 1
    Instrmt_58_set.insert("1559846.870000");
    Instrmt_58.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_58_set.insert("4");
    Instrmt_58.add_attribute("OptAt", "1545046858"); // 1
    Instrmt_58_set.insert("1545046858");
    Instrmt_58.add_attribute("Mult", "14586479.150000"); // 1
    Instrmt_58_set.insert("14586479.150000");
    Instrmt_58.add_attribute("MultTyp", "0"); // 1
    Instrmt_58_set.insert("0");
    Instrmt_58.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_58_set.insert("2");
    Instrmt_58.add_attribute("MinPxIncr", "8935601.010000"); // 1
    Instrmt_58_set.insert("8935601.010000");
    Instrmt_58.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1823052322"); // 1
    Instrmt_58_set.insert("MinPriceIncrementAmount_t_1823052322");
    Instrmt_58.add_attribute("UOM", "USD"); // 1
    Instrmt_58_set.insert("USD");
    Instrmt_58.add_attribute("UOMQty", "2756012.270000"); // 1
    Instrmt_58_set.insert("2756012.270000");
    Instrmt_58.add_attribute("PxUOM", "t"); // 1
    Instrmt_58_set.insert("t");
    Instrmt_58.add_attribute("PxUOMQty", "11805794.040000"); // 1
    Instrmt_58_set.insert("11805794.040000");
    Instrmt_58.add_attribute("SettlMeth", "C"); // 1
    Instrmt_58_set.insert("C");
    Instrmt_58.add_attribute("ExerStyle", "0"); // 1
    Instrmt_58_set.insert("0");
    Instrmt_58.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_58_set.insert("3");
    Instrmt_58.add_attribute("OptPayAmt", "OptPayoutAmount_t_151471691"); // 1
    Instrmt_58_set.insert("OptPayoutAmount_t_151471691");
    Instrmt_58.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_58_set.insert("INT");
    Instrmt_58.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_58_set.insert("FUTDA");
    Instrmt_58.add_attribute("ListMeth", "1"); // 1
    Instrmt_58_set.insert("1");
    Instrmt_58.add_attribute("CapPx", "5539906.590000"); // 1
    Instrmt_58_set.insert("5539906.590000");
    Instrmt_58.add_attribute("FlrPx", "3335775.860000"); // 1
    Instrmt_58_set.insert("3335775.860000");
    Instrmt_58.add_attribute("PutCall", "0"); // 1
    Instrmt_58_set.insert("0");
    Instrmt_58.add_attribute("FlexInd", "true"); // 1
    Instrmt_58_set.insert("true");
    Instrmt_58.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_58_set.insert("false");
    Instrmt_58.add_attribute("TmUnit", "H"); // 1
    Instrmt_58_set.insert("H");
    Instrmt_58.add_attribute("CpnRt", "4331609.140000"); // 1
    Instrmt_58_set.insert("4331609.140000");
    Instrmt_58.add_attribute("Exch", "SecurityExchange_t_1960131950"); // 1
    Instrmt_58_set.insert("SecurityExchange_t_1960131950");
    Instrmt_58.add_attribute("PosLmt", "192884212"); // 1
    Instrmt_58_set.insert("192884212");
    Instrmt_58.add_attribute("NTPosLmt", "1331265728"); // 1
    Instrmt_58_set.insert("1331265728");
    Instrmt_58.add_attribute("Issr", "Issuer_t_1310124812"); // 1
    Instrmt_58_set.insert("Issuer_t_1310124812");
    Instrmt_58.add_attribute("EncIssrLen", "140688181"); // 1
    Instrmt_58_set.insert("140688181");
    Instrmt_58.add_attribute("EncIssr", "EncodedIssuer_t_1487250415"); // 1
    Instrmt_58_set.insert("EncodedIssuer_t_1487250415");
    Instrmt_58.add_attribute("Desc", "SecurityDesc_t_951783003"); // 1
    Instrmt_58_set.insert("SecurityDesc_t_951783003");
    Instrmt_58.add_attribute("EncSecDescLen", "1685735039"); // 1
    Instrmt_58_set.insert("1685735039");
    Instrmt_58.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_798414682"); // 1
    Instrmt_58_set.insert("EncodedSecurityDesc_t_798414682");
    Instrmt_58.add_attribute("Pool", "Pool_t_1245738456"); // 1
    Instrmt_58_set.insert("Pool_t_1245738456");
    Instrmt_58.add_attribute("CSetMo", "407854953"); // 1
    Instrmt_58_set.insert("407854953");
    Instrmt_58.add_attribute("CPPgm", "99"); // 1
    Instrmt_58_set.insert("99");
    Instrmt_58.add_attribute("CPRegT", "CPRegType_t_921307130"); // 1
    Instrmt_58_set.insert("CPRegType_t_921307130");
    Instrmt_58.add_attribute("Dated", "DatedDate_t_632057460"); // 1
    Instrmt_58_set.insert("DatedDate_t_632057460");
    Instrmt_58.add_attribute("IntAcrl", "InterestAccrualDate_t_1967576011"); // 1
    Instrmt_58_set.insert("InterestAccrualDate_t_1967576011");
    all_values.push_back(Instrmt_58_set);
    all_compo_names.insert("Instrmt_58_set");

    {
      xml_element AID_61{"AID"};
      multiset<string> AID_61_set;
      AID_61.add_attribute("AltID", "SecurityAltID_t_1220506034"); // 2
      AID_61_set.insert("SecurityAltID_t_1220506034");
      AID_61.add_attribute("AltIDSrc", "I"); // 2
      AID_61_set.insert("I");
      all_values.push_back(AID_61_set);
      all_compo_names.insert("AID_61_set");

      Instrmt_58.add_element(AID_61);
    }
    {
      xml_element SecXML_61{"SecXML"};
      multiset<string> SecXML_61_set;
      SecXML_61.add_attribute("Schema", "SecurityXMLSchema_t_1652044512"); // 2
      SecXML_61_set.insert("SecurityXMLSchema_t_1652044512");
      all_values.push_back(SecXML_61_set);
      all_compo_names.insert("SecXML_61_set");

      Instrmt_58.add_element(SecXML_61);
    }
    {
      xml_element Evnt_61{"Evnt"};
      multiset<string> Evnt_61_set;
      Evnt_61.add_attribute("EventTyp", "99"); // 2
      Evnt_61_set.insert("99");
      Evnt_61.add_attribute("Dt", "EventDate_t_725247478"); // 2
      Evnt_61_set.insert("EventDate_t_725247478");
      Evnt_61.add_attribute("Tm", "EventTime_t_1803516203"); // 2
      Evnt_61_set.insert("EventTime_t_1803516203");
      Evnt_61.add_attribute("Px", "4191496.500000"); // 2
      Evnt_61_set.insert("4191496.500000");
      Evnt_61.add_attribute("Txt", "EventText_t_2037736565"); // 2
      Evnt_61_set.insert("EventText_t_2037736565");
      all_values.push_back(Evnt_61_set);
      all_compo_names.insert("Evnt_61_set");

      Instrmt_58.add_element(Evnt_61);
    }
    {
      xml_element Pty_325{"Pty"};
      multiset<string> Pty_325_set;
      Pty_325.add_attribute("ID", "InstrumentPartyID_t_1963054267"); // 2
      Pty_325_set.insert("InstrumentPartyID_t_1963054267");
      Pty_325.add_attribute("Src", "A"); // 2
      Pty_325_set.insert("A");
      Pty_325.add_attribute("R", "73"); // 2
      Pty_325_set.insert("73");
      all_values.push_back(Pty_325_set);
      all_compo_names.insert("Pty_325_set");

      {
        xml_element Sub_325{"Sub"};
        multiset<string> Sub_325_set;
        Sub_325.add_attribute("ID", "InstrumentPartySubID_t_468929999"); // 3
        Sub_325_set.insert("InstrumentPartySubID_t_468929999");
        Sub_325.add_attribute("Typ", "28"); // 3
        Sub_325_set.insert("28");
        all_values.push_back(Sub_325_set);
        all_compo_names.insert("Sub_325_set");

        Pty_325.add_element(Sub_325);
      }
      Instrmt_58.add_element(Pty_325);
    }
    {
      xml_element CmplxEvnt_58{"CmplxEvnt"};
      multiset<string> CmplxEvnt_58_set;
      CmplxEvnt_58.add_attribute("Typ", "3"); // 2
      CmplxEvnt_58_set.insert("3");
      CmplxEvnt_58.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1677212294"); // 2
      CmplxEvnt_58_set.insert("ComplexOptPayoutAmount_t_1677212294");
      CmplxEvnt_58.add_attribute("Px", "2806208.160000"); // 2
      CmplxEvnt_58_set.insert("2806208.160000");
      CmplxEvnt_58.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_58_set.insert("4");
      CmplxEvnt_58.add_attribute("PxBndryPrcsn", "18700965.060000"); // 2
      CmplxEvnt_58_set.insert("18700965.060000");
      CmplxEvnt_58.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_58_set.insert("3");
      CmplxEvnt_58.add_attribute("Cond", "2"); // 2
      CmplxEvnt_58_set.insert("2");
      all_values.push_back(CmplxEvnt_58_set);
      all_compo_names.insert("CmplxEvnt_58_set");

      {
        xml_element EvntDts_58{"EvntDts"};
        multiset<string> EvntDts_58_set;
        EvntDts_58.add_attribute("StartDt", "ComplexEventStartDate_t_2010784687"); // 3
        EvntDts_58_set.insert("ComplexEventStartDate_t_2010784687");
        EvntDts_58.add_attribute("EndDt", "ComplexEventEndDate_t_951653311"); // 3
        EvntDts_58_set.insert("ComplexEventEndDate_t_951653311");
        all_values.push_back(EvntDts_58_set);
        all_compo_names.insert("EvntDts_58_set");

        {
          xml_element EvntTms_58{"EvntTms"};
          multiset<string> EvntTms_58_set;
          EvntTms_58.add_attribute("StartTm", "443636930"); // 4
          EvntTms_58_set.insert("443636930");
          EvntTms_58.add_attribute("EndTm", "1549036078"); // 4
          EvntTms_58_set.insert("1549036078");
          all_values.push_back(EvntTms_58_set);
          all_compo_names.insert("EvntTms_58_set");

          EvntDts_58.add_element(EvntTms_58);
        }
        CmplxEvnt_58.add_element(EvntDts_58);
      }
      Instrmt_58.add_element(CmplxEvnt_58);
    }
    elt.add_element(Instrmt_58);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_16{"FinDetls"};
    multiset<string> FinDetls_16_set;
    FinDetls_16.add_attribute("AgmtDesc", "AgreementDesc_t_1750067994"); // 1
    FinDetls_16_set.insert("AgreementDesc_t_1750067994");
    FinDetls_16.add_attribute("AgmtID", "AgreementID_t_1689375386"); // 1
    FinDetls_16_set.insert("AgreementID_t_1689375386");
    FinDetls_16.add_attribute("AgmtDt", "AgreementDate_t_1956891031"); // 1
    FinDetls_16_set.insert("AgreementDate_t_1956891031");
    FinDetls_16.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_16_set.insert("GBP");
    FinDetls_16.add_attribute("TrmTyp", "1"); // 1
    FinDetls_16_set.insert("1");
    FinDetls_16.add_attribute("StartDt", "StartDate_t_1114651493"); // 1
    FinDetls_16_set.insert("StartDate_t_1114651493");
    FinDetls_16.add_attribute("EndDt", "EndDate_t_1683704903"); // 1
    FinDetls_16_set.insert("EndDate_t_1683704903");
    FinDetls_16.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_16_set.insert("1");
    FinDetls_16.add_attribute("MgnRatio", "6192123.570000"); // 1
    FinDetls_16_set.insert("6192123.570000");
    all_values.push_back(FinDetls_16_set);
    all_compo_names.insert("FinDetls_16_set");

    elt.add_element(FinDetls_16);
  } // end FinDetls
  { // Undly
    xml_element Undly_81{"Undly"};
    multiset<string> Undly_81_set;
    Undly_81.add_attribute("Sym", "UnderlyingSymbol_t_831865539"); // 1
    Undly_81_set.insert("UnderlyingSymbol_t_831865539");
    Undly_81.add_attribute("Sfx", "WI"); // 1
    Undly_81_set.insert("WI");
    Undly_81.add_attribute("ID", "UnderlyingSecurityID_t_668862409"); // 1
    Undly_81_set.insert("UnderlyingSecurityID_t_668862409");
    Undly_81.add_attribute("Src", "5"); // 1
    Undly_81_set.insert("5");
    Undly_81.add_attribute("Prod", "11"); // 1
    Undly_81_set.insert("11");
    Undly_81.add_attribute("CFI", "UnderlyingCFICode_t_1642002718"); // 1
    Undly_81_set.insert("UnderlyingCFICode_t_1642002718");
    Undly_81.add_attribute("SecTyp", "TAN"); // 1
    Undly_81_set.insert("TAN");
    Undly_81.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_559745531"); // 1
    Undly_81_set.insert("UnderlyingSecuritySubType_t_559745531");
    Undly_81.add_attribute("MMY", "1489462619"); // 1
    Undly_81_set.insert("1489462619");
    Undly_81.add_attribute("Mat", "UnderlyingMaturityDate_t_1462513421"); // 1
    Undly_81_set.insert("UnderlyingMaturityDate_t_1462513421");
    Undly_81.add_attribute("MatTm", "89474177"); // 1
    Undly_81_set.insert("89474177");
    Undly_81.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1770083435"); // 1
    Undly_81_set.insert("UnderlyingCouponPaymentDate_t_1770083435");
    Undly_81.add_attribute("RestrctTyp", "FR"); // 1
    Undly_81_set.insert("FR");
    Undly_81.add_attribute("Snrty", "SB"); // 1
    Undly_81_set.insert("SB");
    Undly_81.add_attribute("NotlPctOut", "12344863.310000"); // 1
    Undly_81_set.insert("12344863.310000");
    Undly_81.add_attribute("OrigNotlPctOut", "12835801.110000"); // 1
    Undly_81_set.insert("12835801.110000");
    Undly_81.add_attribute("AttchPnt", "18228717.220000"); // 1
    Undly_81_set.insert("18228717.220000");
    Undly_81.add_attribute("DetchPnt", "386559.950000"); // 1
    Undly_81_set.insert("386559.950000");
    Undly_81.add_attribute("Issued", "UnderlyingIssueDate_t_1727217041"); // 1
    Undly_81_set.insert("UnderlyingIssueDate_t_1727217041");
    Undly_81.add_attribute("RepoCollSecTyp", "1224424152"); // 1
    Undly_81_set.insert("1224424152");
    Undly_81.add_attribute("RepoTrm", "1788723989"); // 1
    Undly_81_set.insert("1788723989");
    Undly_81.add_attribute("RepoRt", "12691087.790000"); // 1
    Undly_81_set.insert("12691087.790000");
    Undly_81.add_attribute("Fctr", "10338315.360000"); // 1
    Undly_81_set.insert("10338315.360000");
    Undly_81.add_attribute("CrdRtg", "UnderlyingCreditRating_t_935799471"); // 1
    Undly_81_set.insert("UnderlyingCreditRating_t_935799471");
    Undly_81.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1732307647"); // 1
    Undly_81_set.insert("UnderlyingInstrRegistry_t_1732307647");
    Undly_81.add_attribute("Ctry", "1475296380"); // 1
    Undly_81_set.insert("1475296380");
    Undly_81.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2050450964"); // 1
    Undly_81_set.insert("UnderlyingStateOrProvinceOfIssue_t_2050450964");
    Undly_81.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1268528902"); // 1
    Undly_81_set.insert("UnderlyingLocaleOfIssue_t_1268528902");
    Undly_81.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1581914441"); // 1
    Undly_81_set.insert("UnderlyingRedemptionDate_t_1581914441");
    Undly_81.add_attribute("StrkPx", "5221796.740000"); // 1
    Undly_81_set.insert("5221796.740000");
    Undly_81.add_attribute("StrkCcy", "USD"); // 1
    Undly_81_set.insert("USD");
    Undly_81.add_attribute("OptA", "797424587"); // 1
    Undly_81_set.insert("797424587");
    Undly_81.add_attribute("Mult", "396204.220000"); // 1
    Undly_81_set.insert("396204.220000");
    Undly_81.add_attribute("MultTyp", "0"); // 1
    Undly_81_set.insert("0");
    Undly_81.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_81_set.insert("4");
    Undly_81.add_attribute("UOM", "Bbl"); // 1
    Undly_81_set.insert("Bbl");
    Undly_81.add_attribute("UOMQty", "19343637.480000"); // 1
    Undly_81_set.insert("19343637.480000");
    Undly_81.add_attribute("PxUOM", "lbs"); // 1
    Undly_81_set.insert("lbs");
    Undly_81.add_attribute("PxUOMQty", "10236021.120000"); // 1
    Undly_81_set.insert("10236021.120000");
    Undly_81.add_attribute("TmUnit", "Mo"); // 1
    Undly_81_set.insert("Mo");
    Undly_81.add_attribute("ExerStyle", "1"); // 1
    Undly_81_set.insert("1");
    Undly_81.add_attribute("CpnRt", "6462018.990000"); // 1
    Undly_81_set.insert("6462018.990000");
    Undly_81.add_attribute("Exch", "UnderlyingSecurityExchange_t_893636057"); // 1
    Undly_81_set.insert("UnderlyingSecurityExchange_t_893636057");
    Undly_81.add_attribute("Issr", "UnderlyingIssuer_t_1349546863"); // 1
    Undly_81_set.insert("UnderlyingIssuer_t_1349546863");
    Undly_81.add_attribute("EncUndIssrLen", "1880688231"); // 1
    Undly_81_set.insert("1880688231");
    Undly_81.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_29732520"); // 1
    Undly_81_set.insert("EncodedUnderlyingIssuer_t_29732520");
    Undly_81.add_attribute("Desc", "UnderlyingSecurityDesc_t_1024934938"); // 1
    Undly_81_set.insert("UnderlyingSecurityDesc_t_1024934938");
    Undly_81.add_attribute("EncUndSecDescLen", "1919344226"); // 1
    Undly_81_set.insert("1919344226");
    Undly_81.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1756949561"); // 1
    Undly_81_set.insert("EncodedUnderlyingSecurityDesc_t_1756949561");
    Undly_81.add_attribute("CPPgm", "UnderlyingCPProgram_t_101875442"); // 1
    Undly_81_set.insert("UnderlyingCPProgram_t_101875442");
    Undly_81.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1560584567"); // 1
    Undly_81_set.insert("UnderlyingCPRegType_t_1560584567");
    Undly_81.add_attribute("AllocPct", "8785746.920000"); // 1
    Undly_81_set.insert("8785746.920000");
    Undly_81.add_attribute("Ccy", "USD"); // 1
    Undly_81_set.insert("USD");
    Undly_81.add_attribute("Qty", "4633986.920000"); // 1
    Undly_81_set.insert("4633986.920000");
    Undly_81.add_attribute("SettlTyp", "2"); // 1
    Undly_81_set.insert("2");
    Undly_81.add_attribute("CashAmt", "UnderlyingCashAmount_t_251867706"); // 1
    Undly_81_set.insert("UnderlyingCashAmount_t_251867706");
    Undly_81.add_attribute("CashTyp", "FIXED"); // 1
    Undly_81_set.insert("FIXED");
    Undly_81.add_attribute("Px", "20454341.510000"); // 1
    Undly_81_set.insert("20454341.510000");
    Undly_81.add_attribute("DirtPx", "7740473.800000"); // 1
    Undly_81_set.insert("7740473.800000");
    Undly_81.add_attribute("EndPx", "11026856.080000"); // 1
    Undly_81_set.insert("11026856.080000");
    Undly_81.add_attribute("StartVal", "UnderlyingStartValue_t_164246835"); // 1
    Undly_81_set.insert("UnderlyingStartValue_t_164246835");
    Undly_81.add_attribute("CurVal", "UnderlyingCurrentValue_t_1571471967"); // 1
    Undly_81_set.insert("UnderlyingCurrentValue_t_1571471967");
    Undly_81.add_attribute("EndVal", "UnderlyingEndValue_t_1142306030"); // 1
    Undly_81_set.insert("UnderlyingEndValue_t_1142306030");
    Undly_81.add_attribute("AdjQty", "11526616.240000"); // 1
    Undly_81_set.insert("11526616.240000");
    Undly_81.add_attribute("FxRate", "3122284.380000"); // 1
    Undly_81_set.insert("3122284.380000");
    Undly_81.add_attribute("FxRateCalc", "D"); // 1
    Undly_81_set.insert("D");
    Undly_81.add_attribute("CapValu", "UnderlyingCapValue_t_939541724"); // 1
    Undly_81_set.insert("UnderlyingCapValue_t_939541724");
    Undly_81.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1760214089"); // 1
    Undly_81_set.insert("UnderlyingSettlMethod_t_1760214089");
    Undly_81.add_attribute("PutCall", "1700047635"); // 1
    Undly_81_set.insert("1700047635");
    all_values.push_back(Undly_81_set);
    all_compo_names.insert("Undly_81_set");

    {
      xml_element UndAID_81{"UndAID"};
      multiset<string> UndAID_81_set;
      UndAID_81.add_attribute("AltID", "UnderlyingSecurityAltID_t_41451598"); // 2
      UndAID_81_set.insert("UnderlyingSecurityAltID_t_41451598");
      UndAID_81.add_attribute("AltIDSrc", "L"); // 2
      UndAID_81_set.insert("L");
      all_values.push_back(UndAID_81_set);
      all_compo_names.insert("UndAID_81_set");

      Undly_81.add_element(UndAID_81);
    }
    {
      xml_element Stip_117{"Stip"};
      multiset<string> Stip_117_set;
      Stip_117.add_attribute("Typ", "SECTOR"); // 2
      Stip_117_set.insert("SECTOR");
      Stip_117.add_attribute("Val", "UnderlyingStipValue_t_935087655"); // 2
      Stip_117_set.insert("UnderlyingStipValue_t_935087655");
      all_values.push_back(Stip_117_set);
      all_compo_names.insert("Stip_117_set");

      Undly_81.add_element(Stip_117);
    }
    {
      xml_element Pty_326{"Pty"};
      multiset<string> Pty_326_set;
      Pty_326.add_attribute("ID", "UnderlyingInstrumentPartyID_t_352253484"); // 2
      Pty_326_set.insert("UnderlyingInstrumentPartyID_t_352253484");
      Pty_326.add_attribute("Src", "E"); // 2
      Pty_326_set.insert("E");
      Pty_326.add_attribute("R", "43"); // 2
      Pty_326_set.insert("43");
      all_values.push_back(Pty_326_set);
      all_compo_names.insert("Pty_326_set");

      {
        xml_element Sub_326{"Sub"};
        multiset<string> Sub_326_set;
        Sub_326.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1377188422"); // 3
        Sub_326_set.insert("UnderlyingInstrumentPartySubID_t_1377188422");
        Sub_326.add_attribute("Typ", "19"); // 3
        Sub_326_set.insert("19");
        all_values.push_back(Sub_326_set);
        all_compo_names.insert("Sub_326_set");

        Pty_326.add_element(Sub_326);
      }
      Undly_81.add_element(Pty_326);
    }
    elt.add_element(Undly_81);
  } // end Undly
  { // Undly
    xml_element Undly_82{"Undly"};
    multiset<string> Undly_82_set;
    Undly_82.add_attribute("Sym", "UnderlyingSymbol_t_574286089"); // 1
    Undly_82_set.insert("UnderlyingSymbol_t_574286089");
    Undly_82.add_attribute("Sfx", "WI"); // 1
    Undly_82_set.insert("WI");
    Undly_82.add_attribute("ID", "UnderlyingSecurityID_t_1264415614"); // 1
    Undly_82_set.insert("UnderlyingSecurityID_t_1264415614");
    Undly_82.add_attribute("Src", "B"); // 1
    Undly_82_set.insert("B");
    Undly_82.add_attribute("Prod", "8"); // 1
    Undly_82_set.insert("8");
    Undly_82.add_attribute("CFI", "UnderlyingCFICode_t_1613316004"); // 1
    Undly_82_set.insert("UnderlyingCFICode_t_1613316004");
    Undly_82.add_attribute("SecTyp", "BUYSELL"); // 1
    Undly_82_set.insert("BUYSELL");
    Undly_82.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_930806906"); // 1
    Undly_82_set.insert("UnderlyingSecuritySubType_t_930806906");
    Undly_82.add_attribute("MMY", "1865183711"); // 1
    Undly_82_set.insert("1865183711");
    Undly_82.add_attribute("Mat", "UnderlyingMaturityDate_t_1500703420"); // 1
    Undly_82_set.insert("UnderlyingMaturityDate_t_1500703420");
    Undly_82.add_attribute("MatTm", "828757409"); // 1
    Undly_82_set.insert("828757409");
    Undly_82.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_491747443"); // 1
    Undly_82_set.insert("UnderlyingCouponPaymentDate_t_491747443");
    Undly_82.add_attribute("RestrctTyp", "FR"); // 1
    Undly_82_set.insert("FR");
    Undly_82.add_attribute("Snrty", "SD"); // 1
    Undly_82_set.insert("SD");
    Undly_82.add_attribute("NotlPctOut", "20632194.110000"); // 1
    Undly_82_set.insert("20632194.110000");
    Undly_82.add_attribute("OrigNotlPctOut", "15982114.110000"); // 1
    Undly_82_set.insert("15982114.110000");
    Undly_82.add_attribute("AttchPnt", "21456658.690000"); // 1
    Undly_82_set.insert("21456658.690000");
    Undly_82.add_attribute("DetchPnt", "2279642.010000"); // 1
    Undly_82_set.insert("2279642.010000");
    Undly_82.add_attribute("Issued", "UnderlyingIssueDate_t_127173286"); // 1
    Undly_82_set.insert("UnderlyingIssueDate_t_127173286");
    Undly_82.add_attribute("RepoCollSecTyp", "937723945"); // 1
    Undly_82_set.insert("937723945");
    Undly_82.add_attribute("RepoTrm", "1988178290"); // 1
    Undly_82_set.insert("1988178290");
    Undly_82.add_attribute("RepoRt", "18272209.210000"); // 1
    Undly_82_set.insert("18272209.210000");
    Undly_82.add_attribute("Fctr", "9791755.430000"); // 1
    Undly_82_set.insert("9791755.430000");
    Undly_82.add_attribute("CrdRtg", "UnderlyingCreditRating_t_990884911"); // 1
    Undly_82_set.insert("UnderlyingCreditRating_t_990884911");
    Undly_82.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2025986807"); // 1
    Undly_82_set.insert("UnderlyingInstrRegistry_t_2025986807");
    Undly_82.add_attribute("Ctry", "1914263199"); // 1
    Undly_82_set.insert("1914263199");
    Undly_82.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1343138396"); // 1
    Undly_82_set.insert("UnderlyingStateOrProvinceOfIssue_t_1343138396");
    Undly_82.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1957957277"); // 1
    Undly_82_set.insert("UnderlyingLocaleOfIssue_t_1957957277");
    Undly_82.add_attribute("Redeem", "UnderlyingRedemptionDate_t_731599727"); // 1
    Undly_82_set.insert("UnderlyingRedemptionDate_t_731599727");
    Undly_82.add_attribute("StrkPx", "5728431.700000"); // 1
    Undly_82_set.insert("5728431.700000");
    Undly_82.add_attribute("StrkCcy", "USD"); // 1
    Undly_82_set.insert("USD");
    Undly_82.add_attribute("OptA", "2051907035"); // 1
    Undly_82_set.insert("2051907035");
    Undly_82.add_attribute("Mult", "7787202.910000"); // 1
    Undly_82_set.insert("7787202.910000");
    Undly_82.add_attribute("MultTyp", "2"); // 1
    Undly_82_set.insert("2");
    Undly_82.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_82_set.insert("3");
    Undly_82.add_attribute("UOM", "MMBtu"); // 1
    Undly_82_set.insert("MMBtu");
    Undly_82.add_attribute("UOMQty", "3800387.760000"); // 1
    Undly_82_set.insert("3800387.760000");
    Undly_82.add_attribute("PxUOM", "MWh"); // 1
    Undly_82_set.insert("MWh");
    Undly_82.add_attribute("PxUOMQty", "21097363.580000"); // 1
    Undly_82_set.insert("21097363.580000");
    Undly_82.add_attribute("TmUnit", "Mo"); // 1
    Undly_82_set.insert("Mo");
    Undly_82.add_attribute("ExerStyle", "0"); // 1
    Undly_82_set.insert("0");
    Undly_82.add_attribute("CpnRt", "4540001.540000"); // 1
    Undly_82_set.insert("4540001.540000");
    Undly_82.add_attribute("Exch", "UnderlyingSecurityExchange_t_189163929"); // 1
    Undly_82_set.insert("UnderlyingSecurityExchange_t_189163929");
    Undly_82.add_attribute("Issr", "UnderlyingIssuer_t_976795495"); // 1
    Undly_82_set.insert("UnderlyingIssuer_t_976795495");
    Undly_82.add_attribute("EncUndIssrLen", "369735917"); // 1
    Undly_82_set.insert("369735917");
    Undly_82.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1787375340"); // 1
    Undly_82_set.insert("EncodedUnderlyingIssuer_t_1787375340");
    Undly_82.add_attribute("Desc", "UnderlyingSecurityDesc_t_974977716"); // 1
    Undly_82_set.insert("UnderlyingSecurityDesc_t_974977716");
    Undly_82.add_attribute("EncUndSecDescLen", "597700118"); // 1
    Undly_82_set.insert("597700118");
    Undly_82.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1914548626"); // 1
    Undly_82_set.insert("EncodedUnderlyingSecurityDesc_t_1914548626");
    Undly_82.add_attribute("CPPgm", "UnderlyingCPProgram_t_1912701662"); // 1
    Undly_82_set.insert("UnderlyingCPProgram_t_1912701662");
    Undly_82.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_438394761"); // 1
    Undly_82_set.insert("UnderlyingCPRegType_t_438394761");
    Undly_82.add_attribute("AllocPct", "15942858.990000"); // 1
    Undly_82_set.insert("15942858.990000");
    Undly_82.add_attribute("Ccy", "JPY"); // 1
    Undly_82_set.insert("JPY");
    Undly_82.add_attribute("Qty", "14727890.590000"); // 1
    Undly_82_set.insert("14727890.590000");
    Undly_82.add_attribute("SettlTyp", "2"); // 1
    Undly_82_set.insert("2");
    Undly_82.add_attribute("CashAmt", "UnderlyingCashAmount_t_624934420"); // 1
    Undly_82_set.insert("UnderlyingCashAmount_t_624934420");
    Undly_82.add_attribute("CashTyp", "FIXED"); // 1
    Undly_82_set.insert("FIXED");
    Undly_82.add_attribute("Px", "12427728.350000"); // 1
    Undly_82_set.insert("12427728.350000");
    Undly_82.add_attribute("DirtPx", "11977775.910000"); // 1
    Undly_82_set.insert("11977775.910000");
    Undly_82.add_attribute("EndPx", "7975673.640000"); // 1
    Undly_82_set.insert("7975673.640000");
    Undly_82.add_attribute("StartVal", "UnderlyingStartValue_t_401175004"); // 1
    Undly_82_set.insert("UnderlyingStartValue_t_401175004");
    Undly_82.add_attribute("CurVal", "UnderlyingCurrentValue_t_1102200978"); // 1
    Undly_82_set.insert("UnderlyingCurrentValue_t_1102200978");
    Undly_82.add_attribute("EndVal", "UnderlyingEndValue_t_1576287655"); // 1
    Undly_82_set.insert("UnderlyingEndValue_t_1576287655");
    Undly_82.add_attribute("AdjQty", "10124379.540000"); // 1
    Undly_82_set.insert("10124379.540000");
    Undly_82.add_attribute("FxRate", "14739115.610000"); // 1
    Undly_82_set.insert("14739115.610000");
    Undly_82.add_attribute("FxRateCalc", "D"); // 1
    Undly_82_set.insert("D");
    Undly_82.add_attribute("CapValu", "UnderlyingCapValue_t_1392476731"); // 1
    Undly_82_set.insert("UnderlyingCapValue_t_1392476731");
    Undly_82.add_attribute("SetMeth", "UnderlyingSettlMethod_t_628945402"); // 1
    Undly_82_set.insert("UnderlyingSettlMethod_t_628945402");
    Undly_82.add_attribute("PutCall", "1783093013"); // 1
    Undly_82_set.insert("1783093013");
    all_values.push_back(Undly_82_set);
    all_compo_names.insert("Undly_82_set");

    {
      xml_element UndAID_82{"UndAID"};
      multiset<string> UndAID_82_set;
      UndAID_82.add_attribute("AltID", "UnderlyingSecurityAltID_t_1125735280"); // 2
      UndAID_82_set.insert("UnderlyingSecurityAltID_t_1125735280");
      UndAID_82.add_attribute("AltIDSrc", "2"); // 2
      UndAID_82_set.insert("2");
      all_values.push_back(UndAID_82_set);
      all_compo_names.insert("UndAID_82_set");

      Undly_82.add_element(UndAID_82);
    }
    {
      xml_element Stip_118{"Stip"};
      multiset<string> Stip_118_set;
      Stip_118.add_attribute("Typ", "YTM"); // 2
      Stip_118_set.insert("YTM");
      Stip_118.add_attribute("Val", "UnderlyingStipValue_t_1314899209"); // 2
      Stip_118_set.insert("UnderlyingStipValue_t_1314899209");
      all_values.push_back(Stip_118_set);
      all_compo_names.insert("Stip_118_set");

      Undly_82.add_element(Stip_118);
    }
    {
      xml_element Pty_327{"Pty"};
      multiset<string> Pty_327_set;
      Pty_327.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1589532148"); // 2
      Pty_327_set.insert("UnderlyingInstrumentPartyID_t_1589532148");
      Pty_327.add_attribute("Src", "H"); // 2
      Pty_327_set.insert("H");
      Pty_327.add_attribute("R", "38"); // 2
      Pty_327_set.insert("38");
      all_values.push_back(Pty_327_set);
      all_compo_names.insert("Pty_327_set");

      {
        xml_element Sub_327{"Sub"};
        multiset<string> Sub_327_set;
        Sub_327.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_417026217"); // 3
        Sub_327_set.insert("UnderlyingInstrumentPartySubID_t_417026217");
        Sub_327.add_attribute("Typ", "24"); // 3
        Sub_327_set.insert("24");
        all_values.push_back(Sub_327_set);
        all_compo_names.insert("Sub_327_set");

        Pty_327.add_element(Sub_327);
      }
      Undly_82.add_element(Pty_327);
    }
    elt.add_element(Undly_82);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_19{"OrdQty"};
    multiset<string> OrdQty_19_set;
    OrdQty_19.add_attribute("Qty", "7218558.800000"); // 1
    OrdQty_19_set.insert("7218558.800000");
    OrdQty_19.add_attribute("Cash", "1822442.310000"); // 1
    OrdQty_19_set.insert("1822442.310000");
    OrdQty_19.add_attribute("Pct", "14954403.160000"); // 1
    OrdQty_19_set.insert("14954403.160000");
    OrdQty_19.add_attribute("RndDir", "1"); // 1
    OrdQty_19_set.insert("1");
    OrdQty_19.add_attribute("RndMod", "9266377.880000"); // 1
    OrdQty_19_set.insert("9266377.880000");
    all_values.push_back(OrdQty_19_set);
    all_compo_names.insert("OrdQty_19_set");

    elt.add_element(OrdQty_19);
  } // end OrdQty
  { // RtSrc
    xml_element RtSrc_12{"RtSrc"};
    multiset<string> RtSrc_12_set;
    RtSrc_12.add_attribute("RtSrc", "99"); // 1
    RtSrc_12_set.insert("99");
    RtSrc_12.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_12_set.insert("1");
    RtSrc_12.add_attribute("RefPg", "ReferencePage_t_1402170761"); // 1
    RtSrc_12_set.insert("ReferencePage_t_1402170761");
    all_values.push_back(RtSrc_12_set);
    all_compo_names.insert("RtSrc_12_set");

    elt.add_element(RtSrc_12);
  } // end RtSrc
  { // Stip
    xml_element Stip_119{"Stip"};
    multiset<string> Stip_119_set;
    Stip_119.add_attribute("Typ", "BGNCON"); // 1
    Stip_119_set.insert("BGNCON");
    Stip_119.add_attribute("Val", "StipulationValue_t_452464704"); // 1
    Stip_119_set.insert("StipulationValue_t_452464704");
    all_values.push_back(Stip_119_set);
    all_compo_names.insert("Stip_119_set");

    elt.add_element(Stip_119);
  } // end Stip
  { // Stip
    xml_element Stip_120{"Stip"};
    multiset<string> Stip_120_set;
    Stip_120.add_attribute("Typ", "PRIMARY"); // 1
    Stip_120_set.insert("PRIMARY");
    Stip_120.add_attribute("Val", "StipulationValue_t_934275088"); // 1
    Stip_120_set.insert("StipulationValue_t_934275088");
    all_values.push_back(Stip_120_set);
    all_compo_names.insert("Stip_120_set");

    elt.add_element(Stip_120);
  } // end Stip
  { // Quot
    xml_element Quot_0{"Quot"};
    multiset<string> Quot_0_set;
    Quot_0.add_attribute("Qty", "10035976.030000"); // 1
    Quot_0_set.insert("10035976.030000");
    Quot_0.add_attribute("OrdQty", "19467130.430000"); // 1
    Quot_0_set.insert("19467130.430000");
    Quot_0.add_attribute("SwapTyp", "1"); // 1
    Quot_0_set.insert("1");
    Quot_0.add_attribute("SettlTyp", "C"); // 1
    Quot_0_set.insert("C");
    Quot_0.add_attribute("SettlDt", "LegSettlDate_t_1191706126"); // 1
    Quot_0_set.insert("LegSettlDate_t_1191706126");
    Quot_0.add_attribute("PxTyp", "7"); // 1
    Quot_0_set.insert("7");
    Quot_0.add_attribute("BidPx", "3125636.230000"); // 1
    Quot_0_set.insert("3125636.230000");
    Quot_0.add_attribute("OfrPx", "1699577.580000"); // 1
    Quot_0_set.insert("1699577.580000");
    Quot_0.add_attribute("RefID", "LegRefID_t_2122775651"); // 1
    Quot_0_set.insert("LegRefID_t_2122775651");
    Quot_0.add_attribute("LegBidFwdPnts", "4021731.430000"); // 1
    Quot_0_set.insert("4021731.430000");
    Quot_0.add_attribute("LegOfrFwdPnts", "14848569.670000"); // 1
    Quot_0_set.insert("14848569.670000");
    all_values.push_back(Quot_0_set);
    all_compo_names.insert("Quot_0_set");

    {
      xml_element Leg_68{"Leg"};
      multiset<string> Leg_68_set;
      Leg_68.add_attribute("Sym", "LegSymbol_t_1564824152"); // 2
      Leg_68_set.insert("LegSymbol_t_1564824152");
      Leg_68.add_attribute("Sfx", "WI"); // 2
      Leg_68_set.insert("WI");
      Leg_68.add_attribute("ID", "LegSecurityID_t_292164221"); // 2
      Leg_68_set.insert("LegSecurityID_t_292164221");
      Leg_68.add_attribute("Src", "G"); // 2
      Leg_68_set.insert("G");
      Leg_68.add_attribute("Prod", "3"); // 2
      Leg_68_set.insert("3");
      Leg_68.add_attribute("CFI", "LegCFICode_t_1014020102"); // 2
      Leg_68_set.insert("LegCFICode_t_1014020102");
      Leg_68.add_attribute("SecTyp", "XCN"); // 2
      Leg_68_set.insert("XCN");
      Leg_68.add_attribute("SecSubTyp", "LegSecuritySubType_t_1266520802"); // 2
      Leg_68_set.insert("LegSecuritySubType_t_1266520802");
      Leg_68.add_attribute("MMY", "1182678234"); // 2
      Leg_68_set.insert("1182678234");
      Leg_68.add_attribute("Mat", "LegMaturityDate_t_943248740"); // 2
      Leg_68_set.insert("LegMaturityDate_t_943248740");
      Leg_68.add_attribute("MatTm", "2043757143"); // 2
      Leg_68_set.insert("2043757143");
      Leg_68.add_attribute("CpnPmt", "LegCouponPaymentDate_t_676641777"); // 2
      Leg_68_set.insert("LegCouponPaymentDate_t_676641777");
      Leg_68.add_attribute("Issued", "LegIssueDate_t_233575989"); // 2
      Leg_68_set.insert("LegIssueDate_t_233575989");
      Leg_68.add_attribute("RepoCollSecTyp", "1298444256"); // 2
      Leg_68_set.insert("1298444256");
      Leg_68.add_attribute("RepoTrm", "1453868008"); // 2
      Leg_68_set.insert("1453868008");
      Leg_68.add_attribute("RepoRt", "7666760.740000"); // 2
      Leg_68_set.insert("7666760.740000");
      Leg_68.add_attribute("Fctr", "17509089.600000"); // 2
      Leg_68_set.insert("17509089.600000");
      Leg_68.add_attribute("CrdRtg", "LegCreditRating_t_881177955"); // 2
      Leg_68_set.insert("LegCreditRating_t_881177955");
      Leg_68.add_attribute("Rgstry", "LegInstrRegistry_t_1700951162"); // 2
      Leg_68_set.insert("LegInstrRegistry_t_1700951162");
      Leg_68.add_attribute("Ctry", "1158090994"); // 2
      Leg_68_set.insert("1158090994");
      Leg_68.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1884775558"); // 2
      Leg_68_set.insert("LegStateOrProvinceOfIssue_t_1884775558");
      Leg_68.add_attribute("Lcl", "LegLocaleOfIssue_t_1500180557"); // 2
      Leg_68_set.insert("LegLocaleOfIssue_t_1500180557");
      Leg_68.add_attribute("Redeem", "LegRedemptionDate_t_2039184590"); // 2
      Leg_68_set.insert("LegRedemptionDate_t_2039184590");
      Leg_68.add_attribute("Strk", "4142461.680000"); // 2
      Leg_68_set.insert("4142461.680000");
      Leg_68.add_attribute("StrkCcy", "CHF"); // 2
      Leg_68_set.insert("CHF");
      Leg_68.add_attribute("OptA", "726809792"); // 2
      Leg_68_set.insert("726809792");
      Leg_68.add_attribute("Cmult", "7143607.930000"); // 2
      Leg_68_set.insert("7143607.930000");
      Leg_68.add_attribute("MultTyp", "0"); // 2
      Leg_68_set.insert("0");
      Leg_68.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_68_set.insert("0");
      Leg_68.add_attribute("UOM", "Bbl"); // 2
      Leg_68_set.insert("Bbl");
      Leg_68.add_attribute("UOMQty", "7943724.480000"); // 2
      Leg_68_set.insert("7943724.480000");
      Leg_68.add_attribute("PxUOM", "MMBtu"); // 2
      Leg_68_set.insert("MMBtu");
      Leg_68.add_attribute("PxUOMQty", "3438983.340000"); // 2
      Leg_68_set.insert("3438983.340000");
      Leg_68.add_attribute("TmUnit", "H"); // 2
      Leg_68_set.insert("H");
      Leg_68.add_attribute("ExerStyle", "1"); // 2
      Leg_68_set.insert("1");
      Leg_68.add_attribute("CpnRt", "13579184.360000"); // 2
      Leg_68_set.insert("13579184.360000");
      Leg_68.add_attribute("Exch", "LegSecurityExchange_t_645350121"); // 2
      Leg_68_set.insert("LegSecurityExchange_t_645350121");
      Leg_68.add_attribute("Issr", "LegIssuer_t_880619155"); // 2
      Leg_68_set.insert("LegIssuer_t_880619155");
      Leg_68.add_attribute("EncLegIssrLen", "393113022"); // 2
      Leg_68_set.insert("393113022");
      Leg_68.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1588598862"); // 2
      Leg_68_set.insert("EncodedLegIssuer_t_1588598862");
      Leg_68.add_attribute("Desc", "LegSecurityDesc_t_776892650"); // 2
      Leg_68_set.insert("LegSecurityDesc_t_776892650");
      Leg_68.add_attribute("EncLegSecDescLen", "1069754799"); // 2
      Leg_68_set.insert("1069754799");
      Leg_68.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1822174851"); // 2
      Leg_68_set.insert("EncodedLegSecurityDesc_t_1822174851");
      Leg_68.add_attribute("RatioQty", "20753369.060000"); // 2
      Leg_68_set.insert("20753369.060000");
      Leg_68.add_attribute("Side", "8"); // 2
      Leg_68_set.insert("8");
      Leg_68.add_attribute("Ccy", "USD"); // 2
      Leg_68_set.insert("USD");
      Leg_68.add_attribute("Pool", "LegPool_t_1257317115"); // 2
      Leg_68_set.insert("LegPool_t_1257317115");
      Leg_68.add_attribute("Dated", "LegDatedDate_t_2142318440"); // 2
      Leg_68_set.insert("LegDatedDate_t_2142318440");
      Leg_68.add_attribute("CSetMo", "689369565"); // 2
      Leg_68_set.insert("689369565");
      Leg_68.add_attribute("IntAcrl", "LegInterestAccrualDate_t_994609025"); // 2
      Leg_68_set.insert("LegInterestAccrualDate_t_994609025");
      Leg_68.add_attribute("PutCall", "1495015349"); // 2
      Leg_68_set.insert("1495015349");
      Leg_68.add_attribute("LegOptionRatio", "5810705.070000"); // 2
      Leg_68_set.insert("5810705.070000");
      Leg_68.add_attribute("Px", "14088551.940000"); // 2
      Leg_68_set.insert("14088551.940000");
      all_values.push_back(Leg_68_set);
      all_compo_names.insert("Leg_68_set");

      {
        xml_element LegAID_68{"LegAID"};
        multiset<string> LegAID_68_set;
        LegAID_68.add_attribute("SecAltID", "LegSecurityAltID_t_2039418385"); // 3
        LegAID_68_set.insert("LegSecurityAltID_t_2039418385");
        LegAID_68.add_attribute("SecAltIDSrc", "F"); // 3
        LegAID_68_set.insert("F");
        all_values.push_back(LegAID_68_set);
        all_compo_names.insert("LegAID_68_set");

        Leg_68.add_element(LegAID_68);
      }
      Quot_0.add_element(Leg_68);
    }
    {
      xml_element Stip_121{"Stip"};
      multiset<string> Stip_121_set;
      Stip_121.add_attribute("StipTyp", "MININCR"); // 2
      Stip_121_set.insert("MININCR");
      Stip_121.add_attribute("StipVal", "LegStipulationValue_t_606295530"); // 2
      Stip_121_set.insert("LegStipulationValue_t_606295530");
      all_values.push_back(Stip_121_set);
      all_compo_names.insert("Stip_121_set");

      Quot_0.add_element(Stip_121);
    }
    {
      xml_element Pty_328{"Pty"};
      multiset<string> Pty_328_set;
      Pty_328.add_attribute("ID", "NestedPartyID_t_1212358745"); // 2
      Pty_328_set.insert("NestedPartyID_t_1212358745");
      Pty_328.add_attribute("Src", "G"); // 2
      Pty_328_set.insert("G");
      Pty_328.add_attribute("R", "28"); // 2
      Pty_328_set.insert("28");
      all_values.push_back(Pty_328_set);
      all_compo_names.insert("Pty_328_set");

      {
        xml_element Sub_328{"Sub"};
        multiset<string> Sub_328_set;
        Sub_328.add_attribute("ID", "NestedPartySubID_t_2006731193"); // 3
        Sub_328_set.insert("NestedPartySubID_t_2006731193");
        Sub_328.add_attribute("Typ", "23"); // 3
        Sub_328_set.insert("23");
        all_values.push_back(Sub_328_set);
        all_compo_names.insert("Sub_328_set");

        Pty_328.add_element(Sub_328);
      }
      Quot_0.add_element(Pty_328);
    }
    {
      xml_element BnchmkCurve_0{"BnchmkCurve"};
      multiset<string> BnchmkCurve_0_set;
      BnchmkCurve_0.add_attribute("Ccy", "EUR"); // 2
      BnchmkCurve_0_set.insert("EUR");
      BnchmkCurve_0.add_attribute("Name", "Pfandbriefe"); // 2
      BnchmkCurve_0_set.insert("Pfandbriefe");
      BnchmkCurve_0.add_attribute("Point", "LegBenchmarkCurvePoint_t_212362766"); // 2
      BnchmkCurve_0_set.insert("LegBenchmarkCurvePoint_t_212362766");
      BnchmkCurve_0.add_attribute("Px", "11333368.360000"); // 2
      BnchmkCurve_0_set.insert("11333368.360000");
      BnchmkCurve_0.add_attribute("PxTyp", "1454899648"); // 2
      BnchmkCurve_0_set.insert("1454899648");
      all_values.push_back(BnchmkCurve_0_set);
      all_compo_names.insert("BnchmkCurve_0_set");

      Quot_0.add_element(BnchmkCurve_0);
    }
    elt.add_element(Quot_0);
  } // end Quot
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_21{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_21_set;
    SprdBnchmkCurve_21.add_attribute("Spread", "6054757.890000"); // 1
    SprdBnchmkCurve_21_set.insert("6054757.890000");
    SprdBnchmkCurve_21.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_21_set.insert("JPY");
    SprdBnchmkCurve_21.add_attribute("Name", "EONIA"); // 1
    SprdBnchmkCurve_21_set.insert("EONIA");
    SprdBnchmkCurve_21.add_attribute("Point", "BenchmarkCurvePoint_t_249143254"); // 1
    SprdBnchmkCurve_21_set.insert("BenchmarkCurvePoint_t_249143254");
    SprdBnchmkCurve_21.add_attribute("Px", "121619.090000"); // 1
    SprdBnchmkCurve_21_set.insert("121619.090000");
    SprdBnchmkCurve_21.add_attribute("PxTyp", "1"); // 1
    SprdBnchmkCurve_21_set.insert("1");
    SprdBnchmkCurve_21.add_attribute("SecID", "BenchmarkSecurityID_t_690510531"); // 1
    SprdBnchmkCurve_21_set.insert("BenchmarkSecurityID_t_690510531");
    SprdBnchmkCurve_21.add_attribute("SecIDSrc", "E"); // 1
    SprdBnchmkCurve_21_set.insert("E");
    all_values.push_back(SprdBnchmkCurve_21_set);
    all_compo_names.insert("SprdBnchmkCurve_21_set");

    elt.add_element(SprdBnchmkCurve_21);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_16{"Yield"};
    multiset<string> Yield_16_set;
    Yield_16.add_attribute("Typ", "PUT"); // 1
    Yield_16_set.insert("PUT");
    Yield_16.add_attribute("Yld", "6853453.230000"); // 1
    Yield_16_set.insert("6853453.230000");
    Yield_16.add_attribute("CalcDt", "YieldCalcDate_t_232810044"); // 1
    Yield_16_set.insert("YieldCalcDate_t_232810044");
    Yield_16.add_attribute("RedDt", "YieldRedemptionDate_t_8328592"); // 1
    Yield_16_set.insert("YieldRedemptionDate_t_8328592");
    Yield_16.add_attribute("RedPx", "328770.250000"); // 1
    Yield_16_set.insert("328770.250000");
    Yield_16.add_attribute("RedPxTyp", "3"); // 1
    Yield_16_set.insert("3");
    all_values.push_back(Yield_16_set);
    all_compo_names.insert("Yield_16_set");

    elt.add_element(Yield_16);
  } // end Yield
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
