#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: an input sting
 * Return: nothing
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
