#include "main.h"
#include <stdio.h>

/**
 * print_rev - A fuction that reverses string input
 * @s;string parameter
 */

void print_rev(char *s)
{
	int k;
	int len;

	len = strlen(s);
	for (k = len - 1; k >= 0; --k)
	{
		putchar(s[k]);
	}

	putchar('\n');
}
