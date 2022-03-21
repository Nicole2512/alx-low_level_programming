#include "main.h"
/**
 * swap_int - Swap value of two integers
 * @a: first int whose value to be swapped
 * @b: second int whose value is swapped
 */
void swap_int(int *a, int *b)
{
	int a_ptr = *a;
	*a = *b;
	*b = a_ptr;
}
