/*
 * File: 8-24_hours.c
 * Auth: Akindele Abdul-Qudus
 */

#include "main.h"

/**
 * jack_bauer - prints evry minute of the day of Jack Bauer.
 * Jack Bauer, starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int hour, minutes;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
