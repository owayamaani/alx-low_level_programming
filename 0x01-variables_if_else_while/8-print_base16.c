#include <stdio.h>

/**
 * main -prints all numbers of base 16 in lowercase
 * followed by a new line
 * Return : always 0 
 */
int main(void)
{
	int n;
	char chr;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (chr = 'a'; chr <= 'f'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
