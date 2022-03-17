#include "main.h"

/**
 * print_diagonal - draw diagoanl line using \ on terminal
 * @n: number of \ characters to be used
 *
 */
void print_diagonal(int n)
{
	int len, i;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (i = 0; i < len; len++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
