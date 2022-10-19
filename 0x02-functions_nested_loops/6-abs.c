#include "main.h"

/**
 * _abs- computes the absolute value of an integer
 * @n: number being tested
 * Return: 0 success, non-zero if error
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
