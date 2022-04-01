#include "main.h"
/**
 * _strpbrk - searched string for any set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 *
 * Return: pointer to matched byte if match is found
 * otherwise return null
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
