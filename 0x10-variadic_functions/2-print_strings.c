#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(args);
}
