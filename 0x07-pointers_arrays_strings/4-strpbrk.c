#include "main.h"

/**
 * _strpbrk - locates first occurrence in string s of any bytes in string accept
 * @s: string argument
 * @accept: target argument
 * Return: pointer to the byte in s that matches the byte in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ("NULL");
}
