#include "main.h"
#define MAXSTRING 80
/**
 * print_alphabet-execution starting point
 * Return:0
 */
void print_alphabet(void)
{
	char lwr = 'a';


	do {
		_putchar(lwr);
		lwr++;
	} while (lwr <= 'z');
	_putchar('\n');
	}
