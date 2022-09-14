#include <stdio.h>

/**
 * main-execution starting poin to get the first 98 fibonacci series
 * Return:0
 */

int main(void)
{
	unsigned long m, n, m1, m2, n1, n2;
	int p;

	m = 1;
	n = 2;
	printf("%lu", m);
	for (p = 1; p < 91; p++)
	{
		printf(", %lu", n);
		m = m + n;
		n = m - n;
	}
	
	m1 = m / 1000000000;
	m2 = m % 1000000000;
	n1 = n / 1000000000;
	n2 = n % 1000000000;

	for (p = 92; p <= 98; ++p)
	{
		printf(", %lu", n1 + (n2 / 1000000000));
		printf("%lu", n2 % 1000000000);
		m1 = m1 + n1;
		n1 = m1 - n1;
		m2 = m2 + n1;
		n2 = m2 - n2;
	}
	printf("\n");
	return (0);
}
