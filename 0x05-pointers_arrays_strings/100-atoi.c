#include "main.h"
#include <stdio.h>

/**
 * _atoi - function to convert string into integer
 * @s: string parameter to be converted
 * Return:int data type
 */

int _atoi(char *s)
{
	int n, d, p, digit, k, f;

	d = 0;
	n = 0;
	p = 0;
	digit = 0;
	k = 0;
	f = 0;

	while (s[p] != '\0')
		p++;
	while (k < p && f == 0)
	{

		if (s[k] == '-')
			++d;
		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			f = 0;
		}
		k++;
	}
	if (f == 0)
		return (0);
	return (n);
}
