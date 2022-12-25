#include "main.h"

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
	int j = 0;
	int idx = 0;

	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
