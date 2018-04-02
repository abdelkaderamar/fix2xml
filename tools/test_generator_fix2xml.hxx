#ifndef TEST_GENERATOR_FIX2XML_HXX
#define TEST_GENERATOR_FIX2XML_HXX

#include "test_generator.hxx"

#include "fix/fix_dico_container.hxx"
#include "fixml/fixml_dico_container.hxx"

#include <memory>
#include <ostream>
#include <string>

class test_generator_fix2xml : public test_generator {
public:
  void generate_group(
      std::ostream &os, const fix2xml::fix_component_type &compo_type,
      const fix2xml::fix_component_type &group_compo_type,
      const std::shared_ptr<fix2xml::fix_dico_container> &dico,
      const std::shared_ptr<fix2xml::fixml_dico_container> &fixml_dico,
      const std::string &field_map, const std::string &parent_type,
      const int level, const std::string var_level,
      const std::string &parent_name);

  void generate_component(
      std::ostream &os, const fix2xml::fix_component_type &compo_type,
      const std::shared_ptr<fix2xml::fix_dico_container> &dico,
      const std::shared_ptr<fix2xml::fixml_dico_container> &fixml_dico,
      const std::string &field_map, const std::string &parent_type,
      const int level, const std::string var_level,
      const std::string &parent_name);

  void generate_test(std::ostream &os, const fix2xml::fix_message_type &msg_type,
                     const std::shared_ptr<fix2xml::fix_dico_container> &dico,
                     const std::shared_ptr<fix2xml::fixml_dico_container> &fixml_dico,
                     const std::string &ns, const std::string &fix_filename,
                     const std::string &xsd_schema) override;

protected:
private:
};

#endif /* end of include guard: TEST_GENERATOR_FIX2XML_HXX */
