FILE(GLOB SR_DEPENDENCIES sbnanaobj/StandardRecord/*.h)

# -fsized-deallocation flag needed when compiling with e26
# see https://cdcvs.fnal.gov/redmine/issues/28197
add_custom_command(# Rebuild if anything in StandardRecord/ changes
                   DEPENDS ${SR_DEPENDENCIES}
                   OUTPUT SRProxy.cxx SRProxy.h FwdDeclare.h
                   COMMAND gen_srproxy -i sbnanaobj/StandardRecord/StandardRecord.h -o SRProxy --target caf::StandardRecord --include-path ${PROJECT_SOURCE_DIR} -op sbnanaobj/StandardRecord/Proxy/ --prolog ${CMAKE_CURRENT_SOURCE_DIR}/Prolog.h --epilog-fwd ${CMAKE_CURRENT_SOURCE_DIR}/EpilogFwd.h  --extra-cflags ' -D_Float16=short -fsized-deallocation'
  )

find_program(GEN_SRPROXY_EXECUTABLE gen_srproxy REQUIRED)
get_filename_component(_srproxy_bin_dir "${GEN_SRPROXY_EXECUTABLE}" DIRECTORY)

# This is a very picky error buried inside template instantiations
#add_definitions(-Wno-int-in-bool-context)

cet_make_library(LIBRARY_NAME sbnanaobj_StandardRecordProxy
                 SOURCE       SRProxy.cxx Instantiations.cxx
                 LIBRARIES    ROOT::TreePlayer)
target_include_directories(sbnanaobj_StandardRecordProxy PRIVATE ${_srproxy_bin_dir}/../include)

if (DEFINED ENV{MRB_BUILDDIR})
  install_headers(EXTRAS $ENV{MRB_BUILDDIR}/sbnanaobj/sbnanaobj/StandardRecord/Proxy/SRProxy.h $ENV{MRB_BUILDDIR}/sbnanaobj/sbnanaobj/StandardRecord/Proxy/FwdDeclare.h)
else()
  install_headers(EXTRAS ${CMAKE_BINARY_DIR}/sbnanaobj/StandardRecord/Proxy/SRProxy.h ${CMAKE_BINARY_DIR}/sbnanaobj/StandardRecord/Proxy/FwdDeclare.h)
endif()
