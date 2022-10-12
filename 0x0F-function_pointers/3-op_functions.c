#include "3-calc.h"

/**
 * op_add - function to add
 * @a: first integer
 * @b: second int
 *
 * Return: a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract
 * @a: first integer
 * @b: second integer
 *
 * Return:  a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two variables
 * @a: first integer
 * @b: second integer
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - operation to divide two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to get the remainder when 2 integers are divided
 * @a: first integer
 * @b: second integer
 *
 * Return: return the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
