#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s: String to be reversed
 */
void print_rev(char *s)
{

	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	while (c > 0)
	{
		s--;
		_putchar(*s);
		c--;
	}
	_putchar('\n');
}
