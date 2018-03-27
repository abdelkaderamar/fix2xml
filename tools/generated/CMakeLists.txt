File ( GLOB GEN_TEST_SRCS *.cpp )

Foreach (file ${GEN_TEST_SRCS})
  get_filename_component(binary_name ${file} NAME_WE)
  Message ("Generating binary ${binary_name}")
  Add_Executable (${binary_name} ${file})
  target_link_libraries(${binary_name}
  util data fix fixml quickfix fixml2fix_converter
${GTEST_LIBRARY} pthread )
endforeach(file)
