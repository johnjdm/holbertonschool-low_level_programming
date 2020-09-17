#include <stdio.h>

/**
* main - display the alphabet in lowercase, and then in uppercase
* Return: 0
*/

int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++) 
{
putchar(ch);
}
putchar(10);
return (0);
}
