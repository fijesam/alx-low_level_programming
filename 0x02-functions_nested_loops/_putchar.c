#include <unistd.h>

/**
 * _putchar - prints the argument
 * @c: the argument
 *
 * Return: 1 (Success)
 * return: -1 (Error)
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
