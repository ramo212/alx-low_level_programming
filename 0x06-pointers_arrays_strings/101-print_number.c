#include "main.h"
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
		putchar('-');
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	putchar((num / 10) + '0');
}
