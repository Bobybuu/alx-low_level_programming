#include "main.h"
/**
*void print_alphabet_x10-prints
*alphabets 10X now
*Return: 0 (success)
*/
void print_alphabet_x10(void)
{
int i = 1;
while(i <= 10)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}
