#include <stdio.h>

/**
 * main - prints the numbers 1-100 but for multiplesof 3
 * Fizz is printed instead of the number and for mltiples of 5
 * Buzz is printed, and FizzBuzz for multiples of 3 and 5
 * Return 
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 ) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
