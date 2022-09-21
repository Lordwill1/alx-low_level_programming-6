#include "main.h"
#include <stdio.h>

/**
 * cap_string - A function that capitalizes every
 * character it runs on
 * @s:string variable
 * Return:s result
 */

char *cap_string(char *s)
{
	int k, p;

	p = 0;
	while (s[p] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}

		char arr[13] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '"', '(', ')', '{', '}'};
		
		for (k = 0; k < 13; k++)
		{
			if (s[p] == arr[k])
			{
				if (s[p + 1] >= 'a' && s[p] <= 'z')
				{
					s[p + 1] = s[p + 1] - 32;
				}
			}
		}
		p++;
	}
	return (s);
}
