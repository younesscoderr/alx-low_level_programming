#include "main.h"
/**
 * print_diagonal - Entry point
 * Description: draws a diagonal line on the terminal
 * @n: is times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)

			putchar(' ');


		putchar(92);
		putchar('\n');

	}

}
