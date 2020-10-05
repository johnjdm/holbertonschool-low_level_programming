#include "holberton.h"

/**
 * _strchr - gets the length of a prefix substring.
 * @s: pointer parameter.
 * @c: pointer parameter, value accept.
 * Return: returns first occurence of c in s, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	for (; ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else if (s[i] == '\0')
			return (0);
		i++;
	}
}
