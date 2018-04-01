#include "generation_util.hxx"

#include <vector>

using namespace std;

//-----------------------------------------------------------------------------

vector<string> init_tabs(const size_t len) {
  vector<string> v;
  for (size_t i = 0; i <= len; ++i)
    v.push_back(string((i + 1) * 2, ' '));
  return v;
}

//-----------------------------------------------------------------------------

const string &TAB(const int i) {
  static vector<string> TABS;
  if (i >= TABS.size())
    TABS = init_tabs(i);
  return TABS[i];
}

//-----------------------------------------------------------------------------
