#pragma once

namespace fix2xml
{
  class fixml_dico_container;

  class fixml_dico_validator
  {
  public:

    static bool validate(const fixml_dico_container& fixml_dico);
  };

}
