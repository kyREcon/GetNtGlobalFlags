#include <Windows.h>
#include <stdio.h>
#include "GetNtGlobalFlags.h"

int main()
{
	unsigned int nt_global_flags;

	int result = GetNtGlobalFlags(&nt_global_flags);

	if (result == GETPROCADDR_FAILED)
	{
		printf("%s \n", "GetProcAddress Failed!");
		getchar();
		return 1;
	}

	printf("GlobalFlags: 0x%lx \n", nt_global_flags);

	if (nt_global_flags == DEBUGGER_FOUND)
		printf("%s \n", "Debugger detected!");
	else
		printf("%s \n", "Debugger not detected!");

	getchar();
	return 0;
}