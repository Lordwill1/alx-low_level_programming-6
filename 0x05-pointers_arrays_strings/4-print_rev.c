#include "main.h"
#include <stdio.h>

/**
 * print_rev - A fuction that reverses string input
 * @s:string parameter
 */

void print_rev(char *s)
{
	int k, p;

	p = 0;
	while (s[p] != '\0')
	{
		p++;
	}

	for (k = p - 1; k >= 0; --k)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}
