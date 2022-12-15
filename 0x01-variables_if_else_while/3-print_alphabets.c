#include <stdio.h>

/**
 * main: Entry point
 * letter is a variable that contains one letter at a time successively
 * The first for loop prints small letters from a - z
 * The second for loop prints capital letters from A - Z on the same line as the first
 * Then the function returns 0
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
