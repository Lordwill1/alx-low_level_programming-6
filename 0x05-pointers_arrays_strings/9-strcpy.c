#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - A function to copy a string from one variable
 * location to another
 * @dest:parameter to recieve the
 * copy or copy destination
 * @src:parameter to be copied from
 */

char *_strcpy(char *dest, char *src)
{
	int k , p;

	p = 0;
	while (src[k] != '\0')
	{
		p++;
	}

	for (k = 0; k < p; k++)
	{
		src[k] = src[k];
	}

	dest[k] = '\0';
	return (dest);
}

int main(void)
{
	 char s1[98];
	 char *ptr;

	 ptr = _strcpy(s1, "i am fine");
