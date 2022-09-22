#include "main.h"

/**
 * _strcat -concatenates two strings
 * @dest: string to be appended
 * @src: string to be concatenated
 *
 * Return: pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index , dest_len;
	
	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{}

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[dest_len + index] = src[index];
	}
	dest[dest_len + index] = '\0';

	return (dest);
}
