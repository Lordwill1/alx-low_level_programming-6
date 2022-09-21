#include "main.h"
#include <stdio.h>

/**
 * *_strncat - function to concertena a number of strings
 * to a destination string
 * @dest:destination string
 * @src:soure string
 * @n:integer parameter determining number
 * of strings to be concertenated
 * return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int p, k;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}

	k = 0;
	while (src[k] != '\0' && k < n)
	{
		dest[p] = src[k];
		k++;
		p++;
	}
	dest[p] = '\0';
	return (dest);
}
