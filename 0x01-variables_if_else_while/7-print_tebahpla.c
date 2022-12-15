#include <stdio.h>

/**
 * variable letter is initialized to z,
 * while letter >= a, content in letter is printed and
 * letter is decrements by 1
 * main returns 0
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
}
