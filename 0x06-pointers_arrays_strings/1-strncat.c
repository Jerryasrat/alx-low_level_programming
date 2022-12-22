#include "main.h"

/**
 * _strncat - input number of bytes from src
 * @dest: The string to be appended upon
 * @src: The string to be uppended to dest
 * @n: The number of bytes from src to be appended to dest
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(*dest, *src, n);
	return (dest);
}
