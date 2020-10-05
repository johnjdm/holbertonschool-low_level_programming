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
	j = 0;

	while (*(s + i))
	{
		for (; s[i] <= accept[j]; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if(!*(accept + j)){
			return i;
		}
		i++;
	}
	return (i);
}
