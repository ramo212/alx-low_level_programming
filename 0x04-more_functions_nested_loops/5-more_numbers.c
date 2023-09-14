#include "main.h"

/**
 * more_numbers - Print 10 times the numbers since 0 up to 14
 * Return: 10 times of the numbers since 0 up to 14
 */
void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; x++)
	{
	for (m = 0; m <= 14; y++)
	{
	if (m > 9)
	{
	_putchar((m / 10) + '0');
	}
	_putchar((m % 10) + '0');
	}
	_putchar('\n');
	}
}
