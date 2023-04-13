#include "main.h"

char *_strncat(char *dest, char *src, int n);
int _str_len(char *s);
char *_strcpy(char *dest, char *src);

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: destination string
 * @s2: source string
 * @n: maximum number of characters to be appended
 *
 * Description: Appends the first n characters of the source string to the
 * destination string. If the length of the source string is less than n,
 * then the entire string is appended. The resulting string is always null-
 * terminated.
 *
 * Return: a pointer that point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated,
 * If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *s3;

	len1 = _str_len(s1);
	len2 = _str_len(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n > len2)
	{
		n = len2;
	}

	s3 = malloc((len1 + n) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	else
	{
		_strcpy(s3, s1);
		_strncat(s3, s2, n);
	}
	return (s3);
}

/**
 * *_strcpy - copies the string pointed to src,
 * to the buffer pointed to by dest.
 * @src: first pointer
 * @dest: second pointeir
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)

		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _str_len - returns the length of a given string.
 * @s: a string to return its length.
 *
 * Return: length of s
 */

int _str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


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
