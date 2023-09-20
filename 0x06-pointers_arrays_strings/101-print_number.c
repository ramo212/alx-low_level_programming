#include "main.h"
#include <stdio.h>
/**
 * print_number - function to print a num
 * @n: input
 * Return: 0
 */
void print_number(int n)
{
	int num;

	num = n;
	if (num < 0)
	{
		_putchar('-');
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num / 10) + '0');
}
