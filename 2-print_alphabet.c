#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * using putchar
 * Return: 0 (success)
 */
int main(void)
{
char ch;
for (ch = "a"; ch <= "z"; ch++)
{
putchar(ch);
}
putchar("\n");
return (0);
}
