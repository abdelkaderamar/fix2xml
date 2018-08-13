# converter library

File ( GLOB CONVERTER_FIX_SOURCES *.cxx )

Add_Library ( fixml2fix_converter ${CONVERTER_FIX_SOURCES} )

Target_Link_Libraries (fixml2fix_converter
  data util fix fixml )
