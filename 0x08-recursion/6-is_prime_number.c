#include "main.h"

/**
 * is_divisible - Checks if a number is divisible.
 * @n: The number to be checked.
 * @d: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int is_divisible(int n, int d)
{
	if (n % d == 0)
	{
		return (0);
	}
	if (d == n / 2)
	{
		return (1);
	}
	return (is_divisible(n, d + 1));
}

/**
 * is_prime_number - check if a given integer is a prime number
 * @n: integer to check.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_divisible(n, 2));
}
