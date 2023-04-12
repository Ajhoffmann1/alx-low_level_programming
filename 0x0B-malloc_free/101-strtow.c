#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **str_tow(char *str);
/**
 * word_len - locates the index making the end of the
 * first word cointained within a string.
 * @str: the string to be searched.
 * Return: the index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int in = 0, len = 0;

	while (*(str + in) && *(str + in) != ' ')
	{
		len++;
		in++;
	}
	return (len);
}
/**
 * count_words - count the number of words containing within a string
 * @str: the strin to be searched.
 * Return: the number of the words contained within str.
 */

int count_words(char *str)
{
	int in = 0, words = 0, len = 0;

	for (in = 0; *(str + in); in++)
		len++;
	for (in = 0; in < len; in++)
	{
		if (*(str + in) != ' ')
		{
			words++;
			in += word_len(str + in);
		}
	}
	return (words);
}

/**
 * strtow - split a strin into words
 * @str: the string to be split.
 * Return: if str = NULL, str = "", or the function fails - NULL.
 * esle - a pointer to an array of stringe words.
 */

char **strtow(char *str)
{
	char **ST;
	int in = 0, words, w, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	ST = malloc(sizeof(char *) * (words + 1));
	if (ST == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[in] == ' ')
			in++;
		letter = word_len(str + in);
		ST[w] = malloc(sizeof(char) * (letter + 1));
		if (ST[w] == NULL)
		{
			for (; w >= 0; w--)
				free(ST[w]);
			free(ST);
			return (NULL);
		}
		for (l = 0; l < letter; l++)
			ST[w][l] = str[in++];
		ST[w][l] = '\0';
	}
	ST[w] = NULL;
	return (ST);
}
