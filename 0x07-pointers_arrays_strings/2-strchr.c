#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer parameter
 * @c: pointer parameter, value accept
 * Return: returns first occurence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; ; i++)
	{
		if (s[i] == c)
			return (&s[i]);

		else if (s[i] == '\0')
			return (0);
	}
}
