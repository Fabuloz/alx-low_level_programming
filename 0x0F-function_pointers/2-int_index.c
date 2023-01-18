#include "function_pointers.h"

/**
 * int_index - Index
 * @array: Array
 * @size: Size
 * @cmp: CMP
 *
 * Return:: Nothing
 */

int int_index(int *array, int size, it (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
