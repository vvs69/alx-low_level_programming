#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if number is positive, zero, or negative
 * return: always(success)
 *
 */
int main(void)
{	
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
        {
	printf("%d is positive\n",n);
        }
        else if (n==0)
        {
	printf("%d equals zero\n",n);
        }
        else (n<0)
        {
        printf("%d is negative\n",n);
        }
        return(0);
}
