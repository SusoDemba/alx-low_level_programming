#include "main.h"

/**
 * _strncpy - copies a string
 * @src: the string that have to be copied
 * @dest: the pointer to the string that accomodates
   the src string
 * @n: the number of characters to be copied
 * Return: the result that is in dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for(; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
