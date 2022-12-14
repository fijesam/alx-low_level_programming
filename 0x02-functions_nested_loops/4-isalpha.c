#include "main.h"

/**
 * _isalpha - Check for capital letters
 * @c - the argument
 *
 * Return: 1 if capital letter, 0 if otherwise
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
