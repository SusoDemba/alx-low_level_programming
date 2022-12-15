#include <stdio.h>

/**
 * main - Entry point
 * variable num is initialized to 0
 * each time the loop condition is true,
 * it prints the content in num,
 * and increement num by 1
 * Then prints the new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	short num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
