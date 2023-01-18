#include "3-calc.h"
ii
/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculatesthe difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- calculates the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided by b
 */
intop_mod(int a, int b)
{
	return (a % b);
}
