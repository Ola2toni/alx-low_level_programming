#include "main.h"
/**
 * helperFunction - return 0 or 1
 * @num: number
 * @i: factor of the number
 * Return: 0 if number is not a prime
 * 1 if number is a prime
 */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - is the number a prime number or not
 * @n: number
 * Return: 1 if number is prime
 * 0 if number is not prime
 */
int is_prime_number(int n);
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
