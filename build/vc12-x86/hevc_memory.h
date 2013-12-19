#ifndef __HEVC_MEMORY__
#define __HEVC_MEMORY__
void  hevc_aligned_free(void * _Memory);
void *hevc_aligned_malloc(int _Size,  int _Alignment);
void *hevc_aligned_realloc(void *_Memory,   int _NewSize,  int _Alignment);
void *hevc_aligned_recalloc(void *_Memory,   int _Count,   int _Size,  int _Alignment);
#endif