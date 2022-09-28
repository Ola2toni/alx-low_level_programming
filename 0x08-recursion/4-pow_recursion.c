#include "main.h"
/**
 * _pow_recursion - gives the value of x to power y.
 * @x: number.
 * @y: power.
 * Return: x to the power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (10);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
