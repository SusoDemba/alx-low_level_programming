#include "main.h"

/**
 * leet - encodes a string into 1334
 * @s: the string to be encoded
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i;
	int j;

	char a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}

	return (s);
}
