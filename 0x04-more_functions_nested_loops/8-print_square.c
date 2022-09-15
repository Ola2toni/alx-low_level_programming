#include "main.h"

/*8
 * print_square - prints the square of a number
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 0; inc1 < size; inc++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				_putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
