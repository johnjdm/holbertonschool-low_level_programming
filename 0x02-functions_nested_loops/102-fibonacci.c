#include <stdio.h>
/**
* main - Prints the first 50 Fibonacci numbers
* Return: 0
*/

int main(void)
{
long nextTerm, t1, t2;
int i;
int n;

t1 = 1;
t2 = 2;
n = 50;

for (i = 1; i < n; ++i)
{
printf("%lu, ", t1);
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
}
if (i <= n)
{
printf("%lu", t1);
}

printf("\n");
return (0);
}
