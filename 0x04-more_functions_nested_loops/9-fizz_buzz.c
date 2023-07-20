#include <stdio.h>

/**
 * main - prints from 1 to 100
 * Return: fizz for multiples of 3 and
 * buzz for multiples of of 5 and
 * fizzbuzz for both
 */

intmain(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
		{
		printf("fizzbuzz");
		}
	else if (i % 3 == 0)
		{
		printf("fizz");
		}
	else if (i % 5 == 0)
		{
		printf("buzz");
		}
	else
		{
		printf("%d ", i);
		}
	}
}
