#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

