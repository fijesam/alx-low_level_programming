#include "main.h"

/**
 * print_line - display _ a number of times
 * @n: the argument
 * Return: void
 */

void print_line(int n)
{
	int q;

	for (q = 1; q <= n; q++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
