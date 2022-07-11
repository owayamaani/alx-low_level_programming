#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first int to be swapped
 * @b: next int to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int t;
	
	t = *a;
	*a = *b;
	*b = t;
}
