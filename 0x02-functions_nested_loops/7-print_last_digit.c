#include "main.h"

/**
 * print_last_digit- prints the last digit of a number
 * @n: number beign tested
 * Return: 0 success, non-zero digit if error
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
		_putchar(n + '0');
		return (n);
}
