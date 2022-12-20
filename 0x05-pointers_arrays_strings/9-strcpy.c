#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies from source to destination
 * @dest: destination argument
 * @src: source argument
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';
	return (dest);
}
