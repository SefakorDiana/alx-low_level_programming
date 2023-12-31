#include "main.h"

/**
 * _strcmp - a function that compares 2 strings
 * @s1: pointer to string
 * @s2: pointer to 2nd  string
 * Return: value less than 0 if string is less than the other
 */

int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	compare_value =  s1[counter] - s2[counter];
	return (compare_value);
}
