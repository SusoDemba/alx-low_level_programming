#include <stdio.h>

/**
 * main - Entry point
 * variable num is initialized to 0, and
 * it increments by 1 after each iteration.
 * During every iteration, print the content in num.
 * if content in num <= 9(last valid number),
 * print comma(,) after it.
 * Otherwise, if it's 9, do nothing and terminate the loop
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9') 
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
