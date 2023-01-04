#include "main.h"

/**
 * _strchr - locates a character in a function
 * @s: the string in which we find the character
 * @c: the first occurrence of the character
 * Return: a pointer to the first occurrence of the character
 * Return: NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
