#include "main.h"
#include <stdio.h>

/**
 * _puts - A function that will print a string a string
 * to standard output
 * @str:string parameter to check out  string
 * to print out
 */

void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
		_putchar('\n');
}
