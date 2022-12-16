#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: argument
 * Return: 0 (Successful)
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
