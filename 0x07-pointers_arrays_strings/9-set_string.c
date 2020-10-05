#include "holberton.h"

/**
 * set_string - Write a function that sets the value of a pointer to a char.
 * @s: char double pointer
 * @to: char
 * Description: Function that sets the value of a pointer to a char.
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
