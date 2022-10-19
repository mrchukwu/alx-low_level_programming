#include <stdio.h>

/**
 * main- prints firsst 50 Fibonacci numbers, starting with 1 and 2 seprated by comma followed by a space
 * Return:0 success, non-zero digit if error
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
