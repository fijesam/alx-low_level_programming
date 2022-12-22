#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a str
 * @dest: destination argument
 * @src: source str argument
 * @n: bytes value
 * Return: destination str
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
