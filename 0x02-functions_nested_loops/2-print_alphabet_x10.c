#include "main.h"
/**
 * print_alphabet_x10 - Print alphabey x10
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int c = 0;

	while (c++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
