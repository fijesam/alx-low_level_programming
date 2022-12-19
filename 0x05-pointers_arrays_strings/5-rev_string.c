#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses the order
 * @s: argument
 * Return: void
 */

void rev_string(char *s)
{
	int i, b, x;
	char c;

	for (i = 0; s[i] != '\0'; i++)

	b = 0;
	x = i / 2;

	while (x--)
	{
		c = s[i - b - 1];
		s[i - b - 1] = s[b];
		s[b] = c;
		b++;
	}
}
