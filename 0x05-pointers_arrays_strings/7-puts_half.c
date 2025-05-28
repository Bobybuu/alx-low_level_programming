#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * followed by a new line.
 * @str: string to be printed
 * Return: (0) Always
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length %  2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2 + 1;
	}
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}

