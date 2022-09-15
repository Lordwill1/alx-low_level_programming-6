#include "main.h"

/**
 * print_line-print number of lines
 */

void print_line(int n)
{
	int k;

	for (p = 1; p <= n; p++)
	{
		if ( k <= 0)
		{
			_putchar('\n');
		}
		else if (k > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
