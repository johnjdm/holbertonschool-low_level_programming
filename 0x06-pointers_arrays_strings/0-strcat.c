#include "holberton.h"
/**
 * _strcat - concat strings
 * @dest: ouputstr
 * @src: inputstr
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
		;
	for (; src[j] != '\0'; j++)
		dest[j + i] = src[j];

	return (dest);
}
