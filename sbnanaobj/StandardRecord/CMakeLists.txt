# for classes_def.xml!!
include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

set( PACKAGE sbnanaobj_StandardRecord )
FILE( GLOB src_files *.cxx )

cet_make_library( LIBRARY_NAME sbnanaobj_StandardRecord
                  SOURCE       ${src_files}
                  LIBRARIES    ${ROOT_BASIC_LIB_LIST}
                )

build_dictionary( sbnanaobj_StandardRecord
                  DICTIONARY_LIBRARIES sbnanaobj_StandardRecord
                )

install_headers()
install_source()
