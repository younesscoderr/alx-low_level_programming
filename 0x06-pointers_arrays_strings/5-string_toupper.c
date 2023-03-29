#include "main.h"
#include <ctype.h>

/**
 * string_toupper - converts all lowercase letters in a string
 * to uppercase
 * @s: the string to convert
 *
 * Return: a pointer to the converted string
 */

char *string_toupper(char *s)
{
	char *p = s;


	while (*p != '\0')
	{
		*p = toupper(*p);
		p++;
	}
	return (s);
}

/**
 * toupper - converts a lowercase letter to its uppercase equivalent
 * @c: the letter to convert
 *
 * Return: the uppercase equivalent of c if c is a lowercase letter,
 * otherwise c
 */

int toupper(int c)
{
	if (islower(c))
	{
		return (c - 'a' + 'A');
	}

	else
	{
		return (c);
	}
}
