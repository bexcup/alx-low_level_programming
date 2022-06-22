#include "main.h"
int sqrt_check(int x, int y);
int _sqrt_recursion(int n);

/**
 * sqrt_check - checks for the square root of y
 * @x: number to be tested
 * @y: number to find sqrt of
 *
 * Return: -1 or sqrt of y
 */
int sqrt_check(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (sqrt_check(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
