#include "main.h"

/**
 * print_line-print number of lines
 */

void print_line(int n)
{
	int k;

	if (k <= 0)
		_putchar('\n');
	for (k = 0; k < n; k++)
		_putchar('_');
	_putchar('\n');
}
