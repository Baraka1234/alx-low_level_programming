#include "main.h"
/**
 * print_alphabet - prints abc
 *
 * Description: This is a function to print abc
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
