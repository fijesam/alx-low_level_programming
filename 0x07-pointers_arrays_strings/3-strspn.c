#include "main.h"

/**
 * _strspn - return thesame number of bytes from s and accept
 * @s: string argument
 * @accept: target argument
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int k = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else
			{
				k = 0;
			}
		}
		i++;
	}
	return (k);
}
