#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function to calculate the size or
 * lenght of a string
 * @s:string parameter to check string to be measured
 * Return:len
 */

int _strlen(char *s)
{
	int len = 0;
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		len++;
	}
	return (len);
}
