#include <stdio.h>

#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int c;
	char i = 0;

	while (i < 10)
	{
	for (c = 0; c <= 14; c++)
	{
	if (c >= 10)
	_putchar('1');
	_putchar(c % 10 + '0');
	}
	_putchar('\n');
	i++;
	}
}
