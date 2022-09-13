#include "main.h"
/**
 * _isalpha - function to checke if letter is upper or lowercase
 * @c: int that checks if letter is uppercase or lowercase
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
