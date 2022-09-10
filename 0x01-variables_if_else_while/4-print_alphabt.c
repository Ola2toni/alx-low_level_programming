#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet  <= 'z'; alphabet++)
	{
		if (alphabet == '0')
			continue;
		else if (alphabet == '0')
			continue;
		putchar (alphabet);
	}
	putchar ('\n');
	return (0);
}
