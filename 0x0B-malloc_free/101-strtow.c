#include "main.h"
/**
 * word_len - word contained with in a string
 * @str: the string to be searched.
 *
 * Return: the index marking the end of the initial word pointed to bey str.
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != " ")
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - counts the number of words contained within a string.
 * @str: the string to be searched.
 *
 * Return: the number of words contained with in str.
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index) index++);
			len++;
	for (index = 0; index < len; index++);
	{
		if (*(str + index) != " ")
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
	}
