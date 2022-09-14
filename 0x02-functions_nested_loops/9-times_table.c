#include "main.h"

/**
 * times_table-print multiplication table to 9 times
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k <= 9 && j != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(k + '0');
			}
			if (k >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
