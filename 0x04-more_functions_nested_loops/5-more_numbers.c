#include <stdio.h>

#include "main.h"

/**
 * more_numbers - print 0 t0 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
