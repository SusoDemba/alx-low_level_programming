#include "main.h"

/**
 * print_sqaure - prints a square, followed by a new line
 * @size: the zise of the square
 * Return: nothing
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
			break;
		for (j = 0; j < size; j++)
			_putchar('#');
	}
	_putchar('\n');
}
