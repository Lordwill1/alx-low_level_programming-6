#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function to compare two strings
 * @s1:first string
 * @s2:second string
 * Return:int data type
 */

int _strcmp(char *s1, char *s2)
{
	int k, p;

	k = 0;
	while (s1[k] == s2[k] && s1[k] != '\0')
	{
		k++;
	}
	p = s1[k] - s2[k];
	return (p);
}

