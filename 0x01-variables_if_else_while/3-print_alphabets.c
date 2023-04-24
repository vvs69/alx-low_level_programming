#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: always (success)
 */

        int main(void)
{
	    char low;

	    for(low='a' ; low <= 'z' ; low++)
	    putchar(low);
	    for(low='a' ; low <= 'z' ; low++)
	    putchar(low);
	    putchar('\n');
	    return (0);
}
