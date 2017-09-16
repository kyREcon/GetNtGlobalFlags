#include "GetNtGlobalFlags.h"

int GetNtGlobalFlags(unsigned int * NtGlobalFlags)
{
	_RtlGetNtGlobalFlags RtlGetNtGlobalFlags = (_RtlGetNtGlobalFlags)(GetProcAddress(GetModuleHandle(L"ntdll.dll"), "RtlGetNtGlobalFlags"));

	if (!RtlGetNtGlobalFlags)
		return GETPROCADDR_FAILED;

	*NtGlobalFlags = RtlGetNtGlobalFlags();
	return GETPROCADDR_SUCCESS;
}