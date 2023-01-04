#include "main.h"

/**
 * _memset -  fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to the memory area
 * @b: constatnt value to fill each location with
 * @n: number of bytoes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *beginning = s;
	int i;

	for(i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (beginning);
}
