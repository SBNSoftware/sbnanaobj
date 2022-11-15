# for classes_def.xml!!
include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )

set( PACKAGE sbnanaobj_Morgue )
FILE( GLOB src_files *.cxx )

cet_make_library( LIBRARY_NAME sbnanaobj_Morgue
                  SOURCE       ${src_files}
                  LIBRARIES    ROOT::Core
                )

build_dictionary( sbnanaobj_Morgue
                  DICTIONARY_LIBRARIES sbnanaobj_Morgue
                )

install_headers()
install_source()
