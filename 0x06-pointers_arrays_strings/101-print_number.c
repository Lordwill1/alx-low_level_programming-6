#include "main.h"
#include <stdio.h>

/**
 * print_number - A function to print inputed number as it is
 * @n:number to be printed
 * Return:void
 */

void print_number(int n)
{
	int m;

	if (m >= 0)
	{
		m = n;
	}
	else
	{
		m = -n;
		_putchar('-');
	}

	if (m / 10)
		print_number(m / 10)
			_putchar((m % 10) + '0');
}
