#include "main.h"
#include <stdio.h>

/**
 * _abs - function to result absolute
 * @c: is the int
 * Return: c or -c
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (-c);
}
