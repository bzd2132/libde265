#ifndef __HEVC_MEMORY__
#define __HEVC_MEMORY__
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C"{
#endif
	void  hevc_aligned_free(void *memblock);
	void *hevc_aligned_malloc(size_t size, size_t align);
#ifdef __cplusplus
}
#endif

#endif //__HEVC_MEMORY__