#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: the main string.
 * @needle: is the substring.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}

			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
