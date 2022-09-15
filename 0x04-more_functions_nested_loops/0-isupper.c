#include "main.h"

/**
 * _isupper - checks if an alphabet is uppercase or lowercase
 * @c: alphabet tested
 * Return: 1 when uppercase, 0 lowercase
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
