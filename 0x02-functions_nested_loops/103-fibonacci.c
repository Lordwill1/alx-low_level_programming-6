#include <stdio.h>

/**
 * main-program to add the even number terms of the fibonacci series
 * Return:0
 */

int main(void)
{
	long int m, n, next_term;
	long int sum = 0;
	int p;

	m = 1;
	n = 2;
	for (p = 1; p < 50; p++)
	{
		if (m < 4000000 && (m % 2) == 0)
		{
			sum = sum + m;
		}
			next_term = m + n;
			m = n;
			n = next_term;
	}
	printf("%ld\n", sum);
	return (0);
}
