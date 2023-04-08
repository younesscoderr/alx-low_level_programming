#include "main.h"


/**
 * main - adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, s = 0;
	char *p;

	for (i = 1; i < argc; i++)
	{
		int N = strtol(argv[i], &p, 10);

		if (*p != '\0')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			s += N;
		}

	}
	printf("%d\n", s);

	return (0);
}
