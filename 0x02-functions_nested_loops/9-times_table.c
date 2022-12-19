#include "main.h"

/**
 * times_table - prints the 9 times table, 
 * starting with 0.
 * after each row, new line is created
 * Return: nothing (void)
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i*j);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
