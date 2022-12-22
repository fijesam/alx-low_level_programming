#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array argument
 * @n: number of array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
	printf(a);
	return (0);
}
