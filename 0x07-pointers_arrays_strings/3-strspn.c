#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - returns number of bytes in the initial sengment s
 * @s: string to count in
 * @accept: chars to accept
 * Return: number of bytes;
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	i = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; s[i] != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (!*(accept + j))
		{
			return (i);
		}
		i++;
	}

	return (i);
}
