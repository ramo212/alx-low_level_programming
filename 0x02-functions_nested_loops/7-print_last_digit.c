#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int)
{
	int n , lastd;
	int lastd = n % 10;
	if(lastd < 0)
	{
		lastd *= -1;
	_putchar(lastd + '0');
	}
	return(lastd);
}