
lib_LTLIBRARIES = libde265.la

libde265_ladir = \
        $(includedir)/libde265

libde265_la_LDFLAGS = -version-info $(LIBDE265_CURRENT):$(LIBDE265_REVISION):$(LIBDE265_AGE)

libde265_la_SOURCES = \
  bitstream.c \
  cabac.c \
  de265.c \
  deblock.c \
  decctx.c \
  image.c \
  intrapred.c \
  md5.c \
  nal.c \
  pps.c \
  transform.c \
  refpic.c \
  sao.c \
  scan.c \
  sei.c \
  slice.c \
  sps.c \
  util.c \
  vps.c \
  bitstream.h \
  cabac.h \
  deblock.h \
  decctx.h \
  image.h \
  intrapred.h \
  md5.h \
  nal.h \
  pps.h \
  pps_func.h \
  transform.h \
  refpic.h \
  sao.h \
  scan.h \
  sei.h \
  slice.h \
  slice_func.h \
  sps.h \
  util.h \
  vps.h \
  motion.c motion.h motion_func.h \
  threads.c threads.h \
  fallback.c fallback.h fallback-motion.c fallback-motion.h \
  fallback-dct.h fallback-dct.c

if ENABLE_SSE_OPT
  libde265_la_SOURCES += x86/sse.c x86/sse.h x86/sse-motion.c x86/sse-motion.h \
    x86/sse-dct.h x86/sse-dct.c
endif

libde265_la_HEADERS = \
  de265.h
