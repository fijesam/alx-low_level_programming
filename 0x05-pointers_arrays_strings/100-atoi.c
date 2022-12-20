#include <stdio.h>
#include "main.h"

/**
 * _atoi - str to int
 * @s: argument
 * Return: int
 */

int _atoi(char *s)
{
	int x, a = 0;

	int b, c = 1;

	for (int c = 0; *(s + c) != '\0'; c++)
	{
		if (*(s + c) == '-')
			b *= -1;
		if (x > 0 && *(s + c) < '0' || *(s + c) > '9')
			break;
		if (*(s + c) >= '0' && *(s + c) <= '9')
			if (x > 0)
				c *= 10;
			x++;
	}
	for (int i = c - x; i < c; i++)
		a = a + ((*(s + i) - 48) * c);
		c /= 10;
	return (a * b);

}
