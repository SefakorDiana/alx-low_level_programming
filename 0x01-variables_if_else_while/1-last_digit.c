#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigning random numbers to variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastd = n % 9;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d\n", n, lastd);

	if (lastd > 5)
	{
	printf(" and is greater than 5\n", lastd);
	}
	else if (lastd == 0)
	{
	printf(" and is 0\n", lastd);
	}
	else
	{
	printf(" and is less than 6 and not 0\n", lastd);
	}
	return (0);
}
