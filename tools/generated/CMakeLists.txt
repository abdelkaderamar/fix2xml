#File ( GLOB GEN_TEST_SRCS test_fix2xml_main.cpp test_SecurityStatus.cpp )
File ( GLOB GEN_TEST_SRCS *.cpp )
#File ( GLOB GEN_TEST_SRCS test_fix2xml_main.cpp test_NewOrderSingle.cpp )

# Foreach (file ${GEN_TEST_SRCS})
#   get_filename_component(binary_name ${file} NAME_WE)
#   Message ("Generating binary ${binary_name}")
#   Add_Executable (${binary_name} ${file})
#   target_link_libraries(${binary_name}
#   util data fix fixml quickfix fixml2fix_converter
# ${GTEST_LIBRARY} pthread )
# endforeach(file)

Add_Executable (test_fix2xml ${GEN_TEST_SRCS})
target_link_libraries(test_fix2xml
  util data fix fixml quickfix fixml2fix_converter
  ${GTEST_LIBRARY} pthread )
