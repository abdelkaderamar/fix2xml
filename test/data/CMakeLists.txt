# data test library

File ( GLOB TEST_DATA_SOURCES *.cxx )

Add_Library ( test_data ${TEST_DATA_SOURCES} )

#Target_Link_Libraries ( test_data data )
