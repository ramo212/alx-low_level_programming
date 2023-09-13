#include "main.h"
#include <stdio.h>

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
		for (b = 0 ; b < 10 ; b++)
		{
			prod = a * b;
			printf("%d, ", prod);
		}
		printf("%i\n");
	}
}

