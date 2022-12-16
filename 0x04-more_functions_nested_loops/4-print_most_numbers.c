#include "main.h"

/**
 * print_most_numbers - displays nums
 * Return: void
 */

void print_most_numbers(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		if (k != 2 && k != 4)
		{
			_putchar(k);
		}
	}
	_putchar('\n');
}
