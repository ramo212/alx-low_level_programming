#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function print_to_98.
 * @n: is the int
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d", i);
			i++;
		}
		printf("\n");
	}
	else
	{
		while (n < 98)
		{
			printf("%d", i);
			i--;
		}
		printf("\n");
	}
}
