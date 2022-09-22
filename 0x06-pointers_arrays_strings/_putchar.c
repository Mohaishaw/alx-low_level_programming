#include "main.h"
#include <unistd.h>

/**
 * _ptuchar - writes the character c to stdout
 * @c: the charactor to print
 *
 * Return: on success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
