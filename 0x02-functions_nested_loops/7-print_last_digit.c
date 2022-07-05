#include "main.h"

/**
 * print_last_digit - retuns the last digit
 * @n: the number to check
 * Return: 0 or 1
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		num = -1 * (n % 10);
	}
	else
	{
		num = n % 10;
	}
	_putchar(num + '0');
	return (num);
}
