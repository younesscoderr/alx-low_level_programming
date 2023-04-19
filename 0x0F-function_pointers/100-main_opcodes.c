#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *opc = (char *) main;
	int i, num_bytes;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(av[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
