Project ( FIXTOOLS )

Cmake_Minimum_Required ( VERSION 2.8.7 )

#--- Version
Set ( FIXTOOLS_MAJOR_VERSION    0 )
Set ( FIXTOOLS_MINOR_VERSION    0 )
Set ( FIXTOOLS_REVISION_VERSION a)

Set ( FIXTOOLS_VERSION ${FIXTOOLS_MAJOR_VERSION}.${FIXTOOLS_MINOR_VERSION} )
If ( FIXTOOLS_REVISION_VERSION )
  Set ( FIXTOOLS_VERSION ${FIXTOOLS_VERSION}.${FIXTOOLS_REVISION_VERSION} )
Endif ( FIXTOOLS_REVISION_VERSION )

#--- Cmake module path
Set ( CMAKE_MODULE_PATH ${FIXTOOLS_SOURCE_DIR}/cmake )

Set ( CMAKE_BUILD_TYPE "Debug" )

#--- options
OPTION( FIX2XML_TEST       "Build FIXTOOLS tests." OFF )
OPTION( FIX2XML_COVERAGE   "Build FIXTOOLS for coverage." OFF )

Include (CodeCoverage)

#--- Check C++14 is supported (Quickfix uses dynamic exception specifications
#--- but they are removed from the language starting from C++17)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


#--- Dependencies
Find_Package ( Boost COMPONENTS log )
If ( Boost_FOUND )
  Include_Directories ( ${Boost_INCLUDE_DIRS} )
  Add_Definitions ( "-DBOOST_LOG_DYN_LINK" )
Endif ()

Find_Package ( XercesC )
If ( XercesC_FOUND )
  Include_Directories ( ${Xerces_INCLUDE_DIRS} )
Endif()

Find_Package ( GTest )
#--- End dependencies

#--- Add coverage flags
If ( FIX2XML_COVERAGE )
  APPEND_COVERAGE_COMPILER_FLAGS()
Endif ( FIX2XML_COVERAGE )

# Include path
Include_Directories ( ${FIXTOOLS_SOURCE_DIR}/src )
Include_Directories ( ${FIXTOOLS_SOURCE_DIR} )

#--- Source directories
Add_Subdirectory ( src )

#--- Coverage exclude patterns
Set(COVERAGE_EXCLUDES 'boost/*' '/usr/*' 'test/*')

SETUP_TARGET_FOR_COVERAGE (
  NAME fix2xml_coverage
  EXECUTABLE fix2xml_test
  DEPENDENCIES fix2xml_test )

#--- Test directories
If ( FIX2XML_TEST OR FIX2XML_COVERAGE )
  Add_Subdirectory ( test )
Endif( FIX2XML_TEST OR FIX2XML_COVERAGE )


#--- Tools directory
Add_Subdirectory ( tools )
