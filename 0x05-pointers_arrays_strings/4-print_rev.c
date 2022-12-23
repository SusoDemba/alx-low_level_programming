#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * Return: nothing
 */
void print_rev(char *s)
{
	int lg;

	lg = 0;
	while (*s != '\0')
	{
		lg++;
		s++;
	}
	--s;
	while (lg > 0)
	{
		_putchar(*s);
		s--;
		lg--;
	}
	_putchar('\n');
}
