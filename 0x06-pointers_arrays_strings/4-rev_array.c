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
	int temp, i;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	printf(a);
	return (0);
}
