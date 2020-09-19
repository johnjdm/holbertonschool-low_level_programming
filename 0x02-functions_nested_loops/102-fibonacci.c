#include <stdio.h>

int main(void)
{
int i, n, t1 = 0, t2 = 1, nextTerm;

for (i = 1; i <= 50; ++i)
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

return (0);
}
