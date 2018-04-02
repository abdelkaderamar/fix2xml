#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStatus_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListStat" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStatus_message_t_0;
  elt.add_attribute("ID", "ListID_t_577926790");
  elt.add_attribute("ListStatTyp", "4");
  elt.add_attribute("NoRpts", "1861506827");
  elt.add_attribute("ListOrdStat", "3");
  elt.add_attribute("ContingencyType", "4");
  elt.add_attribute("ListRejectReason", "99");
  elt.add_attribute("RptSeq", "351629584");
  elt.add_attribute("ListStatText", "ListStatusText_t_1261802591");
  elt.add_attribute("EncListStatTextLen", "1472939802");
  elt.add_attribute("EncListStatText", "EncodedListStatusText_t_791023282");
  elt.add_attribute("TxnTm", "TransactTime_t_2090503945");
  elt.add_attribute("TotNoOrds", "968114775");
  elt.add_attribute("LastFragment", "N");
  all_values.push_back(ListStatus_message_t_0);
  all_compo_names.insert("ListStatus_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
