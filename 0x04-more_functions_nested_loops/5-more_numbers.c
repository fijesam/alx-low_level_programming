#include "main.h"

/**
 * more_numbers - displays nums
 * Return: void
 */

void more_numbers(void)
{
	int m;
	int n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + 48);
			}
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
