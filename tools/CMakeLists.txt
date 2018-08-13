### Test generator
Add_Executable (test_generator test_generator_main.cxx
  generation_util.cxx field_helper.cxx test_generator.cxx
  test_generator_fix2xml.cxx test_generator_xml2fix.cxx)
Target_Link_Libraries (test_generator
util data fix fixml)
Set_Property (TARGET test_generator PROPERTY CXX_STANDARD 14)

### FIX2XML tests
If ( FIX2XML_TEST )
  File ( GLOB FIX2XML_TEST_SRCS test_main.cxx generated/fix2xml/test_fix2xml_*.cpp )
  #File ( GLOB FIX2XML_TEST_SRCS test_main.cxx generated/fix2xml/test_fix2xml_BidResponse.cpp )
  Add_Executable (test_fix2xml ${FIX2XML_TEST_SRCS})
  target_link_libraries(test_fix2xml
    util data fix fixml quickfix fixml2fix_converter
    ${GTEST_LIBRARY} pthread )
  Set_Property (TARGET test_fix2xml PROPERTY CXX_STANDARD 14)

  ### XML2FIX tests
  File ( GLOB XML2FIX_TEST_SRCS test_main.cxx generated/xml2fix/test_xml2fix_*.cpp )
  #File ( GLOB XML2FIX_TEST_SRCS test_main.cxx generated/xml2fix/test_xml2fix_BidResponse.cpp )
  Add_Executable (test_xml2fix ${XML2FIX_TEST_SRCS})
  target_link_libraries(test_xml2fix
    util data fix fixml quickfix fixml2fix_converter
  ${GTEST_LIBRARY} pthread )
  Set_Property (TARGET test_xml2fix PROPERTY CXX_STANDARD 14)
Endif ( FIX2XML_TEST )
