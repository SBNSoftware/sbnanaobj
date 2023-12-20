FILE(GLOB SR_DEPENDENCIES sbnanaobj/StandardRecord/*.h)

add_custom_command(# Rebuild if anything in StandardRecord/ changes
                   DEPENDS ${SR_DEPENDENCIES}
                   OUTPUT FlatRecord.cxx FlatRecord.h FwdDeclare.h
                   COMMAND gen_srproxy --flat -i sbnanaobj/StandardRecord/StandardRecord.h -o FlatRecord --target caf::StandardRecord --include-path $ENV{SBNANAOBJ_DIR}:$ENV{ROOT_INC} -op sbnanaobj/StandardRecord/Flat/ --prolog $ENV{SBNANAOBJ_DIR}/sbnanaobj/StandardRecord/Flat/Prolog.h --extra-cflags ' -D_Float16=short'
  )

include_directories($ENV{SRPROXY_INC})

cet_make_library(LIBRARY_NAME sbnanaobj_StandardRecordFlat
                 SOURCE       FlatRecord.cxx
                 LIBRARIES    ROOT::TreePlayer
                 )
if (DEFINED ENV{MRB_BUILDDIR})
  install_headers(EXTRAS $ENV{MRB_BUILDDIR}/sbnanaobj/sbnanaobj/StandardRecord/Flat/FlatRecord.h $ENV{MRB_BUILDDIR}/sbnanaobj/sbnanaobj/StandardRecord/Flat/FwdDeclare.h)
else()
  install_headers(EXTRAS ${CMAKE_BINARY_DIR}/sbnanaobj/StandardRecord/Flat/FlatRecord.h ${CMAKE_BINARY_DIR}/sbnanaobj/StandardRecord/Flat/FwdDeclare.h)
endif()
