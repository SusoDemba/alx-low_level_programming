/**
 * The function _putchar prints the content of
 * the formal parameter
 * Return: On success 1.
 * On error, -1 is returned, and error is set accordingly
 */
int _putchar(int c);

/**
 * print_alphabet - prints the leeters of the alphabet
 * in lower case
 * Returns: nothing (void)
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the lower case alphabets
 * (a - z)10times; each time on a new line
 * Return: nothing (void)
 */
void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 * Returns: 1 if the parameter(c) is lowercase
 * Returns: 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * Return: 1 if c is a letter
 * Return: 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number, n
 * Return: 1 and prints + if n is greater than zero
 * Return: 0 and prints 0 if n is zero
 * Return: -1 and prints - if n is less than zero
 */
int print_sign(int n);

/**
 * _abs - computes the absolute value of an
 * integer (value)
 * Return: value when 0 or more
 * Return: absolute value when negative
 */
int _abs(int);

/**
 * print_last_digit - prints the last digit of a number
 * Return: the value of the last digit
 */
int print_last_digit(int);

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: nothing (void)
 *
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: nothing (void)
 */
void times_table(void);

/**
 * add - adds two integers
 * Return: the result
 */
int add(int, int);

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * Return: nothing (void)
 */
void print_to_98(int n);
