#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n number of element in the array
 * @a: is the integer array
 * @n: the number of elements to print from the array, a
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d", a[i]);
			printf(", ");
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
