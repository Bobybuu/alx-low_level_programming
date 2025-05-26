#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n; /* Convert to positive */
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10); /* Recursive call to print higher digits */
	}

	_putchar((num % 10) + '0');
}

