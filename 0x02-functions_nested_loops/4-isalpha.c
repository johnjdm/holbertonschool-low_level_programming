#include "holberton.h"

/**
* _isalpha - display 1 to lower/upper case, 0 otherwise
* @c: parameter character or ascii code
* Return: 0 or 1
*/

int _isalpha(int c)
{
int sol;

if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
sol = 1;
}
else
{
sol = 0;
}

return (sol);
}
