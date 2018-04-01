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
OPTION( FIX2XML_COVERAGE   "Build FIXTOOLS for coverage." OFF )

Include (CodeCoverage)

# C++11
# Add_Definitions ( "-std=c++11" )

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

If ( FIX2XML_COVERAGE )
  APPEND_COVERAGE_COMPILER_FLAGS()
Endif ( FIX2XML_COVERAGE )

# Include path
Include_Directories ( ${FIXTOOLS_SOURCE_DIR}/src )
Include_Directories ( ${FIXTOOLS_SOURCE_DIR} )

#--- Source directories
Add_Subdirectory ( src )

Set(COVERAGE_EXCLUDES 'boost/*' '/usr/*' 'test/*')

SETUP_TARGET_FOR_COVERAGE (
  NAME fix2xml_coverage
  EXECUTABLE fix2xml_test
  DEPENDENCIES fix2xml_test )

#--- Test directories
Add_Subdirectory ( test )

#--- Tools directory
Add_Subdirectory ( tools )
