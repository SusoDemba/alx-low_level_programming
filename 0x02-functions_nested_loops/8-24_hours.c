#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: nothing (void)
 */
void jack_bauer(void)
{
	int hour;
	int mins;

	for (hour = 0; hour < 24; hour++)
	{
		for (mins = 0; mins < 59; mins++)
		{
			_putchar(hour/10);
			_putchar(hour%10);
			_putchar(':');
			_putchar(mins/10);
			_putchar(mins%10);
			_putchar('\n');
		}
	}
}
