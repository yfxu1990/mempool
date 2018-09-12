#ifndef _COMMON_H
#define _COMMON_H

#ifndef NULL
	#define NULL 0
#endif//

/*
内存模块错误码
*/
enum MemErr
{
	mem_ok = 0,
	/*切系统内存失败*/
	mem_alloc_err
};
#endif//_COMMON_H