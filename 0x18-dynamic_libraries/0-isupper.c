#include <stdio.h>

#include "main.h"

/**
 * _isupper - checks for upper case letter
 * @c: the character to be checked
 * Return: 1 for upper case and 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
