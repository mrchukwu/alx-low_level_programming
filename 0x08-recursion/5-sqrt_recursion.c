#include "main.h"

/**
 * sqtRecursive- computes square root recursively ding binary search
 * @start: initial number
 * @end: last number within the limit of number
 * @m: given number
 * Return: 1 if not found sqroot, else sqrrot
 */

int sqtRecursive(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);
		/* follow binary search */
		if (mid * mid > m)
			return (sqtRecursive(start, mid - 1, m));
		if (mid * mid < m)
			return (sqtRecursive(mid + 1, end, m));
	}
	return (-1);
}
