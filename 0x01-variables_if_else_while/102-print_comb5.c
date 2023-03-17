#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Print all possible combinations of two two-digit numbers
 * Return: Always 0
 */
int main(void)
{
int i, j, k, d;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
for (d = 0; d <= 9; d++)
{
if (((k + d) > (i + j) &&  k >= i) || i < k)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(d + '0');
if (i == 9 && j == 8 && k == 9 && d == 9)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
