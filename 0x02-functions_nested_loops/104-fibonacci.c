#include <stdio.h>

/**
 * main-execution entry point
 * Return:0
 */

int main(void)
{
	unsigned long int m, n, m1, m2, n1, n2, p;

	m = 1;
	n = 2;
	printf("%lu", m);
	for (p = 1; p < 91; p++)
	{
		printf(", %lu", n);

		n = n + m;
		m = n - m;
	}
	m1 = m / 1000000000;
	m2 = m % 1000000000;
	n1 = n / 1000000000;
	n2 = n % 1000000000;

	for (p = 92; p < 99; ++p)
	{
		printf(", %lu", n1 + (n2 / 1000000000));
		printf("%lu", n2 % 1000000000);
		n1 = n1 + m1;
		m1 = n1 - m1;
		n2 = n2 + m2;
		m2 = n2 - m2;
	}
	printf("\n");
	return (0);
}
