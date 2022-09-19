#include "main.h"
#include <stdio.h>

/**
 * swap_int- swaps two number positions
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
