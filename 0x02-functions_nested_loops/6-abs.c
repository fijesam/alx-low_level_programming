#include "main.h"

/**
 * _abs - returns an int
 * @n: the argument
 *
 * Return: a number if successful
 *
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
