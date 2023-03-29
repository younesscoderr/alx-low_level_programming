#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 * Return: the encoded string
 */

char *leet(char *s)
{
	int i;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char *p = s;

	while (*p)
	{
		for (i = 0; i < 10; i++)
		{
			if (*p == str[i])
			{
				*p = subs[i];
				break;
			}
		}
		p++;
	}
	return (s);
}
