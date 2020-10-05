#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be searched.
 * @accept: This is the C string containing the characters to match.
 * Return: return pointer.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (s + i);
}
