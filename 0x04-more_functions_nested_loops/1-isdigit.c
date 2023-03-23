#include "main.h"
/**
 * _isdigit - Entry point
 * Description: checks if c is a digit
 * @c: parameter to check
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{

		if (c >= 48 && c <= 57)
			return (1);
		else
			return (0);

	return (0);
}
