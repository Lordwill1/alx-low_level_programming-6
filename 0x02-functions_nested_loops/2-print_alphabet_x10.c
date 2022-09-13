#include "main.h"

/**
*print_alphabet_x10-prints the alphabets 10x
*Return:0
*/

void print_alphabet_x10(void)
{
	int k;
	char lwr;

	for (k = 1; k <= 10; k++)
	{
		for (lwr = 'a'; lwr <= 'z'; lwr++)
		{
			_putchar(lwr);
		}
		_putchar('\n');
	}
}
