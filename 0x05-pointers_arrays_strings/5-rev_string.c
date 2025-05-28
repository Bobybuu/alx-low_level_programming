#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: string
 * Return: (0) Always
 */
void rev_string(char *s)
{
	int length = 0;

	int i = 0;

	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	length = length - 1;
	while (i < length)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
		i++;
		length--;
	}
}

