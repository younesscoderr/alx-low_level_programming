#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 * Return: the encoded string
 */


char *rot13(char *s)
{
	int i;
	char alpha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p = s;

	while (*p)
	{
		for (i = 0; i < 52; i++)
		{
			if (*p == alpha[i])
			{
				*p = rot13[i];
				break;
			}
		}
		p++;
	}
	return (s);
}
