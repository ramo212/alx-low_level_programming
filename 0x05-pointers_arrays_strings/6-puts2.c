#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 *, starting with the first char.
 * @str: input
 * Return: 0
 */
void puts2(char *str)
{
	int tol = 0;
	int l = 0;
	int x;

	while (*str != '\0')
	{
		str++;
		tol++;
	}
	l = tol - 1;
	for (x = 0 ; x <= l ; x++)
	{
		if (x % 2 == 0)
		{
			putchar(str[x]);
		}
		putchar('\n');
	}
}
