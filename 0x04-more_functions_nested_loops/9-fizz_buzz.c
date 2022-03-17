#include <stdio.h>
/**
 * main -Prints numbers from 1-100,but for multiples of 3 prinTt Fizz,
 * multiples of 5 print Buzz and multiples of both 3 and 5
 * print FizzBuzz.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
