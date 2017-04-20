lib_LTLIBRARIES = libreflex.la

AM_CPPFLAGS = -I@jdk@/include -I@jdk@/include/linux -I/kozyrakis/users/anakli/libevent/include
libreflex_la_LIBADD = -L/usr/local/lib -levent -levent_core -levent_pthreads -levent_extra -levent_openssl
include_HEADERS = src/stanford_mast_reflex_NativeDispatcher.h
libreflex_la_SOURCES = src/stanford_mast_reflex_NativeDispatcher.cpp

AM_CPPFLAGS = -I@jdk@/include -I@jdk@/include/linux -I@spdk@/include -I@dpdk@/include/dpdk -include @spdk@/config.h -I@spdk@/lib/nvme -I/kozyrakis/users/anakli/libevent/include
include_HEADERS = stanford_mast_reflex_NativeDispatcher.h
libreflex_la_SOURCES = stanford_mast_reflex_NativeDispatcher.cpp
#libreflex_la_LIBADD = -L@spdk@/build/lib -lspdk_nvmf -lspdk_nvme -lspdk_env_dpdk -lspdk_log -lspdk_util -lspdk_trace -L/usr/local/lib -levent
libreflex_la_LIBADD = -L/usr/local/lib -levent -levent_core -levent_pthreads -levent_extra -levent_openssl
endif
