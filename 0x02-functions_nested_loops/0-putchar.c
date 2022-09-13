#include "main.h"
#define MAXSTRING 80

/**
 * main-function main
 * Return:0
 */

int main(void)
{
	int g;
	char k[]  = "_putchar";

	for (g = 0; g < MAXSTRING; g++)
	{
		if  (k[g] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(k[g]);
	}
	return (0);
}
