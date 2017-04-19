#ifndef __DEBUG_H__
#define __DEBUG_H__

#if  DEBUG > 0
#define debug(format, ...) printf("[%16d] "" File:%s, Line:%d, Function:%s\r\n"format, osKernelSysTick(),__FILE__, __LINE__ , __FUNCTION__, ##__VA_ARGS__); 
#else
#define debug(format, ...) 
#endif

void do_something();










#endif