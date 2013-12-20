#include "hevc_memory.h"

#define NULL_POINTER	void*
#define IS_2_POW_N(x)   (((x)&(x-1)) == 0)

void hevc_aligned_free(void *memblock)
{
	uintptr_t *pHdr;
	if (memblock == NULL)
		return;
	pHdr = (uintptr_t *)((uintptr_t)memblock & ~(sizeof(uintptr_t)-1)) - 1;
	free((void*)(*pHdr));
}

void *hevc_aligned_malloc(size_t size, size_t align)
{
	uintptr_t ptr, r_ptr;
	uintptr_t *pHdr;
	size_t nonuser_size, block_size;
	if (!IS_2_POW_N(align))return NULL;
	align = (align > sizeof(NULL_POINTER) ? align : sizeof(NULL_POINTER)) - 1;
	
	nonuser_size = align + sizeof(NULL_POINTER);
	block_size = size + nonuser_size;
	if ((ptr = (uintptr_t)malloc(block_size)) == (uintptr_t)NULL)
		return NULL;

	r_ptr = ((ptr + nonuser_size)&~align);
	pHdr = (uintptr_t *)r_ptr - 1;
	*pHdr = ptr;//store the real address.
	return (void *)r_ptr;
}
