#include "main.h"
/**
 * count_words - counts the number of words in a string
 * @str: the string to count
 * Return: the number of words
 */
int count_words(char *str)
{
	int i, count;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}
/**
 * copy_word - copies a word from a string to a buffer
 * @str: the string to copy from
 * @start: the starting index of the word
 * @end: the ending index of the word
 * Return: a pointer to the buffer containing the word
 */
char *copy_word(char *str, int start, int end)
{
	char *word;
	int i;

	word = malloc((end - start + 2) * sizeof(char));

	if (word == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = start; i <= end; i++)
		{
			word[i - start] = str[i];
		}
		word[i - start] = '\0';

		return (word);
	}
}

/**
 * strtow -  splits a string into words.
 *
 * @str: a string.
 *
 * Return: returns a pointer to an array of strings (words),
 * returns NULL if str == NULL or str == "",
 * If function fails, it return NULL,
 */
char **strtow(char *str)
{
	int i, j, k, n;
	char **words;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	n = count_words(str);
	if (n == 0)
		return (NULL);

	words = malloc(sizeof(char) * (n + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (str[i] != '\0' && k < n)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
			{
				j++;
			}
			words[k] = copy_word(str, i, j - 1);
			if (words[k] == NULL)
			{
				while (k >= 0)
				{
					free(words[k]);
					k--;
				}
				free(words);
				return (NULL);
			}
			k++;
			i = j;
		}
		else
		{
			i++;
		}
	}
	words[k] = NULL;
	return (words);
}
