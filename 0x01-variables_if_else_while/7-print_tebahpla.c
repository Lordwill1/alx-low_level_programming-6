#include <stdio.h>

/**
 * main-function main is exetion entry point
 * Return: 0
 */

int main(void)
{
	char lwr;

	lwr = 'z';
	do {
		putchar(lwr);
		--lwr;
	} while (lwr >= 'a');
	putchar('\n');
	return (0);
}
