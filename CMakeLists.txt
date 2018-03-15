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

# Compiler
Include_Directories ( ${FIXTOOLS_SOURCE_DIR}/src )

#--- Source directories
Add_Subdirectory ( src )

#--- Test directories
Add_Subdirectory ( test )
