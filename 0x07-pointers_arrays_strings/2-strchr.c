#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: is a string
 * @c: is a character.
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			return (&s[j]);

		}
	}
	return (0);

}
