# fix library

File ( GLOB FIX_SOURCES *.cxx )

Add_Library ( fix ${FIX_SOURCES} )

Target_Link_Libraries (fix
  data util )
