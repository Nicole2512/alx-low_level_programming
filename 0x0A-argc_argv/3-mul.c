#include <stdlib.h>
#include <stdio.h>
/**
 * main - multplies two numbers
 * @argv: array of pointers to the arguemnts
 * @argc: number of arguements
 *
 * Return: If prgram receives 2 arguments - 0
 * otherwise return 1
 */
int main(int argc, char *argv[])
{
	int i, val = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		val *= atoi(argv[i]);
	printf("%d\n", val);
	return (0);
}
