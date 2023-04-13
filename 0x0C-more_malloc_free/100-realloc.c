#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 *
 * @old_size: is  the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: If new_size == old_size do not do anything and return ptr,
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *n_ptr, *p;

	n_ptr = (char *)ptr;

	if (new_size == 0 && n_ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (n_ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
		{
			return (NULL);
		}
		return (p);

	}
	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = n_ptr[i];
	}

	free(ptr);

	return (p);
}
