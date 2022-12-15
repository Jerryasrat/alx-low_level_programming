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

for (c = '0'; c <= '9'; c++);
{
	_putchar(c + '0');
}

	_putchar('\n');
}
