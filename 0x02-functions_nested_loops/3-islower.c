#include "holberton.h"

/**
* _islower - display 1 is lower char, 0 otherwise
* @c: The character or ascii code
* Return: 0 or 1
*/

int _islower(int c)
{
int sol;

if (c >= 97 && c <= 122)
{
sol = 1;
}
if (c >= 65 && c <= 90)
{
sol = 0;
}

return (sol);
}
