#include "main.h"

/**
 * rev_string - reverses the string of the
 * the @*s param
 * Return: nothing
 */
void rev_string(char *s)
{
	int lg = 0;
	int i = 0;
	char tmp;

	while (*s != '\0')
	{
		lg++;
		s++;
	}

	/** for the last iteration, the pointer points at '\0' character
	 *  therefore, we bring the pointer back by one place so that
	 *  it points to the last character of the string
	 */
	--lg;
	while (lg > i)
	{
		tmp = s[i];
		s[i] = s[lg];
		s[lg] = tmp;
		i++;
		lg--;
	}
}
