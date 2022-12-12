#include <stdio.h>
/**
 * main - print all single digit nubers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c;

		for (c = '0'; c <= '9'; c++)
			putchar(c);

	putchar('\n');
	return (0);
}
