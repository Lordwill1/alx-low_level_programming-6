#include <stdio.h>

void line(int n)
{
	int k;

	for (k = 1; k <= n; k++)
	{
		if (k <= 0)
		{
			putchar('\n');
		}
		else if (k > 0)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
