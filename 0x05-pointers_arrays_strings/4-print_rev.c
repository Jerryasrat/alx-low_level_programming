#include "main.h"
#include <string.h>
/**
 *print_rev -> print a string in reverse
 *@s: reversed string
 *
 */
void print_rev(char *s)
{
	int n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}