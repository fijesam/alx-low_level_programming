#include "main.h"
#define NULL 0

/**
 * _strstr - pointer to first occurrence in substring
 * @haystack: mainstring argument
 * *@needle: substring argument
 * Return: Beginning of substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				k = 0;
				if (haystack[k] == needle[j])
				{
					k++;
				}
				else
				{
					k = 0;
					break;
				}
			}
			break;
		}
	}
	return (NULL);
}
