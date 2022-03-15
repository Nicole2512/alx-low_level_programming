#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number whose last digit is  to be printed
 *
 * Return: Last digit of number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '-1');

	return (last_digit);
}