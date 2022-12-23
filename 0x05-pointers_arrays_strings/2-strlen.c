#include "main.h"

/**
 * _strlen - returns the length of a string
 * that is stored in @*s param
 * Return: length of the string
 */
int _strlen(char *s)
{
	int lg;

	for (lg = 0; *s != '\0'; lg++)
		s++;

	return (lg);
}
