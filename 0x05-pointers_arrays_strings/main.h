/**
 * reset_to_98 - takes an int as a parameter and
 * updates the value it points to to 98
 * Return: nothing
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the value of the
 * two parameters
 * Return: nothing
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * that is stored in @*s param
 * Return: length of the string
 */
int _strlen(char *s);

/**
 * _puts - prints a string, followed by a
 * new line, to stdout
 * Return: nothing
 */
void _puts(char *str);

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * Return: nothing
 */
void print_rev(char *s);


/**
 * rev_string - reverses the string of the
 * the @*s param
 * Return: nothing
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * Return: nothing
 */
void puts2(char *str);

/**
 * puts_half - prints half of the string that is passed
 * the string (@*s param) that is passed to the function
 * Return: the length of the string
 */
void puts_half(char *str);

/**
 * print_array - prints n number of element in the array
 *
 * Return: nothing
 */
void print_array(int *a, int n);

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src);
