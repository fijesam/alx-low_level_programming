#include <stdio.h>

/**
 * main - displays all combination of two digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int units = '0';
	int tens = '0';

	while (tens <= '9')
	{
		while (units <= '9')
		{
			if (!(units == tens))
			{
				putchar(tens);
				putchar(units);
				putchar(',');
			}
			units++;
			tens++;
		}
	}
	putchar('\n');
	return (0);
}
