#include "main.h"
/**
 * _memcpy - copy's memory data
 * @dest: pointer to memor area to copy @src into
 * @src: source buffer to copy characters from
 * @n: number of bytes to coopy from @src
 *
 * Return: pointer to destination buffer @dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
