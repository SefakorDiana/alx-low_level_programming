#include <stdio.h>
/**
 * main - Printing numbers of base 16 in lower case
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
	putchar(digit);
	digit++;
	}

	char letter = 'a';

	while (letter <= 'f')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}
