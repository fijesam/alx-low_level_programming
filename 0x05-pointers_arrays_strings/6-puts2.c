#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints a str
 * @str: argument
 * Return: void
 */

void puts2(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
		_putchar(str[i]);
	_putchar('\n');
}
