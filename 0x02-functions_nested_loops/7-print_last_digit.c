#include "main.h"

/**
 * print_last_digit-execution entry point
 * @n: looks for integer data type
 * Return:int
 */

int print_last_digit(int n)
{
	int ret;

	ret = n % 10;
	if (n < 0)
		n = -n;

	if (ret < 0)
		ret = -ret;

	_putchar(ret + '0');
	return (ret);
}
