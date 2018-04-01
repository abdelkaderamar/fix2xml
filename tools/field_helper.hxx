#ifndef FIELD_HELPER_HXX
#define FIELD_HELPER_HXX

#include "data/fix_types.hxx"
#include "fix/fix_dico_container.hxx"

#include <map>
#include <memory>
#include <ostream>
#include <string>
#include <vector>

class field_helper {
public:
  static void reset();

  static std::string generate_var_name(const std::string &type);

  static std::string generate_timestamp();

  static std::string generate_timeonly();

  static std::string generate_dateonly();

  static std::string generate_currency();

  static std::string
  generate_random_value(const fix2xml::fix_field_type &field_type);

  static bool is_real_number_type(const fix2xml::fix_field_type &field_type);

  static std::string
  generate_field(std::ostream &os, const std::string field_name,
                 const std::string &field_map,
                 const std::shared_ptr<fix2xml::fix_dico_container> &dico,
                 const int level,
                 const std::string &value_set_name);

protected:
  static std::map<std::string, int> _variables;
  static std::vector<std::string> _CURRENCIES;
};

#endif /* end of include guard: FIELD_HELPER_HXX */
