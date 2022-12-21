#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strs
 * @s1: first str argument
 * @s2: second str argument
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int j = 0;

	int val;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	val = s1[i] - s2[j];
	return (val);
}
