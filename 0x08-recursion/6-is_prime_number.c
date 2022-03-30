#include "main.h"
/**
 * _divisor - check if number is divisible
 * @num: number to be checked
 * @div: the divisor
 *
 * Return: if divisible -0,
 * otherwise return -1
 */
int _divisor(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (_divisor(num, div + 1));
}

/**
 * is_prime_number - check if number is prime
 * @n: number to be checked
 *
 * Return: if num is not prime return -0,
 * otherwise return -1
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (_divisor(n, div));
}
