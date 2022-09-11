#include <stdio.h>

/**
* main-function main is exetion entry point
* Return: 0
*
*/

int main(void)
{
	int p, q, r;

	for (p = 48; p <= 55; p++)
	{
		for (q = 49; q <= 56; q++)
		{
			for (r = 50; r <= 57; r++)
			{
				if (r > q && q > p)
				{
					putchar(p);
					putchar(q);
					putchar(r);
					if (p != 55 || q != 56 || r != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
return (0);
}
