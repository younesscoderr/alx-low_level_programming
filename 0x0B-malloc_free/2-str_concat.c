#include "main.h"

char *_str_concat(char *dest, char *src);
int _str_len(char *x);

/**
 * str_concat -  concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: a pointer that point to a newly allocated space
 * in memory which contains the contents of s1, followed by
 * the contents of s2, and null terminated,
 * and it returns NULL on fail.
 *
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _str_len(s1);
	len2 = _str_len(s2);

	s3 = malloc((len1 + len2 + 1) * sizeof(char));

	if (s3 != NULL)
	{
		_str_concat(s3, s1);
		_str_concat(s3 + len1, s2);
	}
	else
	{
		return (NULL);
	}

	return (s3);
}

/**
 * _str_concat -  concatenates two strings.
 *
 * @dest: first str.
 * @src: second srt.
 *
 * Return: return a pointer to the new dest string.
 */

char *_str_concat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _str_len - returns the length of a given string.
 * @x: a string to return its length.
 *
 * Return: length of x
 */

int _str_len(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		i++;
	}
	return (i);
}
