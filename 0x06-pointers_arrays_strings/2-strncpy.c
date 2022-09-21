#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - function to copy a number
 * of strings into another string
 * @dest:destination string
 * @src:source string
 * @n:number of strings to be concertenated
 * Return:dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (src[k] != '\0' && k < n)
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
