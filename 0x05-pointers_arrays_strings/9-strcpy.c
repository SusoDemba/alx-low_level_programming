#include "main.h"

/**
 * get_length - calculates the length of the string
 * character that's passed in it
 * @s: is the string length to measure
 * Return: length
 */
int get_length(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}


/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @src: contains the string characters
 * @dest: is the address we copy the contents to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= get_length(src); i++)
		dest[i] = src[i];

	return (dest);
}
