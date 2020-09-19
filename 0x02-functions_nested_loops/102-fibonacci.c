#include <stdio.h>
/**
* main - Prints the first 50 Fibonacci numbers
* Return: 0
*/

int main(void)
{
int i, n = 50, t1 = 1, t2 = 2, nextTerm;

for (i = 1; i <= n; ++i)
{
printf("%d, ", t1);
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
}

printf("\n");
return (0);
}
