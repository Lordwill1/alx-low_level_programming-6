#include <stdio.h>
/**
*main-exec staring point
*Return:1
*/
int main(void)
{
	int l = strlen("and that piece of art is useful\" - Dora Korpa, 2015-10-19\n");
        write(2, "and that piece of art is useful\" - Dora Korpa, 2015-10-19\n", l);
        return (1);
}
