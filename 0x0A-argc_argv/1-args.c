#include <stdio.h>
/**
 * main - prints number of arguements passed to it
 * @argv: array of pointers to arguements
 * @argc: number of arguements
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
