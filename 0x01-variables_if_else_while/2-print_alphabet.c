#include <stdio.h>
  

/**
 * main - print alphabet only using function putchar twice
 * Return: success (always)
 */


   int main(void)
{
	char c;
	for(c = 'a' ; c <= 'z' ; c++)
	putchar(c);
	putchar('\n');
	return(0);
}

