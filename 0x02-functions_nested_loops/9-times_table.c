#include "main.h"

/**
 * times_table - function times_table
 * @void: is void
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, prod;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 1 ; b < 10 ; b++)
		{
		prod = a * b;
		_putchar(prod);
		_putchar(',');
		_putchar(' ');
		}
	_putchar('\n');
	}
}

