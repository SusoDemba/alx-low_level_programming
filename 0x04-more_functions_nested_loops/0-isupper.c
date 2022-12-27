#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be determined
 * Return: 1 if upper, otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
