#include <stdio.h>
/**
 * main - Printing alphabets in reverse
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
	putchar(letter);
	letter--;
	}
	return (0);
}