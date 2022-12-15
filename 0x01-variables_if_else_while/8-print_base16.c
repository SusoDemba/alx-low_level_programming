#include <stdio.h>

/**
 * main - Entry point
 * variable num is initialized to 0
 * while content in num is <= 9, content in num is printed
 * then num is incremented by one for the subsequent iteration
 * when the condition fails, it moves to the second for loop
 * 
 * Then for the second for loop:
 * variable num is overwritten with a
 * while content in num is <= f, content in num is printed
 * when the condition fails, new line is made
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
