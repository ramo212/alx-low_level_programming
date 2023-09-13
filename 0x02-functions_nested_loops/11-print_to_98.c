#include "main.h"

/**
 * print_to_98 - function print_to_98.
 * @n: is the int
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	_putchar('\n');
}
