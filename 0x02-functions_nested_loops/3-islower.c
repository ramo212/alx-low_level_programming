#include "main.h"

/**
 * _islower - function _islower
 * @c: is the int
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
