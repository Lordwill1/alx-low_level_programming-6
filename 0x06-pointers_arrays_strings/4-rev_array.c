#include "main.h"
#include <stdio.h>

/**
 * reverse_array - A function to reverse the elements of an array
 * @a:an array of integers
 * @n:number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int k, p, q;

	p = n - 1;
	for (k = 0; k < n / 2; k++)
	{
		q = a[k];
		a[k] = a[p];
		a[p--] = q;
	}
}
