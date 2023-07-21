#include <stdio.h>

/**
 * main - prints from 1 to 100
 * Return: fizz for multiples of 3 and
 * buzz for multiples of of 5 and
 * fizzbuzz for both and i for otherwise
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
		{
		printf("fizzBuzz ");
		}
	else if (i % 3 == 0)
		{
		printf("fizz ");
		}
	else if (i % 5 == 0)
		{
		printf("buzz ");
		}
	else
		{
		printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
