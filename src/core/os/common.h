#ifndef _COMMON_H
#define _COMMON_H

#ifndef NULL
	#define NULL 0
#endif//

/*
�ڴ�ģ�������
*/
enum MemErr
{
	mem_ok = 0,
	/*��ϵͳ�ڴ�ʧ��*/
	mem_alloc_err
};
#endif//_COMMON_H