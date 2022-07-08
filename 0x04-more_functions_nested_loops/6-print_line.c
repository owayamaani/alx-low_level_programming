#include "main.h"

/**
 * print_line - draws a straight line using _
 * @n the number of _ characters to be printed
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	_putchar('\n')
}
