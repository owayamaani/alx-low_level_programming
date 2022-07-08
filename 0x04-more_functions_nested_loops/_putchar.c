#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed out
 * Return: 1 on success
 * on error, return -1 and errno is set appropriately
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
