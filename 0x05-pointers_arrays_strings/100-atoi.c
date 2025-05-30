#include "main.h"

/**
 *  _atoi - a function that convert a string to an integer
 *  @s: string
 *
 */
int _atoi(char *s)
{
	int sign = 1;

	int result = 0;

	int found_digit = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			;
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			result = result * 10 + (*s - '0');
		}
		else if (found_digit)
			break;
		s++;
	}
	return (sign * result);
}

