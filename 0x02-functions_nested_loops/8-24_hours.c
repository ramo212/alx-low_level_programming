#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_reminder;
	int minutes_reminder;

	while(hours <= 23)
	{
		while(minutes <=59)
		{
			minutes_reminder = minutes % 10;
			hours_reminder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_reminder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes_reminder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
	return(0);
}
