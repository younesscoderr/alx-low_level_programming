#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compare.
 * @s2: second string to be compare.
 *
 * Description: Compares two strings character by character to determine if
 * they are equal or if one is lexicographically greater than the other.
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);

}
