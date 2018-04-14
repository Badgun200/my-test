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

int power(int i, int n)
{
	int k = i;
	for(int l = 1; l < n; l++)
	{
		i = i * k;
	}
	return i;
}
