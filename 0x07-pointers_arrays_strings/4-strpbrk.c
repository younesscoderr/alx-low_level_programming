#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 *
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{

		a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return ('\0');
}
