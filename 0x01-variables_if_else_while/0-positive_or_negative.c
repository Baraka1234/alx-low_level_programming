#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starting of the program
 *
 * Description: prints out a string from main
 * Return: 0
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX/2;

	if (n>0)
	{
		printf("%i is positive \n", n);
	}
	else if (n==0)
	{
		printf("%i is zero \n", n);
	}
	else if (n<0)
	{
		printf("%i is negative \n", n);
	}
	return (0);
}
