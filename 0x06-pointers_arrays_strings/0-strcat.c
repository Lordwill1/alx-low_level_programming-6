#include "main.h"
#include <stdio.h>

/**
 * _strcat - function to concertenate strings
 * @:dest:destination string recieving the strings
 * @:souce string
 * Return:dest
 */

char *_strcat(char *dest, char *src)
{
	int k, p; /* p and k holds the lenght of destination and source string*/

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[p] = src[k];
		p++;
		k++;
	}
	dest[p] = '\0';
	return (dest);
}
