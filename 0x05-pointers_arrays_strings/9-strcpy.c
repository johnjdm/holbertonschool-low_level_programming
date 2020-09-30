#include "holberton.h"
/**
* _strcpy - Write a function that copies the string pointed to by src
* @dest: pointer char void
* @src: pointer char source
* Return: dest data
*/
char *_strcpy(char *dest, char *src)
{
	int i, size_t;

	size_t = 0;

	while (src[size_t] != '\0')
	{
		size_t++;
	}

	for (i = 0; i < size_t; i++)
		dest[i] = src[i];
	dest[size_t] = '\0';

	return (dest);
}
