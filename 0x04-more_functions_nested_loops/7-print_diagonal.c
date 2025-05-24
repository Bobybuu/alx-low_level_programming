#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 * Return: (0)
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (i < n)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}

