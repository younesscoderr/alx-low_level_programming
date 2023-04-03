#include "main.h"

/**
 * _memcpy - copies memory area.
 * @src: is a memory area to be copied from.
 * @dest: is a memory area to be copied to.
 * @n: the number of bytes to copie.
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *psrc = (char *)src;
	char *pdest = (char *)dest;

	for (i = 0; i < n; i++)
		pdest[i] = psrc[i];

	return (dest);
}
