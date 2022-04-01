#include <stdio.h>
/**
 * main -prints arguemts it receives
 * @argc: number of arguements
 * @argv: array of pointers to the arguements
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
