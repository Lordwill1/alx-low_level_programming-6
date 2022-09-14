#include <stdio.h>

/**
 * main-function main
 * result:0
 */

int main(void)
{
	unsigned long int m, n, p, next_term;

	m = 1;
	n = 2;
	for (p = 1; p <= 98; p++)
	{
		if (p != 98 || p != 1)
		{
			printf(", %lu", m);
		}
		else if (p == 98 || p == 1)
		{
			printf("%lu\n", m);
		}
		next_term = m + n;
		m = n;
		n = next_term;
	}
	return (0);
}
