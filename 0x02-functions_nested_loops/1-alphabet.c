#include "main.h"

/**
 * print_alphabet - prints the alphabets ,in lowercaswe
 * followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

