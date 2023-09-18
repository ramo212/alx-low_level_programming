#include "main.h"
#include <stdio.h>
/**
 * _strlen - function to return the length of a string
 * @s: string
 * Return: tol
 */
int _strlen(char *s)
{
	int tol = 0;

	while (*s != '\0')
	{
		tol++;
		s++;
	}
	return (tol);
}
