#include <stdio.h>

/**
 * main - prints numbers from 1 to 100, followed
 * by a new line. For multiples of 3, it prints Fizz.
 * For multiples of 5, it prints Buzz.
 * For multiples of both 3 & 5, it prints fizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
