#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: the argument
 * Returns: 1 if lower case, other wise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
