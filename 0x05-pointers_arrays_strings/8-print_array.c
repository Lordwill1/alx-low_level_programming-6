#include "main.h"
#include <stdio.h>

/**
 * print_array - the number of
 * element of an array
 * @a:first number
 * @n:number of array element
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k == 0)
		{
			printf("%d", a[k]);
		}
		else
		{
			printf(", %d", a[k]);
		}
	}
	printf("\n");
}
