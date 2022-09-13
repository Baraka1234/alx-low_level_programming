#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hours = 0;
	int min = 0;
	int hr_remainder, min_remainder;

	while (hours <= 13)
	{
		while (min <= 59)
		{
			min_remainder = min % 10;
			hr_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hr_remainder + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_remainder + '0');
			min++;
			_putchar('\n');
		}
		hours++;
		min = 0;
	}
}
