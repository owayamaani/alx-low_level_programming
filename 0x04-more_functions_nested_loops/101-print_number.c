#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10 ) > 0)
		print_number(i / 10);

	_putchar((num % 10) + '0');
}
