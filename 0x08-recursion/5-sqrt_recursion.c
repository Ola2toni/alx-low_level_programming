#include "main.h"
/**
 * helperFunction - checks the Sqrt of a number
 * @num: number
 * @pSqrt: sqrt of number
 * Return: Sqrt of the number (to -1)
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}
/**
 * _sqrt_recursion - gives the natural square root of a number.
 * @n: squareroot of the number.
 * Return: squareroot of n.
 * -1 if n does not have a natural sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
