#include <stdio.h>

/**
 * main - print sinle digit numbers of base 10 from 0,
 * followed by a new line using putchar
 * Return: 0 always
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
