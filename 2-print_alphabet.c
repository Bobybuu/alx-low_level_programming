#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * using putchar
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar("\n");
return (0);
}
