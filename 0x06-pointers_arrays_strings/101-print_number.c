#include "main.h"
#include <stdio.h>
/**
 * print_number - function to print a num
 * @n: input
 * Return: 0
 */
void print_number(int n)
{
	int n;

	if (n < 0)
	{
		_putchar('-');
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n / 10) + '0');
}
