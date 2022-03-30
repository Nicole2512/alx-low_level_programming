#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: numberwhose natural square root to be retuned
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - square root recursion
 * @n: number
 * @i: root to be tested
 *
 * Return: square root
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
