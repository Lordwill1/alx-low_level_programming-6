#include "main.h"

/**
 * print_number - A function to print inputed
 * number as it is
 * @n:number to be printed
 */

void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
