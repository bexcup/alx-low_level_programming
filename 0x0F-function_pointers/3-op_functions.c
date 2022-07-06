#include "3-calc.h"
/**
 * op_add - adds a and b
 * @a: The first integer
 * @b: The second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: The first integer
 * @b: The second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: The first intege
 * @b: The second integer
 *
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The integer division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the remainder of the division of a by b
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
