#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function to rotate a given string in 13 places
 * of thevalphabets
 * @s:pointer to string to be rotated
 * Return:s string after rotating
 */

char *rot13(cbar *s)
{
	int p, q;

	char m[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (k = 0; s[k] != '\0'; k++)
	{
		for (p = 0; s[p] != '\0'; p++)
		{
			if (s[k] == m[p])
			{
				s[k] = n[p];
			}
		}
	}
	return (s);
}
