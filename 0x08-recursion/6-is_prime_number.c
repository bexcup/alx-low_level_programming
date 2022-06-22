#include "main.h"

int prime_check(int x, int y);
int is_prime_number(int n);

/**
 * prime_check - checks to see if a number is a prime
 * @x: factor check
 * @y: possible prime number
 *
 * Return: 1 if prime, 0 if not
 */
int prime_check(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}

	else if (x > y / 2)
	{
		return (1);
	}

	else
	{
		return (prime_check(x + 1, y));
	}
}

/**
 * is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
