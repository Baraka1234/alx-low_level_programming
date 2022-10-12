#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: an array of element
 * @size: size of the array
 * @action: callback function pointing to another function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
