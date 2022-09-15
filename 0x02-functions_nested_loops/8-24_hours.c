#include "main.h"
/**
 * jack_bauer -> print 24 hours
 */
void jack_bauer(void)
{
	int hour, minutes;

	for (hour = 0; hour < 24; hour++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			else if (hour >= 10)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
			}
			if (minutes < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(minutes + '0');
			}
			else if (minutes > 10)
			{
				_putchar(':');
				_putchar((minutes / 10) + '0');
				_putchar((minutes % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
