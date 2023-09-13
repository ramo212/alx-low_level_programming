#include "main.h"

/**
 * print_last_digit - function to print lasti digit
 * @n: is the int
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
