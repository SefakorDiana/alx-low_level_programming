#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int length_of_string, i;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (i = 0; src[i] != '\0'; i++, length_of_string++)
	{
		dest[length_of_string] = src[i];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
