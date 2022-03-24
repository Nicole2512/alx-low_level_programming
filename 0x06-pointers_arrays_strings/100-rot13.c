#include "main.h"
/**
 * rot13 - ecodes string using rot13
 * @s: sring to be encoded
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotkey[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rotkey[j];
				break;
			}
		}

	}
	return (s);
}
