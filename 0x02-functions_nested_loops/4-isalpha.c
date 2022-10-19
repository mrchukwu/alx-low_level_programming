#include "main.h"

/**
 * _isalpha- check the code for alphabetic character
 * @c: number beign tested
 * Return: 0 success, non-zero digit if error
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
