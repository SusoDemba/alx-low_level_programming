#include "main.h"

/**
 * _strncat - concatenate two strings
 * @n: number of bytes to use at most from src
 * @src: the string to concatenate to dest
 * @dest: the string that adds another string to itself
   until n value of src is reached
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while ((j < n) || (src[j] == '\0'))
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
