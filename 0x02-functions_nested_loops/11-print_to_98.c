#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - display from n to 98
* @n: parameter integer
* Return: void
*/

void print_to_98(int n)
{
for (; n < 98; n++)
printf("%d, ", n);
for (; n > 98; n--)
printf("%d, ", n);
printf("98\n");
}
