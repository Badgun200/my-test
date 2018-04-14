#include "sec_test.h"
int double(int i)
{
	return 2*i;
}

int sum(int n)
{
	int k = 0;
	for(int i=1; i <= n; i++)
	{
		k = k + i;
	}
	return k;
}
