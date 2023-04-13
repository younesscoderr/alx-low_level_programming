#include "main.h"

/**
 * _calloc - alloctes memory for an array, using malloc.
 *
 * @nmemb: is the number of element to be allocated.
 * @size: is size of each element in bytes
 *
 * Return:  a pointer to the allocated memory,
 * If nmemb or size is 0, then _calloc returns NULL,
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(nmemb * size);

		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			p = arr;

			for (i = 0; i < nmemb * size; i++)
			{
				p[i] = 0;
			}
		}
	}
	return (arr);
}
