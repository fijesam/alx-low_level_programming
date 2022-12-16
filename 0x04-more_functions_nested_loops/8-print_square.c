#include "main.h"

/**
 * print_square - displays in square shape
 * @size: argument
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
