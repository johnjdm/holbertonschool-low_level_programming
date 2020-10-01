#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer parameter destination
 * @src: pointer parameter source
 * @n: parameter integer number
 * Return: destination variable
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j])
		dest[i++] = src[j++];
	return (dest);
}
