#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, s = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int x = atoi(argv[i]);

			s *= x;

		}
		printf("%d\n", s);
	}
	return (0);
}
