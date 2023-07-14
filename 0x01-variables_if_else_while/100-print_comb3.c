#include <stdio.h>
/**
 * main - Printing alphabets in reverse
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit1 = 0;

	while (digit1 <= 9)
	{
	int digit2 = digit1 + 1;

	while (digit2 <= 9)
	{
	putchar('0' + digit1);
	putchar('0' + digit2);

	if (digit1 != 8 || digit2 != 9)
	{
	putchar(',');
	putchar(' ');
	}
	digit2++;
	}
	return (0);
}
