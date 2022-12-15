#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * This 'main' function generates random number and store it in variable n
 * The last digit of n is stored in variable l_digit
 * If l_digit is equal to 0, it prints a message that it's equal to 0
 * Else if last digit is less than 6 and not equal to 0,
 * it prints a message for less than 6 but not 0
 * Otherwise, it prints a message that last digit is greater than 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* l_digit contains the last digit of the variable n */

	if ((n % 10) < 6)
	{
		if ((n % 10) == 0)
			printf("Last digit of %d is %d and is 0\n", n, n % 10);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}

	return (0);
}
