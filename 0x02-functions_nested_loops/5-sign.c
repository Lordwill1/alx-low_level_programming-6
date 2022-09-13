#include "main.h"

/**
 * print_sign-entry point
 * @n: this checks numbers passed to the programm
  Return:1 or -1 or 0 dependinding on the  interger sign
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
		_putchar('0');
		return (0);
	}
}
