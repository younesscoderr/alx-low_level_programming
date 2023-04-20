#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0;
	char *s, *sep;

	sep = "";
	va_start(args, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char*);
					if (!s)
						s = "(nil)";

					printf("%s%s", sep, s);
					break;
				default:
					j++;
					continue;
			}
			sep = ", ";
			j++;
		}
	}
	putchar('\n');
	va_end(args);
}
