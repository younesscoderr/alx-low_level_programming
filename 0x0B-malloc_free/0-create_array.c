#include "main.h"

/**
 * create_array -  creates an array of chars, and initializes it with a specific char.
 *
 * @size: is the size of the array.
 * @c: is the character to fill the array with.
 *
 * Return: returns NULL if size = 0, otherwise return a pointer to the array,
 * or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *arr;

	if (size == 0)
		return (NULL);
	else
	{
		i = 0;

		arr = malloc(size * sizeof(char));

		while (i < size)
		{
			arr[i] = c;
			i++;
		}
		arr[i] = '\0';
	}
	return (arr);
}
