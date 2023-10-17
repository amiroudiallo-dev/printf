#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
