File ( GLOB TEST_SRCS */*.cxx )

Add_Executable ( fix2xml_test fix2xml_test.cxx ${TEST_SRCS} )

Set ( RES_DIR ${CMAKE_BINARY_DIR}/res )
File (MAKE_DIRECTORY ${RES_DIR} )

Configure_File( res/fixml-with-four-types.xsd
${RES_DIR}/fixml-with-four-types.xsd COPYONLY)

Configure_File( res/fix-BC.xml
${RES_DIR}/fix-BC.xml COPYONLY)


Target_Link_Libraries ( fix2xml_test
  data util fixml fix
  ${XercesC_LIBRARIES}
  ${GTEST_LIBRARY} pthread )
