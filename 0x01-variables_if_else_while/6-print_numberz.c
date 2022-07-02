#include <stdio.h>

/**
 * main - print sinle digit numbers of base 10 from 0,
 * followed by a new line using putchar
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
