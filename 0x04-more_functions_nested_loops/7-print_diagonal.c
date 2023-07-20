#include <stdio.h>

#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: the number of times the character \
 * should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	_putchar('\');
	}
	if (i <= 0)
	{
	_putchar('\n');
	}
	_putchar('\n');
}
