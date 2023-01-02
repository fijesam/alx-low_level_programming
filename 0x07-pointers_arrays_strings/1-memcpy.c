#include "main.h"

/**
 * char *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination argument
 * @src: source argument
 * @n: number of bytes
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}