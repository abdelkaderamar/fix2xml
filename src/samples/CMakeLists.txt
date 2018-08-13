#--- XSD parser sample
Add_Executable ( xsd_parser xsd_parser.cxx )
Set_Property (TARGET xsd_parser PROPERTY CXX_STANDARD 14)

Target_Link_Libraries ( xsd_parser util fixml
  ${XercesC_LIBRARY}
  ${Boost_LOG_LIBRARY} pthread )

#--- FIXML to FIX sample
Add_Executable ( fixml2fix_example fixml2fix_example.cxx )
Set_Property (TARGET fixml2fix_example PROPERTY CXX_STANDARD 14)

Target_Link_Libraries ( fixml2fix_example
  util fixml fix fixml2fix_converter
  ${XercesC_LIBRARY}
  ${Boost_LOG_LIBRARY} pthread quickfix)

#--- FIX to FIXML sample
Add_Executable ( fix2fixml_example fix2fixml_example.cxx )
Set_Property (TARGET fix2fixml_example PROPERTY CXX_STANDARD 14)

Target_Link_Libraries ( fix2fixml_example
  util fixml fix fixml2fix_converter
  ${XercesC_LIBRARY}
  ${Boost_LOG_LIBRARY} pthread quickfix)
