#include "main.h"

/**
 * A time table
 * _printtimestable-funcfion to print times table
 * @n: the number of times table
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
				putchar(k + '0');
				else if (k <= 9 && j != 0)
				{
					putchar(44);
					putchar(32);
					putchar(32);
					putchar(32);
					putchar(k + '0');

				}
				else if (k >=10 && k <= 99)
				{
					putchar(44);
					putchar(32);
					putchar(32);
					putchar((k / 10) + '0');
					putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					putchar(44);
					putchar(32);
					putchar((k / 100) + '0');
					putchar(((k / 10) % 10) + '0');
					putchar(((k / 10) % 10) + '0');
				}
			}
			putchar('\n');
		}
	}
}
