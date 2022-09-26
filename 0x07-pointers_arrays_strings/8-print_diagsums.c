#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square.
 * @a: pointer to array.
 * @size: size of array.
 * Return: returns void.
 */
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int d1, d2;

	size1 = 0;
	d1 = 0;
	d2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		d1 = d1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		d2 = d2 + a[i];
	}
	printf("%d, %d\n", d1, d2);
}
