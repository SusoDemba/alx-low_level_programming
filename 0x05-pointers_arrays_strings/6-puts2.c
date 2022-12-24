#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * Return: nothing
 */
void puts2(char *str)
{
	int lg; int i;

	lg = 0;
	while (str[lg] != '\0')
		lg++;

	for (i = 0; i < lg; i+=2)
		_putchar(str[i]);
	_putchar('\n');
}
