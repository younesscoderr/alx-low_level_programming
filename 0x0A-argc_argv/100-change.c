#include "main.h"

/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, cents, count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];

			count++;
		}
	}

	printf("%d\n", count);

	return (0);
}
