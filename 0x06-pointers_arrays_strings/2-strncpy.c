#include "main.h"

/**
 * _strncpy -  copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to be copied
 *
 * Description: copies the first n characters of the source string to the
 * destination string. If the length of the source string is less than n,
 * then the entire string is copied. The resulting string is always null-
 * terminated.
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[i] = src[i];

	for ( ; i < n; i++)

		dest[i] = '\0';

	return (dest);
}
