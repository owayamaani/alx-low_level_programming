#include <stdio.h>

/**
 * main - prints lower case alphabets
 * followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	char chr;

	for (chr = 'a' ; chr <= 'z' ; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
