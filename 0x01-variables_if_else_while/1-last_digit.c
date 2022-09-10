#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints "programming is positive, zero or negative"
 *
 * Return: Always 0 (success/correct)
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is positive\n", n);
	}

