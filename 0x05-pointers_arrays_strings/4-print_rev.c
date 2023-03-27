#include "main.h"

/**
 * print_rev - Entry point
 * Description: prints a string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int  i;
	int len = _strlen(s);

	i = len - 1;
	while (s[i] >= 0)
	{
		_putchar(s[i]);

		i--;
	}
	_putchar('\n');

}
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
