#include "main.h"
/**
 * swap_int - function swaps two integer values
 * @a: this is the first entry
 * @b: this is the second entry
 *
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
