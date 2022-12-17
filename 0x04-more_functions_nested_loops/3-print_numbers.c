#include "main.h"

/**
 * print_numbers - print the numbers 0123456789\n
 *
 * @c: the printed numbers
 *
 * Return: void
 */
void print_numbers(void)
{
	int c;
		
	c = 0;	
	while (c < 10)
	{
	_putchar (c + '0');
	c++
	}
	_putchar ('\n');
}
