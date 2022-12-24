#include "main.h"

/**
 * swap_int - swaps the value of the
 * two parameters
 * @a: value to be swapped
 * @b: value to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
