#include <stdio.h>
/**
 * main - Prints first 50 fibonaccinumbers beginning with 1 and 2
 * separated by a comma
 *
 * Return: Always 0
 */
int main(void)
{
	int c;
	unsigned long f1 =0, f2 = 1, sum;

	for (c = 0; c < 50;  c++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
