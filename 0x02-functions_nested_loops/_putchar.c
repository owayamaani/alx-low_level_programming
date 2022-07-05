#include <unistd.h>

/**
 * _putchar writes the character c to stdout
 * @c: the character to be printed out
 * Return: 1 on succes
 * on error, -1 is returned and an errno set appropriate;y
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
