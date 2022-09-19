#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - A function to copy a string from one variable
 * location to another
 * @dest:parameter to recieve the
 * copy or copy destination
 * @src:parameter to be copied from
 * Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	int k, p;

	p = 0;
	while (src[p] != '\0')
	{
		p++;
	}

	for (k = 0; k < p; k++)
	{
		dest[k] = src[k];
	}

	dest[k] = '\0';
	return (dest);
}
