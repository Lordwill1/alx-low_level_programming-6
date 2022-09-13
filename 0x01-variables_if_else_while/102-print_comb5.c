#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-function main is exetion entry point
 * Return: 0
 */

int main(void)
{
	int n, m;

	for (n = 0; n <= 98; n++)
	{
		for (m = 1; m <= 99; m++)
		{
			if (m >= n && m != n)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(32);
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				if (n != 98 || m != 99)
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
