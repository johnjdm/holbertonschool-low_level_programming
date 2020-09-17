#include <stdio.h>

/**
 * main - Print the numbers of 00 to 99.
 * Return: 0
 */

int main(void)
{
int x, y;

for (x = 0; x <= 9; x++)
{
for (y = x + 1; y <= 9; y++)
{
putchar((x % 10) + '0');
putchar((y % 10) + '0');
if (!(x == 8 && y == 9))
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
