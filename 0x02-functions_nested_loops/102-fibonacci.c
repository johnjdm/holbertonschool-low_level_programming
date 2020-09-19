#include <stdio.h>
/**
* main - Prints the first 50 Fibonacci numbers
* Return: 0
*/

int main(void)
{
int i, n = 50, t1 = 1, t2 = 1, nextTerm;

for (i = 1; i <= n; ++i)
{
printf("%d, ", t1);
if (t1 == 2)
{
printf("\n");
}
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
}

printf("\n");
return (0);
}
