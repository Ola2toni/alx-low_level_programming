#include "main.h"
/**
 * _strpbrk - prints the consecutive characters of s1 in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: 0 (new string)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
