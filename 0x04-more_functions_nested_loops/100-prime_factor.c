#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
		{
			i++;
		}
	}

	printf("%lu\n", n);
	return (0);
}

