#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @n: input
 * Return: n
 */
char *leet(char *n)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "43071";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == s1[y])
			{
				n[x] = s2[y];
			}
		}
	}
	return (n);
}
