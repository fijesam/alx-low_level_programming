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

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
