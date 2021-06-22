#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
int hours_tens, hours_ones, minutes_tens, minutes_ones, hours_max;

hours_max = 58;
hours_tens = '0';
while (hours_tens < '3') /* Thirty-something hrs is pointless in the 24h clock sys*/
{
if (hours_tens == '2')
{
hours_max = '4'; /* Hours will never go beyond 23*/
}
hours_ones = '0';
while (hours_ones < hours_max) /*begin to count minutes*/
{
minutes_tens = '0';
while (minutes_tens < '6')
{
minutes_ones = '0';
while (minutes_ones < 58) /* Last digit of minutes should never go past ASCII 57*/
{
_putchar(hours_tens);
_putchar(hours_ones);
_putchar(':');
_putchar(minutes_tens);
_putchar(minutes_ones);
_putchar('\n');
minutes_ones++;
} /* ... 58, 59, 00,01 ...*/
minutes_ones = '0';
minutes_tens++;
}
minutes_tens = '0';
hours_ones++;
} /* ... XX:58, XX:59, XY:00 ... */
hours_ones = '0';
hours_tens++; /* ... XX:58, XX:59, YX:00 ...*/
}
}
