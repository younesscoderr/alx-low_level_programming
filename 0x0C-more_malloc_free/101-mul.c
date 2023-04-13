#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

int _strlen(char *s);
int _isnumber(char *s);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * mul - multiplies two positive numbers.
 * @num1: first number.
 * @num2: second number.
 */

void mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len = len1 + len2;
	int i, j, carry, n;
	int *result;

	result = malloc(sizeof(int) * len);
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < len; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			carry += result[i + j + 1] + (n * (num2[j] - '0'));
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[i + j + 1] += carry;
	}
	i = result[0] == 0 ? 1 : 0;
	while (i < len)
	{
		_putchar(result[i] + '0');
		i++;
	}
	_putchar('\n');
	free(result);
}


/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _isnumber - checks if a string is a valid number
 * @s: the string to check
 *
 * Return: 1 if true, 0 if false
 */
int _isnumber(char *s)
{
	if (*s == '\0')
		return (0);
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	if (argc != 3 || !_isnumber(argv[1]) || !_isnumber(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	mul(argv[1], argv[2]);
	return (0);
}
