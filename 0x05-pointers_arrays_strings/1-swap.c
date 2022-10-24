#include <stdio.h>
#include "main.h"

/**
 * swap_int- swaps the value of two integers
 * @a: value to be evaluated
 * @b: value to be evaluated
 * Return: not
 */

voiid swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
