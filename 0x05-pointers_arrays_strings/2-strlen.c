#include "main.h"
/**
 * _strlen - function to return the length of a string
 * @s: input
 * return = tol
 */
int _strlen(char *s)
{
	int tol = 0;

	while (*s != '\0')
	{
		s++;
		tol++;
	}
	return (tol);
}
