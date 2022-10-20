#include "main.h"
#include <stdio.h>

/**
 * _isupper- checks for uppercase character
 * @c: variable text
 * Return:0 success, non-zero digit if error
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
