#include "main.h"
/**
 * jack_bauer- a function that prints every minute of the day starting
 * Return: Always 0.
 */
void jack_bauer(void)
{
int hours, minutes;
for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
_putchar((hours / 10) + '0');
_putchar((hours % 10) + '0');
_putchar(':');
_putchar((minutes / 10) + '0');
_putchar((minutes % 10) + '0');
_putchar('\n');
}
}
}
