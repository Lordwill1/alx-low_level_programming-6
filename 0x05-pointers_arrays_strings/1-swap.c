#include "main.h"
#include <stdio.h>

/**
 * swap_int- swaps two number positions
 * @a:first number
 * @b:number to be swapped with the first
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
