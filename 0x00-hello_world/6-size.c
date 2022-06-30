#include <stdio.h>

/**
 * main - prints sizes of the various datatypes
 * Return: 0 if well exited and a non-zero if not
 */
int main(void)
{
		printf("Size of a char: %d byte(s)\n", sizeof(char));
		printf("Size of an int: %d byte(s)\n", sizeof(int));
		printf("Size of a long int: %d byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
		printf("Size of float: %d byte(s)\n", sizeof(float));
		return (0);
}
