#include "function_pointer.h"

/**
 * array_iterator -Iterator
 * @array: Array
 * @size: Size
 * @action: Action
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
