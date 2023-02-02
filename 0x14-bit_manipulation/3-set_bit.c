#include "main.h"

/**
 * set_bit - sets the value of a bit
 * @n: a pointer to the bit
 * @index: the index to set the value starts at 0
 *
 * Return: if an error occurs - -1
 * or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
