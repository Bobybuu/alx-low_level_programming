#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: is the size of the triangle
 * Return: (0) Always
 */
void print_triangle(int size)
{
	int row = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (row <= size)
	{
		int space = size - row;

		int hash = row;

		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		while (hash > 0)
		{
			_putchar('#');
			hash--;
		}
		_putchar('\n');
		row++;
	}
}

