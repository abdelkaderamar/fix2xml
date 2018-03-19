Add_Executable ( xsd_parser xsd_parser.cxx )

Target_Link_Libraries ( xsd_parser util fixml
  ${XercesC_LIBRARY}
  ${Boost_LOG_LIBRARY} pthread )


Add_Executable ( fixml2fix_example fixml2fix_example.cxx )

Target_Link_Libraries ( fixml2fix_example
  util fixml fix fixml2fix_converter
  ${XercesC_LIBRARY}
  ${Boost_LOG_LIBRARY} pthread quickfix)

Add_Executable ( fix2fixml_example fix2fixml_example.cxx )

Target_Link_Libraries ( fix2fixml_example
  util fixml fix fixml2fix_converter
  ${XercesC_LIBRARY}
  ${Boost_LOG_LIBRARY} pthread quickfix)
