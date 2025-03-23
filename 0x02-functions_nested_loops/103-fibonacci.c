#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
    long int a = 1, b = 2, sum = 0, next;

    while (a <= 4000000)
    {
        if (a % 2 == 0)
        {
            sum += a;
        }
        next = a + b;
        a = b;
        b = next;
    }

    printf("%ld\n", sum);
    return (0);
}
