File ( GLOB TEST_SRCS */*.cxx )

Add_Executable ( fix2xml_test fix2xml_test.cxx ${TEST_SRCS} )

Target_Link_Libraries ( fix2xml_test
  data util fixml fix
  ${XercesC_LIBRARIES}
  ${GTEST_LIBRARY} pthread )
