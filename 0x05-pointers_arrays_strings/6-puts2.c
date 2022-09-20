#include "main.h"
#include <stdio.h>

/**
 * puts2 - A function that prints a character
 * from every two adjacent string
 * @str:string parameter
 */

void puts2(char *str)
{
	int k, p;

	p = 0;
	while (str[p] != 0)
	{
		p++;
	}

	for (k = 0; k < p; k += 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
