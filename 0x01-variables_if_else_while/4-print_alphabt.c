#include <stdio.h>

/**
* main-function main is exetion entry point
* Return: 0
*/

int main(void)
{
	char lwr;

	lwr = 'a';
	while (lwr <= 'z')
	{
		if (lwr != 'e' && lwr != 'q')
		{
			putchar(lwr);
		}
		lwr++;
	}
	putchar('\n');
	return (0);
}
