FILE(GLOB SR_DEPENDENCIES sbnanaobj/StandardRecord/*.h)

add_custom_command(# Rebuild if anything in StandardRecord/ changes
                   DEPENDS ${SR_DEPENDENCIES}
                   OUTPUT SRProxy.cxx SRProxy.h FwdDeclare.h
                   COMMAND gen_srproxy -i sbnanaobj/StandardRecord/StandardRecord.h -o SRProxy --target caf::StandardRecord --include-path $ENV{SBNANAOBJ_DIR}:$ENV{ROOT_INC} -op sbnanaobj/StandardRecord/Proxy/ --prolog $ENV{SBNANAOBJ_DIR}/sbnanaobj/StandardRecord/Proxy/Prolog.h --epilog-fwd $ENV{SBNANAOBJ_DIR}/sbnanaobj/StandardRecord/Proxy/EpilogFwd.h  --extra-cflags ' -D_Float16=short'
  )

include_directories($ENV{SRPROXY_INC})

# This is a very picky error buried inside template instantiations
#add_definitions(-Wno-int-in-bool-context)

cet_make_library(LIBRARY_NAME sbnanaobj_StandardRecordProxy
                 SOURCE       SRProxy.cxx Instantiations.cxx
                 LIBRARIES    ${ROOT_BASIC_LIB_LIST} ROOT::TreePlayer)

install_headers(EXTRAS $ENV{MRB_BUILDDIR}/sbnanaobj/sbnanaobj/StandardRecord/Proxy/SRProxy.h $ENV{MRB_BUILDDIR}/sbnanaobj/sbnanaobj/StandardRecord/Proxy/FwdDeclare.h)
