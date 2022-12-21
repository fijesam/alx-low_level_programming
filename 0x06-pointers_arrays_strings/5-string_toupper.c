#include <stdio.h>
#include "main.h"

/**
 * string_toupper - lowercase str to uppercase str
 * @str: str argument
 * Return: str in uppercase
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
