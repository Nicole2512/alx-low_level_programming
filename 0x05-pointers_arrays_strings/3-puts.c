#include "main.h"
/**
 * _puts -  prints a string to stdout
 * @str: string to printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
