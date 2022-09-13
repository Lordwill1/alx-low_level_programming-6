#include "main.h"

/**
 * print_sign-entry point
 * @n: this checks numbers passed to the programm
  *Return:1 if n is positive and print +
 * -1 if n is negative and print -
 * 0 if n is zero and print 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
