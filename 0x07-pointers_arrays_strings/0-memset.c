#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Address of memory to be filled.
 * @b: the value to be filled.
 * @n: is the number of bytes to be filled.
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n > 0)
	{
		*p = (unsigned char)b;
		p++;
		n--;
	}

	return (s);
}
