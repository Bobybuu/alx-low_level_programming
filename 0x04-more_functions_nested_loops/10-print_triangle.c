#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size:is the size of the triangle
 * Return: (0) Always
 */
void print_triangle(int size)
{
	int i = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= size)
	{
		int j = 1;

		int k = 1;

		while (j <= (size - i))
		{
			_putchar(' ');
			j++;
		}
		while (k <= i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
}
