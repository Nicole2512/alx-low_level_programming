#include "main.h"
/**
 * _strstr - finds substrig
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: pointer to beginning of located substring if found
 * otherwise return null
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
				break;
		}
		if (!*needle)
			return (result);

		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
