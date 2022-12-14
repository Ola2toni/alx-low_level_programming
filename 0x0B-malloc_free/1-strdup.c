#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new allocation of memory space
 * with copies of string passed
 * @str: pointer to duplicated string
 * Return: Null if str is null
 * pointer to duplicated string on success
 * NULL if memory was insufficient
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
