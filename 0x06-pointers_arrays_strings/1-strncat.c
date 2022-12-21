#include <stdio.h>
#include "main.h"

/**
 * _strncat - concantenates two strs within n bytes from src
 * @dest: destination str argument
 * @src: source str argument
 * @n: num of bytes from src
 * Return: concantenated str
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
