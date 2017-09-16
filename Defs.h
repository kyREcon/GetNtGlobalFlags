#ifndef DEFS_H_
#define DEFS_H_

typedef unsigned int(__stdcall * _RtlGetNtGlobalFlags)();

#define GETPROCADDR_SUCCESS 0
#define GETPROCADDR_FAILED -1
#define DEBUGGER_FOUND 0x70

#endif