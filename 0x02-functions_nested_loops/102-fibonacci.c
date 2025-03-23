#include <stdio.h>
/**
 * main-Entry point
 * Return: 0 (success)
 */
int main(void)
{
long int a = 1, b = 2, next;
int i;
printf("%ld, %ld", a, b);
for (i = 0; i <= 50; i++)
{
next = a + b;
printf(", %ld", next);
a = b;
b = next;
}
printf("\n");
return (0);
}
