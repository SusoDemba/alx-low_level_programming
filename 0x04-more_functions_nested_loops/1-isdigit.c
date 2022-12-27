#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the integer to be determined
 * Return: 1 if digit, otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	return (0);
}
