#include "main.h"

/**
 * print_sign - checks 1,0,-1 and +,0,- repectively
 *
 * @n: argument
 * Return: 1,0,-1
 */

int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	else
	{
		x = -1;
		_putchar('-');
	}
	return (x);	
}
