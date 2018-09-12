#ifndef _MEMPOOL_H
#define _MEMPOOL_H




#define DEAFULT_SIZE 10*1024

/*同一时刻只能操作一个内存池*/

/*静态全局内存池*/
typedef struct mempool_s{
	/*下一个内存池*/
	unsigned char * end;
	unsigned char* pos;

	struct mempool_s * netxt;
}mempool_t;

typedef struct memhdr_s
{
	mempool_t d;
	/*当前内存池的数量*/
	int size;
	/*单个内存池的容量*/
	int capacity;
	/*当前使用的内存池*/
	mempool_t *current;
}memhdr_t;

memhdr_t* mem_init(int size, int capacity);
MemErr mem_alloc(mempool_t *m, int size);
MemErr mem_recycle(mempool_t *m, unsigned char p);

#endif//_MEMPOOL_H