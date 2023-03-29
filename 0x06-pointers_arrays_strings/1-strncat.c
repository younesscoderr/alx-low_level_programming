#include "main.h"
/**
 * _strncat - concatenates two strings.*
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to be appended
 *
 * Description: Appends the first n characters of the source string to the
 * destination string. If the length of the source string is less than n,
 * then the entire string is appended. The resulting string is always null-
 * terminated.
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (n > j)
		{
			dest[i] = src[j];
			i++;
		}
	}
	dest[i] = '\0';

	return (dest);
}
