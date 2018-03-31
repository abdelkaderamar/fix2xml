Add_Executable (test_generator test_generator.cxx)

Target_Link_Libraries (test_generator
util data fix fixml)

#add_subdirectory(generated)

#File ( GLOB GEN_TEST_SRCS test_fix2xml_main.cpp generated/test_QuoteCancel.cpp )
File ( GLOB GEN_TEST_SRCS test_fix2xml_main.cpp generated/*.cpp )

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
