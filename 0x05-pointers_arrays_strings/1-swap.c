#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps to integers
 * @a: first argument/integer
 * @b: second argument/integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
