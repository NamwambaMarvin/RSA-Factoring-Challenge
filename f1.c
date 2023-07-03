#include "f.h"
/**
 * fact - Factorises a number
 * @buf: Buffer containing characters
 * Return: Returns zero on failure
 */
int fact(char *buf)
{
	int n;
	int i;

	n = atoi(buf);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d=%d*%d\n",n,n/i,i);
			break;
		}
	}
	return (0);
}
