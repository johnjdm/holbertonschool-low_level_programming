#include "holberton.h"
/**
 * _strcmp - copies a pointed string
 * @s1: string to compare
 * @s2: string to be compared
 * Return: cero if the string are the same, the difference in ascii
 * if different
 */
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1 && *s2 && comp == '\0')
		comp = *(s1++) - *(s2++);

	return (comp);
}
