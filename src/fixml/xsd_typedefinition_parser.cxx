// MIT License
//
// Copyright 2018 Abdelkader Amar
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#include "xsd_typedefinition_parser.hxx"

#include "util/xml_string.hxx"

#include <xercesc/framework/psvi/XSTypeDefinition.hpp>
#include <xercesc/framework/psvi/XSSimpleTypeDefinition.hpp>
#include <xercesc/framework/psvi/XSComplexTypeDefinition.hpp>
#include <xercesc/framework/psvi/XSAttributeUse.hpp>
#include <xercesc/framework/psvi/XSAttributeDeclaration.hpp>
#include <xercesc/framework/psvi/XSParticle.hpp>
#include <xercesc/framework/psvi/XSElementDeclaration.hpp>
#include <xercesc/framework/psvi/XSModelGroup.hpp>

namespace fix2xml
{
  XERCES_CPP_NAMESPACE_USE
  using namespace std;

  //----------------------------------------------------------------------------

  bool xsd_typedefinition_parser::parse_type_definition(XSTypeDefinition* xs_type_def,
                                                        fixml_type& type)
  {
    string name = xml_string::to_string(xs_type_def->getName());
    string ns = xml_string::to_string(xs_type_def->getNamespace());
    string base_type = xml_string::to_string(xs_type_def->getBaseType()->getName());
    fixml_type_category cat = (xs_type_def->getTypeCategory() == XSTypeDefinition::SIMPLE_TYPE) ?
      fixml_type_category::SIMPLE : fixml_type_category::COMPLEX;
    type._name = name;
    type._ns = ns;
    type._base_type = base_type;
    type._category = cat;
    type._fullname = name + "#" + base_type;

    if (cat == fixml_type_category::COMPLEX)
      return parse_complex_type((XSComplexTypeDefinition*)xs_type_def, type);

    return true;
  }

  //----------------------------------------------------------------------------

  bool xsd_typedefinition_parser::parse_complex_type(XSComplexTypeDefinition* xs_type_def,
                                                     fixml_type& type)
  {
    XSAttributeUseList *attr_list = xs_type_def->getAttributeUses();
    if (attr_list != nullptr) parse_attributes(xs_type_def, type, attr_list);

    XSComplexTypeDefinition::CONTENT_TYPE content_type = xs_type_def->getContentType();
    if (content_type == XSComplexTypeDefinition::CONTENTTYPE_ELEMENT ||
        content_type == XSComplexTypeDefinition::CONTENTTYPE_MIXED) {
      parse_components(xs_type_def, type, xs_type_def->getParticle());
    }
    return true;
  }


  //----------------------------------------------------------------------------

  bool xsd_typedefinition_parser::parse_attributes(XSComplexTypeDefinition* xs_type_def,
                                                   fixml_type& type,
                                                   XSAttributeUseList *attr_list)
  {
    for (size_t i=0; i<attr_list->size(); ++i) {
      XSAttributeUse *attr_use = attr_list->elementAt(i);
      XSAttributeDeclaration * attr_decl = attr_use->getAttrDeclaration();
      string attr_name = xml_string::to_string(attr_decl->getName());
      string attr_type = xml_string::to_string(attr_decl->getTypeDefinition()->getName());;
      fixml_field_data field{attr_name, attr_type};
      type.add_field(field);
    }
    return true;
  }


  //----------------------------------------------------------------------------

  bool xsd_typedefinition_parser::parse_components(XSComplexTypeDefinition* xs_type_def,
                                                   fixml_type& type,
                                                   XSParticle *particle)
  {
    XSParticle::TERM_TYPE term_type = particle->getTermType();
    if (term_type == XSParticle::TERM_ELEMENT) {
      XSElementDeclaration *xs_elt = particle->getElementTerm();
      string name = xml_string::to_string(xs_elt->getName());
      string compo_type = xml_string::to_string(xs_elt->getTypeDefinition()->getName());
      size_t min_occurs = particle->getMinOccurs();
      size_t max_occurs = particle->getMaxOccurs();

      fixml_component_data component{name, compo_type, min_occurs, max_occurs};
      type.add_component(component);
    }
    else if (term_type == XSParticle::TERM_MODELGROUP) {
      XSModelGroup * xs_model_group = particle->getModelGroupTerm();
      XSParticleList * particle_list = xs_model_group->getParticles();
      for (size_t i=0; i<particle_list->size(); ++i) {
        parse_components(xs_type_def, type, particle_list->elementAt(i));
      }
    }
    return true;
  } // end parse_components


  //----------------------------------------------------------------------------



  //----------------------------------------------------------------------------



  //----------------------------------------------------------------------------



}
