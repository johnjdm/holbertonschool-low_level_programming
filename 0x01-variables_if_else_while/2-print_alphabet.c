#include <stdio.h>

/**
* main - display the alphabet in lowercase, and then in uppercase
* Return: 0
*/

int main(void)
{
char letra;

for (letra = 'a' ; letra <= 'z' ; letra++) 
{
putchar(letra);
}
putchar(10);
return (0);
}
