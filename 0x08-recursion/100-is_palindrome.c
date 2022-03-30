#include "main.h"

/**
 * find_strlen - finds length of string
 * @s: string  to be checked
 *
 * Return: string length
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}
/**
 * check_palindrome - checks if string is palindrome
 * @s: string to be checked
 * @len: lenghth of string
 * @index: index of string to be checked
 *
 * Return: if string is palindrome 1,
 * otherwise 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be checked
 *
 * Return: if palindrome return 1,
 * otherwis e return 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
