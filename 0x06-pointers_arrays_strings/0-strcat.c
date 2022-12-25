#include "main.h"

/**
 * length_of_string - calculates the number of
   elements in an string
 * @s: the string which length is to be determined
 * Return: length of the string
 */
int length_of_string(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		length++;

	return (length);
}

/**
 * *_strcat - concatenate two strings
 * @src: string that it appended to
 * @dest: appends the src string to itself
 * the null byte(\0) is adjusted to the last of dest
 * Return: a pointer to the resulting strng, dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	while (i <= length_of_string(dest) && i >= 0)
	{
		dest--;
		i++;
	}

	return (dest);
}
