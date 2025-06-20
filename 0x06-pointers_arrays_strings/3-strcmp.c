#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if the strings are equal,
 * negative if s1<s2,
 * positive if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}

