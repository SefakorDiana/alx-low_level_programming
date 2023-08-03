#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @n: number of bytes copied
 * @src: bytes memory area
 * @dest: destination memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
