#include "main.h"
/**
 * factorial - returns factorial of number
 * @n: number to find factorial
 *
 * Return: if n > 0 factoral of n,
 * otherwise return error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);
	return (result);
}
