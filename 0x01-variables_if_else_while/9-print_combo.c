#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 * in ascending order, using only putchar
 * Return: always 0
 */
int main(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
		if (y != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
