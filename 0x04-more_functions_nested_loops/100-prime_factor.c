#include "main.h"
#include <math.h>
/**
 * main - Entry point
 * Description:  prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	int i;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0 && n != i)
		{
			n /= i;
		}
	}
	printf("%ld\n", n);
	return (0);
}
