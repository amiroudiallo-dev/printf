#include "main.h"
/**
 * _putchar - write string to the stdout
 * @ch: the character
 * Return: 1 on success and -1 if failed
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
