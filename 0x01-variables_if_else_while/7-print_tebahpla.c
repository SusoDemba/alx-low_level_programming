#include <stdio.h>

/**
 * main - Entry point
 * variable letter is initialized to z,
 * while letter >= a, content in letter is printed and
 * letter is decrements by 1
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
