#include "holberton.h"
#include <stddef.h>
/**
 *_strstr - function that finds the first occurance oof substr
 *
 *@haystack: string that is being searched in
 *@needle: substring that is to be found
 *
 * Return: Pointer to the beginning of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;

		while (*haystack && *needle && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
		{
			return (Begin);
		}

		haystack = Begin + 1;
	}

	return (NULL);
}
