#include "main.h"
/**
 *int _islower-a program that prints lower alphabets
 *Return: 0 (success)
 */
int _islower(int c)
{
char letter;
for( letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'c')
{
return (0);
}
else
{
return (1);
}
_putchar('\n'); 
}
}
