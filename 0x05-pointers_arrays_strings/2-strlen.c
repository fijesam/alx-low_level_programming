#include <stdio.h>
#include "main.h"

/**
 * _strlen - prints len of str
 * @s: argument
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
