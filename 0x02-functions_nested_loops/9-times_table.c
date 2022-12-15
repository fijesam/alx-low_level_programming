#include "main.h"

/**
 * times_table - prints each line multiplied by a factor
 *
 * Return: a line of numbers
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 0)
			{
				_putchar(j*0);
				_putchar('\n');
			}
			else if (i == 1)
			{
				_putchar(j*1);
				_putchar('\n');
			}
			else if (i == 2)
			{
				_putchar(j*2);
				_putchar('\n');
			}
			else if (i == 3)
			{
				_putchar(j*3);
				_putchar('\n');
			}
			else if (i == 4)
			{
				_putchar(j*4);
				_putchar('\n');
			}
			else if (i == 5)
			{
				_putchar(j*5);
				_putchar('\n');
			}
			else if (i == 6)
			{
				_putchar(j*6);
				_putchar('\n');
			}
			else if (i == 7)
			{
				_putchar(j*7);
				_putchar('\n');
			}
			else if (i == 8)
			{
				_putchar(j*8);
				_putchar('\n');
			}
			else
			{
				_putchar(j*9);
				_putchar('\n');
			}
		}	
	}
}
