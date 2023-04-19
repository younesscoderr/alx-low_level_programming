#include "function_pointers.h"

/**
 * int_index - searches for an interger.
 * @array: an array.
 * @size: length of the array.
 * @cmp: a function pointer that compares two int.
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0,
 * If no element matches, return -1,
 * If size <= 0, return -1,
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
		return (-1);
	}
}
