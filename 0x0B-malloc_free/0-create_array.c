#include "main.h"
/**
 * create_array - array for prints a string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return ('\0');
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return ('\0');
	}

	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}
}
