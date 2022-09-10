#include <stdio.h>

/**
* main-function main is exetion entry point
* Return: 0
*/

int main(void)
{
	int n, m;
	
	for (n = 48; n <= 57; n++)
{
	for (m = 48; m <= 57; m++)
{
	putchar(n);
putchar(m);
if (m < 57)
{
		putchar(44);
putchar(32);
}
}
}
		putchar('\n');
	return (0);
}
