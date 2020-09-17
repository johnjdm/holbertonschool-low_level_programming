#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - display the last digit of the number stored in the variable n.
* Return: 0
*/

/* betty style doc for function main goes there */
int main(void)
{
  int n, lastDigit;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  /* Find last digit */
  lastDigit = n % 10;   
  
  printf("Last digit of %d is %d ", n, lastDigit);

  if (lastDigit > 5)
    { 
      printf("and is greater than 5\n");
    }
  if (lastDigit == 0)
    {
      printf("and is 0\n");   
    }
  else
    {
      printf("and is less than 6 and not 0\n");   
    }

  return (0);
}
