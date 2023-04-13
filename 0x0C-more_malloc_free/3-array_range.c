#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: is the min value of the array.
 * @max: is the max value of the array.
 *
 * Return: a pointer to the newly created array,
 * if min > max, return NULL, If malloc fails, return NULL.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(int) * (max - min + 1));

		if (arr != NULL)
		{
			for (i = min; i <= max; i++)
			{
				arr[i - min] = i;
			}
		}
		else
		{
			return (NULL);
		}
	}
	return (arr);
}
