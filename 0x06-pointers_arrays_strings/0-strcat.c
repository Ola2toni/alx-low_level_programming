#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to source string.
 * @src: pointer to the source string.
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dext[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
