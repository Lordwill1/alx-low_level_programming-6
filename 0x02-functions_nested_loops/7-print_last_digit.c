#include "main.h"

/**
 * print_last_digit-execution entry point
 * @n: looks for integer data type
 * Return:int
 */

int print_last_digit(int n)
{
	int ret;

	if (n < 0)
{
n = -n;
ret = n % 10;
if (ret < 0)
{
ret = -ret;
}
}
	return (ret);
}
