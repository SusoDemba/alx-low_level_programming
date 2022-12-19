#include "main.h"

/**
 * _islower - checks for lowercase character
 * Returns: 1 if the parameter(c) is lowercase
 * Returns: 0 otherwise
 */
int _islower(int c)
{
	int lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		if (c == lower_case)
			return (1);
	}
	return (0);
}
