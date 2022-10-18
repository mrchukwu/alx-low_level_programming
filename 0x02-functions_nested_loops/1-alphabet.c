#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: 0 success, non-zero digit error
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
