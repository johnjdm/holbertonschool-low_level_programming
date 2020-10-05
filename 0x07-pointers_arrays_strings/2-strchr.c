#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer parameter
 * @c: pointer parameter, value accept
 * Return: returns first occurence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == c)
		{
			s = &s[i];
			break;
		}
	}

	return (s);
}
