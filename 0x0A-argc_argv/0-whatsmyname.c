#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name
 * @argc: arguments count
 * @argv: array of argumants
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
		return (0);
}
