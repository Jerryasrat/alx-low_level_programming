#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c stdout
 * @c: the character to print
 *
 * Return: 0n success 1.
 * 0n error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return ((int) putchar(c));
}
