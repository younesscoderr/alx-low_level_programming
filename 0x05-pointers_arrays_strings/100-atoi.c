#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: a string to be converted
 * Return: integer value of the string
 */

int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int started = 0;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
				return (sign == 1 ? INT_MAX : INT_MIN);

			num = num * 10 + (*s - '0');
			started = 1;
		}
		else if (!started && *s == '-')
			sign *= -1;
		else if (started)
			break;
		s++;
	}

	return (num * sign);
}
