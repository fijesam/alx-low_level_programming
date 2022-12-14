#include <unistd.h>

/**
 * print_alphabet - entry point
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		_putchar(p);
		p++;
	}	
	_putchar('\n');
}
