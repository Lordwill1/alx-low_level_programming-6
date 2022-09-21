#include "main.h"
#include <stdio.h>

/**
 * *char_toupper - A function that conver lower cases
 * to upper case
 * @lwr:lowercase to uppercase
 * Return:the result of the change
 */

char *char_toupper(char *lwr)
{
	int p;

	while (lwr[p] != '\0')
	{
		if (lwr[p] >= 'a' && lwr[p] <= 'z')
			lwr[p] = lwr[p] - 32;
	}

	return (lwr);
}
