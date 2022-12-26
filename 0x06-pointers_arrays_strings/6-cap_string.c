#include "main.h"

/**
 * is_separator - checks whether a particular character is a
   word separator or not
 * @c: the character to be determined
 * Return: 1 if true; 0 if false
 */
int is_separator(char c)
{
	int i;
	char word_separator[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (i < 13)
	{
		if (c == word_separator[i])
			return (1);
		i++;
	}

	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @c: the strings of characters to be capitalized
 * Return: the resulting capitalized string
 */
char *cap_string(char *c)
{
	int i;

	i = 0;
	if (c[i] >= 'a' && c[i] <= 'z')
	{
		c[i] = c[i] - 'a' + 'A';
		i++;
	}

	while (c[i] != '\0')
	{
		if (is_separator(c[i]) && (c[i + 1] >= 'a' && c[i + 1] <= 'z'))
			c[i] = c[i] - 'a' + 'A';
		i++;
	}

	return (c);
}
