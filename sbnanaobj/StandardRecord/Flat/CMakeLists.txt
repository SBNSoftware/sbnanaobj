FILE(GLOB SR_DEPENDENCIES sbnanaobj/StandardRecord/*.h)

# -fsized-deallocation flag needed when compiling with e26
# see https://cdcvs.fnal.gov/redmine/issues/28197
add_custom_command(# Rebuild if anything in StandardRecord/ changes
                   DEPENDS ${SR_DEPENDENCIES}
                   OUTPUT FlatRecord.cxx FlatRecord.h FwdDeclare.h
                   COMMAND gen_srproxy --flat -i sbnanaobj/StandardRecord/StandardRecord.h -o FlatRecord --target caf::StandardRecord --include-path ${PROJECT_SOURCE_DIR} -op sbnanaobj/StandardRecord/Flat/ --prolog ${CMAKE_CURRENT_SOURCE_DIR}/Prolog.h --extra-cflags ' -D_Float16=short -fsized-deallocation'
  )

find_program(GEN_SRPROXY_EXECUTABLE gen_srproxy REQUIRED)
get_filename_component(_srproxy_bin_dir "${GEN_SRPROXY_EXECUTABLE}" DIRECTORY)

cet_make_library(LIBRARY_NAME sbnanaobj_StandardRecordFlat
                 SOURCE       FlatRecord.cxx
                 LIBRARIES    ROOT::TreePlayer
                 )
target_include_directories(sbnanaobj_StandardRecordFlat PRIVATE ${_srproxy_bin_dir}/../include)

if (DEFINED ENV{MRB_BUILDDIR})
  install_headers(EXTRAS $ENV{MRB_BUILDDIR}/sbnanaobj/sbnanaobj/StandardRecord/Flat/FlatRecord.h $ENV{MRB_BUILDDIR}/sbnanaobj/sbnanaobj/StandardRecord/Flat/FwdDeclare.h)
else()
  install_headers(EXTRAS ${CMAKE_BINARY_DIR}/sbnanaobj/StandardRecord/Flat/FlatRecord.h ${CMAKE_BINARY_DIR}/sbnanaobj/StandardRecord/Flat/FwdDeclare.h)
endif()
