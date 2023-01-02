#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: pointer
 * @b: 
 * @n: memory size
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
