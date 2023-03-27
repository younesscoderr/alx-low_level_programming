#include "main.h"

/**
 * rev_string - Entry point
 * Description: reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int len;

	len = _strlen(s) - 1;

	while (len > i)
	{
		swap_char(s + len, s + i);
		i++;
		len--;
	}



}
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
*swap_char - swap two characters
*@a: first character
*@b: second character
*Return: nothing
*/
void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
