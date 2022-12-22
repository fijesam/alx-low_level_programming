#include <unistd.h>

/**
 * _putchar - prints to stdout
 * @c: the argument
 * Return: a value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
