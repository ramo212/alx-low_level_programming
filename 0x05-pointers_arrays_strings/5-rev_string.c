#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: input
 * Return: 0
 */
void rev_string(char *s)
{
	char aks = s[0];
	int addad = 0;
	int a = 0;

	while (s[addad] != '\0')
	{
		addad++;
	}
	for (a = 0 ; a < addad ; a++)
	{
		addad--;
		aks = s[a];
		s[a] = s[addad];
		s[addad] = aks;
	}
}
