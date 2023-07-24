#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: one integer
 * @b: another integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
