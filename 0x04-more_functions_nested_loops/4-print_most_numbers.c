#include "main.h"

/**
 * print_numbers - print num from 0-9 except 2 & 4
 * Return: prints numbers
 */

void print_most_numbers(void)
{
	int c;
	
		for (c = 0; c <= 9; c++)
			{
			if (c != 2 && c != 4)
			putchar(c + '0');
			}
	putchar('\n');
}
