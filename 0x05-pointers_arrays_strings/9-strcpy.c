#include "main.h"

/**
 *
 *
 *
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
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= get_length(src); i++)
		dest[i] = src[i];

	return (dest);
}
