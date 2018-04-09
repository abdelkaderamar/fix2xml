#ifndef TEST_GENERATOR_HXX
#define TEST_GENERATOR_HXX

#include "fix/fix_parser.hxx"
#include "fixml/fixml_xsd_parser.hxx"

#include <memory>
#include <ostream>
#include <string>

class test_generator {
public:
  test_generator();

  virtual ~test_generator();

  bool init(const char *fix_filename, const char *fixt_filename, const char *ns,
            const char *xsd_filename);

  void generate(const std::string &filename_prefix);

  void generate_message_test(
      const std::string &filename_prefix,
      const fix2xml::fix_message_type &msg_type,
      const std::shared_ptr<fix2xml::fix_dico_container> &dico,
      const std::shared_ptr<fix2xml::fixml_dico_container> &fixml_dico,
      const std::string &ns, const std::string &fix_filename,
      const std::string &fixt_filename, 
      const std::string &xsd_schema);

  void generate_header(std::ostream &os,
                       const fix2xml::fix_message_type &msg_type,
                       const std::shared_ptr<fix2xml::fix_dico_container> &dico,
                       const std::string &ns);

  virtual void generate_test(
      std::ostream &os, const fix2xml::fix_message_type &msg_type,
      const std::shared_ptr<fix2xml::fix_dico_container> &dico,
      const std::shared_ptr<fix2xml::fixml_dico_container> &fixml_dico,
      const std::string &ns, const std::string &fix_filename,
      const std::string &fixt_filename,
      const std::string &xsd_schema) = 0;

  static bool is_fixt_message(const std::string &msg_type,
                              const std::string &ns);

protected:
  fix2xml::fix_parser _parser;
  fix2xml::fixml_xsd_parser _xsd_parser;

  std::string _fix_filename;
  std::string _fixt_filename;
  std::string _fix_ns;
  std::string _xsd_filename;

private:
};

#endif /* end of include guard: TEST_GENERATOR_HXX */
