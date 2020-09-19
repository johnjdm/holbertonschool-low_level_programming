#include "holberton.h"

/**
* print_alphabet_x10 - display alphabet x10
* Return: void
*/

void print_alphabet_x10(void)
{
char alp;
int i;

for(i = 0; i <= 9; i++)
{
alp = 'a';
while (alp <= 'z')
{
_putchar(alp);
alp++;
}
_putchar('\n');
}
}
