#include "main.h"

/**
 * _abs - absolute value 
 * @n: The argument
 *
 * Return: returns an int.
 */

int _abs(int n)
{
	int n;

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
