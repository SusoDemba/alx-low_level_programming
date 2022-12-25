#include "main.h"

/**
 * _strcmp - it compares to strings and returns a
 * message indicating either the same or not
 * @s1: the string parameter to compare
 * @s2: the string parameter to compare
 * Return: 0 if equal, otherwise positive or negative
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			return (s1[i] - s2[i]);
	}

	return (0);
}
