#include "main.h"

/**
 * print_alphabet_x10 - prints the lower case alphabets
 * (a - z)10times; each time on a new line
 * Return: nothing (void)
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
