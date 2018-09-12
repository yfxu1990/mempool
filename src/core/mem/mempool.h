#ifndef _MEMPOOL_H
#define _MEMPOOL_H




#define DEAFULT_SIZE 10*1024

/*ͬһʱ��ֻ�ܲ���һ���ڴ��*/

/*��̬ȫ���ڴ��*/
typedef struct mempool_s{
	/*��һ���ڴ��*/
	unsigned char * end;
	unsigned char* pos;

	struct mempool_s * netxt;
}mempool_t;

typedef struct memhdr_s
{
	mempool_t d;
	/*��ǰ�ڴ�ص�����*/
	int size;
	/*�����ڴ�ص�����*/
	int capacity;
	/*��ǰʹ�õ��ڴ��*/
	mempool_t *current;
}memhdr_t;

memhdr_t* mem_init(int size, int capacity);
MemErr mem_alloc(mempool_t *m, int size);
MemErr mem_recycle(mempool_t *m, unsigned char p);

#endif//_MEMPOOL_H