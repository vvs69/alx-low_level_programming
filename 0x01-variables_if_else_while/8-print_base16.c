#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 * return ; always (success)
 */

    int main(void)
{
	int d;
	char low;
	for(d = '0' ; d <= '9' ; d++)
	putchar(d);

	for(low = 'a' ; low <= 'f' ; d++)
        putchar(low);
	putchar('\n');
	return (0);
}