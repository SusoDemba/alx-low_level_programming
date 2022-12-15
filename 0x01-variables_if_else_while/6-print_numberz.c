#include <stdio.h>

/**
 * variable num is initialized to 0
 * each time the loop condition is true, it prints the content in num,
 * and increement num by 1
 * Then prints the new line
 * main function returns 0
 */
int main(void)
{
	short num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
}
