#include "main.h"

/**
 * print_triangle - displays in triangular format
 * @size: argument
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
		for (i = 1; i < size; i++)
			for (j = 1; j < size; j++)
				_putchar(' ');
				_putchar('#');
			_putchar('\n');
	else
		_putchar('\n');
}
