#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: first string
 * @accept: second string
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t i, j;
	size_t length = 0;
	size_t len1 = strlen(s);
	size_t len2 = strlen(accept);
	int is_match = 0;

	for (i = 0; i < len1; i++)
	{
		is_match = 0;

		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				is_match = 1;
				break;

			}
		}

		if ((is_match) == 0)
		{
			break;
		}
		else
		{
			length++;
		}
	}
	return (length);
}
