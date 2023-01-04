#include "main.h"

/**
 * memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the pointer to where we should copy
 * @src: the pointer from where we should copy
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
