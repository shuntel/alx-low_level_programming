#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int n;
	strand(time(0));
	n= rand() -RAND_MAX /2;
	if(n < 0)
	{
		printf("%d is negative\n", n);
	}else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}else
	{
		printf("%d is positive\n", n);
	}
}
return (0);
}
