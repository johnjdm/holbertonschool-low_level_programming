#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - This function prints a sums of the 2 diagonals of a square
 * @a: this is the array
 * @size: this is the size of the diagonals
 * Return: unsigned int
 **/

void print_diagsums(int *a, int size)
{

	int i, sum_d1, sum_d2;

	sum_d1 = 0;
	sum_d2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_d1 += *(a + (size * i + i));
		sum_d2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", sum_d1);
	printf("%d\n", sum_d2);
}
