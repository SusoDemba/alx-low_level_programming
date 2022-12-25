#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return: nothing (void)
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;
	int length = n - 1;

	for (i = 0; i <= length; i++)
	{
		tmp = a[i];
		a[i] = a[length];
		a[length] = tmp;
		length -= 1;
	}
}
