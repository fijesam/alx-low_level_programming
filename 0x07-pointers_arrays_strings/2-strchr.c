#include "main.h"

/**
 * _strchr - pointer to the first occurrence c or null
 * @s: string argument
 * @c: character argument
 * Return: null if c not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
