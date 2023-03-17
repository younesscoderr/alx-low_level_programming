#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
char letter;
for (number = 48; number < 58; number++)
{
putchar(number);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
