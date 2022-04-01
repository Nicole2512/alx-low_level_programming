#include "main.h"
/**
 * _islower - checks if characteris lowercase
 * @c: character to be checked
 *
 * Return: 1 if character islowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
