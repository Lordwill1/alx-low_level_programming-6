#include <stdio.h>
#include "main.h"

/**
 * print_to_98-print natural numbers to 98
 * @n:running int
 */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}

		else if (n >= 98)
		{
			for (j = n; j >= 98; j--)
			{
				if (j != n)
					printf("%d, ", j);
				else if (j == n)
					printf("%d\n", j);
			}
		}
}
