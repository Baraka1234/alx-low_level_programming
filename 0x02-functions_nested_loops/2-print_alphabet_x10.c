#include "main.h"

/**
 * print_alphabet_x10 - printsabc ten times
 *
 * Description: A function that prints abc 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c, 1;

	for (i = 0; i <= 9; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
