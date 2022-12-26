#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: string that it appended to
 * @dest: appends the src string to itself
 * the null byte(\0) is adjusted to the last of dest
 * Return: a pointer to the resulting strng, dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
