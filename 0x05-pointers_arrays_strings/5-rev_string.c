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

	while (s* != '\0')
	{
		length++;
		s++;
	}
	s--;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
		i++;
		j--;
	}
}

