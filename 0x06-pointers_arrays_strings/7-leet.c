#include "main.h"
/**
 * leet - encode string to 1337.
 * @str: string to be encoded
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i = 0, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}