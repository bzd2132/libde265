#ifndef _CPUINFO_H_
#define _CPUINFO_H_

typedef struct _cpuinfo
{
	bool support_sse2;
	bool support_sse3;
	bool support_sse4_1;
	bool support_sse4_2;
	int core_number;
}cpuinfo;

int get_cpuinfo(cpuinfo *info);

#endif