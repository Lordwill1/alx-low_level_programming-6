#include <stdio.h>

/**
 * main-execution entry point
 * Return:0
 */

int main(void)
{
	unsigned long int sum1, sum2, sum;
	int k;

	sum1 = 0;
	sum2 = 0;
	sum = 0;

	for (k = 0; k < 1024; k++)
	{
		if ((k % 3) == 0)
		{
			sum1 = sum1 + k;
		}
		else if ((k % 5) == 0)
		{
			sum2 = sum2 + k;
		}
	}
	sum = sum1 + sum2;
	printf("%lu\n", sum);
	return (0);
}
