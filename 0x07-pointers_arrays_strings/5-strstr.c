#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to he searched
 * @needle: prefix substring
 * Return:  a pointer to the beginning of the located substring,
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int count1, count2;

	if (needle[0] == '\0')
		return (haystack);

	for (count1 = 0; haystack[count1] != '\0'; count1++)
	{
		for (count2 = 0; needle[count2] == haystack[count1 + count2]; count2++)
		{
			if (needle[count2 + 1] == '\0')
				return (haystack + count1);
		}
	}
	return (0);
}
