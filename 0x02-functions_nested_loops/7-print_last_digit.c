#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int l_digit;

	if (n < 0)
		l_digit = (n%10) *(-1);
	else
		l_digit = n%10;
	_putchar(l_digit);

	return (l_digit);
}
