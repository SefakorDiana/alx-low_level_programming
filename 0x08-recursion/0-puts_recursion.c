#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * main - entry point
 * @s: string to be printed
 * Return: a string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
		_putchar(*s);
		s++;
	_puts_recursion(s);
}
