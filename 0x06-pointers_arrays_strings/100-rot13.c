#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a str into rot13
 * @str: str argument
 * Return: char str
 */

char *rot13(char *str)
{
	int i, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + i) == alpha[j])
			{
				*(str + i) = rot13[j];
				break;
			}
		}
	}
	return (str);
}
