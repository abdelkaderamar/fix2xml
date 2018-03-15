#pragma once

#include "data/fix_types.hxx"

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/identity.hpp>
#include <boost/multi_index/member.hpp>

#include <map>

namespace fix2xml
{

  typedef boost::multi_index::multi_index_container<
    fix_message_type,
    boost::multi_index::indexed_by<
      // Index by type name
      boost::multi_index::ordered_unique<
        boost::multi_index::member<fix_base_type, std::string, &fix_base_type::_name >
        >,
      // Index by msg_type
      boost::multi_index::ordered_unique<
        boost::multi_index::member<fix_message_type, std::string, &fix_message_type::_msgtype >
        >
      > // end indexed_by
    > fix_message_multi_index_container;

  class fix_dico_container
  {
  public:
    fix_dico_container();

    virtual ~fix_dico_container();

    void add_message(const fix_message_type& msg);
    void add_component(const fix_component_type& compo);
    void add_field(const fix_field_type& field);

    std::string to_string() const;

    // const std::map<std::string, fix_message_type> messages() const { return _messages; }
    const fix_message_multi_index_container messages() const { return _messages; }
    const std::map<std::string, fix_component_type> components() const { return _components; }
    const std::map<std::string, fix_field_type> fields() const { return _fields; }

    template<typename T>
    static bool get_fix_item(const std::string& name,
                      T& item,
                      const std::map<std::string, T>& container) {
      const auto it = container.find(name);
      if (it == container.end()) return false;
      item = it->second;
      return true;
    }

    bool get_fix_message_by_name(const std::string& name,
                                 fix_message_type& msg) const;

    bool get_fix_message_by_type(const std::string& msgtype,
                                 fix_message_type& msg) const;

    bool get_fix_component(const std::string& name,
                           fix_component_type& compo) const {
      return get_fix_item(name, compo, _components);
    }

    bool get_fix_field(const std::string& name,
                           fix_field_type& field) const {
      return get_fix_item(name, field, _fields);
    }

    bool get_fix_group_tag(const std::string& name,
                           fix_component_type& type, int& tag) const;

  protected:

    // std::map<std::string, fix_message_type> _messages;
    fix_message_multi_index_container _messages;
    std::map<std::string, fix_component_type> _components;
    std::map<std::string, fix_field_type> _fields;

    fix_message_multi_index_container::nth_index<0>::type& _msg_name_index;
    fix_message_multi_index_container::nth_index<1>::type& _msg_msgtype_index;

  private:

  };

}
