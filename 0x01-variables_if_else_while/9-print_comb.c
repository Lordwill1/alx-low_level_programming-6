#include <stdio.h>

/**
* main-function main is exetion entry point
* Return: 0
*/

int main(void)
{
	int n;
	int j = 44;
	int k = 32;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(j);
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}
