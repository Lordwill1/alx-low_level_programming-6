#include "main.h"

/**
 * * print_line - print number of lines
 * @n:integer parameter
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;

		for (k = 0; k < n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
