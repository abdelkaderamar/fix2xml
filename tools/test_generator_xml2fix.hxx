#ifndef TEST_GENERATOR_XML2FIX_HXX
#define TEST_GENERATOR_XML2FIX_HXX

#include "test_generator.hxx"

#include "test_generator.hxx"

#include "fix/fix_dico_container.hxx"
#include "fixml/fixml_dico_container.hxx"

#include <memory>
#include <ostream>
#include <string>

class test_generator_xml2fix : public test_generator {
public:
  void generate_test(
      std::ostream &os, const fix2xml::fix_message_type &msg_type,
      const std::shared_ptr<fix2xml::fix_dico_container> &dico,
      const std::shared_ptr<fix2xml::fixml_dico_container> &fixml_dico,
      const std::string &ns, const std::string &fix_filename,
      const std::string &xsd_schema) override;

  void generate_component(std::ostream &os,
                          const fix2xml::fixml_component_data &compo,
                          const int level, const std::string &parent_elt_name);

protected:
private:
};

#endif /* end of include guard: TEST_GENERATOR_XML2FIX_HXX */
