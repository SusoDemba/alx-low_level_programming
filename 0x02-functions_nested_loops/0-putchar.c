#include "main.h"

/**
 * main - Entry point
 * @_putchar function - prints each of the character
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int count;

	for (count = 0; count < 8; count++)
		_putchar(word[count]);
	_putchar('\n');

	return (0);
}
