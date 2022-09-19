#include "main.h"
#include <stdio.h>

/**
 * puts_half - A function that will
 * print second half of a given list
 * as well as the last number if odd
 * @str:string parameter
 */

void puts_half(char *str)
{
	int p, n, k;

	p = 0;
	while (str[p] != '\0')
	{
		p++;
	}

	if (p % 2 == 0)
	{
		for (k = p / 2; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	}

	else if (p % 2 != 0)
	{
		for (n = (p - 1) / 2; n < p - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
