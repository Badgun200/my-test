#include "sec_test.h"
int double(int i)
{
	return 2*i;
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
