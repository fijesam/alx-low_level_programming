#include <stdio.h>
#include "main.h"

/**
 * leet - converts str to 1337 format
 * @str: string argument
 * Return: Char
 */

char *leet(char *str)
{
	int i, j;

	int small[] = {97, 101, 111, 116, 108};

	int caps[] = {65, 69, 79, 84, 76};

	int list[] = {52, 51, 48, 55, 49};

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(str + i) == small[j] || *(str + i) == caps[j])
			{
				*(str + i) = list[j];
				break;
			}
		}
	}
	return (str);
}
