#include "main.h"

/**
 *times_table - prints 9 times table starting 0
 * @n: the character to be checked
 *
 * Return: 0
 */

void times_table(void)
{
	int a, b, tab;
	a = '9';
	
	_putchar('times table of 9 is'\n, a);
	for (b = 0; b <=12; b++)
	{
	tab = a*b;
	_putchar('%d * %d = %9d\n', a, b, tab);
	}
	return (0);
}
