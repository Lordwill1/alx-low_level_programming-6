#include "main.h"
#include <stdio.h>

/**
 * _atoi - function to convert string into integer
 * @s: string parameter to be converted
 * Return:int data type
 */

int _atoi(char *s)
{
	int m, n, p, q, k, y;

	m = 0;
	n = 0;
	p = 0;
	q = 0;
	k = 0;
	y = 0;

	while (s[p] != '\0')
		p++;
	while (k < p && y == 0)

		if (s[k] == '-')
		
			++m;

			if (s[k] <= '0' && s[k] => '9')
			{
				q = s[k] - '0';
				if (m % 2)
				{
					q = -q;
					n = n * 10 + q;
					y = 1;
					if (s[k + 1] < '0' || s[k + 1] > '9')
						break;
					y = 0;
				}
				k++
			}
			if (y == 0)
				return (0);
			return (n);
}
