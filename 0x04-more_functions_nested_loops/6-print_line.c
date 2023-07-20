#include <stdio.h>

#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times character should be printed
 * Rturn: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	_putchar('-');
	}
	}
	putchar('\n');
}
