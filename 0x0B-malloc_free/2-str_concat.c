#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat: concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure, pointer to the concatenated strings o/w
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0; 
	int j = 0;
	int len1, len2;
	char *p;
	
	if (s1 == NULL)
		s1 = "";
	if(s1 == NULL)
		s2 = "";

	for ( ; s1[i]; i++)
	{
		;
	}

	for ( ; s2[j]; j++)
	{
		;
	}

	p = malloc(sizeof(char) * (i + j + 1));

	if (p == NULL)
		return (NULL);

	for (len1 = 0; len1 < i; len1++)
	{
		p[len1] = s1[len1]; 
	}
	
	for(len2 = 0; len2 < j; len2++)
	{
		p[len1 + len2] = s2[len2];
	}
	
	p[i + j] = '\0';

	return (p);
}
