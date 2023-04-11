#include "main.h"

int _str_len(char *x);

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to duplicat.
 *
 * Return: return NULL if str = NULL,otherwise it returns a pointer
 * to the duplicated string,
 * and it returns NULL if  insufficient memory was available.
 *
 */

char *_strdup(char *str)
{
	int i, length;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		length = _str_len(str);

		s = malloc((length + 1) * sizeof(char));

		if (s != NULL)
		{
			while (i <= length)
			{
				s[i] = str[i];
				i++;
			}

		}
		else
		{
			return (NULL);
		}
	}
	return (s);
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
