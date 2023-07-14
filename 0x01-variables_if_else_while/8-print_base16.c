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

	int bee = 'a';

	while (bee <= 'f')
	{
	putchar(bee);
	bee++;
	}
	putchar('\n');
	return (0);
}
