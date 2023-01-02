#include "main.h"

/**
 * _strchr - pointer to the first occurrence c or null
 * @s: string argument
 * @c: character argument
 * Return: null if c not found
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
