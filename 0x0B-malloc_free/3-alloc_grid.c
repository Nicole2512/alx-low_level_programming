#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of grid
 * @height: height of grid
 *
 * Return: NULL on failure
 * otherwise return pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **s, r, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		s[r] = malloc(sizeof(int) * width);

		if (s[r] == NULL)
		{
			for (; r >= 0; r--)
				free(s[r]);
			free(s);
			return (NULL);
		}

		for (c = 0; c <= width; c++)
			s[r][c] = 0;
	}
	return (s);
}
