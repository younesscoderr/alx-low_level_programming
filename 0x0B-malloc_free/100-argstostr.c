#include "main.h"

/**
 * argstostr -  concatenates all the arguments of the program
 *
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: returns NULL if ac == 0 or av == NULL,
 * returns a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				len++;
			}
			len++;
		}
		len++;
		str = malloc(sizeof(char) * len);

		if (str != NULL)
		{
			for (i = 0; i < ac; i++)
			{
				for (j = 0; av[i][j] != '\0'; j++)
				{
					str[k] = av[i][j];
					k++;
				}
				str[k] = '\n';
				k++;
			}
			str[k] = '\0';
		}
		else
		{
			return (NULL);
		}
	}
	return (str);
}
