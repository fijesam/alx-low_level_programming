#include <stdio.h>
#include "main.h"

/**
 * _atoi - str to int
 * @s: argument
 * Return: int
 */

int _atoi(char *s)
{
	int y = 0, x = 0, a = 0, b = 1, c = 1, i;

	for (y = 0; *(s + y) != '\0'; y++)
	{
		if (*(s + y) == '-')
		{
			b *= -1;
		}
		if ((x > 0) && (*(s + y)) < '0' || (*(s + y)) > '9')
		{
			break;
		}
		if (*(s + y) >= '0' && *(s + y) <= '9')
		{
			if (x > 0)
			{
				c *= 10;
			}
			x++;
		}
	}
	for (i = y - x; i < y; i++)
	{
		a = a + ((*(s + i) - 48) * c);
		c /= 10;
	}
	return (a * b);

}
