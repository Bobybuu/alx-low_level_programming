#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: is the size of the square
 * Return: (0)
 */
void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}

}

