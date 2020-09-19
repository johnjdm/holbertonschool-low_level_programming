#include "holberton.h"

/**
* print_sign - display + positive, - negative, 0 zero
* @n: parameter character or code ascii
* Return: + - or 0
*/

int print_sign(int n)
{
int  resul;

if (n > 0)
{
_putchar('+');
resul = 1;
}

else if (n == 0)
{
_putchar('0');
resul = 0;
}

if (n < 0)
{
_putchar('-');
resul = 1;
}

return (resul);
}
