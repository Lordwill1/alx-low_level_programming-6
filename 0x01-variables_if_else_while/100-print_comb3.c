#include <stdio.h>

/**
* main-function main is exetion entry point
* Return: 0
*/

int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (m != 57 || n != 56)
				{
				putchar(44);
				putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
