#include <stdio.h>
#include "main.h"

/**
 * cap_string - caps firts letter of a str in a sentence or passage
 * @str: argument
 * Return: str
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == ':' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '('
				|| str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '[' || str[i] == ']')
		{
			if (str[i++] >= 97 && str[i++] <= 122)
			{
				str[i++] = str[i++] - 32;
			}
		}
	}
	return (str);
}
