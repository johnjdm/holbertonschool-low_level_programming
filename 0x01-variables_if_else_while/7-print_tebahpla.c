#include <stdio.h>

/**
 * main - Display all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
char l;

for (l = 'z' ; l >= 'a' ; l--)
{
putchar(l);
}
putchar(10);
return (0);
}
