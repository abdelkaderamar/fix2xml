# fixml library

File ( GLOB FIXML_FIX_SOURCES *.cxx )

Add_Library ( fixml2fix_converter ${FIXML_FIX_SOURCES} )

Target_Link_Libraries (fixml2fix_converter
  data util fix fixml )
