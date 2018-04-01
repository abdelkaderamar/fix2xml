### FIX to XML test generator
Add_Executable (fix2xml_test_generator fix2xml_test_generator.cxx
  generation_util.cxx field_helper.cxx)
Target_Link_Libraries (fix2xml_test_generator
  util data fix fixml)

### FIX to XML test generator
Add_Executable (xml2fix_test_generator xml2fix_test_generator.cxx)
Target_Link_Libraries (xml2fix_test_generator
  util data fix fixml)

### FIX2XML tests
File ( GLOB FIX2XML_TEST_SRCS test_fix2xml_main.cpp generated/test_fix2xml_*.cpp )
Add_Executable (test_fix2xml ${FIX2XML_TEST_SRCS})
target_link_libraries(test_fix2xml
  util data fix fixml quickfix fixml2fix_converter
  ${GTEST_LIBRARY} pthread )
