#include <stdio.h>

#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * @c: numbers to be printed
 * Return: 0
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
