#include <stdio.h>

/**
 * main - prints the alphabets in lowercase excluding q and e
 * followed by a new line
 * Return: 0 always
 */
int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		if (chr != 'e' && chr != 'q')
		{
			putchar(chr);
		}
		chr++;
	}
	putchar('\n');
	return (0);
}
