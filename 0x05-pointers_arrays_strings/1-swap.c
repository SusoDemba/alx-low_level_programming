#include "main.h"

/**
 * swap_int(int *a, int *b) - swaps the value of the
 * two parameters
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *b;
}
