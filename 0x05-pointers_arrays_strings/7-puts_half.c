#include "holberton.h"
/**
 *puts_half - Write a function that prints half of a string
 *@str: pointer char
 *Return: void
 */
void puts_half(char *str)
{
	int i = 0, j = 0, n;

	while (str[i] != '\0')
	{
		i++;
	}

	n = (i - 1) / 2;

	for (j = n + 1; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
