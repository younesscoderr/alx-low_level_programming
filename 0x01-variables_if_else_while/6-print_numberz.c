#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints digit numbers 0 => 9 using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 48; number < 58; number++)
{
putchar(number);
}
putchar('\n');
return (0);
}
