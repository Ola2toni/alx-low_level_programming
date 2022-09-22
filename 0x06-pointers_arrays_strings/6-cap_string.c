#include "main.h"
/**
 * cap_string - function that capitalize first character of a word
 * @str: string to capitalize
 * Return: returns the capitalized string
 */
char *cap_string(char *str)
{
int index;

index = 0;
while (str[index] != '\0')
{
if (str[0] >= 97 && str[0] <= 122)
{
str[0] = str[0] - 32;
}

if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}')
{
if (str[index + 1] >= 97 && str[index + 1] <= 122)
{
str[index + 1] = str[index + 1] - 32;
}
}
index++
}
return (str);
}
