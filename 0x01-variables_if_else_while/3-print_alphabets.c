#include <stdio.h>

/**
 * main-function main is exetion entry point
* Return: 0
*/

int main(void)
{
	char lwr, upr;
		lwr = 'a';
	upr = 'A';
	while (lwr <= 'z')
{
		putchar(lwr);
		lwr++;
}
while (upr <= 'Z')
{
putchar(upr);
upr++;
}
putchar('\n');
	return (0);
}
