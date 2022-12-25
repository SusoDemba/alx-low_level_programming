#include "main.h"

/**
 * length_of_string - calculates the number of
 elements in an string
 * @s: the string which length is to be determined
 * Return: length of the string
 */
int length_of_string(*s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	length++;

	return (length);
}

/**
 * *_strncat - concatenate two strings
 * @n: number of bytes to use at most from src
 * @src: the string to concatenate to dest
 * @dest: the string that adds another string to itself
   until n value of src is reached
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length_of_dest = length_of_string(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[length_of_dest + i] = src[i];
	dest[length_of_dest + i] = '\0';

	return (dest);
}
