#include "main.h"
/**
 * _strchr - locates character in string
 * @s:string to be searched
 * @c: character to be located
 *
 * Return: If c is found, pointer to first occurrence
 * otherwise return null
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
