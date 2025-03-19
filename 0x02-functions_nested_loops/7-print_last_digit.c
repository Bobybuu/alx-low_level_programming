#include "main.h"
/**
 * print_last_digit-a function that prints the last digit of a number
 * Return: value of the last digit
 * @n: value whose last digit is to be returned
 */
int print_last_digit(int n)
{
int result;
result = n % 10;
if (result < 0)
{
result *= -1;
}
else
{
_putchar(result + '0');
return (result);
}
}
