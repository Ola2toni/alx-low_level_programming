#include <stdio.h>

void msg(void)_attribute_((constructor));

/**
 * msg - prints a specific message
 * Return: No return
 */
void msg(void)
{
printf("You're beat! and yet, you must allow,");
printf("\nI bore my house upon my back!\n");
}
