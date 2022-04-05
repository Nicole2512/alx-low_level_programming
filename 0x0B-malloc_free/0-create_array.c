#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array to be initialised.
 * @c: char to intitlize array with
 *
 * Return: NULLid size = 0,
 * otheriwse return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (0);

	p = malloc((size) * sizeof(char));

	if (p == '\0')
		return (0);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
