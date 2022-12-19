#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string pointer to pass a function
 * Return: return length of string
 *
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len = len + 1;
		*s = *s + 1;
	}
	return (len);
}
