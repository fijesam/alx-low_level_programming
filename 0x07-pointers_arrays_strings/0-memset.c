#include "main.h"

/**
 * _memset - fills n bytes of memory
 * @s: pointer
 * @b: constant
 * @n: bytes of memory area to fill
 * Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
