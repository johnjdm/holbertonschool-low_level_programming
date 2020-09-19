#include "holberton.h"

/**
* print_last_digit - display last digit
* @n: parameter integer
* Return: last digit
*/

int print_last_digit(int n)
{
int num;
num = n % 10;

if (num < 0)
{
num *= -1;
}

_putchar(num + '0');
return (num);
}
