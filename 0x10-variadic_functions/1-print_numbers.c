#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator:  is the string to be printed between numbers.
 * @n:  is the number of integers passed to the function.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int p;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		separator = " ";
	}

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, int);

		printf("%d", p);
		printf("%s", separator);
	}
	putchar('\n');
}
