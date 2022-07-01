#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * followed by a new line
 * Return: always 0
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr > 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
