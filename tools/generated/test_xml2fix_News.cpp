#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/News.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( News_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"News" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> News_message_t_0;
  elt.add_attribute("ID", "NewsID_t_1907939553");
  elt.add_attribute("NewsCatgy", "3");
  elt.add_attribute("LangCd", "LanguageCode_t_1557461936");
  elt.add_attribute("OrigTm", "OrigTime_t_1376239719");
  elt.add_attribute("Urgency", "1");
  elt.add_attribute("Headline", "Headline_t_1919256723");
  elt.add_attribute("EncHeadlineLen", "1988123784");
  elt.add_attribute("EncHeadline", "EncodedHeadline_t_647669744");
  elt.add_attribute("MktID", "MarketID_t_414697676");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1295986022");
  elt.add_attribute("URL", "URLLink_t_979709848");
  elt.add_attribute("RawDataLength", "663278592");
  elt.add_attribute("RawData", "RawData_t_444916137");
  all_values.push_back(News_message_t_0);
  all_compo_names.insert("News_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
