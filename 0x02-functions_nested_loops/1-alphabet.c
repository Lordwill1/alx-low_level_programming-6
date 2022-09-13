#include "main.h"
#define MAXSTRING 80
/**
 * main-function main
 * Return:0
 */

void print_alphabet(void)
{
	int k;
	char lwr[] = "abcdefghijklmnopqrstuvwxyz";

	for (k = 0; k < MAXSTRING; k++)
	{
		if (lwr[k] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(lwr[k]);
	}
	return (0);
}
