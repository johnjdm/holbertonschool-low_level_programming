#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer parameter.
 * @c: pointer parameter, value accept.
 * Return: returns first occurence of c in s, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i) != c && *(s + i) != '\0')
		i++;
	if (*(s + i) != c)
		return (0);
	else
		return (s + i);
}
