#include "main.h"

int primenum(int n, int i);

/**
 *is_prime_number - function that checks if the input integer is a prime number
 *@n: input integer.
 *Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primenum(n, n - 1));
}

/**
 * primenum - recursion to calculate if number is prime.
 * @n: number input.
 * @i: recursive iterator.
 * Return: 1 if n is prime, otherwise 0.
 */

int primenum(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (primenum(n, i - 1));
}
