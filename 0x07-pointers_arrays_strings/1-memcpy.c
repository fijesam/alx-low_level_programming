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
	int size = n;

	if (size > 0)
	{
		int i;

		while (i < size)
		{
			i++;
		}
		dest[i] = src[i];
	}
	return (dest);
}
