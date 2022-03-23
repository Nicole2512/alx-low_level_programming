#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int x, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		x = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = x;
	}
}
