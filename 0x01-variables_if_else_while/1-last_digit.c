#include <stdlib.h>
#include <time.h>

/**
* main - display the last digit of the number stored in the variable n.
* Return: 0
*/

int main(void)
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

lastDigit = n % 10;   
  
if (lastDigit > 5)
{ 
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is and is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}
