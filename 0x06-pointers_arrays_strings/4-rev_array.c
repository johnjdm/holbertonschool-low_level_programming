#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer parameter
 * @n: enteger parameter
 * @n: amount of integers to be copied
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, f = n - 1;
	int rev;

	while (i < f)
	{
		rev = a[i];
		a[i] = a[f];
		a[f] = rev;
		i++;
		f--;
	}
}
