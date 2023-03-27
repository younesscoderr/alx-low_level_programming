#include "main.h"

/**
 * print_rev - Entry point
 * Description: prints a string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int  i;
	int len = strlen(s);

	i = len - 1;
	while (s[i] >= 0)
	{
		_putchar(s[i]);

		i--;
	}
	_putchar('\n');

}
