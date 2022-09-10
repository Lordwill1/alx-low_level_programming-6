#include <stdio.h>

/**
* main-function main is exetion entry point
* Return: 0
*/

int main(void)
{
	        int n;

         for (n = 48; n < 58; n++)
         {
                 putchar(n);
                 if (n != 57)
                 {
                         putchar(',');
                         putchar(' ');
                 }
         }
         putchar('\n');
         return (0);
 }
