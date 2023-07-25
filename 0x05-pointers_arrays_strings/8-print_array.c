#include "main.h"
#include <stdio.h>

/**
 *  print_array - a function that prints n elements of an array
 *  @a: print array of integers
 *  @n: number of elements of the array to be printed
 *  Return: 0
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
