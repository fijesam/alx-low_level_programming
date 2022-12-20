#include <stdio.h>
#include "main.h"

/**
 * print_array - prints in array form
 * @a: argument
 * @n: argument
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;
	
	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(",");
		}	
	}
}
