#include "main.h"
/**
 * main - Entry point
 * Description: prints numbers from 1 to 100,
 * and it prints "Fizz" instead of multiples of 3,
 * and it prints "Buzz" instead of multiples of 5,
 * and it prints "FizzBuzz" if the number is multiples of both 3 and 5
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)

			printf("FizzBuzz");

		else if (i % 3 == 0)

			printf("Fizz");

		else if (i % 5 == 0)

			printf("Bizz");
		else
			printf("%d", i);

		printf(" ");
	}

	return (0);
}

