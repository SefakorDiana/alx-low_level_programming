#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string to be searched
 * @c: character to locate
 * Return: returns c if it is found in the first occurance
 * of the string
 */

char *_strchr(char *s, char c)
{
	int i;


	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return ('\0');
}
