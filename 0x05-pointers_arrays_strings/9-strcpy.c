#include "main.h"
/**
 * _strcpy - function that copies a string pointed by a src.
 * @dest: This is destiny
 * @src: This is the copy
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	*dest = '\0';
	return (start);
}
