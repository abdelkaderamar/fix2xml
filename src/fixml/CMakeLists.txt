# fixml library

File ( GLOB FIXML_SOURCES *.cxx )

Add_Library ( fixml ${FIXML_SOURCES} )

Target_Link_Libraries (fixml
  data util
  ${Boost_LOG_LIBRARY}
  )
