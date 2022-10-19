#include "main.h"

/**
 * _islower- checks for a lowercase character
 * @c: letter being tested
 * Return: 0 success, non-zero digit if error
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
