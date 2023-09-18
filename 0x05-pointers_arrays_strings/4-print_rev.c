#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: input
 * Return: 0
 */
void print_rev(char *s)
{
	int tol = 0;
	int m;

	while (*s != '\0')
	{
		tol++;
		s++;
	}
	s--;
	for (m = tol ; m > 0 ; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
