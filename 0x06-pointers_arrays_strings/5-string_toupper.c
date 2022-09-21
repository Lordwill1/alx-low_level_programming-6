#include "main.h"
#include <stdio.h>

/**
 * string_toupper - A function that conver lower
 * cases to upper case
 * @lwr:lowercase to uppercase
 * Return:the result of the change
 */

char *string_toupper(char *lwr)
{
	int p;

	p = 0;
	while (lwr[p] != '\0')
	{
		if (lwr[p] >= 'a' && lwr[p] <= 'z')
		{
			lwr[p] = lwr[p] - 32;
		}
		lwr++;
	}
	return (lwr);
}
