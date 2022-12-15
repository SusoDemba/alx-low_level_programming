#include <stdio.h>

/**
 * num variable is initialized to 0
 * If num is less than 10, content in num is diaplayed and 
 * after each loop, num increments by 1
 * main returns 0
 */
int main(void)
{
	short num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
