#include "common.h"
#include "mempool.h"
#include <malloc.h>


memhdr_t* mem_init(int size, int capacity)
{
	memhdr_s *m = (memhdr_s*)malloc(capacity + sizeof(memhdr_s));
	if (!m)
	{
		return NULL;
	}
	m->d.pos = (unsigned char*)m + capacity;
	m->current = &m->d;
	m->capacity = capacity;
	m->size = 1;
	return m;
}
void* mem_alloc(memhdr_s *m, int size){
	return NULL;
}
MemErr mem_recycle(memhdr_s *m, unsigned char p)
{
	return mem_ok;
}