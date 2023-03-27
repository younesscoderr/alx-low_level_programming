#include "main.h"

/**
 * swap_int - Entry poin
 * Description: swaps the values of two integers
 * @a: first integers
 * @b: second integers
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
