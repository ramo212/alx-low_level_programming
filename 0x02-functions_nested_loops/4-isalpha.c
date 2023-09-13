#include "main.h"

/**
 * _isalpha - function to print abc.
 *@c is the char of argument
 * Return: Always 0.
 */
int _isalpha(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

