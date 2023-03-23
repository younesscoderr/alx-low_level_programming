#include "main.h"
/**
 * more_numbers - Entry point
 * Description: prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, j, T, U;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			T = i / 10;
			U = i % 10;
			if (i > 9)
				_putchar(T + '0');

			_putchar(U + '0');
		}
		_putchar('\n');
	}
}
