#include <stdio.h>
/**
 * main - Printing single digits in base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
	putchar('0' + number);
	number++;
	}
	putchar('\n');
	return (0);
}
