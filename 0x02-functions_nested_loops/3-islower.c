#include "main.h"

/**
 * _islower - Shows 1 if the input is a lowercase character
 * @c: The character in ASCII code
 * Return: 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')

	{

		return (1);

	}

	else

	{

		return (0);

	}

	_putchar('\n');

}
