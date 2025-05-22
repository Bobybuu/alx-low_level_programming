#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: (0)
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j >= 10)
			_putchar('1');
			_putchar('0' + (j % 10));
			j++;
		}
	_putchar('\n');
	i++;
	}
}

