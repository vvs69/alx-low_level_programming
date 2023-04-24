#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all single digit numbers of base 10 starting from 0
 * return: always (success)
 */

     int main(void)
{
	int d;
	for(d = '0' ; d < '9' ; d++)
	putchar(d);
	putchar('\n');
	return (0);
}
