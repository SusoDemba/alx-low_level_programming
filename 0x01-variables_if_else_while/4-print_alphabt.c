#include <stdio.h>
/**
  * main - Entry point
  * variable letter starts with a and keeps on changing to the next letter
  * after every iteration
  * In each iterarion, if letter is smaller than z and not e or q,
  * it prints the letter
  * Return: Always 0 (Success)
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');

	return (0);
}
