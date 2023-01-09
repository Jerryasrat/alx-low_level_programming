#include "main.h"

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - back a pointer to array
 * @s1: Array one
 * @s2: Array two
 * Return: Always an array dinamic
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j, size;

	if (s1 == Null)
		s1 = " ";

	if (s2 == Null)
		s2 = " ";

	size = (_strlen(s1) + _strlen(s2) + 1);
	dest = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (Null);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dst + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}

	return (dst);
}
