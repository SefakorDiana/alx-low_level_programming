#include "main.h"

/**
 * print_bi - prints binaryrepresentation of number recursively
 * @n: decimal point
 * Return: void
 */

void print_bi(unsigned long int n)

{
	if (n == 0)
		return;
	print_bi(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
