#include "main.h"

/**
 * *_strcat -> is a function strcat
 * @dest: first param
 * @src: second param
 * 
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
			i++;
	}
			j= 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
