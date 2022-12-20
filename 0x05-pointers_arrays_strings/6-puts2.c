#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints a str
 * @str: argument
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < i; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
