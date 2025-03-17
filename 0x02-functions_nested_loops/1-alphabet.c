#include "main.h"
/**
 * main-A program that prints alphabets
 * Return: 0 (success)
 */
void print_alphabet(void)
{
char letter = 'a';
while(letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
