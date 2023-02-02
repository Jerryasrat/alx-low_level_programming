#include "main.h"

/**
 * clear_bit - sets the value of bit
 * @n: a pointer to the bit
 * @index: the index to set the value to start at 0
 *
 * Return: if an error occurs -1
 * or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
