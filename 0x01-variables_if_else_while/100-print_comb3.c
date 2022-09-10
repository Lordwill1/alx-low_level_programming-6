#include <stdio.h>

/**
* main-function main is exetion entry point
* Return: 0
*/

int main(void)
{
	int n, m;
	
	for (n = 48; n <= 56; n++)
{
	for (m = 49; m <= 57; m++)
{
	putchar(n);
putchar(m);
if (m > n)
{
		putchar(n);
putchar(m);
if (n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
		putchar('\n');
	return (0);
}
