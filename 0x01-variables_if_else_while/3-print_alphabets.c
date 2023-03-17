#include <stdio.h>

/**
 * main - Entry point
 * description: print alphabets in lowercase and then in upercase
 * Return: Always 0 (Succuss)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
