#include "main.h"
#include <stdio.h>

/**
 * rev_string -function to reverse a string
 * @s:string parameter
 */

void rev_string(char *s)
{
	int k, p, q;
	char r;

	p = 0;
	q = 0;
	while (s[p] != '\0')
	{
		p++;
	}

	q = p - 1;
	for (k = 0; k < p / 2; k++)
	{
		r = s[k];
		s[k] = s[q];
		s[q--] = r;
	}
}
