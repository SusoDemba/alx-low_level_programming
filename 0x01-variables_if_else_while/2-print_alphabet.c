#include <stdio.h>

/**
 * At first, variable letter point at a, then for each iteration, it points at the next value
 * After the value z, the condition fails,
 * and new line is made
 * Then the main fuction returns 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
