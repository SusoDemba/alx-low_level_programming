#include "main.h"

/**
 * length_of_the_string - calculates the length of the
 * @s: param that is passed to the function
 * Return: the length of the string
 */
int length_of_the_string(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}


/**
 * puts_half - prints half of the string that is passed
 * passed in it as a parameter
 * @str: the string to passed to the function
 * Return: nothing (void)
 */

void puts_half(char *str)
{
	int lg;
	int i;

	lg = length_of_the_string(str);

	if (lg % 2 == 0)
		i = lg / 2;
	else
		i = (lg + 1) / 2;

	while (i < lg)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
