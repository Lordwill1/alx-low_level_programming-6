#include "main.h"

/**
 * print_triangle - display triangle
 * @size:show size of triangle
 */

void print_triangle(int size)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, n;

		for (m = 1; m <= size; m++)
		{
			for (n = m; n < size; n++)
			{
				_putchar(' ');
			}
			for (n = 1; n <= m; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
