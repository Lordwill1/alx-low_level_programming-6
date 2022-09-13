#include <unistd.h>

/**
 * main-function main
 * Return: return 1 for succesful execution
 * on failed execution return -1
 * _putchar write the characters from the buffer to standard output
 */

int _putchar(char c)
{
	char ret;

	ret = write(1, &c, 1);
	return (ret);
}
