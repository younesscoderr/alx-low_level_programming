#include "3-calc.h"

/**
 * op_add - returns the sum of two int.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: first operand.
 * @b: second operand.
 *
 * Return: a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b.
 * @a: first operand.
 * @b: second operand.
 *
 * Return: a / b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}

/**
 * op_mod -  returns the remainder of the division of a by b.
 * @a: first operand.
 * @b: second operand.
 *
 * Return: a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
