#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the argument
 *
 * Return: a number
 */

int print_last_digit(int n)
{
	int units = n % 10;

	if (units < 0)
	{
		units *= -1;
	}
	_putchar(units + '0');
	return (units);
}
