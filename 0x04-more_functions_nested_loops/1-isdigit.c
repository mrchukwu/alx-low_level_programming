#include "main.h"

/**
 * _isdigit- function that check if it's a digit
 * @c:takes in a character/digit
 * Return:0 success, non-zero digit if error
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
