# for classes_def.xml!!
include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

set( PACKAGE StandardRecord )
FILE( GLOB src_files *.cxx )

cet_make_library( LIBRARY_NAME StandardRecord
	  	          SOURCE       ${src_files}
	  	          LIBRARIES    ${ROOT_BASIC_LIB_LIST}
                )

build_dictionary( StandardRecord
                  DICTIONARY_LIBRARIES StandardRecord
                 )

install_headers()
install_source()
