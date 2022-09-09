#include <stdio.h>
/**
 * main - prints base 10 starting from 0
 *
 * Description: pints from main
 * Returns: 0
 */
int main(void)
{
	int a = 0;

	for (;a < 10 ; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
