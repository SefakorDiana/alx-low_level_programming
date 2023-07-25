#include "main.h"

#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is being found
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	len++;
	return (len);
}
