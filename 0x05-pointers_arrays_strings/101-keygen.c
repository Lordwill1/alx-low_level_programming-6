#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function to generate random password
 * Return:0
 */

int main(void)
{
	int pass[100];
	int n, k, sum;

	sum = 0;
	srand(time(0));
	
	for (k = 0; k < 100; k++)
	{
		pass[k] = rand() % 78;
		sum += (pass[k] + '0');
		putchar(pass[k] + '0');
		
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
