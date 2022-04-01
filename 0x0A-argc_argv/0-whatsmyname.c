#include <stdio.h>

/**
 * main - prints its function name, followed by a new line.
 * @argc: offset count
 * @argv: offset value
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
