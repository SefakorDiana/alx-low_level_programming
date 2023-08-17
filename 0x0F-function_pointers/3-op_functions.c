#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two numbers
 * @a: the first number@b: the second number
 * @b: the second numberop_sub
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of the numbers
 * @a: the first number@b: the second number
 * @b: the second numberop_sub
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of two numbers
 * @a: the first number@b: the second number
 * @b: the second numberop_sub
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of two numbers
 * @a: the first number@b: the second number
 * @b: the second numberop_sub
 * Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of  two numbers
 * @a: the first number@b: the second number
 * @b: the second numberop_sub
 * Return: remainder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
