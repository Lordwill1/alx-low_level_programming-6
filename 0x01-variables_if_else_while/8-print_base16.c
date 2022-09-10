#include <stdio.h>

/**
 * main-function main is exetion entry point
 * Return: 0
 */

int main(void)
{
	int n = 48;
	char hexa = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
