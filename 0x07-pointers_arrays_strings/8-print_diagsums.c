#include "main.h"
#include <stdio.h>
/**
 * set_string - function
 * @s: input
 * @to: input
 * Return: 0
 */
void set_string(char **s, char *to)
{
	int sum1 = 0;
	int sum2 = 0;
	int x;

	for (x = 0; x < s; x++)
	{
		sum1 = sum1 + to[x * s + x];
	}
	for (x = s - 1; x >= 0; x--)
	{
		sum2 += to[x * s + (s - x - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
