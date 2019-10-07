#include "holberton.h"
/**
 *_strpbrk - searches for a string for any set of bytes
 *
 * @s: string which is going to be searched in another string
 * @accept: main string
 *
 * Return: Returns a ponter to byte s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
		pos = i;
		for (i = 0; accept[i] != '\0'; i++)
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				if (accept[i] == s[j])
				{
					if (j <= pos)
					{
						pos = j;
						flag = 1;
					}
				}
			}
		}
	if (flag == 1)
	{
		return (&s[pos]);
	}

	else
		return (0);
}
