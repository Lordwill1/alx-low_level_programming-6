#include <stdio.h>

/**
 * main-To find all term of the finonacci series, up to the 50th term
 * Return:0
 */

int main(void)
{
	long int m, n, p, next_term;

	m = 1;
	n = 2;

	for (p = 1; p <= 50; p++)
	{
		if (m != 20365011074)
		{
			printf("%ld, ", m);
		}
		else
		{
			printf("%ld\n", m);
		}
		next_term = m + n;
		m = n;
		n = next_term;
	}
	return (0);
}

