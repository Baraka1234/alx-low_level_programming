#include <stdio.h>
/**
 * main - prints all probable combos
 *
 * Description: prints from main func
 * Return: 0
 */
int main(void)
{
	int i;

	for (i=10; i<20; i++)
	{
		putchar((i%10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
