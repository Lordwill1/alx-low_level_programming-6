#include "main.h"

/**
 * print_sign-entry point
 * @n: this checks numbers passed to the programm
  Return:1 if n is positive
 * -1 if n is negative
 * 0 if n is zero
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
		return (0);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
