#include "holberton.h"

/**
* times_table - prints a times-table 0 to 9
* Description: Prints a multiplication a times_table
* Return: 0 void
*/

void times_table(void)
{
int f1, f2, r;

for (f1 = 0; f1 <= 9; f1++)
{
for (f2 = 0; f2 <= 9; f2++)
{
r = f1 * f2;
if (r <= 9)
{
if (f2 > 0)
_putchar(' ');
_putchar(r + '0');
}
else
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
if (f2 < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
